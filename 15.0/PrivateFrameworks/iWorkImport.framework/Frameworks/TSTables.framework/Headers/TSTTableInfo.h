// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEINFO_H
#define TSTTABLEINFO_H

@class TSDDrawableInfo, TSDFill, TSDStroke, TSWPParagraphStyle, TSCECalculationEngine, NSArray, NSString, NSDictionary, TSCECoordMapper, TSDInfoGeometry, TSCEOwnerUidMapper, NSUUID, TSPObject<TSDOwningAttachment>, NSSet, TSCEMutableUIDSet, TSWPShapeStyle;
@protocol TSSPropertySource, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDSelectableHintMediaContainer, TSCECalculationEngineRegistration, TSDContainerInfo, TSDMixing, TSKModel, TSKSearchable, TSSPresetSource, TSSStyleClient, TSCEColumnRowUIDMapping, TSTCompatibilityVersionProviding, TSTCustomStrokeProviding, TSTStyleProviding, TSTTableHiddenRowColumnProviding, TSTAdditionalHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableMergeRangeProviding, TSTTableStrokeProviding, TSWPStorageParent, TSWPTextStatisticsTrackerProvider, TSDInfo;


#import "TSTTableModel.h"
#import "TSTConditionalStyleSet.h"
#import "TSTArchivedLayoutEngineBundle.h"
#import "TSTCellStyle.h"
#import "TSTCategoryOrder.h"
#import "TSTCategoryOwner.h"
#import "TSTCellWillChangeDistributor.h"
#import "TSTConcurrentMutableCellUIDSet.h"
#import "TSTColumnRowUIDMap.h"
#import "TSTConditionalStyleFormulaOwner.h"
#import "TSTTableFilterSet.h"
#import "TSTTableTranslator.h"
#import "TSTGroupBy.h"
#import "TSTTableGroupSortOrderUID.h"
#import "TSTHiddenStates.h"
#import "TSTHiddenStatesOwner.h"
#import "TSTLayoutEngine.h"
#import "TSTLayoutHint.h"
#import "TSTTablePartitioner.h"
#import "TSTPencilAnnotationOwner.h"
#import "TSTPivotRowColumnOrder.h"
#import "TSTPivotOwner.h"
#import "TSTTableInfo.h"
#import "TSTTableSortOrder.h"
#import "TSTSortRuleReferenceTracker.h"
#import "TSTStrokeSidecar.h"
#import "TSTSummaryModel.h"
#import "TSTTableStyle.h"
#import "TSTTableStylePreset.h"
#import "TSTStructuredTextImportRecord.h"

@interface TSTTableInfo : TSDDrawableInfo <TSSPropertySource, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDSelectableHintMediaContainer, TSCECalculationEngineRegistration, TSDContainerInfo, TSDMixing, TSKModel, TSKSearchable, TSSPresetSource, TSSStyleClient, TSCEColumnRowUIDMapping, TSTCompatibilityVersionProviding, TSTCustomStrokeProviding, TSTStyleProviding, TSTTableHiddenRowColumnProviding, TSTAdditionalHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableMergeRangeProviding, TSTTableStrokeProviding, TSWPStorageParent, TSWPTextStatisticsTrackerProvider>

 {
    TSTTableModel *_tableModel;
    TSTConditionalStyleSet *_noRuleConditionalStyleSet;
    BOOL _needsFilterSetUpdated;
    ? _tableTranslatorBaseMapForPasteboard;
    ? _tableTranslatorViewMapForPasteboard;
}


