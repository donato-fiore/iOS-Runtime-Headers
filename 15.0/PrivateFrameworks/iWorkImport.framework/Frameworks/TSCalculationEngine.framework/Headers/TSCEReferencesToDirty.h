// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEREFERENCESTODIRTY_H
#define TSCEREFERENCESTODIRTY_H

@class TSPObject;


#import "TSCECellDirtier.h"
#import "TSCECalculationEngine.h"

@interface TSCEReferencesToDirty : TSPObject {
    os_unfair_lock_s _dirtyingMutex;
    TSCECellDirtier *_cellRefDirtier;
    TSUIndexSet _toDirtyOwnerIds;
    TSCEInternalCellRefSet _toDirtyInternalCellRefs;
    TSCECellRefSet _toDirtyCellRefs;
    TSCECellRefSet _toDirtyDependentsOnlyCellRefs;
    vector<TSCEInternalRangeReference, std::allocator<TSCEInternalRangeReference>> _toDirtyRangeRefs;
    TSCEInternalCellRefSet _calcCellsInProgress;
}


@property (readonly, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, nonatomic) BOOL debugOnly_DidCleanGraphForConsistencyViolation; // ivar: _debugOnly_DidCleanGraphForConsistencyViolation
@property (readonly, nonatomic) BOOL debugOnly_DidDetectAndRepairConsistencyViolations; // ivar: _debugOnly_DidDetectAndRepairConsistencyViolations
@property (readonly, nonatomic) BOOL isEmptyForArchiving;
@property (readonly, nonatomic) BOOL isEmptyForDirtying;
@property (nonatomic) BOOL shouldCleanGraphForConsistencyViolation; // ivar: _shouldCleanGraphForConsistencyViolation
@property (nonatomic) BOOL shouldPerformDetectAndRepairConsistencyViolations; // ivar: _shouldPerformDetectAndRepairConsistencyViolations


-(BOOL)flushDirtyReferencesForSeconds:(CGFloat)arg0 ;
-(BOOL)hasDirtyingToPerformForOwnerId:(unsigned short)arg0 ;
-(BOOL)isInProgressCalcIntCellRef:(struct TSCEInternalCellReference *)arg0 ;
-(NSUInteger)numberOfInProgressCalcCellRef;
-(id)initWithCalcEngine:(id)arg0 ;
-(void)_flushCellRefSetWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)_flushDependentOnlyCellRefSetWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)_flushDirtyOwnerIdsWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)_flushInternalCellRefSetWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)_flushRangeRefsWithDepTracker:(*void)arg0 startTime:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)addInProgressCalcCellRefs:(*void)arg0 ;
-(void)clearInProgressCalcCellRefs;
-(void)commonInit;
-(void)dirtyAllCellsInOwner:(struct TSKUIDStruct *)arg0 ;
-(void)dirtyAllCellsInOwnerId:(unsigned short)arg0 ;
-(void)dirtyCellRef:(struct TSCECellRef *)arg0 ;
-(void)dirtyCellRefs:(*void)arg0 ;
-(void)dirtyCellRefsInReferenceSet:(id)arg0 ;
-(void)dirtyCoords:(*void)arg0 inOwnerId:(unsigned short)arg1 ;
-(void)dirtyInternalCellRef:(struct TSCEInternalCellReference *)arg0 ;
-(void)dirtyInternalCellRefs:(*void)arg0 ;
-(void)dirtyInternalRangeRef:(struct TSCEInternalRangeReference *)arg0 ;
-(void)dirtyOnlyDependentsOfCellRef:(struct TSCECellRef *)arg0 ;
-(void)dirtyRangeRef:(struct TSCERangeRef *)arg0 ;
-(void)flushAllDirtyReferences;
-(void)flushCellDirtier;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setCalculationEngine:(id)arg0 ;
-(void)willClose;


@end


#endif