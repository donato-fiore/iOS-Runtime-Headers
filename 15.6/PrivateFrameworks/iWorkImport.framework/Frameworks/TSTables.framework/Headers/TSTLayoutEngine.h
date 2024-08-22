// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTLAYOUTENGINE_H
#define TSTLAYOUTENGINE_H

@class TSDFill, NSPointerArray, NSMutableArray, TSKChangeNotifier, NSMutableSet, NSString, TSWPColumnStyle, TSUColor, TSDInfoGeometry, NSCountedSet, TSDLayoutGeometry, NSIndexSet, TSUWidthLimitedQueue, NSMutableDictionary;
@protocol TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableMergeRangeProviding, OS_dispatch_group, TSTLayoutDynamicCellFillProtocol, TSTLayoutDynamicContentProtocol, OS_dispatch_queue, TSWPStyleProviding;

#import <Foundation/Foundation.h>

#import "TSTWPColumnCache.h"
#import "TSTCellRegion.h"
#import "TSTStrokeWidthCache.h"
#import "TSTDupContentCache.h"
#import "TSTLayout.h"
#import "TSTLayoutDynamicResizeInfo.h"
#import "TSTCellSelection.h"
#import "TSTFontInfoCache.h"
#import "TSTHiddenRowsColumnsCache.h"
#import "TSTMergeRangeSortedSet.h"
#import "TSTRWRetainedPointerKeyDictionary.h"
#import "TSTConcurrentMutableIndexSet.h"
#import "TSTStrokeDefaultVendor.h"
#import "TSTTableInfo.h"
#import "TSTTextEngineDelegate.h"
#import "TSTWidthHeightCache.h"

@interface TSTLayoutEngine : NSObject <TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableMergeRangeProviding>

 {
    CGFloat _tableDefaultFontHeightForArea;
    NSObject<OS_dispatch_group> *_layoutInFlight;
    _opaque_pthread_rwlock_t _strokesRWLock;
    _opaque_pthread_rwlock_t _contentRWLock;
    os_unfair_lock_s _dynamicModeUnfairLock;
}


