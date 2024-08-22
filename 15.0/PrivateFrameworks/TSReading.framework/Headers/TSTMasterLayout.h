// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTMASTERLAYOUT_H
#define TSTMASTERLAYOUT_H

@class NSMutableArray, NSRecursiveLock, TSURetainedPointerKeyDictionary, NSLock, NSString, TSUColor, NSMutableSet, NSIndexSet, TSUReadWriteQueue;
@protocol TSKChangeSourceObserver, OS_dispatch_group, OS_dispatch_semaphore, TSTLayoutDynamicColumnSwapProtocol, TSTLayoutDynamicContentProtocol, TSTLayoutDynamicRowSwapProtocol;

#import <Foundation/Foundation.h>

#import "TSTLayoutTask.h"
#import "TSTLayoutDynamicResizeInfo.h"
#import "TSDFill.h"
#import "TSTWPColumnCache.h"
#import "TSKChangeNotifier.h"
#import "TSWPEditingController.h"
#import "TSTDupContentCache.h"
#import "TSDInfoGeometry.h"
#import "TSTLayout.h"
#import "TSDLayoutGeometry.h"
#import "TSTCellRegion.h"
#import "TSTHiddenRowsColumnsCache.h"
#import "TSTMergeRangeSortedSet.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"
#import "TSTWidthHeightCache.h"

@interface TSTMasterLayout : NSObject <TSKChangeSourceObserver>

 {
    int mReferenceCount;
    NSObject<OS_dispatch_group> *mLayoutInFlight;
    TSTLayoutTask *mCurrentLayoutTask;
    NSObject<OS_dispatch_semaphore> *mLayoutSemaphore;
    BOOL mHeaderColumnsFrozen;
    BOOL mHeaderRowsFrozen;
    BOOL mHeaderColumnsRepeat;
    BOOL mHeaderRowsRepeat;
    BOOL mTableNameEnabled;
    CGRect mTableNameBounds;
    CGFloat mCachedTableNameHeight;
    unsigned short mCachedNumberOfHeaderColumns;
    NSUInteger mCachedMaxNumberOfColumns;
    unsigned short mCachedNumberOfHeaderRows;
    unsigned short mCachedNumberOfFooterRows;
    NSUInteger mCachedMaxNumberOfRows;
    *TSTTableStrokeDefaults mDefaultStrokes;
    NSMutableArray *mTopRowStrokes;
    NSMutableArray *mBottomRowStrokes;
    NSMutableArray *mLeftColumnStrokes;
    NSMutableArray *mRightColumnStrokes;
    NSRecursiveLock *mStrokesLock;
    TSURetainedPointerKeyDictionary *mParaStyleToHeightCache;
    NSLock *mLock;
    BOOL mBandedFillIsValid;
    BOOL mUseBandedFill;
    BOOL mTableDefaultFontHeightsAreValid;
    CGFloat mTableDefaultFontHeightForArea;
    ? mDynamicHidingRowsCols;
    int mDynamicHidingRowsColsDirection;
    ? mDynamicHidingContent;
    ? mDynamicHidingText;
    BOOL mDynamicRepressFrozenHeader;
    ? mDynamicRevealingRowsCols;
    int mDynamicRevealingRowsColsDirection;
    TSTLayoutDynamicResizeInfo *mDynamicResizeInfo;
}