@property (readonly, nonatomic) TSUCellRect actualHeaderColumnRange;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (retain, nonatomic) TSTArchivedLayoutEngineBundle *archivedLayoutEngineBundle; // ivar: _archivedLayoutEngineBundle
@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) TSDFill *backgroundFill;
@property (readonly, nonatomic) TSUCellRect baseColumnRange;
@property (readonly, nonatomic) TSKUIDStruct baseTableUID;
@property (retain, nonatomic) TSTCellStyle *bodyCellStyle;
@property (readonly, nonatomic) TSUCellRect bodyColumnRange;
@property (readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property (readonly, nonatomic) TSDFill *bodyFill;
@property (readonly, nonatomic) TSDStroke *bodyPivotDeEmphasisHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotEmphasisVerticalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotGroupHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSUCellRect bodyRange;
@property (readonly, nonatomic) TSUCellRect bodyRowRange;
@property (readonly, nonatomic) TSDStroke *bodyRowStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (retain, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property (readonly, nonatomic) TSUCellRect bottomCornerRange;
@property (nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic, getter=isCategorized) BOOL categorized;
@property (readonly, nonatomic) TSUCellRect categoryColumnRange;
@property (nonatomic) CGFloat categoryColumnWidth;
@property (readonly, nonatomic) TSDStroke *categoryLevel1BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel1CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel1InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel1TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel1TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel2CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel2InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel2TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel2TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel3CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel3InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel3TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel3TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel4CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel4InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel4TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel4TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel5CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel5InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel5TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel5TopStroke;
@property (readonly, nonatomic) TSTCategoryOrder *categoryOrder; // ivar: _categoryOrder
@property (readonly, nonatomic) TSTCategoryOwner *categoryOwner;
@property (readonly, nonatomic) TSTCellWillChangeDistributor *cellWillChangeDistributor;
@property (readonly, nonatomic) TSTConcurrentMutableCellUIDSet *cellsToInvalidateAfterRecalc;
@property (readonly, nonatomic) TSTConcurrentMutableCellUIDSet *cellsToInvalidateNonoverflowingAfterRecalc;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) TSTColumnRowUIDMap *columnRowUIDMap; // ivar: _columnRowUIDMap
@property (readonly, retain, nonatomic) NSArray *columnWidths;
@property (readonly, nonatomic) TSTConditionalStyleFormulaOwner *conditionalStyleFormulaOwner;
@property (readonly, nonatomic) TSKUIDStruct conditionalStyleFormulaOwnerUID;
@property (nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultColumnWidth;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (nonatomic) CGFloat defaultRowHeight;
@property (readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL documentIsClosing; // ivar: _documentIsClosing
@property (retain, nonatomic) NSDictionary *dragAndDropDetails; // ivar: _dragAndDropDetails
@property (copy, nonatomic) TSTTableFilterSet *filterSet;
@property (readonly, nonatomic) TSUCellRect filteringBaseColumnRange;
@property (readonly, nonatomic) TSUCellRect filteringBodyRange;
@property (readonly, nonatomic) TSUCellRect filteringBodyRowRange;
@property (readonly, nonatomic) TSUCellRect filteringRange;
@property (readonly, nonatomic) TSTTableModel *filteringTableModel;
@property (readonly, nonatomic) TSTTableTranslator *filteringTableTranslator;
@property (readonly, nonatomic) TSKUIDStruct filteringTableUID;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property (retain, nonatomic) TSTCellStyle *footerRowCellStyle;
@property (readonly, nonatomic) TSDStroke *footerRowPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSUCellRect footerRowRange;
@property (readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property (readonly, nonatomic) TSDFill *footerRowsFill;
@property (nonatomic) NSInteger formulaCoordSpace; // ivar: _formulaCoordSpace
@property (nonatomic) TSKUIDStruct fromGroupByUID;
@property (retain, nonatomic) TSCECoordMapper *fromTableCoordMapperForPasteboard; // ivar: _fromTableCoordMapperForPasteboard
@property (nonatomic) TSKUIDStruct fromTableUID;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (retain, nonatomic) TSTGroupBy *groupBy; // ivar: _groupBy
@property (readonly, nonatomic) TSTGroupBy *groupByForColumns;
@property (readonly, nonatomic) TSTGroupBy *groupByForRows;
@property (nonatomic) TSKUIDStruct groupByUid; // ivar: _groupByUid
@property (nonatomic) TSTTableGroupSortOrderUID *groupSortOrder;
@property (readonly, nonatomic) BOOL hasAlternatingRows;
@property (readonly, nonatomic) BOOL hasCategoryRules;
@property (readonly, nonatomic) BOOL hasHeaderColumnForAggregateNames;
@property (readonly, nonatomic) BOOL hasHeaderRowForAggregateNames;
@property (readonly, nonatomic) BOOL hasImportWarnings;
@property (readonly, nonatomic) BOOL hasMigratableStylesInCells;
@property (nonatomic) BOOL hasReference; // ivar: _hasReference
@property (readonly, nonatomic) BOOL hasTableBorder;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property (retain, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotGroupDeEmphasisStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotGroupHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotSeparatorStroke;
@property (readonly, nonatomic) TSUCellRect headerColumnRange;
@property (readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property (readonly, nonatomic) TSDFill *headerColumnsFill;
@property (nonatomic) BOOL headerColumnsFrozen;
@property (readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property (retain, nonatomic) TSTCellStyle *headerRowCellStyle;
@property (readonly, nonatomic) TSDStroke *headerRowPivotGroupDeEmphasisStroke;
@property (readonly, nonatomic) TSDStroke *headerRowPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSDStroke *headerRowPivotTitleStroke;
@property (readonly, nonatomic) TSUCellRect headerRowRange;
@property (readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property (readonly, nonatomic) TSDFill *headerRowsFill;
@property (nonatomic) BOOL headerRowsFrozen;
@property (retain, nonatomic) TSTHiddenStates *hiddenStates; // ivar: _hiddenStates
@property (readonly, nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner;
@property (nonatomic) TSKUIDStruct hiddenStatesUid; // ivar: _hiddenStatesUid
@property (readonly, nonatomic) TSCEOwnerUidMapper *identityOwnerUIDMapper;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isAPivotTable; // ivar: _isAPivotTable
@property (nonatomic) BOOL isCopyContainingCategoryColumn; // ivar: _isCopyContainingCategoryColumn
@property (readonly, nonatomic) BOOL isEmptyPivot;
@property (readonly, nonatomic) BOOL isGroupedForColumns;
@property (readonly, nonatomic) BOOL isGroupedForRows;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL isRegisteredWithCalcEngine;
@property (readonly, nonatomic) BOOL isValidForInteraction;
@property (retain, nonatomic) TSTCellStyle *labelLevel1CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel1TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel2CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel2TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel3CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel3TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel4CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel4TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel5CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel5TextStyle;
@property (retain, nonatomic) TSTLayoutEngine *layoutEngine; // ivar: _layoutEngine
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) unsigned char maxColumnLevel;
@property (readonly, nonatomic) unsigned int maxNumberOfHeaderColumns;
@property (readonly, nonatomic) unsigned char maxRowLevel;
@property (nonatomic) BOOL migratingStylesOnly; // ivar: _migratingStylesOnly
@property (readonly, nonatomic) unsigned int minNumberOfHeaderColumns;
@property (readonly, nonatomic, getter=isNewlyImported) BOOL newlyImported;
@property (readonly, nonatomic) NSUUID *nsFilteringTableUID;
@property (readonly, nonatomic) NSUUID *nsTableUID;
@property (readonly, nonatomic) TSUModelRowIndex numberOfBaseBodyRows;
@property (readonly, nonatomic) TSUModelColumnIndex numberOfBaseColumns;
@property (readonly, nonatomic) TSUModelRowIndex numberOfBaseFooterRows;
@property (readonly, nonatomic) TSUModelColumnIndex numberOfBaseHeaderColumns;
@property (readonly, nonatomic) TSUModelRowIndex numberOfBaseHeaderRows;
@property (readonly, nonatomic) TSUModelRowIndex numberOfBaseRows;
@property (readonly, nonatomic) TSUChromeColumnIndex numberOfChromeColumns;
@property (readonly, nonatomic) TSUChromeRowIndex numberOfChromeFooterRows;
@property (readonly, nonatomic) TSUChromeColumnIndex numberOfChromeHeaderColumns;
@property (readonly, nonatomic) TSUChromeRowIndex numberOfChromeHeaderRows;
@property (readonly, nonatomic) TSUChromeRowIndex numberOfChromeRows;
@property (readonly, nonatomic) NSUInteger numberOfColumnLevels;
@property (readonly, nonatomic) unsigned short numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfFooterOrGrandTotalRows;
@property (nonatomic) unsigned int numberOfFooterRows;
@property (readonly, nonatomic) unsigned int numberOfGrandTotalColumns;
@property (nonatomic) unsigned int numberOfHeaderColumns;
@property (nonatomic) unsigned int numberOfHeaderRows;
@property (readonly, nonatomic) NSUInteger numberOfRowLevels;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (retain, nonatomic) TSTLayoutHint *overrideLayoutHint; // ivar: _overrideLayoutHint
@property (readonly, nonatomic) TSCEOwnerUidMapper *ownerUIDMapper;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (retain, nonatomic) TSTTablePartitioner *partitioner; // ivar: _partitioner
@property (readonly, nonatomic) TSTPencilAnnotationOwner *pencilAnnotationOwner;
@property (retain, nonatomic) TSTCellStyle *pivotBodySummaryColumnCellStyle;
@property (retain, nonatomic) TSTCellStyle *pivotBodySummaryRowCellStyle;
@property (readonly, retain, nonatomic) TSTTableModel *pivotDataModel; // ivar: _pivotDataModel
@property (retain, nonatomic) TSTCellStyle *pivotHeaderColumnSummaryCellStyle;
@property (readonly, nonatomic) TSTPivotRowColumnOrder *pivotOrder; // ivar: _pivotOrder
@property (readonly, nonatomic) TSTPivotOwner *pivotOwner;
@property (readonly, nonatomic) BOOL pivotSourceIsRangeBased;
@property (readonly, nonatomic) NSUUID *pivotSourceNSTableUID;
@property (readonly, nonatomic) NSString *pivotSourceRangeName;
@property (readonly, nonatomic) TSTTableInfo *pivotSourceTableInfo;
@property (readonly, nonatomic) NSString *pivotSourceTableName;
@property (readonly, nonatomic) TSKUIDStruct pivotSourceTableUID;
@property (nonatomic) BOOL presetNeedsStrongOwnership;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL preventsComments;
@property (readonly, nonatomic) TSUCellRect range;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly, nonatomic, getter=isReimportable) BOOL reimportable;
@property (nonatomic) BOOL repeatingHeaderColumnsEnabled;
@property (nonatomic) BOOL repeatingHeaderRowsEnabled;
@property (readonly, retain, nonatomic) NSArray *rowHeights;
@property (retain, nonatomic) TSCEMutableUIDSet *rowUIDsForImportedGroupingRows; // ivar: _rowUIDsForImportedGroupingRows
@property (retain, nonatomic) TSCEMutableUIDSet *rowUIDsWithPendingGroupingChanges; // ivar: _rowUIDsWithPendingGroupingChanges
@property (copy, nonatomic) TSTTableSortOrder *sortOrder;
@property (readonly, nonatomic) TSTSortRuleReferenceTracker *sortRuleReferenceTracker;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly, nonatomic) TSTStrokeSidecar *strokeSidecar;
@property (nonatomic) BOOL styleApplyClearsAll;
@property (readonly, nonatomic) TSTSummaryModel *summaryModel; // ivar: _summaryModel
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (retain, nonatomic) NSString *tableName;
@property (nonatomic) BOOL tableNameBorderEnabled;
@property (readonly, nonatomic) TSDStroke *tableNameBorderStroke;
@property (nonatomic) BOOL tableNameEnabled;
@property (nonatomic) CGFloat tableNameHeight;
@property (retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property (retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property (readonly, nonatomic) NSUInteger tableSizeClass;
@property (retain, nonatomic) TSTTableStyle *tableStyle;
@property (retain, nonatomic) TSTTableStylePreset *tableStylePreset;
@property ? tableTranslatorBaseMapForPasteboard;
@property ? tableTranslatorViewMapForPasteboard;
@property (nonatomic) TSKUIDStruct tableUID;
@property (readonly, nonatomic) int tableWritingDirection;
@property (retain, nonatomic) TSTStructuredTextImportRecord *textImportRecord;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (readonly, nonatomic) TSUCellRect topCornerRange;
@property (retain, nonatomic) TSTTableTranslator *translator; // ivar: _translator
@property (nonatomic) BOOL wasCut;
@property (readonly, nonatomic) BOOL wasRemovedFromDocument; // ivar: _wasRemovedFromDocument
@property (nonatomic) BOOL wasUnarchivedFromAProvidedTable;


+(BOOL)validateNewName:(id)arg0 forTable:(id)arg1 ;
+(NSUInteger)tableAreaForCellID:(struct TSUCellCoord )arg0 inTableWithHeaderColumns:(unsigned int)arg1 headerRows:(unsigned int)arg2 footerRows:(unsigned int)arg3 totalRows:(unsigned int)arg4 ;
+(NSUInteger)tableStyleAreaForCellID:(struct TSUCellCoord )arg0 inTableWithHeaderColumns:(unsigned int)arg1 headerRows:(unsigned int)arg2 footerRows:(unsigned int)arg3 totalRows:(unsigned int)arg4 ;
+(id)displayNameForColumnName:(id)arg0 ;
+(id)geometryForPrototypeIndex:(NSInteger)arg0 withCanvasPoint:(struct CGPoint )arg1 ;
+(id)localizedDescriptionForProtoIndex:(NSUInteger)arg0 ;
+(id)pivotDetailTableNameFromSourcePivotTableInfo:(id)arg0 pivotSourceCell:(struct TSUCellCoord )arg1 ;
+(id)pivotTableNameForSourceTable:(id)arg0 ;
+(id)tableInfoForTableUID:(struct TSKUIDStruct )arg0 withCalcEngine:(id)arg1 ;
+(id)tablePrototypeWithIndex:(NSInteger)arg0 context:(id)arg1 geometry:(id)arg2 styles:(id)arg3 ;
+(id)tablePrototypeWithIndex:(NSInteger)arg0 context:(id)arg1 geometry:(id)arg2 styles:(id)arg3 forTableInsertOnly:(BOOL)arg4 ;
+(struct TSUCellRect )cellRangeForTableArea:(NSUInteger)arg0 givenTableSize:(struct ? )arg1 numberOfHeaderRows:(unsigned int)arg2 numberOfFooterRows:(unsigned int)arg3 numberOfHeaderColumns:(unsigned int)arg4 ;
+(unsigned int)numberOfColumnsForProtoIndex:(NSUInteger)arg0 ;
+(unsigned int)numberOfRowsForProtoIndex:(NSUInteger)arg0 ;
+(void)ensureAllTablesAreRegisteredInDocumentRoot:(id)arg0 ;
+(void)performRewritesForInsertedTableInfos:(id)arg0 ;
+(void)upgradeSubOwnerUidForMapperOnCalcEngine:(id)arg0 ;
+(void)upgradeTablesIfNeeded:(NSUInteger)arg0 forDocumentRoot:(id)arg1 ;
-(?)columnUIDsForColumnIndexes;
-(?)columnUIDsForColumnRange;
-(?)mergeRangesIntersectingCellRegion;
-(?)orderedColumnUidsFromUids;
-(?)orderedRowUidsFromUids;
-(?)prunedColumnUIDsFromColumnUIDs;
-(?)prunedRowUIDsFromRowUIDs;
-(?)rowUIDsForRowIndexes;
-(?)rowUIDsForRowRange;
-(?)updatePivotDataModel:(?)arg0 pivotDataRefreshUID:(?)arg1 pivotDataRefreshTimestampuidBodyTract;
-(BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)cellExistsAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)cellIDIsLegal:(struct TSUCellCoord )arg0 ;
-(BOOL)checkStateForArchiving:(BOOL)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)findChartableRangesFromTableRange:(struct TSCERangeCoordinate )arg0 getBodyRange:(struct TSCERangeCoordinate *)arg1 headerColumnRange:(struct TSCERangeCoordinate *)arg2 headerRowRange:(struct TSCERangeCoordinate *)arg3 ;
-(BOOL)groupingTypesAreUniqueForColumn:(unsigned short)arg0 ;
-(BOOL)hasCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasCommentAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasFilterRulesInBaseColumns:(id)arg0 ;
-(BOOL)hasFormulaAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasFormulaAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(BOOL)hasGroupingArrowAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasGroupingArrowInCellRegion:(id)arg0 ;
-(BOOL)hasHiddenColumnAtIndex:(unsigned short)arg0 ;
-(BOOL)hasHiddenColumnAtIndex:(unsigned short)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hasHiddenRowAtIndex:(unsigned int)arg0 ;
-(BOOL)hasHiddenRowAtIndex:(unsigned int)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hasMergeFragmentAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasMergeRangeSpanningRowsForCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)hasMergeRangesIntersectingCellRegion:(id)arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)hasSummaryRowsInRegion:(id)arg0 ;
-(BOOL)hasUsefulPivotSourceCellsInBodyRange:(struct TSUCellRect )arg0 ;
-(BOOL)hideColumnAtIndex:(unsigned short)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hideRowAtIndex:(unsigned int)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)isCategoryAnyKindOfCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryColumn:(unsigned short)arg0 ;
-(BOOL)isCategoryColumnUneditableCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryGroupValueCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryGroupValueLabelCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryGroupingColumn:(unsigned short)arg0 ;
-(BOOL)isCategoryLabelCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCellRangeHidden:(struct TSUCellRect )arg0 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 objectComparisonBlock:(id)arg1 ;
-(BOOL)isGroupCollapsedAndVisible:(struct TSKUIDStruct )arg0 dimension:(NSInteger)arg1 ;
-(BOOL)isGroupOrParentsCollapsed:(struct TSKUIDStruct )arg0 dimension:(NSInteger)arg1 ;
-(BOOL)isGroupingColumnCollapsed:(unsigned short)arg0 ;
-(BOOL)isGroupingColumnCollapsedAndVisible:(unsigned short)arg0 ;
-(BOOL)isGroupingRowCollapsed:(unsigned int)arg0 ;
-(BOOL)isGroupingRowCollapsedAndVisible:(unsigned int)arg0 ;
-(BOOL)isLabelRow:(unsigned int)arg0 ;
-(BOOL)isPivotAnyKindOfCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isPivotGrandTotalColumn:(unsigned short)arg0 ;
-(BOOL)isPivotGrandTotalRow:(unsigned int)arg0 ;
-(BOOL)isPivotLeadingColumn:(unsigned short)arg0 ;
-(BOOL)isPivotLeadingRow:(unsigned int)arg0 ;
-(BOOL)isPivotTrailingAligned:(struct TSUCellCoord )arg0 ;
-(BOOL)isPivotUnwrapped:(struct TSUCellCoord )arg0 ;
-(BOOL)isRegisteredWithCalcEngine:(id)arg0 ;
-(BOOL)isSingleCellOrMergeRange:(struct TSUCellRect )arg0 ;
-(BOOL)isSummaryCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isSummaryColumn:(unsigned short)arg0 ;
-(BOOL)isSummaryOrLabelRow:(unsigned int)arg0 ;
-(BOOL)isSummaryRow:(unsigned int)arg0 ;
-(BOOL)isValidMergeRange:(struct TSUCellRect )arg0 ;
-(BOOL)mergeCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)mergeRangesPartiallyIntersectCellRegion:(id)arg0 ;
-(BOOL)shouldCancelScrollingToSelectionPath:(id)arg0 forChanges:(id)arg1 ;
-(BOOL)shouldDisplaySummaryLabelRowAtGroupLevel:(unsigned char)arg0 ;
-(BOOL)showColumnAtIndex:(unsigned short)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)showRowAtIndex:(unsigned int)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)supportsRichTextUndoAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)unmergeCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)writeCellIDsInCellUIDList:(id)arg0 toVector:(*void)arg1 prunedCellUIDs:(*void)arg2 ;
-(CGFloat)computeDefaultFontHeightForTableStyleArea:(NSUInteger)arg0 ;
-(CGFloat)heightOfRowAtIndex:(unsigned int)arg0 isDefault:(*BOOL)arg1 ;
-(CGFloat)labelRowHeightAtCategoryLevel:(unsigned char)arg0 ;
-(CGFloat)summaryRowHeightAtCategoryLevel:(unsigned char)arg0 ;
-(CGFloat)widthOfColumnAtIndex:(unsigned short)arg0 isDefault:(*BOOL)arg1 ;
-(NSInteger)groupingArrowStateAtCellID:(struct TSUCellCoord )arg0 ;
-(NSInteger)mediaCompatibilityTypeForData:(id)arg0 associatedHint:(id)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 animationFilter:(id)arg1 ;
-(NSUInteger)groupingColumnLevelCountForColumn:(unsigned short)arg0 ;
-(NSUInteger)tableAreaForCellID:(struct TSUCellCoord )arg0 ;
-(NSUInteger)tableAreaForColumn:(unsigned short)arg0 ;
-(NSUInteger)tableAreaForDroppingRowAtIndex:(unsigned int)arg0 ;
-(NSUInteger)tableAreaForRow:(unsigned int)arg0 ;
-(NSUInteger)tableStyleAreaForCellID:(struct TSUCellCoord )arg0 ;
-(NSUInteger)tableStyleAreaForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(NSUInteger)tableStyleAreaForRow:(unsigned int)arg0 ;
-(NSUInteger)textureDeliveryStyleFromDeliveryString:(id)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)UIDSetForIndexes:(id)arg0 isRows:(BOOL)arg1 ;
-(id)_initWithContext:(id)arg0 flatteningFromComplexInfo:(id)arg1 cellRegion:(id)arg2 waitForCalcEngine:(BOOL)arg3 flatteningOptions:(NSInteger)arg4 isSnapshot:(BOOL)arg5 ;
-(id)_initWithContext:(id)arg0 fromSourceInfo:(id)arg1 cellRegion:(id)arg2 tableModel:(id)arg3 waitForCalcEngine:(BOOL)arg4 formulaCoordSpace:(NSInteger)arg5 ;
-(id)allBodyValuesAsPregArgDataListForColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(id)allColumnUIDsAtGroupLevel:(unsigned char)arg0 withFilter:(id)arg1 ;
-(id)allRowUIDsAtGroupLevel:(unsigned char)arg0 withFilter:(id)arg1 ;
-(id)applyCellDiff:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 migrationMap:(id)arg2 inverseCellDiff:(id)arg3 defaultCellStyle:(id)arg4 defaultTextStyle:(id)arg5 ;
-(id)applyCellDiffMap:(id)arg0 migrationHelper:(id)arg1 updateProperties:(id)arg2 ;
-(id)applyCollapseExpandState:(id)arg0 outUndoState:(*id)arg1 ;
-(id)applyConcurrentCellMapToBaseTable:(id)arg0 options:(NSUInteger)arg1 requestPruneMap:(BOOL)arg2 stylesContainer:(id)arg3 migrationHelper:(id)arg4 ;
-(id)categoryRefReferringToCellRef:(*void)arg0 ;
-(id)cellAfterApplyDiff:(id)arg0 toCell:(id)arg1 atCellUID:(struct TSKUIDStructCoord *)arg2 migrationMap:(id)arg3 inverseCellDiff:(id)arg4 concurrentStylesheet:(id)arg5 defaultCellStyle:(id)arg6 defaultTextStyle:(id)arg7 ;
-(id)cellAtCellID:(struct TSUCellCoord )arg0 ;
-(id)cellBorderAtCellID:(struct TSUCellCoord )arg0 ;
-(id)cellIteratorWithFlags:(NSUInteger)arg0 searchFlags:(NSUInteger)arg1 ;
-(id)cellIteratorWithRange:(struct TSUCellRect )arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 ;
-(id)cellIteratorWithRegion:(id)arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 ;
-(id)cellIteratorWithRegion:(id)arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 clampingRange:(struct TSUCellRect )arg3 ;
-(id)cellMapForRegion:(id)arg0 uidBased:(BOOL)arg1 suppressMergeContent:(BOOL)arg2 useCategoriesWildcards:(BOOL)arg3 ;
-(id)cellRangeName:(struct TSCERangeCoordinate )arg0 usedSymbolicName:(*BOOL)arg1 ;
-(id)cellRegionForTableStyleArea:(NSUInteger)arg0 ;
-(id)cellRegionForUIDRange:(*void)arg0 ;
-(id)cellRegionFromCellUIDList:(id)arg0 ;
-(id)cellRegionFromCellUIDList:(id)arg0 includeLabelsWithSummaries:(BOOL)arg1 didAddLabels:(*BOOL)arg2 ;
-(id)cellRegionFromCellUIDLookupList:(id)arg0 ;
-(id)cellRegionFromCellUIDLookupList:(id)arg0 includeLabelsWithSummaries:(BOOL)arg1 didAddLabels:(*BOOL)arg2 ;
-(id)cellRegionFromCellUIDRegion:(id)arg0 ;
-(id)cellRegionWithConditionalStyleMatchingCell:(struct TSUCellCoord )arg0 ;
-(id)cellStyleAtCellID:(struct TSUCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleAtCellUID:(struct TSKUIDStructCoord *)arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfColumnAtIndex:(unsigned short)arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfRowAtIndex:(unsigned int)arg0 isDefault:(*BOOL)arg1 ;
-(id)cellTractRefForUIDRectRef:(id)arg0 ;
-(id)cellUIDListFromCellRegion:(id)arg0 ;
-(id)cellUIDListFromCellRegion:(id)arg0 useCategoriesWildcards:(BOOL)arg1 ;
-(id)cellUIDRegionFromCellRegion:(id)arg0 ;
-(id)cellValueFromCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(id)cellValueViewStringAtCellID:(struct TSUCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)changeDescriptorsForReorganizingFromRowUids:(*void)arg0 toRowUids:(*void)arg1 ;
-(id)characterFillAtCellID:(struct TSUCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)childEnumeratorForUserFlags:(NSUInteger)arg0 ;
-(id)chromeLabelForCellID:(struct TSUCellCoord )arg0 ;
-(id)chromeLabelForColumn:(unsigned short)arg0 ;
-(id)chromeLabelForRow:(unsigned int)arg0 ;
-(id)collapseSummaryGroupUIDs:(id)arg0 ;
-(id)columnDisplayNameForCategoryLevel:(unsigned char)arg0 ;
-(id)columnIndexesForUIDs:(*void)arg0 ;
-(id)columnNameForCellID:(struct TSUCellCoord )arg0 restrictToBodyRange:(BOOL)arg1 ;
-(id)columnNameForColumnIndex:(unsigned short)arg0 ;
-(id)columnNameForColumnIndex:(unsigned short)arg0 withFallbackFormat:(id)arg1 ;
-(id)commandForSettingTableDirection:(int)arg0 icc:(id)arg1 ;
-(id)commentHostingAtCellID:(struct TSUCellCoord )arg0 ;
-(id)commentHostingAtCellID:(struct TSUCellCoord )arg0 forCommentStorage:(id)arg1 ;
-(id)compatibilityCheckerForData:(id)arg0 associatedHint:(id)arg1 ;
-(id)concurrentCellMapForRegion:(id)arg0 suppressMergeContent:(BOOL)arg1 ;
-(id)conditionalStyleSetAtCellID:(struct TSUCellCoord )arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)createDetailTableForPivotTableCell:(struct TSUCellCoord )arg0 ;
-(id)defaultCellStyleForCellID:(struct TSUCellCoord )arg0 ;
-(id)defaultCellStyleForCellID:(struct TSUCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultCellStyleForTableStyleArea:(NSUInteger)arg0 ;
-(id)defaultTextStyleForCellID:(struct TSUCellCoord )arg0 ;
-(id)defaultTextStyleForCellID:(struct TSUCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultTextStyleForTableStyleArea:(NSUInteger)arg0 ;
-(id)expandCellRegionToCoverMergedCells:(id)arg0 ;
-(id)expandSummaryGroupUIDs:(id)arg0 ;
-(id)fillForColumn:(unsigned short)arg0 ;
-(id)fillForRow:(unsigned int)arg0 ;
-(id)filteringColumnNameForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(id)filteringColumnNameForColumnIndex:(unsigned short)arg0 ;
-(id)filteringDisplayColumnNameForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(id)formulaAtCellID:(struct TSUCellCoord )arg0 ;
-(id)geometryForRTLTableWithGeometry:(id)arg0 ;
-(id)indexesForBodyRowsInGroupWithRowAtIndex:(unsigned int)arg0 ;
-(id)indexesForCategoryColumnsInRegion:(id)arg0 ;
-(id)indexesForColumnsContainedByGroupUIDs:(id)arg0 ;
-(id)indexesForGroupingColumnsInRegion:(id)arg0 ;
-(id)indexesForLabelRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLabelRowsAtGroupLevel:(unsigned char)arg0 inRegion:(id)arg1 ;
-(id)indexesForLabelRowsInRegion:(id)arg0 ;
-(id)indexesForLabelRowsUpToGroupLevel:(unsigned char)arg0 omitGroupsWithUids:(*void)arg1 ;
-(id)indexesForLeadingColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingColumnsInRegion:(id)arg0 ;
-(id)indexesForLeadingRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingRowsInRegion:(id)arg0 ;
-(id)indexesForLeadingSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForRowsContainedByGroupUIDs:(id)arg0 ;
-(id)indexesForSummaryAndLabelRowsInRegion:(id)arg0 ;
-(id)indexesForSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForSummaryColumnsFromGroupLevel:(unsigned char)arg0 toGroupLevel:(unsigned char)arg1 ;
-(id)indexesForSummaryColumnsInRegion:(id)arg0 ;
-(id)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg0 inRegion:(id)arg1 ;
-(id)indexesForSummaryRowsFromGroupLevel:(unsigned char)arg0 toGroupLevel:(unsigned char)arg1 ;
-(id)indexesForSummaryRowsInRegion:(id)arg0 ;
-(id)indexesForSummaryRowsUpToGroupLevel:(unsigned char)arg0 omitGroupsWithUids:(*void)arg1 ;
-(id)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfFilteredColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfFilteredRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfVisibleColumnsInCellRegion:(id)arg0 ;
-(id)indexesOfVisibleColumnsInColumnRange:(id)arg0 ;
-(id)indexesOfVisibleRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfVisibleRowsInCellRegion:(id)arg0 ;
-(id)indexesOfVisibleRowsInRowRange:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initAsDetailTableWithContext:(id)arg0 sourcePivotTableInfo:(id)arg1 pivotSourceCell:(struct TSUCellCoord )arg2 ;
-(id)initForTestingWithContext:(id)arg0 rows:(unsigned int)arg1 columns:(unsigned int)arg2 ;
-(id)initPivotTableWithContext:(id)arg0 sourceTableInfo:(id)arg1 ;
-(id)initPivotTableWithContext:(id)arg0 sourceTableInfo:(id)arg1 sourceBodyRange:(struct TSUCellRect )arg2 sourceHeaderRowRange:(struct _NSRange )arg3 ;
-(id)initPivotTableWithContext:(id)arg0 sourceTableInfo:(id)arg1 sourceBodyRange:(struct TSUCellRect )arg2 sourceHeaderRowRange:(struct _NSRange )arg3 optionalDataModel:(id)arg4 ;
-(id)initWithContext:(id)arg0 fromSourceInfo:(id)arg1 cellRegion:(id)arg2 waitForCalcEngine:(BOOL)arg3 flattenCategories:(NSInteger)arg4 isSnapshot:(BOOL)arg5 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 rows:(unsigned int)arg2 columns:(unsigned int)arg3 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 rows:(unsigned int)arg2 columns:(unsigned int)arg3 styles:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 styles:(id)arg2 ;
-(id)initWithContext:(id)arg0 otherTableInfo:(id)arg1 ;
-(id)labelValueViewStringAtCellID:(struct TSUCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)mappingForSortingColumns:(id)arg0 withRules:(id)arg1 ;
-(id)mappingForSortingRows:(id)arg0 withRules:(id)arg1 ;
-(id)mappingFromRowUids:(*void)arg0 toRowUids:(*void)arg1 ;
-(id)mergeActionForRegion:(id)arg0 ;
-(id)mergeActionForRegion:(id)arg0 nonOriginPartialsOnly:(BOOL)arg1 ;
-(id)mergedGridIndicesForDimension:(NSInteger)arg0 ;
-(id)mergesIntersectingCellRegion:(id)arg0 ;
-(id)mergesIntersectingRange:(struct TSUCellRect )arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableColumnIndexesForUIDs:(*void)arg0 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 notFoundUIDs:(id)arg2 ;
-(id)mutableRowIndexesForUIDs:(*void)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)p_cellRegionFromWildcardCellUIDs:(struct vector<TSKUIDStructCoord, std::allocator<TSKUIDStructCoord>> )arg0 includeLabelsWithSummaries:(BOOL)arg1 didAddLabels:(*BOOL)arg2 ;
-(id)p_fillResourceWithFilename:(id)arg0 ;
-(id)p_layoutEngineCreateIfNeeded:(BOOL)arg0 ;
-(id)p_mappingForSortingRowsOrColumns:(id)arg0 withRules:(id)arg1 dimension:(NSInteger)arg2 ;
-(id)p_popupItemsForStrings:(id)arg0 ;
-(id)peerCellRegionForCellRegion:(id)arg0 ;
-(id)performActionReturningInverse:(id)arg0 ;
-(id)pivotHeaderColumnDisplayNameAtIndex:(unsigned short)arg0 ;
-(id)pivotHeaderRowDisplayNameAtIndex:(unsigned int)arg0 ;
-(id)pivotLeadingColumnDisplayNameAtIndex:(unsigned short)arg0 ;
-(id)pivotLeadingRowDisplayNameAtIndex:(unsigned int)arg0 ;
-(id)populatedCategoryGroupLevelsInColumn:(unsigned short)arg0 ;
-(id)regionForValueOrCommentCellsInRange:(struct TSUCellRect )arg0 ;
-(id)regionSubtractingCategoryColumnsAndRows:(id)arg0 ;
-(id)removeReturningInverseForRegion:(id)arg0 ;
-(id)rowIndexesForUIDs:(*void)arg0 ;
-(id)rowNameForCellID:(struct TSUCellCoord )arg0 restrictToBodyRange:(BOOL)arg1 ;
-(id)searchForAnnotationsWithHitBlock:(id)arg0 ;
-(id)shrinkReturningInverseForRegion:(id)arg0 ;
-(id)sortTagsForSortingColumns:(id)arg0 byRows:(*void)arg1 ;
-(id)sortTagsForSortingRows:(id)arg0 byColumns:(*void)arg1 ;
-(id)stringAtCellID:(struct TSUCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)strokeExporterReturningDefaultStrokes:(BOOL)arg0 ;
-(id)strokeLayerForBottomOfRow:(unsigned int)arg0 ;
-(id)strokeLayerForLeftSideOfColumn:(unsigned short)arg0 ;
-(id)strokeLayerForRightSideOfColumn:(unsigned short)arg0 ;
-(id)strokeLayerForTopOfRow:(unsigned int)arg0 ;
-(id)tableAreasForCellRange:(struct TSUCellRect )arg0 ;
-(id)textStyleAtCellID:(struct TSUCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleAtCellUID:(struct TSKUIDStructCoord *)arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleForCellWithEmptyStyleAtCellUID:(struct TSKUIDStructCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfColumnAtIndex:(unsigned short)arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfRowAtIndex:(unsigned int)arg0 isDefault:(*BOOL)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(int)getCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(int)getCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 holdingReadLockWithAccessController:(id)arg2 ;
-(int)getCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 suppressCellBorder:(BOOL)arg2 ;
-(int)getCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)getCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 suppressCellBorder:(BOOL)arg2 ;
-(int)getDefaultCell:(id)arg0 forCellID:(struct TSUCellCoord )arg1 ;
-(int)getDefaultCell:(id)arg0 forCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)getDefaultCell:(id)arg0 forTableStyleArea:(NSUInteger)arg1 ;
-(int)getValue:(struct TSCEValue *)arg0 atCellID:(struct TSUCellCoord )arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
-(int)insertColumnsAtIndex:(unsigned short)arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 ;
-(int)insertRowsAtIndex:(unsigned int)arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 ;
-(int)p_fillPropertyForStyle:(id)arg0 ;
-(int)parseNumberFromTableName:(id)arg0 ;
-(int)registerWithCalcEngine:(id)arg0 ;
-(int)removeCommentStorageAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(int)writingDirectionForCellwithTableDefault:(id)arg0 ;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(struct TSCERangeRef )referenceToHiddenStateFromColumn:(unsigned short)arg0 toColumn:(unsigned short)arg1 ;
-(struct TSCERangeRef )referenceToHiddenStateFromRow:(unsigned int)arg0 toRow:(unsigned int)arg1 ;
-(struct TSKUIDStruct )columnUIDForColumnIndex:(unsigned short)arg0 ;
-(struct TSKUIDStruct )firstUidFromUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(struct TSKUIDStruct )rowUIDForRowIndex:(unsigned int)arg0 ;
-(struct TSKUIDStructCoord )cellUIDForCellID:(struct TSUCellCoord )arg0 ;
-(struct TSKUIDStructCoord )cellUIDForCellID:(struct TSUCellCoord )arg0 useCategoriesWildcards:(BOOL)arg1 ;
-(struct TSKUIDStructTract )cellUIDRangeForCellRange:(struct TSUCellRect )arg0 ;
-(struct TSUCellCoord )cellIDAboveCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )cellIDBelowCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )cellIDForCellContainingRichTextStorage:(id)arg0 ;
-(struct TSUCellCoord )cellIDForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(struct TSUCellCoord )cellIDLeftOfCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )cellIDRightOfCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )mergeOriginForCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellRect )bodyRangeForLowestLevelGroupEnclosingCellAtCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellRect )cellRangeForTableArea:(NSUInteger)arg0 ;
-(struct TSUCellRect )cellRangeForUIDRange:(*void)arg0 ;
-(struct TSUCellRect )expandCellRangeToCoverMergedCells:(struct TSUCellRect )arg0 ;
-(struct TSUCellRect )mergeRangeAtCellID:(struct TSUCellCoord )arg0 ;
-(struct _NSRange )columnRangeForUIDs:(*void)arg0 ;
-(struct _NSRange )rowRangeForUIDs:(*void)arg0 ;
-(struct _NSRange )rowRangeUnderSummaryOrLabelRow:(unsigned int)arg0 ;
-(struct vector<TSUCellRect, std::allocator<TSUCellRect>> )mergeRangesAndCrumbsIntersectingRange:(struct TSUCellRect )arg0 ;
-(struct vector<TSUCellRect, std::allocator<TSUCellRect>> )mergeRangesIntersectingRange:(struct TSUCellRect )arg0 ;
-(unsigned char)aggregateTypeForColumnUID:(struct TSKUIDStruct )arg0 atGroupLevel:(unsigned char)arg1 ;
-(unsigned char)cellValueTypeAtCellID:(struct TSUCellCoord )arg0 ;
-(unsigned char)cellValueTypeAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(unsigned char)groupLevelAtLabelRow:(unsigned int)arg0 ;
-(unsigned char)groupLevelAtRow:(unsigned int)arg0 ;
-(unsigned char)groupLevelAtSummaryColumn:(unsigned short)arg0 ;
-(unsigned char)groupLevelAtSummaryRow:(unsigned int)arg0 ;
-(unsigned char)groupLevelForGroupUid:(struct TSKUIDStruct *)arg0 ;
-(unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg0 ;
-(unsigned char)hidingActionForRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)numberOfGroupLevelsShowingLabelsUnderGroupAtIndex:(unsigned int)arg0 ;
-(unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)rowIndexForRowUID:(struct TSKUIDStruct )arg0 ;
-(unsigned int)rowIndexForUUIDBytes:(unsigned char)arg0 ;
-(unsigned short)columnIndexForColumnUID:(struct TSKUIDStruct )arg0 ;
-(unsigned short)columnIndexForGroupingColumn:(id)arg0 ;
-(unsigned short)columnIndexForUUIDBytes:(unsigned char)arg0 ;
-(unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg0 ;
-(void)_correctAndCheckStateSuppressingAssertions:(BOOL)arg0 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)applyCellMap:(id)arg0 outPrunedCellMap:(id)arg1 outInverseCellMap:(id)arg2 options:(NSUInteger)arg3 stylesContainer:(id)arg4 ;
-(void)applyGroupingColumns:(id)arg0 ;
-(void)applyPivotWithColumns:(id)arg0 rows:(id)arg1 aggregates:(id)arg2 flatteningDimension:(NSInteger)arg3 optionsMap:(id)arg4 pivotRowColumnRuleChangeUid:(struct TSKUIDStruct )arg5 pivotAggregateRuleChangeUid:(struct TSKUIDStruct )arg6 ;
-(void)applyWritingDirection:(int)arg0 toCell:(id)arg1 cellID:(struct TSUCellCoord )arg2 ;
-(void)chooseUniqueNameInContainer:(id)arg0 forPaste:(BOOL)arg1 ;
-(void)chooseUniqueNameInContainer:(id)arg0 forPaste:(BOOL)arg1 needsNewName:(BOOL)arg2 ;
-(void)chooseUniqueNameInContainer:(id)arg0 forPaste:(BOOL)arg1 needsNewName:(BOOL)arg2 avoidNames:(id)arg3 ;
-(void)clearCommentHostingMapForCommentStorage:(id)arg0 ;
-(void)convertCellUIDLookupList:(id)arg0 toCellRangeVector:(*void)arg1 prunedSummaryCellUIDs:(*void)arg2 ;
-(void)convertFormulasToUidForm:(id)arg0 atCellID:(struct TSUCellCoord )arg1 preserveHostCell:(BOOL)arg2 ;
-(void)enableFilterSet:(BOOL)arg0 ;
-(void)enumerateAllAnnotationsInModelWithHitBlock:(id)arg0 ;
-(void)enumerateCellStringsForRows:(unsigned int)arg0 rowCount:(unsigned int)arg1 usingBlock:(id)arg2 ;
-(void)enumerateCellStringsUsingBlock:(id)arg0 ;
-(void)enumerateMergesIntersectingCellRegion:(id)arg0 usingBlock:(id)arg1 ;
-(void)flattenGroupValuesIfNeededForCell:(id)arg0 viewCellCoord:(struct TSUViewCellCoord )arg1 summaryAndLabelRows:(id)arg2 categoryColumns:(id)arg3 ;
-(void)getTextPropertiesWithCell:(id)arg0 cellID:(struct TSUCellCoord )arg1 wraps:(*BOOL)arg2 alignment:(*int)arg3 verticalAlignment:(*int)arg4 padding:(*id)arg5 ;
-(void)getUUIDBytes:(unsigned char)arg0 forColumnIndex:(unsigned short)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg0 forRowIndex:(unsigned int)arg1 ;
-(void)handlePivotSorting:(BOOL)arg0 ;
-(void)importDeferredRemoveGroupingRowsAtIndexes:(id)arg0 ;
-(void)insertColumnsAtIndex:(unsigned short)arg0 count:(unsigned int)arg1 addBefore:(BOOL)arg2 ;
-(void)insertRowsAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 addBefore:(BOOL)arg2 ;
-(void)iterateCellsInRange:(struct TSUCellRect )arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)iterateCellsInRegion:(id)arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 clampingRange:(struct TSUCellRect )arg3 usingBlock:(id)arg4 ;
-(void)iterateCellsInRegion:(id)arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)iterateCellsWithFlags:(NSUInteger)arg0 searchFlags:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)mapTableStylesToStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)modifiedTextPropertiesForCategoryOrPivotCellAtCellID:(struct TSUCellCoord )arg0 wraps:(*BOOL)arg1 padding:(*id)arg2 alignment:(*int)arg3 ;
-(void)moveColumnRange:(struct _NSRange )arg0 toColumnIndex:(unsigned short)arg1 ;
-(void)moveRowRange:(struct _NSRange )arg0 toRowIndex:(unsigned int)arg1 ;
-(void)p_bakeMixedCellStrokesIntoTable:(id)arg0 outgoingTable:(id)arg1 incomingTable:(id)arg2 fraction:(CGFloat)arg3 ;
-(void)p_initializeDefaultHeight:(CGFloat)arg0 andWidth:(CGFloat)arg1 ;
-(void)p_iterateCellsAndTerminateWithIterator:(id)arg0 usingBlock:(id)arg1 ;
-(void)p_performCommentStorageDOLC:(id)arg0 ;
-(void)p_postCommentNotificationFromDiff:(id)arg0 inverseDiff:(id)arg1 cellID:(struct TSUCellCoord )arg2 ;
-(void)performReadForOneOffFormulaEvaluation:(id)arg0 forCellCoord:(struct TSUCellCoord )arg1 ;
-(void)postCommentNotificationForStorage:(id)arg0 atCellID:(struct TSUCellCoord )arg1 notificationKey:(id)arg2 ;
-(void)prepareToApplyConcurrentCellMap:(id)arg0 ;
-(void)rearrangeWithMapping:(id)arg0 ;
-(void)registerAllFormulasWithCalculationEngine:(id)arg0 ;
-(void)registerAllFormulasWithCalculationEngine:(id)arg0 wasCrossDocumentPaste:(BOOL)arg1 wasUndo:(BOOL)arg2 ;
-(void)registerWithCalcEngineForDocumentLoad:(id)arg0 ownerKind:(unsigned short)arg1 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 bakeForBadRefs:(BOOL)arg2 ;
-(void)removeAnnotationsFromColumnsAtIndexes:(id)arg0 ;
-(void)removeAnnotationsFromRowsAtIndexes:(id)arg0 ;
-(void)removeColumnsAtIndex:(unsigned short)arg0 count:(unsigned int)arg1 ;
-(void)removeColumnsAtIndexes:(id)arg0 ;
-(void)removeRowsAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)removeRowsAtIndexes:(id)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)scaleInfoGeometry:(struct CGSize )arg0 ;
-(void)swapRowAtIndex:(unsigned int)arg0 withRowAtIndex:(unsigned int)arg1 ;
-(void)unregisterFromCalcEngine:(id)arg0 ;
-(void)updateTableRowColumnStylesWithBlock:(id)arg0 ;
-(void)upgradeDuringDocumentUpgradeIfNeeded:(NSUInteger)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;
-(void)willMakeGroupingChangesInRowUIDs:(id)arg0 ;


@end


#endif