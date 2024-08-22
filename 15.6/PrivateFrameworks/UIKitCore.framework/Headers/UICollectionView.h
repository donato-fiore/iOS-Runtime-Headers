// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLLECTIONVIEW_H
#define UICOLLECTIONVIEW_H

@class NSMutableDictionary, NSHashTable, NSString, NSIndexPath, NSMutableSet, NSMutableArray, NSArray, NSTimer;
@protocol _UIHorizontalIndexTitleBarDelegate, _UIUpdateCycleIdleObserver, UIContextMenuInteractionDelegate, _UIKeyboardAutoRespondingScrollView, _UIDataSourceBackedView, UIDataSourceTranslating, UICollectionViewDataSourcePrefetching, UICollectionViewDragDelegate_Private, UICollectionViewDropDelegate_Private, UICollectionViewDragDestination, UICollectionViewDragSource, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate;


#import "UIScrollView.h"
#import "UICollectionReusableView.h"
#import "UICollectionViewData.h"
#import "UICollectionViewUpdate.h"
#import "_UIIndexPathIdentityTracker.h"
#import "UICollectionViewLayoutAttributes.h"
#import "_UIDynamicAnimationGroup.h"
#import "UICollectionViewLayout.h"
#import "_UIDragSnappingFeedbackGenerator.h"
#import "UIFocusContainerGuide.h"
#import "UICollectionViewCell.h"
#import "UIViewPropertyAnimator.h"
#import "_UICollectionViewPrefetchingContext.h"
#import "_UIVelocityIntegrator.h"
#import "_UICollectionViewDragAndDropController.h"
#import "_UICollectionViewDragSourceController.h"
#import "_UICollectionViewDragDestinationController.h"
#import "_UICollectionViewOrthogonalScrollerSectionController.h"
#import "_UICollectionViewSectionFocusGuideController.h"
#import "_UICollectionViewMultiSelectController.h"
#import "_UICollectionViewSelectionController.h"
#import "_UICollectionViewSubviewManager.h"
#import "UIContextMenuInteraction.h"
#import "UIWindowSceneActivationInteraction.h"
#import "_UICollectionViewVerifier.h"
#import "UIView.h"
#import "UITouch.h"
#import "UICollectionViewUpdateItem.h"
#import "_UICollectionViewFocusedItemState.h"
#import "_UIHorizontalIndexTitleBar.h"
#import "_UIDragDestinationIndicatorView.h"
#import "_UIFocusFastScrollingIndexBarEntry.h"

@interface UICollectionView : UIScrollView <_UIHorizontalIndexTitleBarDelegate, _UIUpdateCycleIdleObserver, UIContextMenuInteractionDelegate, _UIKeyboardAutoRespondingScrollView, _UIDataSourceBackedView, UIDataSourceTranslating>

 {
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSHashTable *_notifiedDisplayedCells;
    NSInteger _reloadingSuspendedCount;
    NSInteger _updateAnimationCount;
    UICollectionReusableView *_firstResponderView;
    UICollectionReusableView *_newContentView;
    NSInteger _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_clonedCellsDict;
    NSMutableDictionary *_clonedSupplementaryViewsDict;
    NSMutableDictionary *_clonedDecorationViewsDict;
    NSMutableDictionary *_templateLayoutCells;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    UICollectionViewData *_collectionViewData;
    UICollectionViewUpdate *_currentUpdate;
    CGRect _visibleBounds;
    UIEdgeInsets _visibleRectInsets;
    CGRect _preRotationBounds;
    CGPoint _rotationBoundsOffset;
    NSInteger _rotationAnimationCount;
    _UIIndexPathIdentityTracker *_identityTracker;
    NSInteger _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    id *_updateCompletionHandler;
    id *_postUpdateBlock;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    NSMutableSet *_supplementaryViewRegisteredKinds;
    UICollectionViewLayoutAttributes *_transitionLayoutAttributes;
    BOOL _isInInteractiveTransition;
    BOOL _shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;
    id *_interactiveCompletionHandler;
    CGFloat _currentInteractiveTransitionTimeStamp;
    CGFloat _previousInteractiveTransitionTimeStamp;
    CGFloat _startTimeStamp;
    CGPoint _currentCenterOffset;
    CGPoint _previousCenterOffset;
    CGFloat _currentInteractiveTransitionProgress;
    CGFloat _previousInteractiveTransitionProgress;
    _UIDynamicAnimationGroup *_endInteractiveTransitionAnimationGroup;
    UICollectionViewLayout *_nextLayoutForInteractiveTranstion;
    _UIDragSnappingFeedbackGenerator *_reorderFeedbackGenerator;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    id *_invalidationBlock;
    CGPoint _reorderingTargetPosition;
    NSTimer *_autoscrollTimer;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    CGPoint _horizontalIndexTitleBarOffset;
    ? _collectionViewFlags;
    CGPoint _lastLayoutOffset;
    NSIndexPath *_cancellingToIndexPath;
    UICollectionViewCell *_cellBeingReconfigured;
    NSIndexPath *_indexPathBeingReconfigured;
    UIViewPropertyAnimator *_reconfigureAnimator;
    _UICollectionViewPrefetchingContext *_mainPrefetchingContext;
    NSMutableDictionary *_orthogonalSectionPrefetchingContexts;
    _UICollectionViewPrefetchingContext *_activeOrthogonalPrefetchingContext;
    NSMutableDictionary *_prefetchCacheItems;
    _UIVelocityIntegrator *_prefetchVelocityIntegrator;
    id<UICollectionViewDataSourcePrefetching> *_prefetchDataSource;
    NSInteger _containerScrollViewVisitationCount;
    _UICollectionViewDragAndDropController *_dragAndDropController;
    NSInteger _performUsingPresentationValuesRefCount;
    id<UICollectionViewDragDelegate_Private> *_dragDelegate;
    id<UICollectionViewDropDelegate_Private> *_dropDelegate;
    NSInteger _dragInteractionEnabledState;
    id<UICollectionViewDragDestination> *_dragDestinationDelegate;
    id<UICollectionViewDragSource> *_dragSourceDelegate;
    _UICollectionViewDragSourceController *_dragSourceController;
    _UICollectionViewDragDestinationController *_dragDestinationController;
    NSInteger _dragReorderingCadence;
    NSInteger _dragPlaceholderInsertionCadence;
    NSInteger _reorderingCadence;
    NSIndexPath *_highlightedSpringLoadedItem;
    NSInteger _preferredDragDestinationVisualStyle;
    NSInteger _dragDestinationVisualStyle;
    _UICollectionViewOrthogonalScrollerSectionController *_orthogonalScrollerController;
    _UICollectionViewSectionFocusGuideController *_sectionFocusGuideController;
    _UICollectionViewMultiSelectController *_multiSelectController;
    _UICollectionViewSelectionController *_selectionController;
    _UICollectionViewSubviewManager *_subviewManager;
    NSIndexPath *_contentOffsetRestorationAnchor;
    CGPoint _offsetToContentOffsetRestorationAnchor;
    NSIndexPath *_targetIndexPathForScrolling;
    CGPoint _offsetToTargetIndexPathForScrolling;
    UIContextMenuInteraction *_contextMenuInteraction;
    UIWindowSceneActivationInteraction *_sceneActivationInteraction;
    NSInteger _updateVisibleCellsRecursionCount;
    _UICollectionViewVerifier *_verifier;
}


