// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEFORMULASTOSET_H
#define TSCEFORMULASTOSET_H

@protocol TSCEFormulaReplacing, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"

@interface TSCEFormulasToSet : NSObject {
    os_unfair_lock_s _removeReplaceMutex;
    id<TSCEFormulaReplacing> *_minion;
    unsigned char _options;
    TSCECellRefSet _formulasToRemove;
    TSCECellRefSet _formulasToReset;
    unordered_map<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>> _formulasToReplace;
    NSObject<OS_dispatch_queue> *_precedentLoadingQueue;
    NSObject<OS_dispatch_group> *_precedentLoadingGroup;
    BOOL _flushAllInProgress;
    BOOL _runningInBackground;
    NSObject<OS_dispatch_queue> *_backgroundProcessingQueue;
}


@property (readonly, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, nonatomic) BOOL isEmpty;


-(BOOL)flushFormulaChangesForSeconds:(CGFloat)arg0 ;
-(id)initWithCalcEngine:(id)arg0 forMinion:(id)arg1 options:(unsigned char)arg2 ;
-(void)_flushFormulasToRemoveWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)_flushFormulasToReplaceWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)_flushFormulasToResetWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)commonInit;
-(void)dealloc;
-(void)flushAllFormulaChanges;
-(void)flushRemoveFormulas;
-(void)flushReplaceFormulas;
-(void)flushResetFormulas;
-(void)processInBackgroundIfNecessary;
-(void)removeAllFormulasFromOwner:(struct TSKUIDStruct *)arg0 ;
-(void)removeFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(void)removeFormulasAt:(*void)arg0 ;
-(void)removeFormulasAt:(*void)arg0 inOwner:(struct TSKUIDStruct *)arg1 removeOutstandingReplaces:(BOOL)arg2 ;
-(void)removeFormulasFromRange:(struct TSCERangeRef *)arg0 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord *)arg1 inOwner:(struct TSKUIDStruct *)arg2 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord *)arg1 inOwner:(struct TSKUIDStruct *)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions )arg3 ;
-(void)replaceFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 precedents:(id)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions *)arg3 ;
-(void)resetFormulaAt:(struct TSCECellRef *)arg0 ;
-(void)waitForAllPrecedentsToLoad;
-(void)willClose;


@end


#endif