@property (readonly, nonatomic) TSDFill *bandedFillObject; // ivar: mBandedFillObject
@property (readonly, nonatomic) TSTWPColumnCache *cellIDToWPColumnCache; // ivar: mCellIDToWPColumnCache
@property (readonly, nonatomic) NSMutableArray *changeDescriptors; // ivar: mChangeDescriptors
@property (retain, nonatomic) TSKChangeNotifier *changeNotifier; // ivar: mChangeNotifier
@property (nonatomic) TSWPEditingController *containedTextEditor; // ivar: mContainedTextEditor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSTDupContentCache *dupContentCache; // ivar: mDupContentCache
@property (readonly, nonatomic) CGFloat dynamicAddOrRemoveColumnElementSize; // ivar: mDynamicAddOrRemoveColumnElementSize
@property (readonly, nonatomic) CGFloat dynamicAddOrRemoveRowElementSize; // ivar: mDynamicAddOrRemoveRowElementSize
@property (readonly, nonatomic) BOOL dynamicBandedFill; // ivar: mDynamicBandedFill
@property (readonly, nonatomic) BOOL dynamicBandedFillSetting; // ivar: mDynamicBandedFillSetting
@property (readonly, nonatomic) int dynamicColumnAdjustment; // ivar: mDynamicColumnAdjustment
@property (readonly, nonatomic) NSObject<TSTLayoutDynamicColumnSwapProtocol> *dynamicColumnSwapDelegate; // ivar: mDynamicColumnSwapDelegate
@property (readonly, nonatomic) CGFloat dynamicColumnTabSize; // ivar: mDynamicColumnTabSize
@property (readonly, nonatomic) NSObject<TSTLayoutDynamicContentProtocol> *dynamicContentDelegate; // ivar: mDynamicContentDelegate
@property (readonly, nonatomic) TSUColor *dynamicFontColor; // ivar: mDynamicFontColor
@property (readonly, nonatomic) ? dynamicFontColorCellRange; // ivar: mDynamicFontColorCellRange
@property (nonatomic) CGFloat dynamicHeightResize; // ivar: mDynamicHeightResize
@property (readonly, nonatomic) TSDInfoGeometry *dynamicInfoGeometry; // ivar: mDynamicInfoGeometry
@property (readonly, nonatomic) TSTLayout *dynamicLayout;
@property (readonly, nonatomic) NSMutableSet *dynamicLayouts; // ivar: mDynamicLayouts
@property (nonatomic) BOOL dynamicRepResize; // ivar: mDynamicRepResize
@property (readonly, nonatomic) CGFloat dynamicResizingColumnAdjustment; // ivar: mDynamicResizingColumnAdjustment
@property (readonly, nonatomic) ? dynamicResizingColumnRange; // ivar: mDynamicResizingColumnRange
@property (readonly, nonatomic) BOOL dynamicResizingColumns; // ivar: mDynamicResizingColumns
@property (readonly, nonatomic) CGFloat dynamicResizingRowAdjustment; // ivar: mDynamicResizingRowAdjustment
@property (readonly, nonatomic) ? dynamicResizingRowRange; // ivar: mDynamicResizingRowRange
@property (readonly, nonatomic) BOOL dynamicResizingRows; // ivar: mDynamicResizingRows
@property (readonly, nonatomic) int dynamicRowAdjustment; // ivar: mDynamicRowAdjustment
@property (readonly, nonatomic) NSObject<TSTLayoutDynamicRowSwapProtocol> *dynamicRowSwapDelegate; // ivar: mDynamicRowSwapDelegate
@property (readonly, nonatomic) CGFloat dynamicRowTabSize; // ivar: mDynamicRowTabSize
@property (copy, nonatomic) TSDLayoutGeometry *dynamicSavedLayoutGeometry; // ivar: mDynamicSavedLayoutGeometry
@property (readonly, nonatomic) TSTCellRegion *dynamicSelectionRegion; // ivar: mDynamicSelectionRegion
@property (readonly, nonatomic) ? dynamicSuppressingConditionalStylesCellID; // ivar: mDynamicSuppressingConditionalStylesCellID
@property (readonly, nonatomic) CGFloat dynamicTableNameResize; // ivar: mDynamicTableNameResize
@property (nonatomic) CGFloat dynamicWidthResize; // ivar: mDynamicWidthResize
@property (readonly, nonatomic) BOOL emptyFilteredTable; // ivar: mEmptyFilteredTable
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSTHiddenRowsColumnsCache *hiddenRowsColumnsCache; // ivar: mHiddenRowsColumnsCache
@property (readonly, nonatomic) BOOL inDynamicLayoutMode; // ivar: mInDynamicLayoutMode
@property (readonly, nonatomic) BOOL isGrouped;
@property (nonatomic) unsigned int maxConcurrentTasks; // ivar: mMaxConcurrentTasks
@property (nonatomic) CGSize maximumPartitionSize; // ivar: mMaximumPartitionSize
@property (retain, nonatomic) TSTMergeRangeSortedSet *mergeRanges; // ivar: mMergeRanges
@property (nonatomic) unsigned int numCellsPerTask; // ivar: mNumCellsPerTask
@property (nonatomic) BOOL processHiddenRowsForExport; // ivar: mProcessHiddenRowsForExport
@property (readonly) Class superclass;
@property (nonatomic) int tableEnvironment; // ivar: mTableEnvironment
@property (nonatomic) TSTTableInfo *tableInfo; // ivar: mTableInfo
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) int tableRowsBehavior; // ivar: mTableRowsBehavior
@property (readonly, nonatomic) TSTWPColumnCache *tempWPColumnCache; // ivar: mTempWPColumnCache
@property (readonly, nonatomic) BOOL useBandedFill;
@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;
@property (readonly, nonatomic) TSUReadWriteQueue *whCacheQueue; // ivar: mWHCacheQueue
@property (readonly, nonatomic) TSTWidthHeightCache *widthHeightCache; // ivar: mWidthHeightCache


+(CGFloat)effectiveTableNameHeightForModel:(id)arg0 ;
+(id)tableNameTextEngine:(id)arg0 ;
+(struct CGSize )tableNameTextSize:(id)arg0 ;
-(BOOL)cell:(*id)arg0 forCellID:(struct ? )arg1 ;
-(BOOL)hintIsValid:(id)arg0 ;
-(BOOL)isDynamicallyChangingColumnCount;
-(BOOL)isDynamicallyChangingContent;
-(BOOL)isDynamicallyChangingFontColorOfCellID:(struct ? )arg0 ;
-(BOOL)isDynamicallyChangingInfoGeometry;
-(BOOL)isDynamicallyChangingRowCount;
-(BOOL)isDynamicallyChangingRowOrColumnCount;
-(BOOL)isDynamicallyChangingSelection;
-(BOOL)isDynamicallyColumnTabResizing;
-(BOOL)isDynamicallyHidingContentOfCellID:(struct ? )arg0 ;
-(BOOL)isDynamicallyHidingRowsCols;
-(BOOL)isDynamicallyHidingRowsCols:(int)arg0 rowColIndex:(unsigned short)arg1 ;
-(BOOL)isDynamicallyHidingRowsColsCellID:(struct ? )arg0 ;
-(BOOL)isDynamicallyHidingTextOfCellID:(struct ? )arg0 ;
-(BOOL)isDynamicallyRepressingFrozenHeaders;
-(BOOL)isDynamicallyResizing:(int)arg0 ;
-(BOOL)isDynamicallyResizing:(int)arg0 rowColIndex:(unsigned short)arg1 ;
-(BOOL)isDynamicallyResizingCellID:(struct ? )arg0 ;
-(BOOL)isDynamicallyResizingTableName;
-(BOOL)isDynamicallyRevealingRowsCols;
-(BOOL)isDynamicallyRevealingRowsCols:(int)arg0 rowColIndex:(unsigned short)arg1 ;
-(BOOL)isDynamicallyRowTabResizing;
-(BOOL)isDynamicallySettingBandedFill;
-(BOOL)isDynamicallySwappingColumns;
-(BOOL)isDynamicallySwappingRows;
-(BOOL)shouldRowUseBandedFill:(unsigned short)arg0 ;
-(BOOL)updateDynamicChangeRowOrColumnCount:(int)arg0 count:(int)arg1 newlyAddedElementSize:(CGFloat)arg2 ;
-(CGFloat)calculatedTableNameHeight;
-(CGFloat)calculatedTableNameHeightIncludingDynamicResize:(BOOL)arg0 ;
-(CGFloat)fontHeightOfParagraphStyle:(id)arg0 ;
-(CGFloat)tableNameHeight;
-(id)accountingParagraphStylePropertyMapForCell:(id)arg0 atCellID:(struct ? )arg1 ;
-(id)initWithInfo:(id)arg0 ;
-(id)newLayoutHint;
-(id)newTextEngineForCell:(id)arg0 atCellID:(struct ? )arg1 ;
-(id)regionForStrokeValidationFromChangeDescriptors:(id)arg0 ;
-(id)tableNameTextEngine;
-(id)validateCellForDrawing:(struct ? )arg0 cell:(id)arg1 contents:(id)arg2 wrap:(BOOL)arg3 verticalAlignment:(unsigned int)arg4 padding:(id)arg5 layoutCacheFlags:(int)arg6 pageNumber:(NSUInteger)arg7 pageCount:(NSUInteger)arg8 ;
-(id)validateFittingInfoForChangeDescriptors:(id)arg0 rowsNeedingFittingInfo:(id)arg1 ;
-(struct ? )layoutCellIDForModelCellID:(struct ? )arg0 ;
-(struct ? )modelCellIDForLayoutCellID:(struct ? )arg0 ;
-(struct ? )modelCellIDForStrokesOfLayoutCellID:(struct ? )arg0 ;
-(struct ? )p_validateFittingInfoForEmptyCellsBetween:(struct ? )arg0 andCellID:(struct ? )arg1 inRange:(struct ? )arg2 ;
-(struct CGSize )tableNameTextSize;
-(struct UIEdgeInsets )defaultPaddingForCellID:(struct ? )arg0 ;
-(struct UIEdgeInsets )edgeInsetsFromPadding:(id)arg0 ;
-(struct UIEdgeInsets )paddingForCellID:(struct ? )arg0 ;
-(unsigned int)tableAreaForCellID:(struct ? )arg0 ;
-(void)addChangeDescriptor:(id)arg0 ;
-(void)addChangeDescriptorWithType:(int)arg0 andCellRange:(struct ? )arg1 ;
-(void)addChangeDescriptorWithType:(int)arg0 andCellRange:(struct ? )arg1 andStrokeRange:(struct ? )arg2 ;
-(void)addDynamicLayoutBeginIfNecessary:(id)arg0 ;
-(void)beginDynamicMode:(id)arg0 ;
-(void)calculateRawTableSize:(struct CGSize *)arg0 andStrokeDelta:(struct CGSize *)arg1 ;
-(void)cancelDynamicModeChanges;
-(void)captureDynamicResizeInfo;
-(void)clearModelHeightWidthCacheForCellRange:(struct ? )arg0 ;
-(void)dealloc;
-(void)endDynamicMode;
-(void)invalidateBandedFill;
-(void)invalidateDefaultFontHeights;
-(void)invalidateDynamicResizeInfo;
-(void)invalidateTableNameHeight;
-(void)measureTextForLayoutState:(id)arg0 ;
-(void)p_cancelDynamicRowColCountChanges;
-(void)p_processChange:(id)arg0 forChangeSource:(id)arg1 ;
-(void)p_validateFittingInfoForCellID:(struct ? )arg0 inMergeRange:(struct ? )arg1 ;
-(void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(struct ? )arg0 andEndCellID:(struct ? )arg1 ;
-(void)processLayoutTask:(id)arg0 ;
-(void)queueCellForValidation:(struct ? )arg0 cell:(id)arg1 mergeRange:(struct ? )arg2 wrap:(BOOL)arg3 verticalAlignment:(unsigned int)arg4 padding:(id)arg5 prop:(BOOL)arg6 layoutCacheFlags:(int)arg7 ;
-(void)removeDynamicLayoutEndIfNecessary:(id)arg0 ;
-(void)resetModelHeightWidthCache;
-(void)syncProcessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)updateDynamicBandedFill:(BOOL)arg0 setting:(BOOL)arg1 ;
-(void)updateDynamicColumnSwapDelegate:(id)arg0 ;
-(void)updateDynamicColumnTabSize:(CGFloat)arg0 ;
-(void)updateDynamicContentDelegate:(id)arg0 ;
-(void)updateDynamicFontColor:(id)arg0 andRange:(struct ? )arg1 ;
-(void)updateDynamicHidingContent:(struct ? )arg0 ;
-(void)updateDynamicHidingRowsCols:(int)arg0 hidingCellRange:(struct ? )arg1 ;
-(void)updateDynamicHidingText:(struct ? )arg0 ;
-(void)updateDynamicInfoGeometry:(id)arg0 ;
-(void)updateDynamicRepressFrozenHeader:(BOOL)arg0 ;
-(void)updateDynamicResize:(int)arg0 resizingRange:(struct ? )arg1 resizeAdjustment:(CGFloat)arg2 ;
-(void)updateDynamicResizeInfo:(id)arg0 ;
-(void)updateDynamicRevealingRowsCols:(int)arg0 revealingCellRange:(struct ? )arg1 ;
-(void)updateDynamicRowSwapDelegate:(id)arg0 ;
-(void)updateDynamicRowTabSize:(CGFloat)arg0 ;
-(void)updateDynamicSelectionRegion:(id)arg0 ;
-(void)updateDynamicSuppressingConditionalStylesCellID:(struct ? )arg0 ;
-(void)updateDynamicTableNameSize:(CGFloat)arg0 ;
-(void)updateWHCForMergeRanges;
-(void)validate;
-(void)validateBandedFill;
-(void)validateChangeDescriptorQueue;
-(void)validateDefaultFontHeights;
-(void)validateDynamicResizeInfo;
-(void)validateFittingInfoForCell:(id)arg0 cellID:(struct ? )arg1 mergeRange:(struct ? )arg2 setFitting:(BOOL)arg3 ;
-(void)validateFittingInfoWithCellRange:(struct ? )arg0 ;
-(void)validateFittingWidthsForRegion:(id)arg0 ;
-(void)validateLayoutHint:(id)arg0 ;
-(void)validateMasterLayoutForChangeDescriptors:(id)arg0 ;
-(void)validateRowVisibility:(id)arg0 ;
-(void)validateStrokesForRegion:(id)arg0 regionAlreadyValidated:(id)arg1 ;
-(void)validateTableRowsBehavior;
-(void)waitForLayoutToComplete;
-(void)wasRemovedFromDocumentRoot;
-(void)willBeAddedToDocumentRoot:(id)arg0 ;


@end


#endif