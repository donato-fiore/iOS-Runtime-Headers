// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSECTIONEDGRIDLAYOUT_H
#define PUSECTIONEDGRIDLAYOUT_H

@class UICollectionViewLayout, UICollectionViewLayoutAttributes, NSSet, NSPointerArray, NSArray, NSIndexSet, NSIndexPath, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol PUReorderableLayout, PUPhotosGridTransitioningLayout, PUCollectionViewLayoutDelegating, PUGridLayoutProtocol, PUSectionedGridLayoutDelegate, PUCollectionViewLayoutTransitioningDelegate;


#import "PUSectionedGridLayoutInvalidationContext.h"
#import "PUSectionedGridLayoutData.h"
#import "PULayoutAnimationsHelper.h"
#import "PULayoutSampledSectioning.h"

@interface PUSectionedGridLayout : UICollectionViewLayout <PUReorderableLayout, PUPhotosGridTransitioningLayout, PUCollectionViewLayoutDelegating, PUGridLayoutProtocol>

 {
    BOOL _layoutDataIsValid;
    BOOL _sectioningDataIsValid;
    BOOL _samplingDataIsValid;
    CGSize _contentSize;
    UICollectionViewLayoutAttributes *_globalFooterAttributes;
    NSSet *_supplementaryViewKinds;
    NSInteger _totalRealSections;
    NSInteger _totalVisualSections;
    NSPointerArray *_realToVisualSections;
    NSArray *_visualToRealSectionIndexes;
    NSPointerArray *_samplingHelpersByVisualSection;
    *CGFloat _visualSectionStartYs;
    *NSInteger _realSectionItemCounts;
    *NSInteger _visualSectionMaxRows;
    NSArray *_cachedNonHeaderLayoutAttributesInRect;
    CGRect _cachedLayoutAttributesLastKnownRect;
    NSIndexSet *_deletedSections;
    NSSet *_deletedItemIndexPaths;
    BOOL _processingCollectionViewUpdates;
    NSIndexPath *_viewSizeTransitionAnchorItem;
    CGFloat _viewSizeTransitionAnchorItemNormalizedYOffset;
    BOOL _floatingHeadersLayoutIsValid;
    BOOL _hasFloatingHeaders;
    NSInteger _floatingHeaderVisualSectionIndex;
    PUSectionedGridLayoutInvalidationContext *_cachedFloatingHeaderInvalidationContext;
    NSInteger _cachedFloatingHeaderInvalidationContextNewVisualSection;
    NSDictionary *_transitionSectionInfosByTransitionSection;
    NSDictionary *_transitionSectionInfosByVisualSection;
    NSMutableDictionary *_axLargeTextSectionHeaderHeightByVisualSection;
    PUSectionedGridLayoutData *_layoutData;
    BOOL _isPreparingLayout;
    BOOL _delegateSupportsGroupedSections;
    BOOL _delegateSupportsAnchorItemForContentOffset;
    BOOL _delegateSupportsTargetContentOffset;
    BOOL _delegateSupportsTransitionAutoContentOffsetEnabled;
    BOOL _delegateSupportsFinalContentInsetForCurrentContentInset;
    BOOL _delegateSupportsDidInvalidateWithContext;
    BOOL _delegateSupportsAspectRatioForItemAtIndexPath;
    BOOL _delegateSupportsSectionHeaderHeightForVisualSection;
    BOOL _delegateSupportsAccessibilitySectionHeaderHeightForVisualSection;
    BOOL _delegateSupportsWillPrepareLayout;
    BOOL _usesRenderedStrips;
    NSIndexPath *_reorderingSourceIndexPath;
    NSIndexPath *_reorderingTargetIndexPath;
    NSIndexPath *_reorderingInsertedIndexPath;
    BOOL _transitionApplyingEffectiveContentOrigin;
    PULayoutAnimationsHelper *_transitionAnimationsHelper;
    id *_transitionAnimationEndCleanupBlock;
}


