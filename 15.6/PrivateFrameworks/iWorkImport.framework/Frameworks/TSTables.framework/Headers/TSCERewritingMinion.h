// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEREWRITINGMINION_H
#define TSCEREWRITINGMINION_H

@class NSString;
@protocol TSCEFormulaReplacing;

#import <Foundation/Foundation.h>

#import "TSCEFormulasToSet.h"
#import "TSCECalculationEngine.h"

@interface TSCERewritingMinion : NSObject <TSCEFormulaReplacing>

 {
    TSCEFormulasToSet *_formulasToSet;
    TSCECellRefSet _rewrittenCells;
    TSCECellRefSet _pendingCellsToRemove;
}


@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasRewrittenCellAt:(struct TSCECellRef *)arg0 ;
-(id)initWithCalcEngine:(id)arg0 ;
-(void)addPendingCellRemovalAt:(struct TSCECellRef *)arg0 ;
-(void)addRewrittenCellAt:(struct TSCECellRef *)arg0 ;
-(void)flushAllChanges;
-(void)markCellRefAsDirty:(struct TSCECellRef *)arg0 ;
-(void)markRangeRefAsDirty:(struct TSCERangeRef *)arg0 ;
-(void)removeAllFormulasFromOwner:(struct TSKUIDStruct *)arg0 ;
-(void)removeFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(void)removeFormulasAt:(*void)arg0 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord *)arg1 inOwner:(struct TSKUIDStruct *)arg2 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord *)arg1 inOwner:(struct TSKUIDStruct *)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions )arg3 ;
-(void)replaceFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 precedents:(id)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions *)arg3 ;
-(void)resetFormulaAt:(struct TSCECellRef *)arg0 ;


@end


#endif