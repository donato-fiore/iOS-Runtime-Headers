// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWLAYOUT_H
#define UICOLLECTIONVIEWLAYOUT_H

@class NSMutableDictionary, NSMutableIndexSet, NSIndexSet, NSArray, NSString;
@protocol _UICollectionViewLayoutOrthogonalScrolling, _UICollectionViewLayoutSwipeActions, NSCoding;

#import <Foundation/Foundation.h>

#import "UICollectionViewLayout.h"
#import "UIDynamicAnimator.h"
#import "UICollectionViewLayoutInvalidationContext.h"
#import "_UICollectionViewLayoutSwipeActionsModule.h"
#import "_UICollectionViewCompositionLayout.h"
#import "UICollectionView.h"
#import "_UICollectionViewAnimationContext.h"
#import "UIColor.h"

@interface UICollectionViewLayout : NSObject <_UICollectionViewLayoutOrthogonalScrolling, _UICollectionViewLayoutSwipeActions, NSCoding>

 {
    CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableDictionary *_deletedDecorationIndexPathsDict;
    NSMutableDictionary *_insertedDecorationIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSMutableDictionary *_decorationViewExternalObjectsTables;
    UICollectionViewLayout *_transitioningFromLayout;
    UICollectionViewLayout *_transitioningToLayout;
    UIDynamicAnimator *_animator;
    UICollectionViewLayoutInvalidationContext *_invalidationContext;
    _UICollectionViewLayoutSwipeActionsModule *_swipeActionsModule;
    CGRect _frame;
    NSIndexSet *_sections;
    NSIndexSet *_items;
    NSArray *_elementKinds;
    _UICollectionViewCompositionLayout *_compositionLayout;
    UICollectionViewLayout *_siblingLayout;
    CGPoint _layoutOffset;
    NSUInteger _layoutOffsetEdges;
    ? _layoutFlags;
}


@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic, getter=_collectionViewAnimationContext, setter=_setCollectionViewAnimationContext:) _UICollectionViewAnimationContext *collectionViewAnimationContext; // ivar: _collectionViewAnimationContext
@property (nonatomic, getter=_compositionLayout, setter=_setCompositionLayout:) _UICollectionViewCompositionLayout *compositionLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic, getter=_elementKinds, setter=_setElementKinds:) NSArray *elementKinds;
@property (readonly, nonatomic, getter=_focusFastScrollingIndexBarInsets) UIEdgeInsets focusFastScrollingIndexBarInsets;
@property (nonatomic, getter=_frame, setter=_setFrame:) CGRect frame;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, getter=_items, setter=_setItems:) NSIndexSet *items;
@property (nonatomic, getter=_layoutOffset, setter=_setLayoutOffset:) CGPoint layoutOffset;
@property (nonatomic, getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:) NSUInteger layoutOffsetEdges;
@property (retain, nonatomic, getter=_preferredBackgroundColor, setter=_setPreferredBackgroundColor:) UIColor *preferredBackgroundColor; // ivar: _preferredBackgroundColor
@property (nonatomic, getter=_isPrepared, setter=_setPrepared:) BOOL prepared;
@property (copy, nonatomic, getter=_sections, setter=_setSections:) NSIndexSet *sections;
@property (nonatomic, getter=_siblingLayout, setter=_setSiblingLayout:) UICollectionViewLayout *siblingLayout;
@property (nonatomic, getter=_sublayoutType, setter=_setSublayoutType:) NSInteger sublayoutType; // ivar: _sublayoutType
@property (readonly) Class superclass;