@property (readonly, nonatomic) BOOL __hasTransitionLayoutAttributes;
@property (nonatomic, setter=_setAllowsCursorInteraction:) BOOL _allowsCursorInteraction; // ivar: __allowsCursorInteraction
@property (readonly, nonatomic, getter=_isEditing) BOOL _editing;
@property (readonly, nonatomic) BOOL _isRequestingCellOrSupplementary;
@property (readonly, nonatomic, getter=_selectionController) _UICollectionViewSelectionController *_selectionController;
@property (readonly, nonatomic, getter=_subviewManager) _UICollectionViewSubviewManager *_subviewManager;
@property (readonly, nonatomic, getter=_allowsEffectiveMultipleSelection) BOOL allowsEffectiveMultipleSelection;
@property (readonly, nonatomic, getter=_allowsEffectiveSelection) BOOL allowsEffectiveSelection;
@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) BOOL allowsFocusDuringEditing;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) BOOL allowsSelectionDuringEditing;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic, getter=_collectionViewData) UICollectionViewData *collectionViewData;
@property (retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // ivar: _layout
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (retain, nonatomic, getter=_currentPromiseFulfillmentCell, setter=_setCurrentPromiseFulfillmentCell:) UICollectionViewCell *currentPromiseFulfillmentCell; // ivar: _currentPromiseFulfillmentCell
@property (retain, nonatomic, getter=_currentTouch, setter=_setCurrentTouch:) UITouch *currentTouch; // ivar: _currentTouch
@property (readonly, nonatomic, getter=_currentUpdate) UICollectionViewUpdate *currentUpdate;
@property (weak, nonatomic) NSObject<UICollectionViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic, getter=_dataSourceSupportsReordering) BOOL dataSourceSupportsReordering;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_defaultLayoutMargins, setter=_setDefaultLayoutMargins:) UIEdgeInsets defaultLayoutMargins; // ivar: _defaultLayoutMargins
@property (weak, nonatomic) NSObject<UICollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<UICollectionViewDragDelegate> *dragDelegate;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (weak, nonatomic) NSObject<UICollectionViewDropDelegate> *dropDelegate;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic, getter=_endOfContentFocusContainerGuide) UIFocusContainerGuide *endOfContentFocusContainerGuide; // ivar: _endOfContentFocusContainerGuide
@property (retain, nonatomic, getter=_expectedDiffableUpdateItem) UICollectionViewUpdateItem *expectedDiffableUpdateItem; // ivar: _expectedDiffableUpdateItem
@property (copy, nonatomic, getter=_focusedItemState, setter=_setFocusedItemState:) _UICollectionViewFocusedItemState *focusedItemState; // ivar: _focusedItemState
@property (readonly, nonatomic) BOOL hasActiveDrag;
@property (readonly, nonatomic) BOOL hasActiveDrop;
@property (readonly, nonatomic, getter=_hasCustomBackground) BOOL hasCustomBackground;
@property (readonly, nonatomic) BOOL hasUncommittedUpdates;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_horizontalIndexTitleBar, setter=_setHorizontalIndexTitleBar:) _UIHorizontalIndexTitleBar *horizontalIndexTitleBar; // ivar: _horizontalIndexTitleBar
@property (retain, nonatomic) NSIndexPath *indexPathOfFocusedCellBeforeFocusingOnHorizontalIndexTitleBar; // ivar: _indexPathOfFocusedCellBeforeFocusingOnHorizontalIndexTitleBar
@property (readonly, nonatomic) NSArray *indexPathsForSelectedItems;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (nonatomic) BOOL isMovingFocusFromHorizontalIndexTitleBarToContent; // ivar: _isMovingFocusFromHorizontalIndexTitleBarToContent
@property (nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) BOOL keepsFirstResponderVisibleOnBoundsChange;
@property (copy, nonatomic, getter=_navigationCompletion, setter=_setNavigationCompletion:) id *navigationCompletion; // ivar: _navigationCompletion
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic, getter=_isPerformingReloadData) BOOL performingReloadData;
@property (weak, nonatomic) NSObject<UICollectionViewDataSourcePrefetching> *prefetchDataSource;
@property (nonatomic, getter=isPrefetchingEnabled) BOOL prefetchingEnabled;
@property (copy, nonatomic, getter=_rememberedFocusedItemState, setter=_setRememberedFocusedItemState:) _UICollectionViewFocusedItemState *rememberedFocusedItemState; // ivar: _rememberedFocusedItemState
@property (nonatomic) BOOL remembersLastFocusedIndexPath;
@property (retain, nonatomic, getter=_reorderDestinationView, setter=_setReorderDestinationView:) _UIDragDestinationIndicatorView *reorderDestinationView; // ivar: _reorderDestinationView
@property (readonly, nonatomic, getter=_reorderedItems) NSArray *reorderedItems;
@property (nonatomic) NSInteger reorderingCadence;
@property (readonly, nonatomic, getter=_reorderingTargetPosition) CGPoint reorderingTargetPosition;
@property (nonatomic, getter=_searchFullPageOnFocusUpdate, setter=_setSearchFullPageOnFocusUpdate:) BOOL searchFullPageOnFocusUpdate; // ivar: _searchFullPageOnFocusUpdate
@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *selectedIndexTitleEntry; // ivar: _selectedIndexTitleEntry
@property (nonatomic) BOOL selectionFollowsFocus;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_supportsAutomaticCatalystDragAndDropReordering) BOOL supportsAutomaticCatalystDragAndDropReordering;
@property (readonly, nonatomic) NSArray *visibleCells;
@property (readonly, nonatomic, getter=_visibleViews) NSArray *visibleViews;