@property (retain, nonatomic) NSNumber *cachedDefaultGlobalFooterHeight; // ivar: _cachedDefaultGlobalFooterHeight
@property (nonatomic, setter=_setColumnsPerRow:) NSInteger columnsPerRow; // ivar: _columnsPerRow
@property (nonatomic) CGFloat cropAmount; // ivar: _cropAmount
@property (nonatomic) NSInteger cropType; // ivar: _cropType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUSectionedGridLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dynamicLayoutEnabled; // ivar: _dynamicLayoutEnabled
@property (nonatomic) BOOL floatingSectionHeadersEnabled; // ivar: _floatingSectionHeadersEnabled
@property (nonatomic) CGFloat globalBottomPadding; // ivar: _globalBottomPadding
@property (nonatomic) CGFloat globalFooterHeight; // ivar: _globalFooterHeight
@property (readonly, nonatomic) NSIndexPath *globalFooterIndexPath;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *globalHeaderAttributes; // ivar: _globalHeaderAttributes
@property (nonatomic) CGFloat globalHeaderHeight; // ivar: _globalHeaderHeight
@property (readonly, nonatomic) NSIndexPath *globalHeaderIndexPath;
@property (nonatomic) CGFloat globalTopPadding; // ivar: _globalTopPadding
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *hiddenItemIndexPaths; // ivar: _hiddenItemIndexPaths
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (readonly, nonatomic) NSInteger itemsPerRow;
@property (readonly, nonatomic) PULayoutSampledSectioning *layoutSectioning; // ivar: _layoutSectioning
@property (readonly, nonatomic) NSInteger numberOfVisualSections;
@property (copy, nonatomic) NSString *renderedStripsElementKind; // ivar: _renderedStripsElementKind
@property (nonatomic) CGFloat sectionBottomPadding; // ivar: _sectionBottomPadding
@property (nonatomic) UIEdgeInsets sectionContentInset; // ivar: _sectionContentInset
@property (copy, nonatomic) NSString *sectionHeaderElementKind; // ivar: _sectionHeaderElementKind
@property (nonatomic) BOOL sectionHeadersEnabled; // ivar: _sectionHeadersEnabled
@property (nonatomic) CGFloat sectionTopPadding; // ivar: _sectionTopPadding
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize transitionActualContentSize;
@property (readonly, nonatomic) NSInteger transitionAnchorColumnOffset; // ivar: _transitionAnchorColumnOffset
@property (nonatomic) BOOL transitionAnchorShiftsColumns; // ivar: _transitionAnchorShiftsColumns
@property (nonatomic) CGPoint transitionEffectiveContentOrigin; // ivar: _transitionEffectiveContentOrigin
@property (readonly, nonatomic) CGPoint transitionEndContentOffset; // ivar: _transitionEndContentOffset
@property (copy, nonatomic) NSIndexPath *transitionExplicitAnchorItemIndexPath; // ivar: _transitionExplicitAnchorItemIndexPath
@property (readonly, copy, nonatomic) NSIndexPath *transitionFirstVisibleRowVisualPath; // ivar: _transitionFirstVisibleRowVisualPath
@property (nonatomic) BOOL transitionIsAnimated; // ivar: _transitionIsAnimated
@property (readonly, nonatomic) BOOL transitionIsAppearing; // ivar: _transitionIsAppearing
@property (readonly, copy, nonatomic) NSIndexPath *transitionLastVisibleRowVisualPath; // ivar: _transitionLastVisibleRowVisualPath
@property (readonly, nonatomic) UICollectionViewLayout *transitionLayout; // ivar: _transitionLayout
@property (nonatomic) CGPoint transitionStartContentOffset; // ivar: _transitionStartContentOffset
@property (nonatomic) BOOL transitionZoomingOut; // ivar: _transitionZoomingOut
@property (weak, nonatomic) NSObject<PUCollectionViewLayoutTransitioningDelegate> *transitioningDelegate; // ivar: _transitioningDelegate
@property (nonatomic) BOOL usesAspectItems; // ivar: _usesAspectItems
@property (nonatomic) BOOL usesRenderedStripTopExtendersForTransitions; // ivar: _usesRenderedStripTopExtendersForTransitions


