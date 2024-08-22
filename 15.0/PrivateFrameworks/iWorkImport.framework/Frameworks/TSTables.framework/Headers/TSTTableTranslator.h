// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLETRANSLATOR_H
#define TSTTABLETRANSLATOR_H

@class TSCECoordMapper, NSArray, NSString;
@protocol TSCETableTranslatorProtocol;

#import <Foundation/Foundation.h>

#import "TSTColumnRowUIDMap.h"
#import "TSTTableModel.h"
#import "TSTGroupBy.h"
#import "TSTTableGroupSortOrderUID.h"
#import "TSTTableInfo.h"

@interface TSTTableTranslator : NSObject <TSCETableTranslatorProtocol>

 {
    TSCECoordMapper *_coordMapper;
}


@property (readonly, nonatomic) TSUViewCellRect actualHeaderColumnRange;
@property (readonly, nonatomic) TSUViewCellRect baseColumnRange;
@property (readonly, nonatomic) TSTColumnRowUIDMap *baseMap;
@property (readonly, nonatomic) TSTTableModel *baseTableModel; // ivar: _baseTableModel
@property (readonly, nonatomic) TSUViewCellRect bodyColumnRange;
@property (readonly, nonatomic) TSUViewCellRect bodyRange;
@property (readonly, nonatomic) TSUViewCellRect bodyRowRange;
@property (readonly, nonatomic) TSUViewCellRect bottomCornerRange;
@property (readonly, nonatomic) TSUViewCellRect categoryColumnRange;
@property (readonly, retain, nonatomic) NSArray *columnWidths;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSUViewCellRect footerRowRange;
@property (readonly, nonatomic) TSTGroupBy *groupByForColumns;
@property (readonly, nonatomic) TSTGroupBy *groupByForRows;
@property (nonatomic) TSTTableGroupSortOrderUID *groupSortOrder;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSUViewCellRect headerColumnRange;
@property (readonly, nonatomic) TSUViewCellRect headerRowRange;
@property (readonly, nonatomic) BOOL isCategorized;
@property (readonly, nonatomic) BOOL isGroupedForColumns;
@property (readonly, nonatomic) BOOL isGroupedForRows;
@property (readonly, nonatomic) unsigned char maxColumnLevel;
@property (readonly, nonatomic) unsigned int maxNumberOfHeaderColumns;
@property (readonly, nonatomic) unsigned char maxRowLevel;
@property (readonly, nonatomic) unsigned char maxVisibleColumnLevel;
@property (readonly, nonatomic) unsigned char maxVisibleRowLevel;
@property (readonly, nonatomic) unsigned char minColumnLevel;
@property (readonly, nonatomic) unsigned int minNumberOfHeaderColumns;
@property (readonly, nonatomic) unsigned char minRowLevel;
@property (readonly, nonatomic) TSUViewColumnIndex numberOfCategoryColumns;
@property (readonly, nonatomic) NSUInteger numberOfColumnLevels;
@property (readonly, nonatomic) TSUViewColumnIndex numberOfColumns;
@property (readonly, nonatomic) NSUInteger numberOfComments;
@property (readonly, nonatomic) TSUViewRowIndex numberOfFooterOrGrandTotalRows;
@property (nonatomic) TSUViewRowIndex numberOfFooterRows;
@property (readonly, nonatomic) TSUViewColumnIndex numberOfGrandTotalColumns;
@property (nonatomic) TSUViewColumnIndex numberOfHeaderColumns;
@property (nonatomic) TSUViewRowIndex numberOfHeaderRows;
@property (readonly, nonatomic) NSUInteger numberOfPopulatedCells;
@property (readonly, nonatomic) NSUInteger numberOfRowLevels;
@property (readonly, nonatomic) TSUViewRowIndex numberOfRows;
@property (readonly, nonatomic) TSUViewCellRect range;
@property (readonly, retain, nonatomic) NSArray *rowHeights;
@property (readonly, nonatomic) TSTColumnRowUIDMap *summaryMap;
@property (readonly) Class superclass;
@property (nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (readonly, nonatomic) TSUViewCellRect topCornerRange;
@property (readonly, nonatomic) TSTColumnRowUIDMap *viewMap;
@property (nonatomic) BOOL wasCut;


-(?)columnUIDsForBaseColumnIndexes;
-(?)columnUIDsForViewColumnIndexes;
-(?)mergeRangesIntersectingCellRegion;
-(?)rowUIDsForBaseRowIndexes;
-(?)rowUIDsForViewRowIndexes;
-(BOOL)areMapsStale;
-(BOOL)cellExistsAtCellID:(struct TSUViewCellCoord )arg0 ;
-(BOOL)checkMapsAndAssert:(BOOL)arg0 ;
-(BOOL)hasCommentAtCellID:(struct TSUViewCellCoord )arg0 ;
-(BOOL)hasFormulaAtCellID:(struct TSUViewCellCoord )arg0 ;
-(BOOL)hasFormulaAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(BOOL)hasMergeRangeSpanningRowsForCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)hasMergeRanges;
-(BOOL)hasMergeRangesIntersectingCellRegion:(id)arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)isValidMergeRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)mergeCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectCellRange:(struct TSUViewCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectCellRegion:(id)arg0 ;
-(BOOL)unmergeCellRange:(struct TSUViewCellRect )arg0 ;
-(CGFloat)computeDefaultFontHeightForTableStyleArea:(NSUInteger)arg0 ;
-(CGFloat)heightOfRowAtIndex:(struct TSUViewRowIndex )arg0 ;
-(CGFloat)heightOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(CGFloat)widthOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 ;
-(CGFloat)widthOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(Class)iteratorClass;
-(NSUInteger)aggregateIndexForColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(NSUInteger)aggregateIndexForRowIndex:(struct TSUViewRowIndex )arg0 ;
-(NSUInteger)tableAreaForCellID:(struct TSUViewCellCoord )arg0 ;
-(NSUInteger)tableAreaForColumn:(struct TSUViewColumnIndex )arg0 ;
-(NSUInteger)tableAreaForDroppingRowAtIndex:(struct TSUViewRowIndex )arg0 ;
-(NSUInteger)tableAreaForRow:(struct TSUViewRowIndex )arg0 ;
-(NSUInteger)tableStyleAreaForCellID:(struct TSUViewCellCoord )arg0 ;
-(NSUInteger)tableStyleAreaForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(NSUInteger)tableStyleAreaForRow:(struct TSUViewRowIndex )arg0 ;
-(id)allColumnGroupUIDs;
-(id)allRowGroupUIDs;
-(id)baseCellRegionForUIDRange:(*void)arg0 ;
-(id)baseCellRegionForViewCellRect:(struct TSUViewCellRect )arg0 ;
-(id)baseCellRegionForViewCellRegion:(id)arg0 ;
-(id)baseColumnIndexesForUIDs:(*void)arg0 ;
-(id)baseColumnIndexesForViewColumnIndexes:(id)arg0 ;
-(id)baseRowIndexesForUIDs:(*void)arg0 ;
-(id)baseRowIndexesForViewRowIndexes:(id)arg0 ;
-(id)baseShuffleMapForViewShuffleMap:(id)arg0 ;
-(id)baseTractRefForChromeTractRef:(id)arg0 ;
-(id)baseTractRefForViewTractRef:(id)arg0 ;
-(id)cellAtGroupLevel:(unsigned char)arg0 columnUID:(struct TSKUIDStruct *)arg1 ;
-(id)cellRegionForTableStyleArea:(NSUInteger)arg0 ;
-(id)cellStyleAtCellID:(struct TSUViewCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleAtCellUID:(struct TSKUIDStructCoord *)arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellValueFromCell:(id)arg0 atCellID:(struct TSUViewCellCoord )arg1 ;
-(id)characterFillAtCellID:(struct TSUViewCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)chromeColumnIndexesForViewColumnIndexes:(id)arg0 ;
-(id)chromeRowIndexesForViewRowIndexes:(id)arg0 ;
-(id)chromeTractRefForBaseTractRef:(id)arg0 ;
-(id)chromeTractRefForViewTractRef:(id)arg0 ;
-(id)commentHostingAtCellID:(struct TSUViewCellCoord )arg0 ;
-(id)commentHostingAtCellID:(struct TSUViewCellCoord )arg0 forCommentStorage:(id)arg1 ;
-(id)conditionalStyleSetAtCellID:(struct TSUViewCellCoord )arg0 ;
-(id)coordinateMapper;
-(id)defaultCellStyleForCellID:(struct TSUViewCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultCellStyleForTableStyleArea:(NSUInteger)arg0 ;
-(id)defaultTextStyleForCellID:(struct TSUViewCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultTextStyleForTableStyleArea:(NSUInteger)arg0 ;
-(id)documentRoot;
-(id)expandCellRegionToCoverMergedCells:(id)arg0 ;
-(id)formulaAtCellID:(struct TSUViewCellCoord )arg0 ;
-(id)indexesForColumnsContainedByGroupUIDs:(id)arg0 ;
-(id)indexesForGrandTotalColumns;
-(id)indexesForGrandTotalRows;
-(id)indexesForLabelRows;
-(id)indexesForLabelRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingColumns;
-(id)indexesForLeadingColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingRows;
-(id)indexesForLeadingRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForRowsContainedByGroupUIDs:(id)arg0 ;
-(id)indexesForSummaryAndLabelRows;
-(id)indexesForSummaryColumns;
-(id)indexesForSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForSummaryRows;
-(id)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)init;
-(id)initWithBaseTableModel:(id)arg0 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)mergeActionForRegion:(id)arg0 ;
-(id)mergeActionForRegion:(id)arg0 nonOriginPartialsOnly:(BOOL)arg1 ;
-(id)mergedGridIndicesForDimension:(NSInteger)arg0 ;
-(id)metadataForColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(id)metadataForRowIndex:(struct TSUViewRowIndex )arg0 ;
-(id)mutableBaseColumnIndexesForUIDs:(*void)arg0 ;
-(id)mutableBaseRowIndexesForUIDs:(*void)arg0 ;
-(id)objectLocale;
-(id)peerCellRegionForCellRegion:(id)arg0 ;
-(id)populatedCategoryGroupLevelsInColumn:(struct TSUViewColumnIndex )arg0 ;
-(id)regionForValueOrCommentCellsInRange:(struct TSUViewCellRect )arg0 ;
-(id)removeReturningInverseForRegion:(id)arg0 ;
-(id)shrinkReturningInverseForRegion:(id)arg0 ;
-(id)stringAtCellID:(struct TSUViewCellCoord )arg0 optionalCell:(id)arg1 ;
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
-(id)viewColumnIndexesForUIDs:(*void)arg0 ;
-(id)viewRowIndexesForBaseRowIndexes:(id)arg0 ;
-(id)viewRowIndexesForChromeRowIndexes:(id)arg0 ;
-(id)viewRowIndexesForUIDs:(*void)arg0 ;
-(id)viewTractRefForBaseTractRef:(id)arg0 ;
-(id)viewTractRefForChromeTractRef:(id)arg0 ;
-(int)getCell:(id)arg0 atCellID:(struct TSUViewCellCoord )arg1 ;
-(int)getCell:(id)arg0 atCellID:(struct TSUViewCellCoord )arg1 suppressCellBorder:(BOOL)arg2 ;
-(int)getCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)getCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 suppressCellBorder:(BOOL)arg2 ;
-(int)getDefaultCell:(id)arg0 forCellID:(struct TSUViewCellCoord )arg1 ;
-(int)getDefaultCell:(id)arg0 forCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)getDefaultCell:(id)arg0 forTableStyleArea:(NSUInteger)arg1 ;
-(int)getValue:(struct TSCEValue *)arg0 atCellID:(struct TSUViewCellCoord )arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
-(int)insertColumnsAtIndex:(struct TSUViewColumnIndex )arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 ;
-(int)insertRowsAtIndex:(struct TSUViewRowIndex )arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 unsetFilterHidingAction:(BOOL)arg4 ;
-(int)removeCommentStorageAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(int)setCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ignoreFormula:(BOOL)arg2 clearImportWarnings:(BOOL)arg3 ;
-(int)setCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ignoreFormula:(BOOL)arg2 clearImportWarnings:(BOOL)arg3 formulaReplacer:(id)arg4 ;
-(int)setCellStyle:(id)arg0 ofColumnAtUID:(struct TSKUIDStruct *)arg1 ;
-(int)setCellStyle:(id)arg0 ofRowAtUID:(struct TSKUIDStruct *)arg1 ;
-(int)setCellsWithCellMap:(id)arg0 ignoreFormulas:(BOOL)arg1 skipDirtyingNonFormulaCells:(BOOL)arg2 ;
-(int)setCommentStorage:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)setTextStyle:(id)arg0 ofColumnAtUID:(struct TSKUIDStruct *)arg1 ;
-(int)setTextStyle:(id)arg0 ofRowAtUID:(struct TSKUIDStruct *)arg1 ;
-(struct RefTypeHolder<TSCECellRef, 0> )baseCellRefForViewCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 1> )viewCellRefForBaseCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 1> )viewCellRefForChromeCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 2> )chromeCellRefForBaseCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 2> )chromeCellRefForViewCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCERangeRef, 1> )viewRangeRefForChromeRangeRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCERangeRef, 2> )chromeRangeRefForViewRangeRef:(*void)arg0 ;
-(struct TSKUIDStruct )columnUIDForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSKUIDStruct )columnUIDForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSKUIDStruct )rowUIDForBaseRowIndex:(struct TSUModelRowIndex )arg0 ;
-(struct TSKUIDStruct )rowUIDForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSKUIDStructCoord )cellUIDForSummaryCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSKUIDStructCoord )cellUIDforBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUChromeCellCoord )chromeCellCoordForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUChromeCellCoord )chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUChromeColumnIndex )chromeColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSUChromeColumnIndex )chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUChromeRowIndex )chromeRowIndexForBaseRowIndex:(struct TSUModelRowIndex )arg0 ;
-(struct TSUChromeRowIndex )chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForChromeCellCoord:(struct TSUChromeCellCoord )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUModelCellCoord )summaryCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex )arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForColumnUID:(struct TSKUIDStruct )arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUModelColumnIndex )summaryColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUModelRowIndex )baseRowIndexForChromeRowIndex:(struct TSUChromeRowIndex )arg0 ;
-(struct TSUModelRowIndex )baseRowIndexForRowUID:(struct TSKUIDStruct )arg0 ;
-(struct TSUModelRowIndex )baseRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUModelRowIndex )summaryRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUViewCellCoord )cellIDForCellContainingRichTextStorage:(id)arg0 ;
-(struct TSUViewCellCoord )mergeOriginForCellID:(struct TSUViewCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForSummaryCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUViewCellRect )bodyBoundingRangeForBaseLevel;
-(struct TSUViewCellRect )bodyRangeForLowestLevelGroupEnclosingCellAtCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUViewCellRect )cellRangeForTableArea:(NSUInteger)arg0 ;
-(struct TSUViewCellRect )expandCellRangeToCoverMergedCells:(struct TSUViewCellRect )arg0 ;
-(struct TSUViewCellRect )mergeRangeAtCellID:(struct TSUViewCellCoord )arg0 ;
-(struct TSUViewColumnIndex )viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSUViewColumnIndex )viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex )arg0 ;
-(struct TSUViewColumnIndex )viewColumnIndexForColumnUID:(struct TSKUIDStruct )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForRowUID:(struct TSKUIDStruct )arg0 ;
-(struct vector<TSUViewCellRect, std::allocator<TSUViewCellRect>> )mergeRangesAndCrumbsIntersectingRange:(struct TSUViewCellRect )arg0 ;
-(struct vector<TSUViewCellRect, std::allocator<TSUViewCellRect>> )mergeRangesIntersectingRange:(struct TSUViewCellRect )arg0 ;
-(unsigned char)cellValueTypeAtCellID:(struct TSUViewCellCoord )arg0 ;
-(unsigned char)cellValueTypeAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(unsigned char)columnGroupLevelAtColumn:(struct TSUViewColumnIndex )arg0 outAggregateIndex:(*NSUInteger)arg1 ;
-(unsigned char)groupLevelAtLabelRow:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)groupLevelAtSummaryColumn:(struct TSUViewColumnIndex )arg0 ;
-(unsigned char)groupLevelAtSummaryRow:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)rowGroupLevelAtRow:(struct TSUViewRowIndex )arg0 outAggregateIndex:(*NSUInteger)arg1 ;
-(unsigned int)columnAggregateGroupSize;
-(unsigned int)rowAggregateGroupSize;
-(void)addReceiverToGroupBy:(id)arg0 ;
-(void)didMakeGroupingChangesInRowUIDs:(id)arg0 ;
-(void)enumerateMergesIntersectingCellRegion:(id)arg0 usingBlock:(id)arg1 ;
-(void)flushCachedIndexSets;
-(void)forceGroupingChangeReset;
-(void)moveColumnRange:(struct _NSRange )arg0 toColumnIndex:(struct TSUViewColumnIndex )arg1 ;
-(void)moveRowRange:(struct _NSRange )arg0 toRowIndex:(struct TSUViewRowIndex )arg1 ;
-(void)postCommentNotificationForStorage:(id)arg0 atViewCellCoord:(struct TSUViewCellCoord )arg1 notificationKey:(id)arg2 ;
-(void)removeAnnotationsFromColumnsAtIndexes:(id)arg0 ;
-(void)removeAnnotationsFromRowsAtIndexes:(id)arg0 ;
-(void)removeColumnsAtIndex:(struct TSUViewColumnIndex )arg0 count:(struct TSUViewColumnIndex )arg1 ;
-(void)removeColumnsAtIndexes:(id)arg0 ;
-(void)removeRowsAtIndex:(struct TSUViewRowIndex )arg0 count:(struct TSUViewRowIndex )arg1 ;
-(void)removeRowsAtIndexes:(id)arg0 ;
-(void)setHeight:(CGFloat)arg0 ofRowAtIndex:(struct TSUViewRowIndex )arg1 ;
-(void)setWidth:(CGFloat)arg0 ofColumnAtIndex:(struct TSUViewColumnIndex )arg1 ;
-(void)swapRowAtIndex:(struct TSUViewRowIndex )arg0 withRowAtIndex:(struct TSUViewRowIndex )arg1 ;
-(void)teardown;


@end


#endif