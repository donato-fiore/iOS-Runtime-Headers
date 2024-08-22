// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWCOMPOSITIONALLAYOUT_H
#define UICOLLECTIONVIEWCOMPOSITIONALLAYOUT_H

@class NSString, NSCollectionLayoutSection;
@protocol _UICollectionViewLayoutInteractionStateModuleHost;


#import "UICollectionViewLayout.h"
#import "UICollectionViewCompositionalLayoutConfiguration.h"
#import "_UICollectionViewLayoutInteractionStateModule.h"
#import "_UICollectionCompositionalLayoutSolverResolveResult.h"
#import "_UICollectionCompositionalLayoutSolverUpdate.h"
#import "_UIDataSourceSnapshotter.h"
#import "_UICollectionCompositionalLayoutSolver.h"
#import "_UIUpdateVisibleCellsContext.h"

@interface UICollectionViewCompositionalLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost>

 {
    UICollectionViewCompositionalLayoutConfiguration *_configuration;
    _UICollectionViewLayoutInteractionStateModule *_interactionStateModule;
}


@property (copy, nonatomic) UICollectionViewCompositionalLayoutConfiguration *configuration;
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolverResolveResult *currentResolveResult; // ivar: _currentResolveResult
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolverUpdate *currentUpdate; // ivar: _currentUpdate
@property (retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshotter; // ivar: _dataSourceSnapshotter
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferredLastInvalidationNextInvalidationRequiresFullResolve; // ivar: _deferredLastInvalidationNextInvalidationRequiresFullResolve
@property (nonatomic) BOOL deferringInitialSolveUntilPrepare; // ivar: _deferringInitialSolveUntilPrepare
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dynamicsConfigurationHandler; // ivar: _dynamicsConfigurationHandler
@property (nonatomic) NSUInteger edgesForSafeAreaPropagation; // ivar: _edgesForSafeAreaPropagation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInUpdateVisibleCellsPass; // ivar: _isInUpdateVisibleCellsPass
@property (nonatomic) BOOL layoutRTL; // ivar: _layoutRTL
@property (copy, nonatomic) id *layoutSectionProvider; // ivar: _layoutSectionProvider
@property (retain, nonatomic) NSCollectionLayoutSection *layoutSectionTemplate; // ivar: _layoutSectionTemplate
@property (nonatomic) UIEdgeInsets memoizedDynamicAnimatorWorldAdjustingInsets; // ivar: _memoizedDynamicAnimatorWorldAdjustingInsets
@property (nonatomic) UIEdgeInsets memoizedPreviousLayoutMargins; // ivar: _memoizedPreviousLayoutMargins
@property (nonatomic) CGSize memoizedPreviousSolvedViewBoundsSize; // ivar: _memoizedPreviousSolvedViewBoundsSize
@property (nonatomic) BOOL roundsToScreenScale; // ivar: _roundsToScreenScale
@property (nonatomic) BOOL shouldAdjustContentInsetModeForCollectionViewNeverMode; // ivar: _shouldAdjustContentInsetModeForCollectionViewNeverMode
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolver *solver; // ivar: _solver
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIUpdateVisibleCellsContext *updateVisibleCellsContext; // ivar: _updateVisibleCellsContext


+(id)layoutWithListConfiguration:(id)arg0 ;
-(BOOL)_adjustCollectionViewContentInsetBehaviorForLayoutAxisIfNeeded:(NSUInteger)arg0 container:(id)arg1 ;
-(BOOL)_allowsItemInteractionsToBegin;
-(BOOL)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionInSection:(NSInteger)arg0 ;
-(BOOL)_boundsSizeChangedFromLastSolvedBounds:(struct CGRect )arg0 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(BOOL)_disallowsFadeCellsForBoundsChange;
-(BOOL)_estimatesSizes;
-(BOOL)_estimatesSupplementaryItems;
-(BOOL)_hasOrthogonalScrollingSections;
-(BOOL)_invokeVisibleBoundsUpdateForDynamicAnimatorForNewVisibleBounds:(struct CGRect )arg0 preparingLayout:(BOOL)arg1 ;
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
-(BOOL)_shouldInvalidateLayoutForOldInsets:(struct UIEdgeInsets )arg0 newInsets:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets )arg0 fromOldMargins:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets )arg0 fromOldInsets:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg0 elementKind:(id)arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg0 elementKind:(id)arg1 ;
-(BOOL)_supportsPrefetchingWithEstimatedSizes;
-(BOOL)_supportsSwipeActionsForIndexPath:(id)arg0 ;
-(BOOL)_viewBoundsPermitsLayout:(struct CGRect )arg0 ;
-(BOOL)_wantsAnimationsForOffscreenAuxillaries;
-(BOOL)_wantsBandSelectionVisualsInSection:(NSInteger)arg0 ;
-(BOOL)_wantsCustomSectionContainers;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(BOOL)_wantsUpdateVisibleCellsPassNotifications;
-(BOOL)canBeEdited;
-(BOOL)isEditing;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(CGFloat)_alignedContentMarginGivenMargin:(CGFloat)arg0 ;
-(CGFloat)_interactionStateModule:(id)arg0 spacingAfterLayoutSection:(NSInteger)arg1 ;
-(CGFloat)_orthogonalScrollingDecelerationRateForSection:(NSInteger)arg0 ;
-(CGFloat)_orthogonalScrollingInterPageDimensionForSection:(NSInteger)arg0 ;
-(CGFloat)_orthogonalScrollingPagingDimensionForSection:(NSInteger)arg0 ;
-(CGFloat)_orthogonalScrollingSectionCornerRadius:(NSInteger)arg0 ;
-(NSInteger)_anchorForAuxiliaryElementOfKind:(id)arg0 ;
-(NSInteger)scrollDirection;
-(NSUInteger)_layoutAxis;
-(NSUInteger)_orthogonalScrollingAxis;
-(id)_boundsChangeResolve;
-(id)_containerFromCollectionView;
-(id)_containerFromCollectionViewWithCollectionViewBounds:(struct CGRect )arg0 ;
-(id)_contentInsetsEnvironmentFromCollectionViewForInsetsReference:(NSInteger)arg0 ;
-(id)_customContainerSectionIndexes;
-(id)_endInteractiveReorderingResolveWithContext:(id)arg0 ;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect )arg0 ;
-(id)_interactionStateModule:(id)arg0 layoutSectionForIndex:(NSInteger)arg1 ;
-(id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(id)_invokeVisibleItemsInvalidationHandlerIfNeededForVisibleBounds:(struct CGRect )arg0 ;
-(id)_layoutAttributesForIndelibleElements;
-(id)_layoutSectionForSectionIndex:(NSUInteger)arg0 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)_marginsChangeResolve;
-(id)_orthogonalScrollingSections;
-(id)_preferredAttributesResolveWithInvalidatedPreferredAttributes:(id)arg0 layoutOffset:(struct CGPoint )arg1 visibleRect:(struct CGRect )arg2 ;
-(id)_propertyAnimatorForCollectionViewUpdates:(id)arg0 withCustomAnimator:(id)arg1 ;
-(id)_scrollViewAdjustmentsChangeResolve;
-(id)_sectionContainerDescriptorForSectionIndex:(NSInteger)arg0 ;
-(id)_sectionsDescription;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
-(id)_updateResolve;
-(id)boundarySupplementaryItems;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg0 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg0 ;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg0 ;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg0 ;
-(id)initWithLayoutSection:(id)arg0 ;
-(id)initWithLayoutSection:(id)arg0 scrollDirection:(NSInteger)arg1 ;
-(id)initWithSection:(id)arg0 ;
-(id)initWithSection:(id)arg0 configuration:(id)arg1 ;
// -(id)initWithSection:(id)arg0 sectionProvider:(id)arg1 configuration:(unk)arg2  ;
-(id)initWithSectionProvider:(id)arg0 ;
// -(id)initWithSectionProvider:(id)arg0 configuration:(unk)arg1  ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg0 withTargetPosition:(struct CGPoint )arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )_offsetForOrthogonalScrollingSection:(NSInteger)arg0 ;
-(struct CGPoint )_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint )arg0 section:(NSInteger)arg1 itemFrame:(struct CGRect )arg2 ;
-(struct CGPoint )_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg0 withProposedTargetPosition:(struct CGPoint )arg1 ;
-(struct CGRect )_contentFrameForSection:(NSInteger)arg0 ;
-(struct CGRect )_layoutFrameForSection:(NSInteger)arg0 ;
-(struct CGRect )_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg0 frame:(struct CGRect )arg1 ;
-(struct CGRect )_orthogonalScrollingContentRectForSection:(NSInteger)arg0 ;
-(struct CGRect )_orthogonalScrollingLayoutRectForSection:(NSInteger)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(struct CGVector )_scrollingUnitVectorForOrthogonalScrollingSection:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_contentInsetsForSection:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_orthogonalScrollingContentInsetsForSection:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_supplementaryViewInsetsForScrollingToItemAtIndexPath:(id)arg0 ;
-(void)_cellBackgroundOrBottomSeparatorChangedAtIndexPath:(id)arg0 separatorOnly:(BOOL)arg1 ;
-(void)_computeAndUpdateAdjustedContentFrame;
-(void)_createSwipeActionsModuleIfNeeded;
-(void)_didEndSwiping;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint )arg0 logInvalidationReason:(BOOL)arg1 ;
-(void)_finalizeCollectionViewUpdates;
-(void)_fullResolve;
-(void)_handlePreferredSizingDataInvalidation:(id)arg0 ;
-(void)_handleSwipeActionsInvalidationWithContext:(id)arg0 ;
-(void)_postProcessPreferredAttributes:(id)arg0 forView:(id)arg1 ;
-(void)_prepareForCollectionViewUpdates:(id)arg0 withDataSourceTranslator:(id)arg1 ;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg0 withLayoutAttributes:(id)arg1 ;
-(void)_prepareForTransitionToLayout:(id)arg0 ;
-(void)_scrollViewLayoutAdjustmentsChanged;
-(void)_setCollectionView:(id)arg0 ;
-(void)_setOffset:(struct CGPoint )arg0 forOrthogonalScrollingSection:(NSInteger)arg1 ;
-(void)_solveForPinnedSupplementaryItemsIfNeededWithContext:(id)arg0 ;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg0 newTraitCollection:(id)arg1 ;
-(void)_transformCellLayoutAttributes:(id)arg0 ;
-(void)_transformDecorationLayoutAttributes:(id)arg0 ;
-(void)_transformSupplementaryLayoutAttributes:(id)arg0 ;
-(void)_updateCollectionViewBackgroundColor;
-(void)_updateStyleForSwipeActionsConfiguration:(id)arg0 indexPath:(id)arg1 ;
-(void)_willBeginSwiping;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;
-(void)setBoundarySupplementaryItems:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 ;


@end


#endif