@property (nonatomic) BOOL bandedFillIsValid; // ivar: _bandedFillIsValid
@property (retain, nonatomic) TSDFill *bandedFillObject; // ivar: _bandedFillObject
@property (retain, nonatomic) NSPointerArray *bottomRowStrokes; // ivar: _bottomRowStrokes
@property (nonatomic) NSUInteger cachedMaxNumberOfColumns; // ivar: _cachedMaxNumberOfColumns
@property (nonatomic) NSUInteger cachedMaxNumberOfRows; // ivar: _cachedMaxNumberOfRows
@property (nonatomic) unsigned int cachedNumberOfColumns; // ivar: _cachedNumberOfColumns
@property (nonatomic) unsigned int cachedNumberOfFooterOrGrandTotalRows; // ivar: _cachedNumberOfFooterOrGrandTotalRows
@property (nonatomic) unsigned int cachedNumberOfFooterRows; // ivar: _cachedNumberOfFooterRows
@property (nonatomic) unsigned int cachedNumberOfGrandTotalColumns; // ivar: _cachedNumberOfGrandTotalColumns
@property (nonatomic) unsigned int cachedNumberOfHeaderColumns; // ivar: _cachedNumberOfHeaderColumns
@property (nonatomic) unsigned int cachedNumberOfHeaderRows; // ivar: _cachedNumberOfHeaderRows
@property (nonatomic) unsigned int cachedNumberOfRows; // ivar: _cachedNumberOfRows
@property (nonatomic) CGFloat cachedTableNameHeight; // ivar: _cachedTableNameHeight
@property (readonly, nonatomic) TSUCellRect categoryColumnsCellRange;
@property (retain, nonatomic) TSTWPColumnCache *cellIDToWPColumnCache; // ivar: _cellIDToWPColumnCache
@property (readonly, nonatomic) TSUCellRect cellRange;
@property (retain, nonatomic) TSTCellRegion *cellRegionForClearedMergeStrokes; // ivar: _cellRegionForClearedMergeStrokes
@property (retain, nonatomic) NSMutableArray *changeDescriptors; // ivar: _changeDescriptors
@property (weak, nonatomic) TSKChangeNotifier *changeNotifier; // ivar: _changeNotifier
@property (retain, nonatomic) TSTStrokeWidthCache *columnToStrokeWidthCache; // ivar: _columnToStrokeWidthCache
@property (retain, nonatomic) NSMutableSet *contentReadingThreads; // ivar: _contentReadingThreads
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSWPColumnStyle *defaultColumnStyle; // ivar: _defaultColumnStyle
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSTDupContentCache *dupContentCache; // ivar: _dupContentCache
@property (nonatomic) CGFloat dynamicAddOrRemoveColumnElementSize; // ivar: _dynamicAddOrRemoveColumnElementSize
@property (nonatomic) CGFloat dynamicAddOrRemoveRowElementSize; // ivar: _dynamicAddOrRemoveRowElementSize
@property (nonatomic) BOOL dynamicBandedFill; // ivar: _dynamicBandedFill
@property (nonatomic) BOOL dynamicBandedFillSetting; // ivar: _dynamicBandedFillSetting
@property (retain, nonatomic) NSObject<TSTLayoutDynamicCellFillProtocol> *dynamicCellFillDelegate; // ivar: _dynamicCellFillDelegate
@property (nonatomic) int dynamicColumnAdjustment; // ivar: _dynamicColumnAdjustment
@property (nonatomic) CGFloat dynamicColumnTabSize; // ivar: _dynamicColumnTabSize
@property (retain, nonatomic) NSObject<TSTLayoutDynamicContentProtocol> *dynamicContentDelegate; // ivar: _dynamicContentDelegate
@property (retain, nonatomic) TSUColor *dynamicFontColor; // ivar: _dynamicFontColor
@property (nonatomic) TSUCellRect dynamicFontColorCellRange; // ivar: _dynamicFontColorCellRange
@property (readonly, nonatomic) CGFloat dynamicFooterHeight; // ivar: _dynamicFooterHeight
@property (nonatomic) CGFloat dynamicHeightResize; // ivar: _dynamicHeightResize
@property (nonatomic) TSUCellRect dynamicHidingContent; // ivar: _dynamicHidingContent
@property (nonatomic) TSUCellRect dynamicHidingRowsCols; // ivar: _dynamicHidingRowsCols
@property (nonatomic) NSInteger dynamicHidingRowsColsDirection; // ivar: _dynamicHidingRowsColsDirection
@property (nonatomic) TSUCellRect dynamicHidingText; // ivar: _dynamicHidingText
@property (retain, nonatomic) TSDInfoGeometry *dynamicInfoGeometry; // ivar: _dynamicInfoGeometry
@property (retain, nonatomic) TSTLayout *dynamicLayout; // ivar: _dynamicLayout
@property (retain, nonatomic) NSCountedSet *dynamicLayoutParticipants; // ivar: _dynamicLayoutParticipants
@property (nonatomic) TSUCellRect dynamicRemovingText; // ivar: _dynamicRemovingText
@property (nonatomic) BOOL dynamicRepResize; // ivar: _dynamicRepResize
@property (nonatomic) BOOL dynamicRepResizeSessionInProgress; // ivar: _dynamicRepResizeSessionInProgress
@property (nonatomic) BOOL dynamicRepressFrozenHeaderColumns; // ivar: _dynamicRepressFrozenHeaderColumns
@property (nonatomic) BOOL dynamicRepressFrozenHeaderRows; // ivar: _dynamicRepressFrozenHeaderRows
@property (retain, nonatomic) TSTLayoutDynamicResizeInfo *dynamicResizeInfo; // ivar: _dynamicResizeInfo
@property (nonatomic) CGFloat dynamicResizingColumnAdjustment; // ivar: _dynamicResizingColumnAdjustment
@property (nonatomic) TSUCellRect dynamicResizingColumnRange; // ivar: _dynamicResizingColumnRange
@property (nonatomic) BOOL dynamicResizingColumns; // ivar: _dynamicResizingColumns
@property (nonatomic) CGFloat dynamicResizingRowAdjustment; // ivar: _dynamicResizingRowAdjustment
@property (nonatomic) TSUCellRect dynamicResizingRowRange; // ivar: _dynamicResizingRowRange
@property (nonatomic) BOOL dynamicResizingRows; // ivar: _dynamicResizingRows
@property (nonatomic) TSUCellRect dynamicRevealingRowsCols; // ivar: _dynamicRevealingRowsCols
@property (nonatomic) NSInteger dynamicRevealingRowsColsDirection; // ivar: _dynamicRevealingRowsColsDirection
@property (nonatomic) int dynamicRowAdjustment; // ivar: _dynamicRowAdjustment
@property (nonatomic) CGFloat dynamicRowTabSize; // ivar: _dynamicRowTabSize
@property (copy, nonatomic) TSDLayoutGeometry *dynamicSavedLayoutGeometry; // ivar: _dynamicSavedLayoutGeometry
@property (retain, nonatomic) TSTCellSelection *dynamicSelection; // ivar: _dynamicSelection
@property (nonatomic) TSUCellCoord dynamicSuppressingConditionalStylesCellID; // ivar: _dynamicSuppressingConditionalStylesCellID
@property (nonatomic) CGFloat dynamicTableNameResize; // ivar: _dynamicTableNameResize
@property (nonatomic) CGFloat dynamicWidthResize; // ivar: _dynamicWidthResize
@property (nonatomic) BOOL emptyFilteredTable; // ivar: _emptyFilteredTable
@property (readonly, nonatomic) TSUCellRect entireActualHeaderColumnsCellRange;
@property (readonly, nonatomic) TSUCellRect entireBodyCellRange;
@property (readonly, nonatomic) TSUCellRect entireBodyRowsCellRange;
@property (readonly, nonatomic) TSUCellRect entireFooterRowsCellRange;
@property (readonly, nonatomic) TSUCellRect entireHeaderColumnsCellRange;
@property (readonly, nonatomic) TSUCellRect entireHeaderRowsCellRange;
@property (retain, nonatomic) NSPointerArray *fixedColumnWidthStack; // ivar: _fixedColumnWidthStack
@property (retain, nonatomic) TSTFontInfoCache *fontInfoCache; // ivar: _fontInfoCache
@property (readonly, nonatomic) BOOL hasActiveFilters;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL headerColumnsFrozen; // ivar: _headerColumnsFrozen
@property (nonatomic) BOOL headerColumnsRepeat; // ivar: _headerColumnsRepeat
@property (nonatomic) BOOL headerRowsFrozen; // ivar: _headerRowsFrozen
@property (nonatomic) BOOL headerRowsRepeat; // ivar: _headerRowsRepeat
@property (readonly, nonatomic) NSIndexSet *hiddenColumnIndices;
@property (readonly, nonatomic) NSIndexSet *hiddenRowIndices;
@property (retain, nonatomic) TSTHiddenRowsColumnsCache *hiddenRowsColumnsCache; // ivar: _hiddenRowsColumnsCache
@property (nonatomic, getter=isInDynamicLayoutMode) BOOL inDynamicLayoutMode; // ivar: _inDynamicLayoutMode
@property (nonatomic) BOOL isGrouped; // ivar: _isGrouped
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutConcurrentQueue; // ivar: _layoutConcurrentQueue
@property (retain, nonatomic) TSUWidthLimitedQueue *layoutMeasureQueue; // ivar: _layoutMeasureQueue
@property (retain, nonatomic) TSUWidthLimitedQueue *layoutValidateQueue; // ivar: _layoutValidateQueue
@property (retain, nonatomic) NSPointerArray *leftColumnStrokes; // ivar: _leftColumnStrokes
@property (nonatomic) unsigned int maxConcurrentTasks; // ivar: _maxConcurrentTasks
@property (retain, nonatomic) TSTMergeRangeSortedSet *mergeRangesForLayoutPass; // ivar: _mergeRangesForLayoutPass
@property (nonatomic) unsigned int numCellsPerTask; // ivar: _numCellsPerTask
@property (readonly, nonatomic) unsigned short numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfFooterOrGrandTotalRows;
@property (readonly, nonatomic) unsigned int numberOfFooterRows;
@property (readonly, nonatomic) unsigned int numberOfGrandTotalColumns;
@property (readonly, nonatomic) unsigned int numberOfHeaderColumns;
@property (readonly, nonatomic) unsigned int numberOfHeaderRows;
@property (readonly, nonatomic) unsigned int numberOfNonHiddenFooterRows;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (retain, nonatomic) TSTRWRetainedPointerKeyDictionary *paraStyleToHeightCache; // ivar: _paraStyleToHeightCache
@property (nonatomic) BOOL processHiddenRowsForExport; // ivar: _processHiddenRowsForExport
@property (retain, nonatomic) NSPointerArray *rightColumnStrokes; // ivar: _rightColumnStrokes
@property (retain, nonatomic) TSTStrokeWidthCache *rowToStrokeHeightCache; // ivar: _rowToStrokeHeightCache
@property (retain, nonatomic) TSTConcurrentMutableIndexSet *spillStrokeColumns; // ivar: _spillStrokeColumns
@property (retain, nonatomic) TSTStrokeDefaultVendor *strokesDefaultVendor; // ivar: _strokesDefaultVendor
@property (retain, nonatomic) NSPointerArray *styleProviderStack; // ivar: _styleProviderStack
@property (readonly, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: _styleProvidingSource
@property (readonly) Class superclass;
@property (nonatomic) BOOL tableDefaultFontHeightsAreValid; // ivar: _tableDefaultFontHeightsAreValid
@property (nonatomic) int tableEnvironment; // ivar: _tableEnvironment
@property (nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (nonatomic) CGRect tableNameBounds; // ivar: _tableNameBounds
@property (nonatomic) BOOL tableNameEnabled; // ivar: _tableNameEnabled
@property (readonly, nonatomic) NSMutableDictionary *tableNameHeightCache; // ivar: _tableNameHeightCache
@property (nonatomic) BOOL tableNameHeightValid; // ivar: _tableNameHeightValid
@property (retain, nonatomic) TSTTextEngineDelegate *tableNameTextEngineDelegate; // ivar: _tableNameTextEngineDelegate
@property (nonatomic) int tableRowsBehavior; // ivar: _tableRowsBehavior
@property (retain, nonatomic) TSTWPColumnCache *tempWPColumnCache; // ivar: _tempWPColumnCache
@property (retain, nonatomic) NSPointerArray *topRowStrokes; // ivar: _topRowStrokes
@property (nonatomic) BOOL useBandedFill; // ivar: _useBandedFill
@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;
@property (retain, nonatomic) TSTWidthHeightCache *widthHeightCache; // ivar: _widthHeightCache


+(CGFloat)effectiveTableNameHeightForTable:(id)arg0 ;
+(int)tableRowsBehaviorForTable:(id)arg0 andEnvironment:(int)arg1 ;
-(BOOL)adjustGridColumnForVisibility:(*unsigned int)arg0 isLeft:(BOOL)arg1 ;
-(BOOL)adjustGridRowForVisibility:(*unsigned int)arg0 isTop:(BOOL)arg1 ;
-(BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyRowsUserHiddenInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)cell:(*id)arg0 forCellID:(struct TSUCellCoord )arg1 ;
-(BOOL)containsAnyContentInRange:(struct TSUCellRect )arg0 ;
-(BOOL)hasGroupingArrowAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasHiddenColumnAtIndex:(unsigned short)arg0 ;
-(BOOL)hasHiddenRowAtIndex:(unsigned int)arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)hasStrokeSpillForLeftGridColumn:(unsigned int)arg0 inRow:(unsigned int)arg1 ;
-(BOOL)hintIsValid:(id)arg0 ;
-(BOOL)isAPivotTable;
-(BOOL)isCategorized;
-(BOOL)isCategoryColumn:(unsigned short)arg0 ;
-(BOOL)isCategoryColumnUneditableCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryGroupValueCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryGroupValueLabelCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryLabelCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isCategoryLastSummaryRowCollapsed;
-(BOOL)isDynamicallyChangingCellFill;
-(BOOL)isDynamicallyChangingColumnCount;
-(BOOL)isDynamicallyChangingContent;
-(BOOL)isDynamicallyChangingFontColorOfCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)isDynamicallyChangingInfoGeometry;
-(BOOL)isDynamicallyChangingRowCount;
-(BOOL)isDynamicallyChangingRowOrColumnCount;
-(BOOL)isDynamicallyChangingSelection;
-(BOOL)isDynamicallyColumnTabResizing;
-(BOOL)isDynamicallyHidingContentOfCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)isDynamicallyHidingRowsCols;
-(BOOL)isDynamicallyHidingRowsCols:(NSInteger)arg0 rowColIndex:(unsigned int)arg1 ;
-(BOOL)isDynamicallyHidingRowsColsCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)isDynamicallyHidingTextOfCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)isDynamicallyRemovingTextOfCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)isDynamicallyRepressingFrozenHeaderColumns;
-(BOOL)isDynamicallyRepressingFrozenHeaderRows;
-(BOOL)isDynamicallyResizingCellIDForColumnRowAdd:(struct TSUCellCoord )arg0 ;
-(BOOL)isDynamicallyResizingForColumnRowAdd:(NSInteger)arg0 ;
-(BOOL)isDynamicallyResizingForColumnRowAdd:(NSInteger)arg0 rowColIndex:(unsigned int)arg1 ;
-(BOOL)isDynamicallyResizingTableName;
-(BOOL)isDynamicallyRevealingRowsCols;
-(BOOL)isDynamicallyRevealingRowsCols:(NSInteger)arg0 rowColIndex:(unsigned int)arg1 ;
-(BOOL)isDynamicallyRowTabResizing;
-(BOOL)isDynamicallySettingBandedFill;
-(BOOL)isEntireCellRangeHidden:(struct TSUCellRect )arg0 ;
-(BOOL)isGroupingRowCollapsed:(unsigned int)arg0 ;
-(BOOL)isLastVisibleBodyRowCategorySummaryOrLabelRow;
-(BOOL)isPivotTrailingAligned:(struct TSUCellCoord )arg0 ;
-(BOOL)isRowUserHidden:(unsigned int)arg0 ;
-(BOOL)isSummaryCell:(struct TSUCellCoord )arg0 ;
-(BOOL)isSummaryOrLabelRow:(unsigned int)arg0 ;
-(BOOL)isSummaryRow:(unsigned int)arg0 ;
-(BOOL)p_containsGradientFillThatFillsContainerInCell:(id)arg0 cellContents:(id)arg1 ;
-(BOOL)p_containsGradientThatFillsContainerInStyle:(id)arg0 ;
-(BOOL)shouldRowUseBandedFill:(unsigned int)arg0 ;
-(BOOL)validateLayoutHint:(id)arg0 ;
-(CGFloat)calculatedTableNameHeight;
-(CGFloat)calculatedTableNameHeightIncludingDynamicResize:(BOOL)arg0 ;
-(CGFloat)clampRowHeightAccountingForMaximumPartitionSize:(struct CGSize )arg0 rowIndex:(unsigned int)arg1 rowHeight:(CGFloat)arg2 ;
-(CGFloat)contentHeightForCellRange:(struct TSUCellRect )arg0 skipDynamicSwap:(BOOL)arg1 maximumPartitionSize:(struct CGSize )arg2 ;
-(CGFloat)contentWidthForCellRange:(struct TSUCellRect )arg0 skipDynamicSwap:(BOOL)arg1 ;
-(CGFloat)contentWidthForCellRange:(struct TSUCellRect )arg0 validationBundle:(id)arg1 ;
-(CGFloat)fittingHeightOfRow:(unsigned int)arg0 ;
-(CGFloat)fontHeightOfParagraphStyle:(id)arg0 ;
-(CGFloat)heightOfRow:(unsigned int)arg0 skipDynamicSwap:(BOOL)arg1 withStrokeHeights:(BOOL)arg2 returnZeroIfHidden:(BOOL)arg3 clampToPartitionSize:(BOOL)arg4 maximumPartitionSize:(struct CGSize )arg5 outIsFitting:(*BOOL)arg6 ;
-(CGFloat)heightOfRowIgnoringFitting:(unsigned int)arg0 withStrokeHeights:(BOOL)arg1 ;
-(CGFloat)p_contentWidthForCellRange:(struct TSUCellRect )arg0 skipDynamicSwap:(BOOL)arg1 validationBundle:(id)arg2 ;
-(CGFloat)strokeHeightOfGridRow:(unsigned int)arg0 atColumnIndex:(unsigned int)arg1 ;
-(CGFloat)strokeHeightOfGridRow:(unsigned int)arg0 beginColumn:(unsigned int)arg1 endColumn:(unsigned int)arg2 ;
-(CGFloat)strokeHeightOfGridRow:(unsigned int)arg0 inColumnRange:(struct TSTSimpleRange )arg1 ;
-(CGFloat)strokeWidthOfGridColumn:(unsigned int)arg0 atRowIndex:(unsigned int)arg1 ;
-(CGFloat)strokeWidthOfGridColumn:(unsigned int)arg0 beginRow:(unsigned int)arg1 endRow:(unsigned int)arg2 ;
-(CGFloat)strokeWidthOfGridColumn:(unsigned int)arg0 inRowRange:(struct TSTSimpleRange )arg1 ;
-(CGFloat)tableNameHeight;
-(CGFloat)tableNameHeightForStorage:(id)arg0 withMaxWidth:(CGFloat)arg1 ;
-(CGFloat)unwrappedFittingWidthsForColumnInCellRegionWorker:(id)arg0 ;
-(CGFloat)widthOfColumn:(unsigned short)arg0 skipDynamicSwap:(BOOL)arg1 returnZeroIfHidden:(BOOL)arg2 outIsFitting:(*BOOL)arg3 ;
-(NSInteger)groupingArrowStateAtCellID:(struct TSUCellCoord )arg0 ;
-(NSUInteger)numberOfColumnLevels;
-(NSUInteger)numberOfRowLevels;
-(NSUInteger)tableAreaForCellID:(struct TSUCellCoord )arg0 ;
-(NSUInteger)tableStyleAreaForCellID:(struct TSUCellCoord )arg0 ;
-(id)cellIteratorWithRange:(struct TSUCellRect )arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 ;
-(id)customStrokeProvider;
-(id)expandCellRegionToCoverMergedCells:(id)arg0 ;
-(id)fittingWidthsMapForColumns:(id)arg0 includeStrokes:(BOOL)arg1 ;
-(id)fixedWidthProvider;
-(id)formattedDataParagraphStylePropertyMapForCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(id)indexesForCategoryColumns;
-(id)indexesForCategoryColumnsInRegion:(id)arg0 ;
-(id)indexesForLabelRows;
-(id)indexesForLabelRowsInRegion:(id)arg0 ;
-(id)indexesForLeadingRows;
-(id)indexesForSummaryAndLabelRows;
-(id)indexesForSummaryRows;
-(id)indexesForSummaryRowsInRegion:(id)arg0 ;
-(id)initWithInfo:(id)arg0 layoutEngineBundle:(id)arg1 ;
-(id)layoutCellRegionForModelCellRegion:(id)arg0 ;
-(id)mergeRangesProppingRowHeightsInRegion:(id)arg0 ;
-(id)mergedStrokesForGridColumn:(unsigned int)arg0 ;
-(id)mergedStrokesForGridRow:(unsigned int)arg0 ;
-(id)mergesIntersectingCellRegion:(id)arg0 ;
-(id)mergesIntersectingRange:(struct TSUCellRect )arg0 ;
-(id)modelCellRegionForLayoutCellRegion:(id)arg0 ;
-(id)newLayoutHint;
-(id)newTextEngineForCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 textStyle:(id)arg2 ;
-(id)newTextEngineForCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 textStyle:(id)arg2 naturalAlignment:(NSInteger)arg3 cellDirection:(int)arg4 ;
-(id)p_resolvedTextStyleForCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 textStyle:(id)arg2 outNaturalAlignment:(*NSInteger)arg3 outCellDirection:(*int)arg4 ;
-(id)p_strokesForGridColumn:(unsigned int)arg0 isLeft:(BOOL)arg1 takeStrokeWriteLock:(BOOL)arg2 ;
-(id)p_strokesForGridRow:(unsigned int)arg0 isTop:(BOOL)arg1 takeStrokeWriteLock:(BOOL)arg2 ;
-(id)p_validationBundleForRegionToValidate:(id)arg0 ;
-(id)tableNameTextEngine;
-(id)tableNameTextEngineWithTableNameStyle:(id)arg0 ;
-(id)tableStrokeProvider;
-(id)unwrappedFittingWidthsForColumnsInCellRegion:(id)arg0 ;
-(id)validateCellForDrawing:(struct TSUCellCoord )arg0 cell:(id)arg1 contents:(id)arg2 wrap:(BOOL)arg3 verticalAlignment:(int)arg4 padding:(id)arg5 layoutCacheFlags:(int)arg6 pageNumber:(NSUInteger)arg7 pageCount:(NSUInteger)arg8 ;
-(id)validateFittingInfoForValidationRegion:(id)arg0 rowsNeedingFittingInfo:(id)arg1 ;
-(id)validateFittingRegionForChangeDescriptors:(id)arg0 ;
-(struct CGSize )contentSizeForCellRange:(struct TSUCellRect )arg0 skipDynamicSwap:(BOOL)arg1 ;
-(struct CGSize )tableNameTextSize;
-(struct CGSize )tableNameTextSizeForTableName:(id)arg0 maxWidth:(CGFloat)arg1 tableNameStyle:(id)arg2 ;
-(struct TSUCellCoord )layoutCellIDForModelCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )modelCellIDForLayoutCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )p_validateFittingInfoForEmptyCellsBetween:(struct TSUCellCoord )arg0 andCellID:(struct TSUCellCoord )arg1 inRange:(struct TSUCellRect )arg2 widthHeightCollection:(id)arg3 ;
-(struct TSUCellRect )expandCellRangeToCoverMergedCells:(struct TSUCellRect )arg0 ;
-(struct TSUCellRect )expandCellRangeToVisibleNeighbors:(struct TSUCellRect )arg0 ;
-(struct UIEdgeInsets )defaultPaddingForCellID:(struct TSUCellCoord )arg0 ;
-(struct UIEdgeInsets )edgeInsetsFromPadding:(id)arg0 ;
-(struct UIEdgeInsets )paddingForCellID:(struct TSUCellCoord )arg0 ;
-(unsigned char)groupLevelAtLabelRow:(unsigned int)arg0 ;
-(unsigned char)groupLevelAtSummaryRow:(unsigned int)arg0 ;
-(unsigned int)firstEmptyBodyRow;
-(unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)layoutRowForModelRow:(unsigned int)arg0 ;
-(unsigned int)modelRowForLayoutRow:(unsigned int)arg0 ;
-(unsigned int)nonUserHiddenRowAfterAndIncludingRow:(unsigned int)arg0 ;
-(unsigned int)numberOfCategoryLevels;
-(unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)layoutColumnForModelColumn:(unsigned short)arg0 ;
-(unsigned short)modelColumnForLayoutColumn:(unsigned short)arg0 ;
-(void)addChangeDescriptor:(id)arg0 ;
-(void)addChangeDescriptorWithType:(int)arg0 andCellRange:(struct TSUCellRect )arg1 ;
-(void)addChangeDescriptorWithType:(int)arg0 andCellRange:(struct TSUCellRect )arg1 andStrokeRange:(struct TSUCellRect )arg2 ;
-(void)beginDynamicMode:(id)arg0 ;
-(void)captureDynamicResizeInfo;
-(void)clearDynamicStrokesForCellRange:(struct TSUCellRect )arg0 ;
-(void)clearModelHeightWidthCacheForCellRange:(struct TSUCellRect )arg0 ;
-(void)clearRenderingCaches;
-(void)dealloc;
-(void)endDynamicMode:(id)arg0 ;
-(void)enqueueBootstrapChangeDescriptors;
-(void)enumerateMergedStrokesAndCapsForGridColumn:(unsigned int)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3 ;
-(void)enumerateMergedStrokesAndCapsForGridRow:(unsigned int)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3 ;
-(void)enumerateMergedStrokesForGridColumn:(unsigned int)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3 ;
-(void)enumerateMergedStrokesForGridRow:(unsigned int)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3 ;
-(void)finalizeLayoutPassWithRowsNeedingFittingInfo:(id)arg0 ;
-(void)invalidateBandedFill;
-(void)invalidateDefaultFontHeights;
-(void)invalidateDynamicResizeInfo;
-(void)invalidateStrokeDefaults;
-(void)invalidateStrokeSpills;
-(void)invalidateTableNameHeight;
-(void)iterateCellsAndTerminateWithIterator:(id)arg0 usingBlock:(id)arg1 ;
-(void)iterateCellsInRange:(struct TSUCellRect )arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)measureWithLayoutState:(id)arg0 ;
-(void)modifySafelyUsingBlock:(id)arg0 ;
-(void)p_addFittingInfoForEmptyMergeRange:(struct TSUCellRect )arg0 ;
-(void)p_clearStrokesForMergesInCellRegion:(id)arg0 ;
-(void)p_invalidateClearedStrokesForCellRegion:(id)arg0 ;
-(void)p_setDefaultFontHeight:(CGFloat)arg0 forTableStyleArea:(NSUInteger)arg1 ;
-(void)p_setDynamicStroke:(id)arg0 strokeOrder:(int)arg1 forGridColumn:(unsigned int)arg2 isLeft:(BOOL)arg3 beginRow:(unsigned int)arg4 endRow:(unsigned int)arg5 ;
-(void)p_setDynamicStroke:(id)arg0 strokeOrder:(int)arg1 forGridRow:(unsigned int)arg2 isTop:(BOOL)arg3 beginColumn:(unsigned int)arg4 endColumn:(unsigned int)arg5 ;
-(void)p_validateCellIDToWPColumnCacheForChangeDescriptors:(id)arg0 ;
-(void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(struct TSUCellCoord )arg0 andEndCellID:(struct TSUCellCoord )arg1 widthHeightCollection:(id)arg2 ;
-(void)p_validateFittingInfoWithCellRangeWorker:(struct TSUCellRect )arg0 widthHeightCollection:(id)arg1 containsMerges:(BOOL)arg2 validationBundle:(id)arg3 ;
-(void)p_validateStrokeWidthCachesForRegion:(id)arg0 invalidateStrokeDefaults:(BOOL)arg1 ;
-(void)p_validateStrokesForRegion:(id)arg0 ;
-(void)p_validationFittingCellRegionForColumnsDeleted:(id)arg0 cellRegionGatherer:(id)arg1 ;
-(void)p_validationFittingCellRegionForColumnsInserted:(id)arg0 cellRegionGatherer:(id)arg1 ;
-(void)p_validationFittingCellRegionForColumnsMovedFrom:(id)arg0 toColumnIndex:(unsigned short)arg1 cellRegionGatherer:(id)arg2 ;
-(void)p_validationFittingCellRegionForColumnsVisibility:(id)arg0 cellRegionGatherer:(id)arg1 ;
-(void)p_validationFittingCellRegionForRangeMergeUnmerge:(id)arg0 cellRegionGatherer:(id)arg1 ;
-(void)p_validationFittingCellRegionForRowsDeleted:(id)arg0 cellRegionGatherer:(id)arg1 ;
-(void)p_validationFittingCellRegionForRowsInserted:(id)arg0 cellRegionGatherer:(id)arg1 ;
-(void)p_validationFittingCellRegionForRowsMovedFrom:(id)arg0 toRowIndex:(unsigned int)arg1 cellRegionGatherer:(id)arg2 ;
-(void)p_validationFittingCellRegionForStrokesChanged:(id)arg0 cellRegionGatherer:(id)arg1 ;
-(void)p_validationFittingForChangeDescriptorType:(int)arg0 regionFromChangeDescriptor:(id)arg1 cellRegionGatherer:(id)arg2 ;
-(void)popFromFixedColumnWidthStack;
-(void)popFromStyleProviderStack;
-(void)processLayoutTask:(id)arg0 validationBundle:(id)arg1 ;
-(void)pushToFixedColumnWidthStack:(*void)arg0 ;
-(void)pushToStyleProviderStack:(id)arg0 ;
-(void)queueCellForValidation:(struct TSUCellRect )arg0 cell:(id)arg1 textStyle:(id)arg2 modelMergeRange:(struct TSUCellRect )arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(BOOL)arg7 layoutCacheFlags:(int)arg8 validationBundle:(id)arg9 layoutTask:(id)arg10 ;
-(void)readSafelyUsingBlock:(id)arg0 ;
-(void)resetModelHeightWidthCache;
-(void)setClearedStrokeForGridColumn:(unsigned int)arg0 beginRow:(unsigned int)arg1 endRow:(unsigned int)arg2 ;
-(void)setClearedStrokeForGridRow:(unsigned int)arg0 beginColumn:(unsigned int)arg1 endColumn:(unsigned int)arg2 ;
-(void)setDynamicCellBorder:(id)arg0 forCellID:(struct TSUCellCoord )arg1 ;
-(void)setStrokeSpillForRightGridColumn:(unsigned int)arg0 leftGridColumn:(unsigned int)arg1 inRow:(unsigned int)arg2 ;
-(void)strokesForCellID:(struct TSUCellCoord )arg0 top:(*id)arg1 left:(*id)arg2 bottom:(*id)arg3 right:(*id)arg4 ;
-(void)updateCellRange;
-(void)updateDynamicFontColor:(id)arg0 andRange:(struct TSUCellRect )arg1 ;
-(void)updateDynamicResizeInfo:(id)arg0 ;
-(void)updateDynamicTableNameSize:(CGFloat)arg0 ;
-(void)validate;
-(void)validateBandedFill;
-(void)validateChangeDescriptorQueue;
-(void)validateDefaultFontHeights;
-(void)validateDynamicResizeInfo;
-(void)validateFittingInfoForCell:(id)arg0 cellID:(struct TSUCellCoord )arg1 mergeRange:(struct TSUCellRect )arg2 setFitting:(BOOL)arg3 layoutTask:(id)arg4 widthHeightCollection:(id)arg5 validationBundle:(id)arg6 ;
-(void)validateFittingInfoWithCellRange:(struct TSUCellRect )arg0 validationBundle:(id)arg1 ;
-(void)validateLayoutEngineForChangeDescriptors:(id)arg0 ;
-(void)validateRowVisibility:(id)arg0 ;
-(void)validateStrokesArrays:(id)arg0 ;
-(void)validateStrokesForChangeDescriptors:(id)arg0 ;
-(void)validateTableNameEnabled;
-(void)validateTableNameHeight;
-(void)verifyStrokes;
-(void)waitForLayoutToComplete:(id)arg0 ;


@end


#endif