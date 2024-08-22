// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWTABLELAYOUT_H
#define UICOLLECTIONVIEWTABLELAYOUT_H

@class NSSet, NSMutableArray, NSMutableSet, NSString, NSIndexPath;
@protocol UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal, UISwipeActionHost, UITableConstants, UICollectionViewDataSourceTableLayout, UICollectionViewDelegateTableLayout;


#import "UICollectionViewLayout.h"
#import "UIColor.h"
#import "UITableViewRowData.h"
#import "UIScrollView.h"
#import "UIVisualEffect.h"
#import "UISwipeActionController.h"
#import "UIView.h"

@interface UICollectionViewTableLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal, UISwipeActionHost>

 {
    NSSet *_floatingElementKinds;
    UIColor *_separatorColor;
    UIColor *_darkenedSeparatorColor;
    UIEdgeInsets _sectionContentInset;
    UIEdgeInsets _previousLayoutMargins;
    NSMutableArray *_indexPathCache;
    NSMutableSet *_preferredAttributesCache;
    NSMutableSet *_headerPreferredAttributesCache;
    NSMutableSet *_footerPreferredAttributesCache;
    CGFloat _memoizedScale;
}


@property (readonly, nonatomic, getter=_contentInset) UIEdgeInsets _contentInset;
@property (readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor; // ivar: _accessoryBaseColor
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic, getter=_backgroundInset) CGFloat backgroundInset; // ivar: _backgroundInset
@property (readonly, nonatomic, getter=_bottomPadding) CGFloat bottomPadding; // ivar: _bottomPadding
@property (readonly, nonatomic) BOOL canBeEdited;
@property (nonatomic) BOOL cellLayoutMarginsFollowReadableWidth; // ivar: _cellLayoutMarginsFollowReadableWidth
@property (readonly, nonatomic, getter=_cellSafeAreaInsets) UIEdgeInsets cellSafeAreaInsets;
@property (retain, nonatomic, getter=_constants) NSObject<UITableConstants> *constants; // ivar: _constants
@property (readonly, nonatomic, getter=_dataSourceActual) NSObject<UICollectionViewDataSourceTableLayout> *dataSourceActual;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_defaultSectionFooterHeight) CGFloat defaultSectionFooterHeight;
@property (readonly, nonatomic, getter=_defaultSectionHeaderHeight) CGFloat defaultSectionHeaderHeight;
@property (readonly, nonatomic, getter=_delegateActual) NSObject<UICollectionViewDelegateTableLayout> *delegateActual;
@property (readonly, nonatomic, getter=_delegateProxy) NSObject<UICollectionViewDelegateTableLayout> *delegateProxy;
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths; // ivar: _deleteIndexPaths
@property (retain, nonatomic) NSIndexPath *deletedIndexPath; // ivar: _deletedIndexPath
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) CGFloat estimatedRowHeight; // ivar: _estimatedRowHeight
@property (nonatomic) CGFloat estimatedSectionFooterHeight; // ivar: _estimatedSectionFooterHeight
@property (nonatomic) CGFloat estimatedSectionHeaderHeight; // ivar: _estimatedSectionHeaderHeight
@property (readonly, nonatomic, getter=_estimatesHeights) BOOL estimatesHeights;
@property (readonly, nonatomic, getter=_estimatesRowHeights) BOOL estimatesRowHeights;
@property (readonly, nonatomic, getter=_estimatesSectionFooterHeights) BOOL estimatesSectionFooterHeights;
@property (readonly, nonatomic, getter=_estimatesSectionHeaderHeights) BOOL estimatesSectionHeaderHeights;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_headerFooterLeadingMarginWidth) CGFloat headerFooterLeadingMarginWidth;
@property (readonly, nonatomic, getter=_headerFooterPinningBehavior) NSInteger headerFooterPinningBehavior;
@property (readonly, nonatomic, getter=_headerFooterTrailingMarginWidth) CGFloat headerFooterTrailingMarginWidth;
@property (readonly, nonatomic, getter=_heightForTableFooter) CGFloat heightForTableFooter;
@property (readonly, nonatomic, getter=_heightForTableHeader) CGFloat heightForTableHeader;
@property (readonly, nonatomic, getter=_indexBarExtentFromEdge) CGFloat indexBarExtentFromEdge;
@property (readonly, nonatomic, getter=_indexFrame) CGRect indexFrame; // ivar: _indexFrame
@property (retain, nonatomic) NSMutableArray *insertIndexPaths; // ivar: _insertIndexPaths
@property (nonatomic) BOOL insetsContentViewsToSafeArea; // ivar: _insetsContentViewsToSafeArea
@property (readonly, nonatomic, getter=_isTableHeaderAutohiding) BOOL isTableHeaderAutohiding;
@property (readonly, nonatomic, getter=_multiselectCheckmarkColor) UIColor *multiselectCheckmarkColor; // ivar: _multiselectCheckmarkColor
@property (readonly, nonatomic, getter=_numberOfSections) NSInteger numberOfSections;
@property (readonly, nonatomic) BOOL overlapsSectionHeaderViews; // ivar: _overlapsSectionHeaderViews
@property (readonly, nonatomic, getter=_paddingAboveSectionHeaders) CGFloat paddingAboveSectionHeaders;
@property (readonly, nonatomic, getter=_providesRowHeights) BOOL providesRowHeights;
@property (readonly, nonatomic, getter=_rawSectionContentInset) UIEdgeInsets rawSectionContentInset;
@property (readonly, nonatomic, getter=_rawSeparatorInset) UIEdgeInsets rawSeparatorInset;
@property (retain, nonatomic) UITableViewRowData *rowData; // ivar: _rowData
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (readonly, nonatomic, getter=_rowSpacing) CGFloat rowSpacing; // ivar: _rowSpacing
@property (readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property (readonly, nonatomic, getter=_sectionContentInset) UIEdgeInsets sectionContentInset;
@property (readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) BOOL sectionContentInsetFollowsLayoutMargins;
@property (readonly, nonatomic, getter=_sectionCornerRadius) CGFloat sectionCornerRadius;
@property (nonatomic) CGFloat sectionFooterHeight; // ivar: _sectionFooterHeight
@property (readonly, nonatomic, getter=_sectionFooterToLastRowPadding) CGFloat sectionFooterToLastRowPadding;
@property (nonatomic) CGFloat sectionHeaderHeight; // ivar: _sectionHeaderHeight
@property (readonly, nonatomic, getter=_sectionHeaderToFirstRowPadding) CGFloat sectionHeaderToFirstRowPadding;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect; // ivar: _separatorEffect
@property (nonatomic) UIEdgeInsets separatorInset; // ivar: _separatorInset
@property (nonatomic) BOOL separatorInsetIsRelativeToCellEdges; // ivar: _separatorInsetIsRelativeToCellEdges
@property (nonatomic) NSInteger separatorStyle; // ivar: _separatorStyle
@property (readonly, nonatomic, getter=_shouldUseNewHeaderFooterBehavior) BOOL shouldUseNewHeaderFooterBehavior;
@property (readonly, nonatomic, getter=_shouldUseSearchBarHeaderBehavior) BOOL shouldUseSearchBarHeaderBehavior;
@property (readonly, nonatomic, getter=_isShowingIndex) BOOL showingIndex; // ivar: _showingIndex
@property (nonatomic, getter=_showsAdditionalSeparators, setter=_setShowsAdditionalSeparators:) BOOL showsAdditionalSeparators; // ivar: _showsAdditionalSeparators
@property (readonly, nonatomic, getter=_sidePadding) CGFloat sidePadding;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_swipeActionController, setter=_setSwipeActionController:) UISwipeActionController *swipeActionController; // ivar: _swipeActionController
@property (readonly, nonatomic, getter=_tableContentInset) UIEdgeInsets tableContentInset;
@property (readonly, nonatomic, getter=_tableFooterView) UIView *tableFooterView;
@property (readonly, nonatomic, getter=_tableHeaderView) UIView *tableHeaderView;
@property (readonly, nonatomic, getter=_tableStyle) NSInteger tableStyle;
@property (readonly, nonatomic, getter=_topPadding) CGFloat topPadding; // ivar: _topPadding
@property (readonly, nonatomic) BOOL usesVariableMargins; // ivar: _usesVariableMargins


