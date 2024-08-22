// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTMERGEOWNER_H
#define TSTMERGEOWNER_H

@class NSString;
@protocol TSCEFormulaOwning;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"
#import "TSTFormulaStore.h"
#import "TSTMergeChangeDistributor.h"
#import "TSTCellRangeCache.h"
#import "TSTTableModel.h"

@interface TSTMergeOwner : NSObject <TSCEFormulaOwning>



@property (weak, nonatomic) TSCECalculationEngine *calculationEngine; // ivar: _calculationEngine
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSTFormulaStore *formulaStore; // ivar: _formulaStore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL mergeCacheLoaded; // ivar: _mergeCacheLoaded
@property (retain, nonatomic) TSTMergeChangeDistributor *mergeChangeDistributor; // ivar: _mergeChangeDistributor
@property (readonly, nonatomic) *void mergeOriginsMap; // ivar: _mergeOriginsMap
@property (retain, nonatomic) TSTCellRangeCache *mergeRangeCache; // ivar: _mergeRangeCache
@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID
@property (readonly, nonatomic) *void reverseOriginsMap; // ivar: _reverseOriginsMap
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel


+(?)mergeListFromModelMergeList;
-(?)allValidMergesForMergeList;
-(?)mergeRangesAndCrumbsIntersectingBaseCellRect;
-(?)mergeRangesIntersectingBaseCellRect;
-(?)mergeRangesIntersectingBaseCellRegion;
-(BOOL)find:(struct TSUModelCellRect )arg0 ;
-(BOOL)hasMergeRangeSpanningRowsForBaseCellRect:(struct TSUModelCellRect )arg0 ;
-(BOOL)hasMergeRanges;
-(BOOL)hasMergeRangesIntersectingBaseCellRect:(struct TSUModelCellRect *)arg0 ;
-(BOOL)hasMergeRangesIntersectingBaseCellRegion:(id)arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRange:(struct TSUModelCellRect )arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRegion:(id)arg0 ;
-(BOOL)insertBaseMergeRange:(struct TSUModelCellRect )arg0 ;
-(BOOL)insertBaseMergeRangeRemovingOverlaps:(struct TSUModelCellRect )arg0 ;
-(BOOL)isValidMergeRange:(struct TSUModelCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectBaseCellRect:(struct TSUModelCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectBaseCellRegion:(id)arg0 ;
-(NSInteger)evaluationMode;
-(NSUInteger)markForRollback;
-(id)allMergesAsString;
-(id)expandBaseCellRegionToCoverMergedCells:(id)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 forTableModel:(id)arg2 ;
-(id)initWithTableModel:(id)arg0 ;
-(id)initWithTableModel:(id)arg0 ownerUID:(struct TSKUIDStruct *)arg1 ;
-(id)linkedResolver;
-(id)mergeActionForBaseCellRegion:(id)arg0 ;
-(id)mergeActionForBaseCellRegion:(id)arg0 nonOriginPartialsOnly:(BOOL)arg1 ;
-(id)mergeIndexesForBaseCellRegion:(id)arg0 ;
-(id)mergeIndexesForRange:(struct TSUModelCellRect )arg0 ;
-(id)mergedGridIndicesForDimension:(NSInteger)arg0 ;
-(id)p_growReturningInverseForAction:(id)arg0 ;
-(id)p_shrinkMergesAtIndexes:(id)arg0 intersectedByBaseRegion:(id)arg1 ;
-(id)p_shrinkReturningInverseForAction:(id)arg0 ;
-(id)performActionReturningInverse:(id)arg0 ;
-(id)removeReturningInverseForBaseCellRegion:(id)arg0 ;
-(id)shrinkReturningInverseForBaseCellRegion:(id)arg0 ;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCERecalculationState )multiEvaluateFormulasAt:(*void)arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSUModelCellCoord )mergeOriginForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUModelCellRect )expandBaseCellRectToCoverMergedCells:(struct TSUModelCellRect )arg0 ;
-(struct TSUModelCellRect )mergedRangeForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUModelCellRect )p_growRangeFrom:(struct TSUModelCellRect )arg0 toDesired:(struct TSUModelCellRect )arg1 ;
-(struct TSUModelCellRect )rewroteFormula:(id)arg0 atCoordinate:(struct TSUModelCellCoord )arg1 withRewriteSpec:(id)arg2 isUndo:(BOOL)arg3 ;
-(struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> )mergeRanges;
-(unsigned short)ownerKind;
-(void)assertCollaborationConvergence;
-(void)clearAllMergeRanges;
-(void)commitRewritingTransaction;
-(void)enumerateMergeFormulasUsingBlock:(id)arg0 ;
-(void)enumerateMergesIntersectingBaseCellRegion:(id)arg0 usingBlock:(id)arg1 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)loadMergeCache;
-(void)openRewritingTransaction;
-(void)p_dirtyCellsForMerge:(struct TSUModelCellRect *)arg0 ;
-(void)p_enumerateMergesUsingBlock:(id)arg0 ;
-(void)p_moveCellFromCellCoord:(struct TSUModelCellCoord )arg0 toCellCoord:(struct TSUModelCellCoord )arg1 ;
-(void)p_updateOriginMapWithSourceCellCoord:(struct TSUModelCellCoord )arg0 destCellCoord:(struct TSUModelCellCoord )arg1 ;
-(void)reloadMergeCacheForIndexes:(id)arg0 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 ;
-(void)removeBaseMergeRange:(struct TSUModelCellRect )arg0 ;
-(void)resetMergeCache;
-(void)resetMergeOriginMap;
-(void)rewriteMergesForInsertedRange:(struct _NSRange )arg0 uids:(*void)arg1 isRows:(BOOL)arg2 ;
-(void)rewriteMergesForRemovedRange:(struct _NSRange )arg0 uids:(*void)arg1 isRows:(BOOL)arg2 ;
-(void)rollbackToMark:(NSUInteger)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)unregisterFromCalcEngine;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif