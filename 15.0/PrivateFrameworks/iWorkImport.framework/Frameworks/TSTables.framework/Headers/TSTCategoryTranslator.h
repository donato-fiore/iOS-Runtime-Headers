// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCATEGORYTRANSLATOR_H
#define TSTCATEGORYTRANSLATOR_H

@class NSIndexSet, NSMapTable;
@protocol TSTGroupByChangeProtocol;


#import "TSTTableTranslator.h"

@interface TSTCategoryTranslator : TSTTableTranslator <TSTGroupByChangeProtocol>

 {
    NSUInteger _groupingsChangingLevel;
    BOOL _sawGroupingChangeNeedingReset;
}


@property (nonatomic) BOOL cachedIndexSetsAreValid; // ivar: _cachedIndexSetsAreValid
@property (retain, nonatomic) NSIndexSet *cachedIndexesForLabelRows; // ivar: _cachedIndexesForLabelRows
@property (retain, nonatomic) NSIndexSet *cachedIndexesForLeadingRows; // ivar: _cachedIndexesForLeadingRows
@property (retain, nonatomic) NSIndexSet *cachedIndexesForLeadingSummaryRows; // ivar: _cachedIndexesForLeadingSummaryRows
@property (retain, nonatomic) NSIndexSet *cachedIndexesForSummaryAndLabelRows; // ivar: _cachedIndexesForSummaryAndLabelRows
@property (retain, nonatomic) NSIndexSet *cachedIndexesForSummaryRows; // ivar: _cachedIndexesForSummaryRows
@property (nonatomic) os_unfair_lock_s cachedIndexesUnfairLock; // ivar: _cachedIndexesUnfairLock
@property (retain, nonatomic) NSMapTable *cachedLabelRowIndexesAtLevels; // ivar: _cachedLabelRowIndexesAtLevels
@property (retain, nonatomic) NSMapTable *cachedLeadingRowIndexesAtLevels; // ivar: _cachedLeadingRowIndexesAtLevels
@property (retain, nonatomic) NSMapTable *cachedLeadingSummaryRowIndexesAtLevels; // ivar: _cachedLeadingSummaryRowIndexesAtLevels
@property (retain, nonatomic) NSMapTable *cachedSummaryRowIndexesAtLevels; // ivar: _cachedSummaryRowIndexesAtLevels
@property (nonatomic) BOOL suspendNotify; // ivar: _suspendNotify


+(NSUInteger)tableStyleAreaForCategoryLevel:(unsigned char)arg0 isLabel:(BOOL)arg1 ;
-(?)mergeRangesIntersectingCellRegion;
-(BOOL)areMapsStale;
-(BOOL)cellExistsAtCellID:(struct TSUViewCellCoord )arg0 ;
-(BOOL)checkMapsAndAssert:(BOOL)arg0 ;
-(BOOL)hasCommentAtCellID:(struct TSUViewCellCoord )arg0 ;
-(BOOL)hasFormulaAtCellID:(struct TSUViewCellCoord )arg0 ;
-(BOOL)hasFormulaAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(BOOL)hasMergeRangeSpanningRowsForCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)hasMergeRangesIntersectingCellRegion:(id)arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)isCategorized;
-(BOOL)isGroupedForRows;
-(BOOL)isValidMergeRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)mergeCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectCellRegion:(id)arg0 ;
-(BOOL)unmergeCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)withinGroupingChangesBatch;
-(CGFloat)heightOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(CGFloat)widthOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(Class)iteratorClass;
-(NSUInteger)numberOfPopulatedCells;
-(NSUInteger)numberOfRowLevels;
-(NSUInteger)tableAreaForCellID:(struct TSUViewCellCoord )arg0 ;
-(NSUInteger)tableStyleAreaForCellID:(struct TSUViewCellCoord )arg0 ;
-(NSUInteger)tableStyleAreaForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(NSUInteger)tableStyleAreaForRow:(struct TSUViewRowIndex )arg0 ;
-(id)aggregateFormulaOwner;
-(id)allRichTextStorages;
-(id)allRowGroupUIDs;
-(id)baseCellRegionForViewCellRect:(struct TSUViewCellRect )arg0 ;
-(id)baseCellRegionForViewCellRegion:(id)arg0 ;
-(id)baseColumnIndexesForViewColumnIndexes:(id)arg0 ;
-(id)baseRowIndexesForViewRowIndexes:(id)arg0 ;
-(id)baseShuffleMapForViewShuffleMap:(id)arg0 ;
-(id)cellRegionForTableStyleArea:(NSUInteger)arg0 ;
-(id)cellStyleAtCellID:(struct TSUViewCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleAtCellUID:(struct TSKUIDStructCoord *)arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)chromeColumnIndexesForViewColumnIndexes:(id)arg0 ;
-(id)chromeRowIndexesForViewRowIndexes:(id)arg0 ;
-(id)columnWidths;
-(id)commentHostingAtCellID:(struct TSUViewCellCoord )arg0 ;
-(id)commentHostingAtCellID:(struct TSUViewCellCoord )arg0 forCommentStorage:(id)arg1 ;
-(id)conditionalStyleSetAtCellID:(struct TSUViewCellCoord )arg0 ;
-(id)coordinateMapper;
-(id)defaultCellStyleForCellID:(struct TSUViewCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultTextStyleForCellID:(struct TSUViewCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)expandCellRegionToCoverMergedCells:(id)arg0 ;
-(id)formulaAtCellID:(struct TSUViewCellCoord )arg0 ;
-(id)groupSortOrder;
-(id)i_indexesForLabelRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)i_indexesForLeadingRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)i_indexesForLeadingSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)i_indexesForSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLabelRows;
-(id)indexesForLabelRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingRows;
-(id)indexesForLeadingRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingSummaryRows;
-(id)indexesForLeadingSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForRowsContainedByGroupUIDs:(id)arg0 ;
-(id)indexesForSummaryAndLabelRows;
-(id)indexesForSummaryRows;
-(id)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)mergeActionForRegion:(id)arg0 ;
-(id)mergeActionForRegion:(id)arg0 nonOriginPartialsOnly:(BOOL)arg1 ;
-(id)mergedGridIndicesForDimension:(NSInteger)arg0 ;
-(id)metadataForColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(id)metadataForRowIndex:(struct TSUViewRowIndex )arg0 ;
-(id)p_defaultCellStyleOfSummaryOrLabelRowAtLevel:(unsigned char)arg0 isLabel:(BOOL)arg1 ;
-(id)p_defaultTextStyleOfSummaryOrLabelRowAtLevel:(unsigned char)arg0 isLabel:(BOOL)arg1 ;
-(id)populatedCategoryGroupLevelsInColumn:(struct TSUViewColumnIndex )arg0 ;
-(id)regionForValueOrCommentCellsInRange:(struct TSUViewCellRect )arg0 ;
-(id)removeReturningInverseForRegion:(id)arg0 ;
-(id)rowHeights;
-(id)shrinkReturningInverseForRegion:(id)arg0 ;
-(id)stringAtCellID:(struct TSUViewCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)summaryCellVendor;
-(id)summaryModel;
-(id)textStyleAtCellID:(struct TSUViewCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleAtCellUID:(struct TSKUIDStructCoord *)arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)translatedCellRangeName:(*void)arg0 usedSymbolicName:(*BOOL)arg1 ;
-(id)viewCellRegionForBaseCellRect:(struct TSUModelCellRect )arg0 ;
-(id)viewCellRegionForBaseCellRegion:(id)arg0 ;
-(id)viewColumnGridIndexesForBaseColumnGridIndexes:(id)arg0 ;
-(id)viewColumnIndexesForBaseColumnIndexes:(id)arg0 ;
-(id)viewColumnIndexesForChromeColumnIndexes:(id)arg0 ;
-(id)viewRowIndexesForBaseRowIndexes:(id)arg0 ;
-(id)viewRowIndexesForChromeRowIndexes:(id)arg0 ;
-(int)getCell:(id)arg0 atCellID:(struct TSUViewCellCoord )arg1 suppressCellBorder:(BOOL)arg2 ;
-(int)getDefaultCell:(id)arg0 forCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)getValue:(struct TSCEValue *)arg0 atCellID:(struct TSUViewCellCoord )arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
-(int)insertColumnsAtIndex:(struct TSUViewColumnIndex )arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 ;
-(int)insertRowsAtIndex:(struct TSUViewRowIndex )arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 unsetFilterHidingAction:(BOOL)arg4 ;
// -(int)p_applyViewCellCoord:(struct TSUViewCellCoord )arg0 toSummaryUsingBlock:(id)arg1 toLabelUsingBlock:(unk)arg2 toCategoryColumnUsingBlock:(id)arg3 toBaseUsingBlock:(unk)arg4  ;
-(int)setCellStyle:(id)arg0 ofColumnAtIndex:(struct TSUViewColumnIndex )arg1 ;
-(int)setCellStyle:(id)arg0 ofRowAtIndex:(struct TSUViewRowIndex )arg1 ;
-(int)setTextStyle:(id)arg0 ofColumnAtIndex:(struct TSUViewColumnIndex )arg1 ;
-(int)setTextStyle:(id)arg0 ofRowAtIndex:(struct TSUViewRowIndex )arg1 ;
-(struct RefTypeHolder<TSCECellRef, 0> )baseCellRefForViewCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 1> )viewCellRefForBaseCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 1> )viewCellRefForChromeCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 2> )chromeCellRefForBaseCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 2> )chromeCellRefForViewCellRef:(*void)arg0 ;
-(struct TSKUIDStruct )columnUIDForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSKUIDStructCoord )cellUIDForSummaryCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUCellCoord )baseCoordFromViewCoord:(struct TSUCellCoord )arg0 ;
-(struct TSUChromeCellCoord )chromeCellCoordForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUChromeCellCoord )chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUChromeColumnIndex )chromeColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSUChromeColumnIndex )chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUChromeRowIndex )chromeRowIndexForBaseRowIndex:(struct TSUModelRowIndex )arg0 ;
-(struct TSUChromeRowIndex )chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForChromeCellCoord:(struct TSUChromeCellCoord )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUModelCellCoord )summaryCellCoordForCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(struct TSUModelCellCoord )summaryCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex )arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUModelColumnIndex )summaryColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUModelRowIndex )baseRowIndexForChromeRowIndex:(struct TSUChromeRowIndex )arg0 ;
-(struct TSUModelRowIndex )baseRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUModelRowIndex )summaryRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUViewCellCoord )cellIDForCellContainingRichTextStorage:(id)arg0 ;
-(struct TSUViewCellCoord )mergeOriginForCellID:(struct TSUViewCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForSummaryCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUViewCellRect )bodyBoundingRangeForBaseLevel;
-(struct TSUViewCellRect )bodyRangeForLowestLevelGroupEnclosingCellAtCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUViewCellRect )expandCellRangeToCoverMergedCells:(struct TSUViewCellRect )arg0 ;
-(struct TSUViewCellRect )mergeRangeAtCellID:(struct TSUViewCellCoord )arg0 ;
-(struct TSUViewColumnIndex )numberOfCategoryColumns;
-(struct TSUViewColumnIndex )numberOfHeaderColumns;
-(struct TSUViewColumnIndex )viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSUViewColumnIndex )viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex )arg0 ;
-(struct vector<TSUViewCellRect, std::allocator<TSUViewCellRect>> )mergeRangesAndCrumbsIntersectingRange:(struct TSUViewCellRect )arg0 ;
-(struct vector<TSUViewCellRect, std::allocator<TSUViewCellRect>> )mergeRangesIntersectingRange:(struct TSUViewCellRect )arg0 ;
-(unsigned char)cellValueTypeAtCellID:(struct TSUViewCellCoord )arg0 ;
-(unsigned char)groupLevelAtLabelRow:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)groupLevelAtSummaryRow:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)maxRowLevel;
-(unsigned char)maxVisibleRowLevel;
-(unsigned char)minRowLevel;
-(unsigned int)maxNumberOfHeaderColumns;
-(unsigned int)minNumberOfHeaderColumns;
-(unsigned int)rowAggregateGroupSize;
-(void)addReceiverToGroupBy:(id)arg0 ;
-(void)didAddRowUID:(struct TSKUIDStruct )arg0 toGroup:(id)arg1 ;
-(void)didChangeGroupByStructure;
-(void)didCreateGroup:(id)arg0 ;
-(void)didMakeGroupingChangesInRowUIDs:(id)arg0 ;
-(void)didRemoveGroup:(id)arg0 ;
-(void)didRemoveRowUID:(struct TSKUIDStruct )arg0 fromGroup:(id)arg1 ;
-(void)endOfGroupingChangesBatch;
-(void)enumerateMergesIntersectingCellRegion:(id)arg0 usingBlock:(id)arg1 ;
-(void)flushCachedIndexSets;
-(void)forceGroupingChangeReset;
-(void)i_populateCachedIndexSetsIfNeeded;
-(void)i_populateIndexesForLabelRows;
-(void)i_populateIndexesForLeadingRows;
-(void)i_populateIndexesForLeadingSummaryRows;
-(void)i_populateIndexesForSummaryAndLabelRows;
-(void)i_populateIndexesForSummaryRows;
-(void)moveColumnRange:(struct _NSRange )arg0 toColumnIndex:(struct TSUViewColumnIndex )arg1 ;
// -(void)p_applyViewColumnIndex:(struct TSUViewColumnIndex )arg0 toCategoryColumnUsingBlock:(id)arg1 toBaseUsingBlock:(unk)arg2 toBeyondBoundsUsingBlock:(id)arg3  ;
// -(void)p_applyViewRowIndex:(struct TSUViewRowIndex )arg0 toSummaryUsingBlock:(id)arg1 toLabelUsingBlock:(unk)arg2 toBaseUsingBlock:(id)arg3 toBeyondBoundsUsingBlock:(unk)arg4  ;
-(void)postCommentNotificationForStorage:(id)arg0 atViewCellCoord:(struct TSUViewCellCoord )arg1 notificationKey:(id)arg2 ;
-(void)removeAnnotationsFromColumnsAtIndexes:(id)arg0 ;
-(void)removeAnnotationsFromRowsAtIndexes:(id)arg0 ;
-(void)removeColumnsAtIndex:(struct TSUViewColumnIndex )arg0 count:(struct TSUViewColumnIndex )arg1 ;
-(void)removeColumnsAtIndexes:(id)arg0 ;
-(void)removeRowsAtIndex:(struct TSUViewRowIndex )arg0 count:(struct TSUViewRowIndex )arg1 ;
-(void)removeRowsAtIndexes:(id)arg0 ;
-(void)resetViewMap;
-(void)resetViewMapAndNotify;
-(void)setGroupSortOrder:(id)arg0 ;
-(void)setHeight:(CGFloat)arg0 ofRowAtIndex:(struct TSUViewRowIndex )arg1 ;
-(void)setNumberOfHeaderColumns:(struct TSUViewColumnIndex )arg0 ;
-(void)setWidth:(CGFloat)arg0 ofColumnAtIndex:(struct TSUViewColumnIndex )arg1 ;
-(void)startOfGroupingChangesBatch;
-(void)suspendChangeDescriptorNotificationsDuringBlock:(id)arg0 ;
-(void)willRemoveGroup:(id)arg0 ;


@end


#endif