+(Class)invalidationContextClass;
-(BOOL)_ensureUpdatedLayoutData:(id)arg0 isForward:(BOOL)arg1 outDeltaOriginY:(*CGFloat)arg2 ;
-(BOOL)_hasAccessibilityLargeText;
-(BOOL)_isSupportedSupplementaryViewKind:(id)arg0 ;
-(BOOL)_isTransitionForeignSupplementaryViewKind:(id)arg0 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(BOOL)_visualSectionsMatchTransitionSectionsToOrFromLayout:(id)arg0 ;
-(BOOL)hasItemAtGridCoordinates:(struct PUGridCoordinates )arg0 inTransitionSection:(NSInteger)arg1 ;
-(BOOL)shouldHideVisualSection:(NSInteger)arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)_delegateAccessibilitySectionHeaderHeightForSection:(NSInteger)arg0 ;
-(CGFloat)_finalSectionHeaderHeightForSection:(NSInteger)arg0 ;
-(CGFloat)_heightOfSectionAtVisualIndex:(NSInteger)arg0 ;
-(CGFloat)_sectionHeaderHeightDeltaForSection:(NSInteger)arg0 ;
-(CGFloat)_sectionWidth;
-(CGFloat)_startYOfContentAtVisualSectionIndex:(NSInteger)arg0 ;
-(CGFloat)_startYOfContentAtVisualSectionIndexWithDynamicLayout:(NSInteger)arg0 ;
-(CGFloat)_startYOfVisualSectionAtIndex:(NSInteger)arg0 ;
-(NSInteger)_firstVisualItemIndexForRenderedStripIndex:(NSInteger)arg0 ;
-(NSInteger)_floatingHeaderVisualSectionForVisibleOrigin:(struct CGPoint )arg0 ;
-(NSInteger)_nextVisualSectionForSupplementaryViewSection:(NSInteger)arg0 forward:(BOOL)arg1 ;
-(NSInteger)_renderedStripIndexForSectionRowIndex:(NSInteger)arg0 ;
-(NSInteger)_visualSectionAtPoint:(struct CGPoint )arg0 ;
-(NSInteger)firstPreparedVisualSection;
-(NSInteger)lastPreparedVisualSection;
-(NSInteger)mainRealSectionForVisualSection:(NSInteger)arg0 ;
-(NSInteger)maximumNumberOfItemsInVisualSection:(NSInteger)arg0 withNumberOfRealItems:(NSInteger)arg1 forSectioning:(id)arg2 ;
-(NSInteger)numberOfColumnsForWidth:(CGFloat)arg0 ;
-(NSInteger)numberOfContiguousRowsInTransitionSection:(NSInteger)arg0 ;
-(NSInteger)numberOfItemsInRealSection:(NSInteger)arg0 forSectioning:(id)arg1 ;
-(NSInteger)numberOfRealItemsInRealSection:(NSInteger)arg0 ;
-(NSInteger)numberOfRealItemsInVisualSection:(NSInteger)arg0 ;
-(NSInteger)numberOfRealSections;
-(NSInteger)numberOfRealSectionsForSectioning:(id)arg0 ;
-(NSInteger)numberOfRowsInVisualSection:(NSInteger)arg0 ;
-(NSInteger)numberOfVisualItemsInVisualSection:(NSInteger)arg0 ;
-(NSInteger)numberOfVisualSectionsForSectioning:(id)arg0 ;
-(NSInteger)visualIndexForItemAtGridCoordinates:(struct PUGridCoordinates )arg0 ;
-(NSInteger)visualSectionForHeaderIndexPath:(id)arg0 ;
-(NSInteger)visualSectionForRealSection:(NSInteger)arg0 ;
-(NSInteger)visualSectionForSupplementaryViewIndexPath:(id)arg0 ;
-(id)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 type:(id)arg2 ;
-(id)_gridTransitionLayout;
-(id)_layoutAttributesForItemAtVisualIndexPath:(struct PUSimpleIndexPath )arg0 realIndexPath:(id)arg1 isMainRealItem:(BOOL)arg2 ;
-(id)_layoutAttributesForSupplementaryViewOfKind:(id)arg0 forVisualSection:(NSInteger)arg1 supplementaryViewIndex:(NSInteger)arg2 ;
-(id)_realItemIndexPathClosestToPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 withTest:(id)arg2 ;
-(id)_supplementaryViewKinds;
-(id)assetIndexPathsForElementsInRect:(struct CGRect )arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)itemIndexPathAtCenterOfRect:(struct CGRect )arg0 ;
-(id)itemIndexPathAtPoint:(struct CGPoint )arg0 ;
-(id)itemIndexPathClosestToPoint:(struct CGPoint )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)mainRealIndexPathAtGridCoordinates:(struct PUGridCoordinates )arg0 inTransitionSection:(NSInteger)arg1 ;
-(id)maxItemIndexPathAbovePoint:(struct CGPoint )arg0 ;
-(id)maxItemIndexPathLeftOfPoint:(struct CGPoint )arg0 ;
-(id)prepareForViewTransitionToSize:(struct CGSize )arg0 ;
-(id)pu_debugRows;
-(id)pu_layoutAttributesForElementClosestToPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 passingTest:(id)arg2 ;
-(id)realSectionsForVisualSection:(NSInteger)arg0 forSectioning:(id)arg1 ;
-(id)reorderedIndexPath:(id)arg0 ;
-(id)supplementaryViewIndexPathForVisualSection:(NSInteger)arg0 supplementaryViewItemIndex:(NSInteger)arg1 ;
-(id)targetTransitionRealIndexPathForIndexPath:(id)arg0 ;
-(id)transitionAnchorIndexPathForTransitionSection:(NSInteger)arg0 ;
-(id)transitionSectionsInRect:(struct CGRect )arg0 toOrFromGridLayout:(id)arg1 ;
-(struct CATransform3D )_transformToConvertRect:(struct CGRect )arg0 intoRect:(struct CGRect )arg1 referenceCenter:(struct CGPoint )arg2 ;
-(struct CGPoint )_currentVisibleRectOrigin;
-(struct CGPoint )_targetContentOffsetWithAnchorItemIndexPath:(id)arg0 isRotation:(BOOL)arg1 orTransitionFromLayout:(id)arg2 keepAnchorStable:(BOOL)arg3 ;
-(struct CGPoint )_visibleRectOriginForScrollOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForTransitionFromGridLayout:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForViewSizeTransitionContext:(id)arg0 ;
-(struct CGRect )_frameByAdjustingOffScreenEnteringFrame:(struct CGRect )arg0 forRowAtVisualIndexPath:(struct PUSimpleIndexPath )arg1 transitionSectionInfo:(id)arg2 toOrFromGridLayout:(id)arg3 isAppearing:(BOOL)arg4 ;
-(struct CGRect )frameForItemAtGridCoordinates:(struct PUGridCoordinates )arg0 inTransitionSection:(NSInteger)arg1 ;
-(struct CGRect )frameForItemAtGridCoordinates:(struct PUGridCoordinates )arg0 inVisualSection:(NSInteger)arg1 ;
-(struct CGRect )frameForItemAtGridCoordinates:(struct PUGridCoordinates )arg0 inVisualSection:(NSInteger)arg1 indexPath:(id)arg2 ;
-(struct CGRect )frameForSectionHeaderAtVisualSection:(NSInteger)arg0 ;
-(struct CGRect )frameForSectionHeaderOfRealItem:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(struct CGSize )layoutItemSizeForColumn:(NSInteger)arg0 ;
-(struct PUGridCoordinates )_targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates )arg0 atVisualSection:(NSInteger)arg1 transitionSectionInfo:(id)arg2 ;
-(struct PUGridCoordinates )gridCoordinatesInSectionForItemAtVisualIndex:(NSInteger)arg0 ;
-(struct PUGridCoordinates )gridCoordinatesInTransitionSectionForItemAtIndexPath:(id)arg0 ;
-(struct PUGridCoordinates )gridCoordinatesInVisualSectionForItemAtIndexPath:(id)arg0 ;
-(struct PUGridCoordinates )targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates )arg0 atVisualSection:(NSInteger)arg1 outTransitionSection:(*NSInteger)arg2 ;
-(struct PUGridCoordinates )visualGridCoordsForTransitionGridCoords:(struct PUGridCoordinates )arg0 atTransitionSection:(NSInteger)arg1 outVisualSection:(*NSInteger)arg2 ;
-(struct PUSimpleIndexPath )_itemVisualIndexPathAtPoint:(struct CGPoint )arg0 ;
-(struct PUSimpleIndexPath )_visualIndexPathForTransitionCoordinates:(struct PUGridCoordinates )arg0 inTransitionSection:(NSInteger)arg1 ;
-(struct PUSimpleIndexPath )_visualRowPathForTransitionRowIndex:(NSInteger)arg0 transitionSectionInfo:(id)arg1 ;
-(struct UIEdgeInsets )_finalContentInset;
-(struct _NSRange )visualRowsInRect:(struct CGRect )arg0 inVisualSection:(NSInteger)arg1 totalVisualSectionRows:(*NSInteger)arg2 ;
-(struct _NSRange )visualSectionsInRect:(struct CGRect )arg0 ;
-(void)_adjustGridTransitionLayoutAttributes:(id)arg0 toOrFromGridLayout:(id)arg1 outTargetRowExists:(*BOOL)arg2 isAppearing:(BOOL)arg3 ;
-(void)_adjustItemLayoutAttributesForReordering:(id)arg0 ;
-(void)_adjustRenderedStripLayoutAttributes:(id)arg0 toOrFromGridLayout:(id)arg1 isAppearing:(BOOL)arg2 ;
-(void)_adjustSectionHeaderLayoutAttributes:(id)arg0 toOrFromGridLayout:(id)arg1 isAppearing:(BOOL)arg2 ;
-(void)_clearLayoutCaches;
-(void)_clearRetainedCaches;
-(void)_clearSamplingCaches;
-(void)_clearSectioningCaches;
-(void)_didFinishLayoutTransitionAnimations:(BOOL)arg0 ;
-(void)_ensureRect:(struct CGRect )arg0 inData:(id)arg1 outDeltaOriginY:(*CGFloat)arg2 ;
-(void)_ensureVisualSection:(NSInteger)arg0 inData:(id)arg1 ;
-(void)_enumerateVisualItemFramesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)_invalidateFloatingHeadersLayout;
-(void)_invalidateLayoutWithContext:(id)arg0 ;
-(void)_invalidateSupplementaryViewKinds;
-(void)_prepareFloatingHeadersLayoutIfNeeded;
-(void)_prepareForTransitionFromStackedLayout:(id)arg0 ;
-(void)_prepareForTransitionToOrFromGridLayout:(id)arg0 isAppearing:(BOOL)arg1 ;
-(void)_prepareLayoutIfNeeded;
-(void)_prepareSamplingDataIfNeeded;
-(void)_prepareSectioningDataIfNeeded;
-(void)_updateHasFloatingHeaders;
-(void)adjustEffectiveContentOriginForTransitionEndContentOffset:(struct CGPoint )arg0 ;
-(void)beginInsertingItemAtIndexPath:(id)arg0 ;
-(void)beginReorderingItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)endInsertingItem;
-(void)endReordering;
-(void)enumerateItemIndexPathsForVisualSection:(NSInteger)arg0 inVisualItemRange:(struct _NSRange )arg1 usingBlock:(id)arg2 ;
-(void)enumerateRealSectionsForVisualSection:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)finalizeCollectionViewUpdates;
-(void)finalizeLayoutTransition;
-(void)finalizeViewTransitionToSize;
-(void)getVisualSectionIndex:(*NSInteger)arg0 visualItemRange:(struct _NSRange *)arg1 forRenderStripAtIndexPath:(id)arg2 ;
-(void)invalidateLayoutForMetricsChange;
-(void)invalidateLayoutForVerticalScroll;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareForTransitionFromLayout:(id)arg0 ;
-(void)prepareForTransitionToLayout:(id)arg0 ;
-(void)prepareLayout;
-(void)setIsPreparingLayout:(BOOL)arg0 ;
-(void)updateReorderingTargetIndexPath:(id)arg0 ;


@end


#endif