+(id)_reuseKeyForSupplementaryViewOfKind:(id)arg0 withReuseIdentifier:(id)arg1 ;
-(BOOL)_allowsEffectiveFocus;
-(BOOL)_allowsEffectiveSelectionOrCustomActionAtIndexPath:(id)arg0 ;
-(BOOL)_allowsVisibleCellUpdatesDuringUpdateAnimations;
-(BOOL)_beginInteractiveMovementForItemAtIndexPath:(id)arg0 ;
-(BOOL)_beginReorderingItemAtIndexPath:(id)arg0 ;
-(BOOL)_canEditItemAtIndexPath:(id)arg0 ;
-(BOOL)_canPerformAction:(SEL)arg0 forCell:(id)arg1 sender:(id)arg2 ;
-(BOOL)_canReorderItemAtIndexPath:(id)arg0 ;
-(BOOL)_canReusePreviouslyFocusedManagedSubview:(id)arg0 ;
-(BOOL)_cellCanBecomeFocused:(id)arg0 ;
-(BOOL)_containsFocusedItem;
-(BOOL)_defaultAllowsFocus;
-(BOOL)_defaultAllowsFocusDuringEditing;
-(BOOL)_delaysUserInitiatedItemSelection;
-(BOOL)_delegateAllowsHighlightingItemAtIndexPath:(id)arg0 ;
-(BOOL)_delegateAllowsSelectingItemAtIndexPath:(id)arg0 ;
-(BOOL)_displaysHorizontalIndexTitleBar;
-(BOOL)_dragAndDropNeededForReordering;
-(BOOL)_effectiveDefaultAllowsFocus;
-(BOOL)_hasContainerScrollViewsAndScrollingDisabled;
-(BOOL)_hasContentForBarInteractions;
-(BOOL)_hasFocusedCellForIndexPath:(id)arg0 shouldUsePreUpdateData:(BOOL)arg1 ;
-(BOOL)_hasPrefetchItems;
-(BOOL)_hasRegisteredClassOrNibForSupplementaryViewOfKind:(id)arg0 ;
-(BOOL)_highlightItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSInteger)arg2 notifyDelegate:(BOOL)arg3 ;
-(BOOL)_highlightItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(BOOL)_indexPathIsSectionAppendingIndexPath:(id)arg0 ;
-(BOOL)_indexPathIsValid:(id)arg0 ;
-(BOOL)_indexPathIsValid:(id)arg0 allowSectionItemSentinel:(BOOL)arg1 ;
-(BOOL)_indexPathIsValidSectionIndexPath:(id)arg0 ;
-(BOOL)_inferFocusabilityForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)_isConnectedToDiffableDataSource;
-(BOOL)_isContentOffset:(struct CGPoint )arg0 atStartOfAxis:(NSUInteger)arg1 ;
-(BOOL)_isCurrentlyPerformingLegacyReordering;
-(BOOL)_isDragDestinationInteractivelyReordering;
-(BOOL)_isIndexPathSelectedItem:(id)arg0 ;
-(BOOL)_isMovingFocusFromHorizontalIndexBarToCellContent:(id)arg0 ;
-(BOOL)_isOperatingWithPresentationValues;
-(BOOL)_isReordering;
-(BOOL)_isReorderingItemAtIndexPath:(id)arg0 ;
-(BOOL)_isReorderingItemAtIndexPath:(id)arg0 includingDragAndDrop:(BOOL)arg1 ;
-(BOOL)_isViewInReuseQueue:(id)arg0 ;
-(BOOL)_prefetchingAllowed;
-(BOOL)_prefetchingEnabledDefault;
-(BOOL)_remembersPreviouslyFocusedItem;
-(BOOL)_removeCellFromVisibleCells:(id)arg0 ;
-(BOOL)_reuseCell:(id)arg0 ;
-(BOOL)_reuseCell:(id)arg0 notifyDidEndDisplaying:(BOOL)arg1 ;
-(BOOL)_reviseNewVisibleBoundsForUpdate:(id)arg0 ;
-(BOOL)_shouldApplyShadowUpdates;
-(BOOL)_shouldBecomeFocusedOnSelection;
-(BOOL)_shouldDeriveVisibleBoundsFromContainingScrollView;
-(BOOL)_shouldDeselectItemsOnTouchesBegan;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(BOOL)_shouldPersistSelectionOnReloadDataWhenPossible;
-(BOOL)_shouldPrefetchCellsWhenPerformingReloadData;
-(BOOL)_shouldResetInitialLayoutOnDataSourceChange;
-(BOOL)_shouldSaveContentOffsetAnchorForInvalidationContext:(id)arg0 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(BOOL)_shouldSelectionFollowFocusForIndexPath:(id)arg0 initiatedBySelection:(BOOL)arg1 ;
-(BOOL)_shouldShowMenuForCell:(id)arg0 ;
-(BOOL)_shouldSpringLoadItemAtIndexPath:(id)arg0 withContext:(id)arg1 ;
-(BOOL)_shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)_updatePrefetchItemIfNeeded:(id)arg0 forIndexPath:(id)arg1 willDisplay:(BOOL)arg2 ;
-(BOOL)_updatePrefetchedCells:(BOOL)arg0 ;
-(BOOL)_useIdleObserverForCellPrefetching;
-(BOOL)_validateScrollingTargetIndexPath:(id)arg0 ;
-(BOOL)_viewIsReorderedCell:(id)arg0 ;
-(BOOL)allowsUserInitiatedMultipleSelection;
-(BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg0 ;
-(BOOL)canBeEdited;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)isDragSessionActive;
-(BOOL)isSpringLoaded;
-(CGFloat)_alignedContentMarginGivenMargin:(CGFloat)arg0 ;
-(CGFloat)_focusFastScrollingBarZPosition;
-(CGFloat)_trackedLayoutValueForKey:(id)arg0 ;
-(NSInteger)_cellFocusItemDeferral:(id)arg0 ;
-(NSInteger)_cellPrefetchMode;
-(NSInteger)_dataSourceNumberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)_dataSourceSectionIndexForPresentationSectionIndex:(NSInteger)arg0 ;
-(NSInteger)_dragDestinationVisualStyle;
-(NSInteger)_dragPlaceholderInsertionCadence;
-(NSInteger)_dragReorderingCadence;
-(NSInteger)_globalIndexPathForItemAtIndexPath:(id)arg0 ;
-(NSInteger)_numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)_preferredDragDestinationVisualStyle;
-(NSInteger)_presentationSectionIndexForDataSourceSectionIndex:(NSInteger)arg0 ;
-(NSInteger)_totalItemCount;
-(NSInteger)dataSourceSectionIndexForPresentationSectionIndex:(NSInteger)arg0 ;
-(NSInteger)highlightedGlobalItem;
-(NSInteger)maximumGlobalItemIndex;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)presentationSectionIndexForDataSourceSectionIndex:(NSInteger)arg0 ;
-(NSUInteger)_edgesPropagatingSafeAreaInsetsToDescendants;
-(NSUInteger)_prefetchItemsForPrefetchingContext:(id)arg0 ;
-(NSUInteger)_reorderedItemCount;
-(NSUInteger)_updateVisibleCellsNow:(BOOL)arg0 ;
-(id)_arrayForUpdateAction:(int)arg0 ;
-(id)_autoScrollAssistantForIndexPath:(id)arg0 ;
-(id)_cellForItemAtIndexPath:(id)arg0 ;
-(id)_cellForItemAtIndexPath:(id)arg0 includePrefetchedCells:(BOOL)arg1 ;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)_computeMainPrefetchCandidatesForVisibleBounds:(struct CGRect )arg0 futureVisibleBounds:(struct CGRect )arg1 prefetchVector:(struct CGVector )arg2 ;
-(id)_contentFocusContainerGuide;
-(id)_contextMenuInteraction:(id)arg0 accessoriesForMenuWithConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_createPreparedCellForItemAtIndexPath:(id)arg0 withLayoutAttributes:(id)arg1 applyAttributes:(BOOL)arg2 ;
-(id)_createPreparedCellForItemAtIndexPath:(id)arg0 withLayoutAttributes:(id)arg1 applyAttributes:(BOOL)arg2 isFocused:(BOOL)arg3 notify:(BOOL)arg4 ;
-(id)_createPreparedSupplementaryViewForElementOfKind:(id)arg0 atIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3 ;
-(id)_createTemplateLayoutCellForCellsWithIdentifier:(id)arg0 ;
-(id)_customScrollAnimation;
-(id)_dataSourceIndexPathForPresentationIndexPath:(id)arg0 ;
-(id)_defaultTargetedPreviewForIdentifier:(id)arg0 ;
-(id)_dequeueReusableCellWithRegistration:(id)arg0 forIndexPath:(id)arg1 ;
-(id)_dequeueReusableSupplementaryWithRegistration:(id)arg0 forIndexPath:(id)arg1 ;
-(id)_dequeueReusableViewOfKind:(id)arg0 withIdentifier:(id)arg1 forIndexPath:(id)arg2 viewCategory:(NSUInteger)arg3 ;
-(id)_diffableDataSourceImpl;
-(id)_diffableIdentifierForIndexPath:(id)arg0 ;
// -(id)_doubleSidedAnimationsForView:(id)arg0 withStartingLayoutAttributes:(id)arg1 startingLayout:(id)arg2 endingLayoutAttributes:(id)arg3 endingLayout:(id)arg4 withAnimationSetup:(id)arg5 animationCompletion:(unk)arg6 enableCustomAnimations:(id)arg7 customAnimationsType:(unk)arg8  ;
-(id)_dragAndDropController;
-(id)_dragDestinationController;
-(id)_dragDestinationDelegateActual;
-(id)_dragDestinationDelegateProxy;
-(id)_dragSourceController;
-(id)_dragSourceDelegateActual;
-(id)_dragSourceDelegateProxy;
-(id)_dynamicAnimationsForTrackValues;
-(id)_existingVisibleCells;
-(id)_focusFastScrollingDestinationItemAtContentEndForIsEndingFastScrolling:(BOOL)arg0 ;
-(id)_focusFastScrollingDestinationItemAtContentStartForIsEndingFastScrolling:(BOOL)arg0 ;
-(id)_focusFastScrollingDestinationItemForIndexEntry:(id)arg0 ;
-(id)_focusFastScrollingIndexBarEntries;
-(id)_focusPromiseRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 inSection:(NSInteger)arg2 ;
-(id)_fulfillPromisedFocusRegionForCell:(id)arg0 ;
-(id)_identityTracker:(BOOL)arg0 ;
-(id)_indexBarEntries;
-(id)_indexPathAfterShadowUpdatesForIndexPath:(id)arg0 ;
-(id)_indexPathBeforeShadowUpdatesForIndexPath:(id)arg0 ;
-(id)_indexPathForCell:(id)arg0 ;
-(id)_indexPathForEntryWithTitle:(id)arg0 atIndex:(NSInteger)arg1 validateTitles:(BOOL)arg2 ;
-(id)_indexPathForGlobalIndex:(NSInteger)arg0 ;
-(id)_indexPathForInsertionAtPoint:(struct CGPoint )arg0 dropIntent:(NSInteger)arg1 sourceIndexPath:(id)arg2 indicatorLayoutAttributes:(*id)arg3 ;
-(id)_indexPathForItemAtPoint:(struct CGPoint )arg0 ;
-(id)_indexPathForView:(id)arg0 ofType:(NSUInteger)arg1 ;
-(id)_indexPathOfItemNearestToPoint:(struct CGPoint )arg0 intersectingRect:(struct CGRect )arg1 ;
-(id)_indexPathsAfterShadowUpdatesForIndexPaths:(id)arg0 ;
-(id)_indexPathsAfterShadowUpdatesForIndexPaths:(id)arg0 allowingAppendingInserts:(BOOL)arg1 ;
-(id)_indexPathsBeforeShadowUpdatesForIndexPaths:(id)arg0 ;
-(id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg0 ;
-(id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg0 ;
-(id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg0 isDecorationView:(BOOL)arg1 ;
-(id)_keysForObject:(id)arg0 inDictionary:(id)arg1 ;
-(id)_layoutAttributesForFailedMovementWithHeading:(NSUInteger)arg0 ;
-(id)_managedSubviewForView:(id)arg0 ;
-(id)_managedViews;
-(id)_objectInDictionary:(id)arg0 forKind:(id)arg1 indexPath:(id)arg2 ;
-(id)_orthogonalScrollerController;
-(id)_performShadowUpdates:(id)arg0 ;
-(id)_pivotForTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(id)_prefetchingContextForOrthogonalScrollingSection:(NSInteger)arg0 ;
-(id)_prefetchingContextForVisibleBounds:(struct CGRect )arg0 prefetchVector:(struct CGVector )arg1 prefetchRect:(struct CGRect )arg2 attributes:(id)arg3 ;
-(id)_preparedCellForItemAtIndexPath:(id)arg0 withLayoutAttributes:(id)arg1 applyAttributes:(BOOL)arg2 isFocused:(BOOL)arg3 notify:(BOOL)arg4 ;
-(id)_presentationIndexPathForDataSourceIndexPath:(id)arg0 ;
-(id)_primaryFocusItemForFocusGroup:(id)arg0 ;
-(id)_reorderFeedbackGenerator;
-(id)_reorderedItemForView:(id)arg0 ;
-(id)_reusableViewWithoutAttributesForElementCategory:(NSUInteger)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(id)_reuseDictionaryForCell:(BOOL)arg0 ;
-(id)_reuseQueueForViewWithElementCategory:(NSUInteger)arg0 elementKind:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)_sceneActivationConfigurationForLocation:(struct CGPoint )arg0 ;
-(id)_sectionIndexesAfterShadowUpdatesForSectionIndexes:(id)arg0 ;
-(id)_sectionIndexesAfterShadowUpdatesForSectionIndexes:(id)arg0 allowingAppendingInserts:(BOOL)arg1 ;
-(id)_selectableIndexPathForItemContainingHitView:(id)arg0 ;
-(id)_sortedDeduplicatedReloadItems;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg0 atCurrentIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)_templateLayoutCellForCellsWithReuseIdentifier:(id)arg0 ;
-(id)_translateDataSourceIndexPathToPresentationIndexPathAsNeeded:(id)arg0 ;
-(id)_translateDataSourceIndexPathsToPresentationIndexPathsAsNeeded:(id)arg0 ;
-(id)_translatePresentationIndexPathToDataSourceIndexPathAsNeeded:(id)arg0 ;
-(id)_translatePresentationIndexPathsToDataSourceIndexPathsAsNeeded:(id)arg0 ;
-(id)_updateTranslator;
-(id)_viewAnimationsForCurrentUpdate;
-(id)_viewAnimationsForCurrentUpdateWithCollectionViewAnimator:(id)arg0 ;
-(id)_viewControllerToNotifyOnLayoutSubviews;
-(id)_visibleCellForIndexPath:(id)arg0 ;
-(id)_visibleDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_visibleDecorationViewsOfKind:(id)arg0 ;
-(id)_visibleSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_visibleSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 isDecorationView:(BOOL)arg2 ;
-(id)_visibleSupplementaryViewsOfKind:(id)arg0 ;
-(id)_visibleSupplementaryViewsOfKind:(id)arg0 isDecorationView:(BOOL)arg1 ;
-(id)_visibleViewForLayoutAttributes:(id)arg0 ;
-(id)cellForItemAtIndexPath:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)dataSourceIndexPathForPresentationIndexPath:(id)arg0 ;
-(id)dequeueConfiguredReusableCellWithRegistration:(id)arg0 forIndexPath:(id)arg1 item:(id)arg2 ;
-(id)dequeueConfiguredReusableSupplementaryViewWithRegistration:(id)arg0 forIndexPath:(id)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndexPath:(id)arg1 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg0 withReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)dragDestinationDelegate;
-(id)dragSourceDelegate;
-(id)indexPathForCell:(id)arg0 ;
-(id)indexPathForItemAtPoint:(struct CGPoint )arg0 ;
-(id)indexPathForSupplementaryView:(id)arg0 ;
-(id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(id)keyCommands;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)preferredFocusedView;
-(id)preparedCells;
-(id)presentationIndexPathForDataSourceIndexPath:(id)arg0 ;
-(id)startInteractiveTransitionToCollectionViewLayout:(id)arg0 completion:(id)arg1 ;
-(id)supplementaryViewForElementKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)visibleSupplementaryViewsOfKind:(id)arg0 ;
-(struct CGPoint )_adjustFocusContentOffset:(struct CGPoint )arg0 toShowFocusItemWithInfo:(id)arg1 ;
-(struct CGPoint )_contentOffsetForNewFrame:(struct CGRect )arg0 oldFrame:(struct CGRect )arg1 newContentSize:(struct CGSize )arg2 andOldContentSize:(struct CGSize )arg3 ;
-(struct CGPoint )_contentOffsetForRestoringPositionToCurrentRestorationAnchorWithContentInsets:(struct UIEdgeInsets )arg0 shouldApply:(*BOOL)arg1 ;
-(struct CGPoint )_contentOffsetForScrollingToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 ;
-(struct CGPoint )_contentOffsetForScrollingToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 itemFrame:(struct CGRect )arg2 containingScrollView:(id)arg3 ;
-(struct CGPoint )_delegateTargetOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )indexBarAccessoryView:(id)arg0 contentOffsetForEntry:(id)arg1 atIndex:(NSInteger)arg2 ;
-(struct CGRect )_computeFutureVisibleBoundsForPrefetchVelocity:(struct CGVector )arg0 visibleBounds:(struct CGRect )arg1 ;
-(struct CGRect )_computePrefetchCacheValidationBoundsForPrefetchVelocity:(struct CGVector )arg0 visibleBounds:(struct CGRect )arg1 ;
-(struct CGRect )_effectiveVisibleBoundsForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_visibleBounds;
-(struct CGSize )intrinsicContentSize;
-(struct CGVector )_unitVectorForVector:(struct CGVector )arg0 ;
-(struct UIEdgeInsets )_focusFastScrollingIndexBarInsets;
-(struct UIEdgeInsets )_visibleRectEdgeInsets;
-(void)_accessibilitySetInterfaceStyleIntent:(NSUInteger)arg0 ;
-(void)_addContainerScrollViewForNotifications:(id)arg0 ;
-(void)_addControlledSubview:(id)arg0 ;
-(void)_addControlledSubview:(id)arg0 atZIndex:(NSInteger)arg1 forced:(BOOL)arg2 ;
-(void)_addControlledSubview:(id)arg0 atZIndex:(NSInteger)arg1 forced:(BOOL)arg2 initialAttributes:(id)arg3 ;
-(void)_addEntriesFromDictionary:(id)arg0 inDictionary:(id)arg1 ;
-(void)_addEntriesFromDictionary:(id)arg0 inDictionary:(id)arg1 andSet:(id)arg2 ;
-(void)_addItemAtIndexPathToActiveDragSession:(id)arg0 ;
-(void)_addUpdateToShadowControllerIfNeeded:(id)arg0 ;
-(void)_adjustContentOffsetUsingAnchorIfNecessaryWithContentInsets:(struct UIEdgeInsets )arg0 ;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg0 animated:(BOOL)arg1 lastAdjustment:(*CGFloat)arg2 ;
-(void)_applyBlockToAllReusableViews:(id)arg0 ;
-(void)_applyLayoutAttributes:(id)arg0 toView:(id)arg1 ;
-(void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint )arg0 ;
-(void)_autoscrollForReordering:(id)arg0 ;
-(void)_beginReusableViewCreationAndSelfSizingOutsideVisibleCellsUpdate;
-(void)_beginUpdates;
-(void)_cacheOrReuseCell:(id)arg0 forIndexPath:(id)arg1 invalidatePreferredAttributes:(BOOL)arg2 notifyDidEndDisplaying:(BOOL)arg3 ;
-(void)_cancelInteractiveMovementWithCompletion:(id)arg0 ;
-(void)_cancelInteractiveTransitionWithFinalAnimation:(BOOL)arg0 ;
-(void)_cancelReordering;
-(void)_cancelTouches;
-(void)_cellBackgroundChangedForSelectionOrHighlight:(id)arg0 ;
-(void)_cellBecameFocused:(id)arg0 ;
-(void)_cellDidBecomeFocused:(id)arg0 ;
-(void)_cellDidBecomeUnfocused:(id)arg0 ;
-(void)_cellMenuDismissed;
-(void)_checkForPreferredAttributesInView:(id)arg0 originalAttributes:(id)arg1 ;
-(void)_cleanUpAfterInteractiveTransitionDidFinish:(BOOL)arg0 ;
-(void)_clearContentOffsetRestorationAnchor;
-(void)_clearTargetIndexPathForScrolling;
-(void)_completeInteractiveMovementWithDisposition:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_computeMainPrefetchCandidatesForVelocity:(struct CGVector )arg0 ;
-(void)_configureCachedCellForDisplay:(id)arg0 withIndexPath:(id)arg1 layoutAttributesToUpdate:(id)arg2 ;
-(void)_configureCellForDisplay:(id)arg0 indexPath:(id)arg1 cached:(BOOL)arg2 ;
-(void)_configureContextMenuInteractionIfNeeded;
-(void)_configureSceneActivationInteractionIfNeeded;
-(void)_configureSupplementaryViewForDisplay:(id)arg0 withElementKind:(id)arg1 indexPath:(id)arg2 ;
-(void)_decrementUpdateAnimationCount;
-(void)_deselectAllAnimated:(BOOL)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)_deselectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_didScroll;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_disableUpdateVisibleCellsRecursionLogging;
-(void)_enableUpdateVisibleCellsRecursionLogging;
-(void)_endInteractiveMovementWithCompletion:(id)arg0 ;
-(void)_endItemAnimationsWithInvalidationContext:(id)arg0 ;
-(void)_endItemAnimationsWithInvalidationContext:(id)arg0 tentativelyForReordering:(BOOL)arg1 ;
-(void)_endItemAnimationsWithInvalidationContext:(id)arg0 tentativelyForReordering:(BOOL)arg1 animator:(id)arg2 ;
-(void)_endItemAnimationsWithInvalidationContext:(id)arg0 tentativelyForReordering:(BOOL)arg1 animator:(id)arg2 collectionViewAnimator:(id)arg3 ;
-(void)_endReordering;
-(void)_endReusableViewCreationAndSelfSizingOutsideVisibleCellsUpdate;
-(void)_endUpdatesWithInvalidationContext:(id)arg0 tentativelyForReordering:(BOOL)arg1 animator:(id)arg2 ;
-(void)_endUpdatesWithInvalidationContext:(id)arg0 tentativelyForReordering:(BOOL)arg1 animator:(id)arg2 collectionViewAnimator:(id)arg3 ;
-(void)_ensureViewsAreLoadedInRect:(struct CGRect )arg0 ;
-(void)_finishInteractiveTransitionShouldFinish:(BOOL)arg0 finalAnimation:(BOOL)arg1 ;
-(void)_finishInteractiveTransitionWithFinalAnimation:(BOOL)arg0 ;
-(void)_focusMovementDidFailNotification:(id)arg0 ;
-(void)_focusedItem:(id)arg0 isMinX:(*BOOL)arg1 isMaxX:(*BOOL)arg2 isMinY:(*BOOL)arg3 isMaxY:(*BOOL)arg4 ;
-(void)_focusedItem:(id)arg0 isMinX:(*BOOL)arg1 isMaxX:(*BOOL)arg2 isMinY:(*BOOL)arg3 isMaxY:(*BOOL)arg4 inSection:(NSInteger)arg5 shouldSearchX:(BOOL)arg6 shouldSearchY:(BOOL)arg7 ;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_getOriginalReorderingIndexPaths:(*id)arg0 targetIndexPaths:(*id)arg1 ;
// -(void)_handlePresses:(id)arg0 selectHandler:(id)arg1 keyHandler:(unk)arg2 defaultHandler:(id)arg3  ;
-(void)_highlightFirstVisibleItemIfAppropriate;
-(void)_highlightSpringLoadedItemAtIndexPath:(id)arg0 ;
-(void)_incrementUpdateAnimationCount;
-(void)_invalidateLayoutForUpdatedLayoutMarginsIfNeeded;
-(void)_invalidateLayoutForVisibleBounds:(struct CGRect )arg0 oldVisibleBounds:(struct CGRect )arg1 ;
-(void)_invalidateLayoutIfNecessaryForReload;
-(void)_invalidateLayoutWithContext:(id)arg0 ;
-(void)_invalidateWithBlock:(id)arg0 ;
-(void)_layoutAdjustmentsDidChange;
-(void)_managedSubviewAdded:(id)arg0 ;
-(void)_moveItemAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)_moveSection:(NSInteger)arg0 toSection:(NSInteger)arg1 ;
-(void)_notifyDataSourceForMoveOfItemFromIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)_notifyDidEndDisplayingCellIfNeeded:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_notifyWillDisplayCellIfNeeded:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_offsetPinnedReorderedItemsWithCurrentContentOffset:(struct CGPoint )arg0 ;
-(void)_orthogonalScrollView:(id)arg0 didScrollToOffset:(struct CGPoint )arg1 inSection:(NSInteger)arg2 ;
-(void)_performAction:(SEL)arg0 forCell:(id)arg1 sender:(id)arg2 ;
// -(void)_performBatchUpdates:(id)arg0 completion:(unk)arg1 invalidationContext:(id)arg2  ;
// -(void)_performBatchUpdates:(id)arg0 completion:(unk)arg1 invalidationContext:(id)arg2 tentativelyForReordering:(unk)arg3  ;
// -(void)_performBatchUpdates:(id)arg0 completion:(unk)arg1 invalidationContext:(id)arg2 tentativelyForReordering:(unk)arg3 animator:(id)arg4  ;
// -(void)_performBatchUpdates:(id)arg0 completion:(unk)arg1 invalidationContext:(id)arg2 tentativelyForReordering:(unk)arg3 animator:(id)arg4 animationHandler:(BOOL)arg5  ;
// -(void)_performBatchUpdates:(id)arg0 customAnimationsProvider:(unk)arg1  ;
// -(void)_performBatchUpdates:(id)arg0 viewPropertyAnimator:(unk)arg1 customAnimationsProvider:(id)arg2  ;
-(void)_performDiffableUpdate:(id)arg0 ;
-(void)_performInternalBatchUpdates:(id)arg0 ;
-(void)_performReloadPrefetchIfNeeded;
-(void)_performUpdate:(id)arg0 ;
-(void)_performUsingPresentationValues:(id)arg0 ;
-(void)_performWhileSuppressingPromiseRegionGeneration:(id)arg0 ;
-(void)_performWithoutNotifyingRebaseObserversWhenApplyingUpdates:(id)arg0 ;
-(void)_pinReorderedItemsWithPinningTest:(id)arg0 ;
-(void)_prepareLayoutForUpdates;
-(void)_prepareViewForUse:(id)arg0 withElementCategory:(NSUInteger)arg1 elementKind:(id)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 ;
-(void)_prepareViewForUse:(id)arg0 withElementCategory:(NSUInteger)arg1 elementKind:(id)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 applyDefaultAttributes:(BOOL)arg5 ;
-(void)_pruneCachedPrefetchViewsForVelocity:(struct CGVector )arg0 ;
-(void)_prunePrefetchedViewsAtIndexPaths:(id)arg0 ;
-(void)_purgeReuseQueues;
-(void)_rebaseContentOffsetAnchorOrScrollTargetForUpdate:(id)arg0 ;
-(void)_rebasePrefetchedCellIndexPathsWithMapping:(id)arg0 ;
-(void)_recomputePreferredAttributesAsNeeded;
-(void)_recomputePreferredAttributesForReusableView:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(void)_reconfigureCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)_reconfigureItemAtIndexPath:(id)arg0 ;
-(void)_registerForGeometryChangesIfInSupeview;
-(void)_registeredSupplementaryViewKind:(id)arg0 ;
-(void)_reloadDataIfNeeded;
-(void)_reloadSectionIndexTitles;
-(void)_removeAnyAncestorScrollViewNotifications;
-(void)_removeContainerScrollViewForNotifications:(id)arg0 ;
-(void)_removeReorderDestinationView;
-(void)_removeUntrackedAuxillaryViewsForBeforeVisibleViews:(id)arg0 afterVisibleViews:(id)arg1 withTrackingViewAnimations:(id)arg2 ;
-(void)_reorderPrefetchCandidates:(id)arg0 forPrefetchVelocity:(struct CGVector )arg1 visibleBounds:(struct CGRect )arg2 ;
-(void)_resetAllPrefetchContexts;
-(void)_resetContainerScrollViewVisitationCount;
-(void)_resetDropTargetAppearance;
-(void)_resetPrefetchState;
-(void)_resetPrefetchedCachedCells;
-(void)_resetPrefetchingContext:(id)arg0 ;
-(void)_resetUpdateItemArrays;
-(void)_resumeReloads;
-(void)_reusePrefetchedCell:(id)arg0 ;
-(void)_reusePreviouslyFocusedManagedSubviewIfNeeded:(id)arg0 ;
-(void)_reuseReusableViewIfNeeded:(id)arg0 ;
-(void)_reuseSupplementaryView:(id)arg0 ;
-(void)_saveContentOffsetRestorationAnchorIfNecessaryUsingModel:(id)arg0 ;
-(void)_scrollFirstResponderCellToVisible:(BOOL)arg0 ;
-(void)_scrollToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_scrollViewAnimationEnded:(id)arg0 finished:(BOOL)arg1 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg0 ;
-(void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint )arg0 targetContentOffset:(struct CGPoint *)arg1 ;
-(void)_selectAllSelectedItems;
-(void)_selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 notifyDelegate:(BOOL)arg3 deselectPrevious:(BOOL)arg4 performCustomSelectionAction:(BOOL)arg5 ;
-(void)_setAllowsVisibleCellUpdatesDuringUpdateAnimations:(BOOL)arg0 ;
-(void)_setCellPrefetchMode:(NSInteger)arg0 ;
-(void)_setDefaultAlwaysBounceVertical:(BOOL)arg0 horizontal:(BOOL)arg1 ;
-(void)_setDelaysUserInitiatedItemSelection:(BOOL)arg0 ;
-(void)_setDisplaysHorizontalIndexTitleBar:(BOOL)arg0 ;
-(void)_setDragPlaceholderInsertionCadence:(NSInteger)arg0 ;
-(void)_setDragReorderingCadence:(NSInteger)arg0 ;
-(void)_setEffectiveDataSource:(id)arg0 ;
-(void)_setExternalObjectTable:(id)arg0 forNibLoadingOfCellWithReuseIdentifier:(id)arg1 ;
-(void)_setExternalObjectTable:(id)arg0 forNibLoadingOfSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)_setHorizontalIndexTitleBarOffset:(struct CGPoint )arg0 ;
-(void)_setIsAncestorOfFirstResponder:(BOOL)arg0 ;
-(void)_setNeedsVisibleCellsUpdate:(BOOL)arg0 withLayoutAttributes:(BOOL)arg1 ;
-(void)_setObject:(id)arg0 inDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3 ;
-(void)_setPreferredDragDestinationVisualStyle:(NSInteger)arg0 ;
-(void)_setPrefetchingContext:(id)arg0 forOrthogonalScrollingSection:(NSInteger)arg1 ;
-(void)_setRemembersPreviouslyFocusedItem:(BOOL)arg0 ;
-(void)_setReorderFeedbackGenerator:(id)arg0 ;
-(void)_setShouldBecomeFocusedOnSelection:(BOOL)arg0 ;
-(void)_setShouldDeriveVisibleBoundsFromContainingScrollView:(BOOL)arg0 ;
-(void)_setShouldPersistSelectionOnReloadDataWhenPossible:(BOOL)arg0 ;
-(void)_setShouldPrefetchCellsWhenPerformingReloadData:(BOOL)arg0 ;
-(void)_setShouldPreventFocusScrollPastContentSize:(BOOL)arg0 ;
-(void)_setShouldResetInitialLayoutOnDataSourceChange:(BOOL)arg0 ;
-(void)_setVisibleRectEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setVisibleView:(id)arg0 forLayoutAttributes:(id)arg1 ;
-(void)_setupCellAnimations;
-(void)_setupDragDestinationControllerIfNeeded;
-(void)_setupDragSourceControllerIfNeeded;
-(void)_stopAutoscrollTimer;
-(void)_stopScrollingNotify:(BOOL)arg0 pin:(BOOL)arg1 ;
-(void)_suspendReloads;
-(void)_teardownDragDestinationController;
-(void)_teardownDragSourceController;
-(void)_trackLayoutValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)_unhighlightAllItems;
-(void)_unhighlightAllItemsAndHighlightGlobalItem:(NSInteger)arg0 ;
-(void)_unhighlightItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)_unhighlightItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_unhighlightSpringLoadedItem;
-(void)_unpinReorderedItemsIfNeeded;
-(void)_unregisterForGeometryChangesIfNeeded;
-(void)_updateAnimationDidStop:(id)arg0 finished:(id)arg1 context:(id)arg2 ;
-(void)_updateBackgroundColorIfNeeded;
-(void)_updateBackgroundView;
-(void)_updateCompactContextMenuStateForVisibleCells:(id)arg0 ;
-(void)_updateContainerScrollViewsForNotifications;
-(void)_updateContentFocusContainerGuides;
-(void)_updateCycleIdleUntil:(NSUInteger)arg0 ;
-(void)_updateDefaultLayoutMargins;
-(void)_updateDragDestinationVisualStyle;
-(void)_updateDragInteractionForCurrentInteractionEnabledState;
-(void)_updateDropTargetAppearanceWithTargetIndexPath:(id)arg0 intent:(NSInteger)arg1 indicatorLayoutAttributes:(id)arg2 ;
-(void)_updateEditing:(BOOL)arg0 forView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateFocusedCellIndexPathIfNecessaryWithLastFocusedRect:(struct CGRect )arg0 ;
-(void)_updateHorizontalIndexTitleBarSelectionForFocusedIndexPath:(id)arg0 ;
-(void)_updateIndex;
-(void)_updatePrefetchVelocityIntegratorForVisibleBounds:(struct CGRect )arg0 ;
-(void)_updatePrefetchedCellsForOrthogonalScrollingSection:(NSInteger)arg0 withOriginalPrefetchingVector:(struct CGVector )arg1 canCompute:(BOOL)arg2 canPrefetch:(BOOL)arg3 ;
-(void)_updateReorderDestinationViewWithLayoutAttributes:(id)arg0 ;
-(void)_updateReorderingTargetPosition:(struct CGPoint )arg0 ;
-(void)_updateReorderingTargetPosition:(struct CGPoint )arg0 forced:(BOOL)arg1 ;
-(void)_updateRowsAtIndexPaths:(id)arg0 updateAction:(int)arg1 ;
-(void)_updateRowsAtIndexPaths:(id)arg0 updateAction:(int)arg1 updates:(id)arg2 ;
-(void)_updateSectionIndex;
-(void)_updateSections:(id)arg0 updateAction:(int)arg1 ;
-(void)_updateTrackedLayoutValuesWith:(id)arg0 ;
-(void)_updateTransitionWithProgress:(CGFloat)arg0 ;
-(void)_updateWithItems:(id)arg0 tentativelyForReordering:(BOOL)arg1 propertyAnimator:(id)arg2 collectionViewAnimator:(id)arg3 ;
-(void)_updateWithUpdates:(id)arg0 updateAction:(NSInteger)arg1 ;
-(void)_userSelectItemAtIndexPath:(id)arg0 ;
-(void)cancelInteractiveMovement;
-(void)cancelInteractiveTransition;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)deleteItemsAtIndexPaths:(id)arg0 ;
-(void)deleteSections:(id)arg0 ;
-(void)deselectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endInteractiveMovement;
-(void)finishInteractiveTransition;
-(void)horizontalIndexBar:(id)arg0 selectedEntry:(id)arg1 ;
-(void)insertItemsAtIndexPaths:(id)arg0 ;
-(void)insertSections:(id)arg0 ;
-(void)layoutHorizontalIndexTitleBar;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)moveItemAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)moveSection:(NSInteger)arg0 toSection:(NSInteger)arg1 ;
// -(void)performBatchUpdates:(id)arg0 completion:(unk)arg1  ;
// -(void)performBatchUpdates:(id)arg0 withAnimator:(unk)arg1  ;
-(void)performUsingPresentationValues:(id)arg0 ;
-(void)prefetchCompleteForItemAtIndexPath:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reconfigureItemsAtIndexPaths:(id)arg0 ;
-(void)registerClass:(Class)arg0 forCellWithReuseIdentifier:(id)arg1 ;
-(void)registerClass:(Class)arg0 forSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)registerNib:(id)arg0 forCellWithReuseIdentifier:(id)arg1 ;
-(void)registerNib:(id)arg0 forSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)reloadData;
-(void)reloadItemsAtIndexPaths:(id)arg0 ;
-(void)reloadSections:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)scrollToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)setAllowsUserInitiatedMultipleSelection:(BOOL)arg0 ;
-(void)setAlwaysBounceHorizontal:(BOOL)arg0 ;
-(void)setAlwaysBounceVertical:(BOOL)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)setDragDestinationDelegate:(id)arg0 ;
-(void)setDragSourceDelegate:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)setScrollEnabled:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setSpringLoaded:(BOOL)arg0 ;
-(void)setupHorizontalIndexTitleBar;
-(void)teardownHorizontalIndexTitleBar;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateInteractiveMovementTargetPosition:(struct CGPoint )arg0 ;


@end


#endif