+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(BOOL)_allowsItemInteractionsToBegin;
-(BOOL)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionInSection:(NSInteger)arg0 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(BOOL)_disablesDoubleSidedAnimations;
-(BOOL)_disallowsFadeCellsForBoundsChange;
-(BOOL)_estimatesSizes;
-(BOOL)_estimatesSupplementaryItems;
-(BOOL)_hasOrthogonalScrollingSections;
-(BOOL)_initialAppearingLayoutAttributesCanBeOverriddenForEstimatedSizing;
-(BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg0 ;
-(BOOL)_orthogonalScrollingElementShouldAppearBelowForAttributes:(id)arg0 ;
-(BOOL)_orthogonalScrollingSectionShouldClipContentToBounds:(NSInteger)arg0 ;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(NSInteger)arg0 ;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(NSInteger)arg0 ;
-(BOOL)_overridesSafeAreaPropagationToDescendants;
-(BOOL)_preparedForBoundsChanges;
-(BOOL)_shouldAddElementToSectionContainer:(id)arg0 ;
-(BOOL)_shouldAdjustTargetContentOffsetToValidateContentExtents;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(NSInteger)arg0 ;
-(BOOL)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets )arg0 fromOldMargins:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets )arg0 fromOldInsets:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg0 elementKind:(id)arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg0 elementKind:(id)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(BOOL)_supportsPrefetchingWithEstimatedSizes;
-(BOOL)_supportsSwipeActionsForIndexPath:(id)arg0 ;
-(BOOL)_wantsAnimationsForOffscreenAuxillaries;
-(BOOL)_wantsBandSelectionVisualsInSection:(NSInteger)arg0 ;
-(BOOL)_wantsCustomSectionContainers;
-(BOOL)_wantsRightToLeftHorizontalMirroringIfNeeded;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(BOOL)_wantsUpdateVisibleCellsPassNotifications;
-(BOOL)canBeEdited;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)isEditing;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(CGFloat)_alignedContentMarginGivenMargin:(CGFloat)arg0 ;
-(CGFloat)_orthogonalScrollingDecelerationRateForSection:(NSInteger)arg0 ;
-(CGFloat)_orthogonalScrollingInterPageDimensionForSection:(NSInteger)arg0 ;
-(CGFloat)_orthogonalScrollingPagingDimensionForSection:(NSInteger)arg0 ;
-(CGFloat)_orthogonalScrollingSectionCornerRadius:(NSInteger)arg0 ;
-(NSInteger)_anchorForAuxiliaryElementOfKind:(id)arg0 ;
-(NSInteger)developmentLayoutDirection;
-(NSUInteger)_edgesForSafeAreaPropagationToDescendants;
-(NSUInteger)_layoutAxis;
-(NSUInteger)_layoutAxisForAttributes:(id)arg0 previousAttributes:(id)arg1 nextAttributes:(id)arg2 ;
-(NSUInteger)_orthogonalScrollingAxis;
-(id)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 ;
-(id)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 type:(id)arg2 ;
-(id)_customContainerSectionIndexes;
-(id)_decorationViewForLayoutAttributes:(id)arg0 ;
-(id)_dynamicAnimator;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect )arg0 ;
-(id)_finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)_indexPathForInsertionIndicatorForTargetAttributes:(id)arg0 axis:(NSUInteger)arg1 edges:(NSUInteger)arg2 previousAttributes:(id)arg3 nextAttributes:(id)arg4 ;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg0 ;
-(id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg0 ;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)arg0 ;
-(id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg0 ;
-(id)_initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)_invalidationContextForBoundsChange:(struct CGRect )arg0 fromOldBounds:(struct CGRect )arg1 ;
-(id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg0 previousIndexPaths:(id)arg1 reorderingCancelled:(BOOL)arg2 ;
-(id)_invalidationContextForRefreshingVisibleElementAttributes;
-(id)_invalidationContextForReorderingTargetPosition:(struct CGPoint )arg0 targetIndexPaths:(id)arg1 withPreviousPosition:(struct CGPoint )arg2 previousIndexPaths:(id)arg3 ;
-(id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(id)_layoutAttributesForElementsInProjectedRect:(struct CGRect )arg0 withProjectionVector:(struct CGVector )arg1 projectionDistance:(CGFloat)arg2 ;
-(id)_layoutAttributesForIndelibleElements;
-(id)_layoutAttributesForInsertionIndicatorAtItemWithTargetAttributes:(id)arg0 targetPositionEdges:(NSUInteger)arg1 ;
-(id)_layoutAttributesForInsertionIndicatorAtTargetIndexPath:(id)arg0 ;
-(id)_layoutAttributesForInsertionIndicatorAtTargetPosition:(struct CGPoint )arg0 sourceIndexPath:(id)arg1 ;
-(id)_layoutAttributesForItemNearestPosition:(struct CGPoint )arg0 maximumDistance:(CGFloat)arg1 ;
-(id)_layoutAttributesForNextItemInDirection:(struct CGPoint )arg0 fromIndexPath:(id)arg1 constrainedToRect:(struct CGRect )arg2 ;
-(id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg0 withTargetPosition:(struct CGPoint )arg1 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)_nextLayoutAttributesForGlobalIndex:(NSInteger)arg0 ;
-(id)_orthogonalScrollingSections;
-(id)_orthogonalScrollingTrace;
-(id)_previousLayoutAttributesForGlobalIndex:(NSInteger)arg0 ;
-(id)_propertyAnimatorForCollectionViewUpdates:(id)arg0 withCustomAnimator:(id)arg1 ;
-(id)_reorderingTargetItemIndexPathForPosition:(struct CGPoint )arg0 withPreviousIndexPath:(id)arg1 ;
-(id)_sectionContainerDescriptorForSectionIndex:(NSInteger)arg0 ;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg0 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg0 ;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg0 ;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg0 previousIndexPaths:(id)arg1 movementCancelled:(BOOL)arg2 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg0 withTargetPosition:(struct CGPoint )arg1 previousIndexPaths:(id)arg2 previousPosition:(struct CGPoint )arg3 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg0 withTargetPosition:(struct CGPoint )arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg0 ;
-(id)targetIndexPathForInteractivelyMovingItem:(id)arg0 withPosition:(struct CGPoint )arg1 ;
-(struct CGPoint )_contentOffsetForScrollingToSection:(NSInteger)arg0 ;
-(struct CGPoint )_contentOffsetFromProposedContentOffset:(struct CGPoint )arg0 forScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(NSUInteger)arg2 ;
-(struct CGPoint )_offsetForOrthogonalScrollingSection:(NSInteger)arg0 ;
-(struct CGPoint )_offsetInTopParentLayout:(*id)arg0 ;
-(struct CGPoint )_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint )arg0 section:(NSInteger)arg1 itemFrame:(struct CGRect )arg2 ;
-(struct CGPoint )_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg0 withProposedTargetPosition:(struct CGPoint )arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGPoint )transitionContentOffsetForProposedContentOffset:(struct CGPoint )arg0 keyItemIndexPath:(id)arg1 ;
-(struct CGRect )_centerInsertionIndicatorFrame:(struct CGRect )arg0 targetAttributes:(id)arg1 axis:(NSUInteger)arg2 edges:(NSUInteger)arg3 ;
-(struct CGRect )_contentFrameForSection:(NSInteger)arg0 ;
-(struct CGRect )_dynamicReferenceBounds;
-(struct CGRect )_frameForInsertionIndicatorForTargetFrame:(struct CGRect )arg0 axis:(NSUInteger)arg1 edges:(NSUInteger)arg2 ;
-(struct CGRect )_layoutFrameForSection:(NSInteger)arg0 ;
-(struct CGRect )_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg0 frame:(struct CGRect )arg1 ;
-(struct CGRect )_orthogonalScrollingContentRectForSection:(NSInteger)arg0 ;
-(struct CGRect )_orthogonalScrollingLayoutRectForSection:(NSInteger)arg0 ;
-(struct CGRect )bounds;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromLayout:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toLayout:(id)arg1 ;
-(struct CGSize )_fallbackItemSize;
-(struct CGVector )_scrollingUnitVectorForOrthogonalScrollingSection:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_contentInsetsForSection:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_orthogonalScrollingContentInsetsForSection:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_supplementaryViewInsetsForScrollingToItemAtIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )_preferredLayoutMargins;
-(void)_cellBackgroundOrBottomSeparatorChangedAtIndexPath:(id)arg0 separatorOnly:(BOOL)arg1 ;
-(void)_didEndSwiping;
-(void)_didFinishLayoutTransitionAnimations:(BOOL)arg0 ;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint )arg0 logInvalidationReason:(BOOL)arg1 ;
-(void)_finalizeCollectionViewItemAnimations;
-(void)_finalizeCollectionViewUpdates;
-(void)_finalizeLayoutTransition;
-(void)_invalidateLayoutUsingContext:(id)arg0 ;
-(void)_postProcessPreferredAttributes:(id)arg0 forView:(id)arg1 ;
-(void)_prepareForCollectionViewUpdates:(id)arg0 ;
-(void)_prepareForCollectionViewUpdates:(id)arg0 withDataSourceTranslator:(id)arg1 ;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg0 withLayoutAttributes:(id)arg1 ;
-(void)_prepareForTransitionFromLayout:(id)arg0 ;
-(void)_prepareForTransitionToLayout:(id)arg0 ;
-(void)_prepareToAnimateFromCollectionViewItems:(id)arg0 atContentOffset:(struct CGPoint )arg1 toItems:(id)arg2 atContentOffset:(struct CGPoint )arg3 ;
-(void)_scrollViewLayoutAdjustmentsChanged;
-(void)_setDynamicAnimator:(id)arg0 ;
-(void)_setExternalObjectTable:(id)arg0 forNibLoadingOfDecorationViewOfKind:(id)arg1 ;
-(void)_setOffset:(struct CGPoint )arg0 forOrthogonalScrollingSection:(NSInteger)arg1 ;
-(void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(BOOL)arg0 ;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg0 newTraitCollection:(id)arg1 ;
-(void)_willBeginSwiping;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeAnimatedBoundsChange;
-(void)finalizeCollectionViewUpdates;
-(void)finalizeLayoutTransition;
-(void)invalidateLayout;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareForTransitionFromLayout:(id)arg0 ;
-(void)prepareForTransitionToLayout:(id)arg0 ;
-(void)prepareLayout;
-(void)registerClass:(Class)arg0 forDecorationViewOfKind:(id)arg1 ;
-(void)registerNib:(id)arg0 forDecorationViewOfKind:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 ;


@end


#endif