+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(BOOL)_canReorderRowAtIndexPath:(id)arg0 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(BOOL)_estimatesSizes;
-(BOOL)_hasHeaderFooterBelowRowAtIndexPath:(id)arg0 ;
-(BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
-(BOOL)_shouldApplyReadableWidthInsets;
-(BOOL)_shouldDisplayExtraSeparatorsAtOffset:(*CGFloat)arg0 ;
-(BOOL)_shouldDrawSeparatorAtTop:(BOOL)arg0 ofSection:(NSInteger)arg1 ;
-(BOOL)_shouldDrawThickSeparators;
-(BOOL)_shouldDrawTopSeparatorDueToMergedBarForSectionAtIndex:(NSInteger)arg0 ;
-(BOOL)_shouldHaveFooterViewForSection:(NSInteger)arg0 ;
-(BOOL)_shouldHaveGlobalViewForElementOfKind:(id)arg0 ;
-(BOOL)_shouldHaveHeaderViewForSection:(NSInteger)arg0 ;
-(BOOL)_shouldHaveViewForElementOfKind:(id)arg0 atSection:(NSInteger)arg1 useRowData:(BOOL)arg2 ;
-(BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg0 ;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(NSInteger)arg0 ;
-(BOOL)_wantsBandSelectionVisualsInSection:(NSInteger)arg0 ;
-(BOOL)_wantsSwipes;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(BOOL)swipeActionController:(id)arg0 mayBeginSwipeForItemAtIndexPath:(id)arg1 ;
-(CGFloat)_dataSourceHeightForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)_dataSourceHeightForHeaderInSection:(NSInteger)arg0 ;
-(CGFloat)_dataSourceHeightForRowAtIndexPath:(id)arg0 ;
-(CGFloat)_defaultCellHeight;
-(CGFloat)_estimatedHeightForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)_estimatedHeightForHeaderInSection:(NSInteger)arg0 ;
-(CGFloat)_estimatedHeightForRowAtIndexPath:(id)arg0 ;
-(CGFloat)_heightForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)_heightForFooterInSection:(NSInteger)arg0 useRowData:(BOOL)arg1 ;
-(CGFloat)_heightForHeaderInSection:(NSInteger)arg0 ;
-(CGFloat)_heightForHeaderInSection:(NSInteger)arg0 useRowData:(BOOL)arg1 ;
-(CGFloat)_heightForRowAtIndexPath:(id)arg0 ;
-(CGFloat)_maxTitleWidthForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)_maxTitleWidthForHeaderInSection:(NSInteger)arg0 ;
-(NSInteger)_accessoryTypeForCell:(id)arg0 forRowAtIndexPath:(id)arg1 ;
-(NSInteger)_editingStyleForRowAtIndexPath:(id)arg0 ;
-(NSInteger)_indentationLevelForRowAtIndexPath:(id)arg0 ;
-(NSInteger)_numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)_titleAlignmentForFooterInSection:(NSInteger)arg0 ;
-(NSInteger)_titleAlignmentForHeaderInSection:(NSInteger)arg0 ;
-(NSInteger)layoutDirectionForSwipeActionController:(id)arg0 ;
-(id)_detailTextForHeaderInSection:(NSInteger)arg0 ;
-(id)_floatingElementKinds;
-(id)_indexPathsBelowIndexPath:(id)arg0 ;
-(id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(id)_layoutAttributesForCellWithIndexPath:(id)arg0 ;
-(id)_layoutAttributesForSectionElementKind:(id)arg0 atSection:(NSInteger)arg1 ;
-(id)_layoutAttributesForSeparatorWithIndexPath:(id)arg0 ;
-(id)_layoutAttributesForViewElementKind:(id)arg0 ;
-(id)_titleForFooterInSection:(NSInteger)arg0 ;
-(id)_titleForHeaderInSection:(NSInteger)arg0 ;
-(id)contextualActionForDeletingRowAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)gestureRecognizerViewForSwipeActionController:(id)arg0 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg0 withTargetPosition:(struct CGPoint )arg1 previousIndexPaths:(id)arg2 previousPosition:(struct CGPoint )arg3 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)itemContainerViewForSwipeActionController:(id)arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg0 withTargetPosition:(struct CGPoint )arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)swipeActionController:(id)arg0 indexPathForTouchLocation:(struct CGPoint )arg1 ;
-(id)swipeActionController:(id)arg0 leadingSwipeConfigurationForItemAtIndexPath:(id)arg1 ;
-(id)swipeActionController:(id)arg0 trailingSwipeConfigurationForItemAtIndexPath:(id)arg1 ;
-(id)swipeActionController:(id)arg0 viewForItemAtIndexPath:(id)arg1 ;
-(id)swipeActionForDeletingRowAtIndexPath:(id)arg0 ;
-(struct CGPoint )_contentOffsetFromProposedContentOffset:(struct CGPoint )arg0 forScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(NSUInteger)arg2 ;
-(struct CGRect )_extraSeparatorFrameForIndexPath:(id)arg0 offset:(CGFloat)arg1 ;
-(struct CGRect )_frameForSectionElementKind:(id)arg0 atSection:(NSInteger)arg1 visibleRect:(struct CGRect )arg2 floating:(*BOOL)arg3 canGuess:(BOOL)arg4 ;
-(struct CGRect )_visibleRect;
-(struct CGSize )collectionViewContentSize;
-(struct UIEdgeInsets )_preferredLayoutMargins;
-(struct _NSRange )_sectionRangeForBounds:(struct CGRect )arg0 ;
-(void)_applyContentSizeDeltaImmediately:(CGFloat)arg0 ;
-(void)_cellAccessoryButtonTappedAtIndexPath:(id)arg0 ;
-(void)_coalesceContentSizeUpdateWithDelta:(CGFloat)arg0 ;
-(void)_darkenedColorsChanged:(id)arg0 ;
-(void)_headerFooterDidInvalidateIntrinsicContentSize:(id)arg0 ;
-(void)_invalidateIndexPathsBelowIndexPath:(id)arg0 withInvalidationContext:(id)arg1 ;
-(void)_prepareForRowDataHeaderFooterSizing;
-(void)_setCollectionView:(id)arg0 ;
-(void)_setFloatingElementKinds:(id)arg0 ;
-(void)_setHeight:(CGFloat)arg0 forRowAtIndexPath:(id)arg1 usingPresentationValues:(BOOL)arg2 ;
-(void)_swipeToDeleteCell:(id)arg0 ;
-(void)dealloc;
-(void)finalizeCollectionViewUpdates;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareForTransitionFromLayout:(id)arg0 ;
-(void)prepareForTransitionToLayout:(id)arg0 ;
-(void)prepareLayout;
-(void)resetSwipedRowWithCompletion:(id)arg0 ;
-(void)swipeActionController:(id)arg0 animateView:(id)arg1 actionsView:(id)arg2 forDestructiveAction:(id)arg3 atIndexPath:(id)arg4 withSwipeInfo:(struct ? )arg5 completion:(id)arg6 ;
-(void)swipeActionController:(id)arg0 didCompleteAction:(id)arg1 cancelled:(BOOL)arg2 atIndexPath:(id)arg3 ;
-(void)swipeActionController:(id)arg0 didEndSwipeForItemAtIndexPath:(id)arg1 ;
-(void)swipeActionController:(id)arg0 willBeginSwipeForItemAtIndexPath:(id)arg1 ;
-(void)swipeActionController:(id)arg0 willPerformAction:(id)arg1 atIndexPath:(id)arg2 ;


@end


#endif