// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UINAVIGATIONCONTROLLER_H
#define UINAVIGATIONCONTROLLER_H

@class NSMapTable, NSString, NSUUID, NSArray;
@protocol UIGestureRecognizerDelegatePrivate, _UINavigationBarDelegatePrivate, _UIToolbarDelegateInternal, UILayoutContainerViewDelegate, _UIScrollViewScrollObserver, UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning, UINavigationControllerDelegate;


#import "UIViewController.h"
#import "UILayoutContainerView.h"
#import "UINavigationBar.h"
#import "UIToolbar.h"
#import "UIView.h"
#import "UINavigationDeferredTransitionContext.h"
#import "UITraitCollection.h"
#import "UITapGestureRecognizer.h"
#import "UIKeyCommand.h"
#import "_UINavigationControllerPalette.h"
#import "_UINavigationControllerVisualStyle.h"
#import "_UIAnimationCoordinator.h"
#import "_UIBarPanGestureRecognizer.h"
#import "_UIBarTapGestureRecognizer.h"
#import "UIPanGestureRecognizer.h"
#import "UIFocusContainerGuide.h"
#import "UIGestureRecognizer.h"
#import "UINavigationTransitionView.h"

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, _UINavigationBarDelegatePrivate, _UIToolbarDelegateInternal, UILayoutContainerViewDelegate, _UIScrollViewScrollObserver>

 {
    UILayoutContainerView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    CGFloat _statusBarHeightForHideShow;
    UINavigationDeferredTransitionContext *_deferredTransitionContext;
    UITraitCollection *_overrideTraitCollectionForPoppingViewControler;
    NSInteger _savedNavBarStyleBeforeSheet;
    NSInteger _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer *_backGestureRecognizer;
    UIKeyCommand *_backKeyCommand;
    _UINavigationControllerPalette *_topPalette;
    UIView *_paletteClippingView;
    _UINavigationControllerPalette *_freePalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
    _UINavigationControllerVisualStyle *_visualStyle;
    ? _interactiveScrollNavBarIntrinsicHeightRange;
    NSInteger _updateTopViewFramesToMatchScrollOffsetDisabledCount;
    CGSize _externallySetNavControllerPreferredContentSize;
    NSUInteger _computingNavigationBarHeightWithRevealPresentationIterations;
    NSMapTable *_lastContentMarginForView;
    ? _navigationControllerFlags;
}


@property (retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // ivar: __backdropGroupName
@property (retain, nonatomic, setter=_setInteractiveAnimationCoordinator:) _UIAnimationCoordinator *_barInteractiveAnimationCoordinator; // ivar: __barInteractiveAnimationCoordinator
@property (retain, nonatomic, setter=_setBarSwipeHideGesture:) _UIBarPanGestureRecognizer *_barSwipeHideGesture; // ivar: __barSwipeHideGesture
@property (retain, nonatomic, setter=_setBarTapHideGesture:) _UIBarTapGestureRecognizer *_barTapHideGesture; // ivar: __barTapHideGesture
@property (retain, nonatomic, setter=_setCachedInteractionController:) NSObject<UIViewControllerInteractiveTransitioning> *_cachedInteractionController;
@property (retain, nonatomic, setter=_setCachedTransitionController:) NSObject<UIViewControllerAnimatedTransitioning> *_cachedTransitionController;
@property (nonatomic, getter=_isCreatedBySplitViewController, setter=_setCreatedBySplitViewController:) BOOL _createdBySplitViewController;
@property (retain, nonatomic, setter=_setInteractionController:) NSObject<UIViewControllerInteractiveTransitioning> *_interactionController; // ivar: __interactionController
@property (nonatomic, setter=_setInteractiveScrollActive:) BOOL _interactiveScrollActive; // ivar: _interactiveScrollActive
@property (readonly, nonatomic) BOOL _isLayingOutTopViewController;
@property (retain, nonatomic, setter=_setKeyboardAppearedNotificationToken:) id *_keyboardAppearedNotificationToken; // ivar: __keyboardAppearedNotificationToken
@property (retain, nonatomic, setter=_setNavbarAnimationId:) NSUUID *_navbarAnimationId; // ivar: __navbarAnimationId
@property (nonatomic, setter=_setNavigationBarAnimationWasCancelled:) BOOL _navigationBarAnimationWasCancelled; // ivar: __navigationBarAnimationWasCancelled
@property (nonatomic, setter=_setPositionBarsExclusivelyWithSafeArea:) BOOL _positionBarsExclusivelyWithSafeArea; // ivar: __positionBarsExclusivelyWithSafeArea
@property (nonatomic, setter=_setPreferredNavigationBarPosition:) NSInteger _preferredNavigationBarPosition; // ivar: __preferredNavigationBarPosition
@property (nonatomic, setter=_setSearchHidNavigationBar:) BOOL _searchHidNavigationBar;
@property (nonatomic, setter=_setShouldIgnoreDelegateTransitionController:) BOOL _shouldIgnoreDelegateTransitionController; // ivar: __shouldIgnoreDelegateTransitionController
@property (nonatomic, setter=_setSuspendToolbarBackgroundUpdating:) BOOL _suspendToolbarBackgroundUpdating;
@property (retain, nonatomic, setter=_setTemporaryWindowLocator:) UIViewController *_temporaryWindowLocator; // ivar: __temporaryWindowLocator
@property (retain, nonatomic, setter=_setToolbarAnimationId:) NSUUID *_toolbarAnimationId; // ivar: __toolbarAnimationId
@property (nonatomic, setter=_setToolbarAnimationWasCancelled:) BOOL _toolbarAnimationWasCancelled; // ivar: __toolbarAnimationWasCancelled
@property (nonatomic, setter=_setToolbarClass:) Class _toolbarClass; // ivar: _toolbarClass
@property (retain, nonatomic, setter=_setTransitionController:) NSObject<UIViewControllerAnimatedTransitioning> *_transitionController; // ivar: __transitionController
@property (copy, nonatomic, setter=_setUpdateNavigationBarHandler:) id *_updateNavigationBarHandler; // ivar: __updateNavigationBarHandler
@property (nonatomic, getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:) BOOL _usingBuiltinAnimator; // ivar: __usingBuiltinAnimator
@property (nonatomic, getter=_allowChildSplitViewControllers, setter=_setAllowChildSplitViewControllers:) BOOL allowChildSplitViewControllers;
@property (nonatomic, getter=_allowNestedNavigationControllers, setter=_setAllowNestedNavigationControllers:) BOOL allowNestedNavigationControllers;
@property (nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
@property (readonly, nonatomic) UIPanGestureRecognizer *barHideOnSwipeGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *barHideOnTapGestureRecognizer;
@property (readonly, nonatomic) UIViewController *bottomViewController;
@property (nonatomic, getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:) CGFloat builtinTransitionGap; // ivar: _builtinTransitionGap
@property (nonatomic, getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:) NSInteger builtinTransitionStyle; // ivar: _builtinTransitionStyle
@property (readonly, nonatomic, getter=_contentFocusContainerGuide) UIFocusContainerGuide *contentFocusContainerGuide; // ivar: _contentFocusContainerGuide
@property (nonatomic, getter=_isCrossfadingInTabBar, setter=_setCrossfadingInTabBar:) BOOL crossfadingInTabBar;
@property (nonatomic, getter=_isCrossfadingOutTabBar, setter=_setCrossfadingOutTabBar:) BOOL crossfadingOutTabBar;
@property (nonatomic) CGFloat customNavigationTransitionDuration; // ivar: _customNavigationTransitionDuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UINavigationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) UIViewController *detailViewController;
@property (nonatomic, getter=_didExplicitlyHideTabBar, setter=_setDidExplicitlyHideTabBar:) BOOL didHideTabBar;
@property (retain, nonatomic) UIViewController *disappearingViewController; // ivar: _disappearingViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesBarsOnSwipe; // ivar: _hidesBarsOnSwipe
@property (nonatomic) BOOL hidesBarsOnTap; // ivar: _hidesBarsOnTap
@property (nonatomic) BOOL hidesBarsWhenKeyboardAppears; // ivar: _hidesBarsWhenKeyboardAppears
@property (nonatomic) BOOL hidesBarsWhenVerticallyCompact; // ivar: _hidesBarsWhenVerticallyCompact
@property (readonly, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer;
@property (nonatomic, getter=isInteractiveTransition) BOOL interactiveTransition; // ivar: _interactiveTransition
@property BOOL isExpanded;
@property (nonatomic, getter=_isNestedNavigationController, setter=_setIsNestedNavigationController:) BOOL isNestedNavigationController;
@property (readonly, nonatomic) UINavigationBar *navigationBar;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (readonly, nonatomic) UINavigationTransitionView *navigationTransitionView;
@property (nonatomic) BOOL needsDeferredTransition;
@property (nonatomic) BOOL pretendNavBarHidden;
@property (readonly, nonatomic) UIViewController *previousViewController;
@property (readonly, nonatomic, getter=_rememberedFocusedItemsByViewController) NSMapTable *rememberedFocusedItemsByViewController; // ivar: _rememberedFocusedItemsByViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIToolbar *toolbar;
@property (nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;
@property (readonly, nonatomic) UIViewController *topViewController;
@property (copy, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) UIViewController *visibleViewController;


+(BOOL)_directlySetsContentOverlayInsetsForChildren;
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
-(BOOL)_allowsAutorotation;
-(BOOL)_allowsFreezeLayoutForOrientationChangeOnDismissal;
-(BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg0 lastOperation:(NSInteger)arg1 edge:(*NSUInteger)arg2 duration:(*CGFloat)arg3 ;
-(BOOL)_canHostRefreshControlOwnedByScrollView:(id)arg0 ;
-(BOOL)_canPerformBackKeyCommandToPopViewController;
-(BOOL)_canPerformRename;
-(BOOL)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg0 inViewController:(id)arg1 ;
-(BOOL)_canUpdateTopViewFramesToMatchScrollView;
-(BOOL)_canUseBackKeyCommandToTriggerSidebarKeyCommandWithSender:(id)arg0 ;
-(BOOL)_clipUnderlapWhileTransitioning;
-(BOOL)_doesTopViewControllerSupportInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_hasInterruptibleNavigationTransition;
-(BOOL)_hasNestedNavigationController;
-(BOOL)_hasPotentiallyChromelessBottomBar;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg0 ;
-(BOOL)_isAlreadyPoppingNavItem;
-(BOOL)_isExecutingSplitViewControllerActions;
-(BOOL)_isInteractiveCustomNavigationTransition;
-(BOOL)_isNavigationBarEffectivelyVisible;
-(BOOL)_isNavigationBarVisible;
-(BOOL)_isNavigationController;
-(BOOL)_isPerformingLayoutToLayoutTransition;
-(BOOL)_isPopping;
-(BOOL)_isPresentationContextByDefault;
-(BOOL)_isPushing;
-(BOOL)_isPushingOrPopping;
-(BOOL)_isPushingOrPoppingUsingLayoutToLayoutNavigationTransition;
-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_isTransitioning;
-(BOOL)_isTransitioningOrPaletteIsTransitioning;
-(BOOL)_isViewControllerFullWidth;
-(BOOL)_isViewControllerInRootPresentationHierarchy:(id)arg0 ;
-(BOOL)_navbarIsAppearingInteractively;
-(BOOL)_navigationBar:(id)arg0 getContentOffsetOfObservedScrollViewIfApplicable:(struct CGPoint *)arg1 ;
-(BOOL)_navigationBarShouldShowSidebarToggleInNSToolbar:(id)arg0 ;
-(BOOL)_navigationControllerShouldObserveScrollView;
-(BOOL)_navigationSoundsEnabled;
-(BOOL)_otherExpectedNavigationControllerObservesScrollView:(id)arg0 ;
-(BOOL)_shouldBottomBarBeHidden;
-(BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg0 ;
-(BOOL)_shouldCrossFadeBottomBars;
-(BOOL)_shouldCrossFadeNavigationBar;
-(BOOL)_shouldHideBarsForTraits:(id)arg0 ;
-(BOOL)_shouldHideSearchBarWhenScrollingForNavigationItem:(id)arg0 ;
-(BOOL)_shouldNavigationBarInsetViewController:(id)arg0 ;
-(BOOL)_shouldNavigationBarInsetViewController:(id)arg0 orOverlayContent:(*BOOL)arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldPopFromLandscapeToPortraitOrientation;
-(BOOL)_shouldSkipHostedRefreshControlUpdateSchedulingDeferredUpdateIfNecessary;
-(BOOL)_shouldTabBarController:(id)arg0 insetViewController:(id)arg1 orOverlayContent:(*BOOL)arg2 ;
-(BOOL)_shouldToolBar:(id)arg0 insetViewController:(id)arg1 ;
-(BOOL)_shouldToolBar:(id)arg0 insetViewController:(id)arg1 orOverlayContent:(*BOOL)arg2 ;
-(BOOL)_shouldUseBuiltinInteractionController;
-(BOOL)_shouldUseOnePartRotation;
-(BOOL)_transitionConflictsWithNavigationTransitions:(id)arg0 ;
-(BOOL)_tryRequestPopToItem:(id)arg0 ;
-(BOOL)_useCrossFadeForGestureHiding;
-(BOOL)_useCurrentStatusBarHeight;
-(BOOL)_useStandardStatusBarHeight;
-(BOOL)_viewControllerUnderlapsStatusBar;
-(BOOL)_viewControllerWasSelected;
-(BOOL)_wantsContentClippedToSafeAreaInSidebarContext;
-(BOOL)_willPerformCustomNavigationTransitionForPop;
-(BOOL)_willPerformCustomNavigationTransitionForPush;
-(BOOL)allowUserInteractionDuringTransition;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)condensesBarsOnSwipe;
-(BOOL)editing;
-(BOOL)enableBackButtonDuringTransition;
-(BOOL)isBuiltinTransition;
-(BOOL)isCustomTransition;
-(BOOL)isModalInPopover;
-(BOOL)isShown;
-(BOOL)navigationBar:(id)arg0 shouldPopItem:(id)arg1 ;
-(BOOL)searchBarHidNavBar;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)wasLastOperationAnimated;
-(CGFloat)_contentMarginForView:(id)arg0 ;
-(CGFloat)_navigationBar:(id)arg0 preferredHeightForTransitionToHeightRange:(struct ? )arg1 ;
-(CGFloat)_preferredHeightForHidingNavigationBarForViewController:(id)arg0 topItem:(id)arg1 ;
-(CGFloat)_scrollOffsetRetargettedToDetentOffsetIfNecessary:(CGFloat)arg0 unclampedOriginalTargetOffset:(CGFloat)arg1 scrollView:(id)arg2 ;
-(CGFloat)_scrollViewBottomContentInsetForViewController:(id)arg0 ;
-(CGFloat)_scrollViewTopContentInsetForViewController:(id)arg0 ;
-(CGFloat)_statusBarHeightAdjustmentForCurrentOrientation;
-(CGFloat)_statusBarHeightForCurrentInterfaceOrientation;
-(CGFloat)_topBarHeight;
-(CGFloat)_topPalettePreferredLayoutHeightForVisibilityStateIfDisplayedForViewController:(id)arg0 ;
-(CGFloat)_widthForLayout;
-(CGFloat)durationForTransition:(int)arg0 ;
-(CGFloat)navigationTransitionView:(id)arg0 durationForTransition:(NSInteger)arg1 ;
-(NSInteger)_navigationTransitionForUITransition:(int)arg0 ;
-(NSInteger)_positionForBar:(id)arg0 ;
-(NSInteger)_subclassPreferredFocusedViewPrioritizationType;
-(NSInteger)_topLayoutTypeForViewController:(id)arg0 ;
-(NSInteger)lastOperation;
-(NSInteger)modalTransitionStyle;
-(NSInteger)navigationBarNSToolbarSection:(id)arg0 ;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_additionalViewControllersToCheckForUserActivity;
-(id)_backdropBarGroupName;
-(id)_builtinInteractionController;
-(id)_builtinTransitionController;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(id)_createBuiltInInteractionControllerForAnimationController:(id)arg0 ;
-(id)_createBuiltInTransitionControllerForOperation:(NSInteger)arg0 ;
-(id)_customInteractionController:(id)arg0 ;
-(id)_customTransitionController:(BOOL)arg0 ;
-(id)_deepestActionResponder;
-(id)_effectiveActivityItemsConfiguration;
-(id)_effectiveInteractionActivityTrackingBaseName;
-(id)_existingActiveVisibleToolbar;
-(id)_existingNavigationBar;
-(id)_existingToolbar;
-(id)_existingToolbarWithItems;
-(id)_findViewControllerToPopTo;
-(id)_findViewControllerToPopToForNavigationItem:(id)arg0 ;
-(id)_independentContainedScrollViewIntermediateToDescendantViewController:(id)arg0 ;
-(id)_interfaceOrientationWindowForBar:(id)arg0 matchingBar:(id)arg1 ;
-(id)_interruptibleNavigationTransitionAnimator;
-(id)_keyboardAnimationStyle;
-(id)_lastNavigationItems;
-(id)_managedSearchPaletteForEdge:(NSUInteger)arg0 size:(struct CGSize )arg1 ;
-(id)_moreListTitle;
-(id)_navControllerToCreateManagedSearchPaletteForNavController:(id)arg0 ;
-(id)_navigationBarAdditionalActionsForBackButtonMenu:(id)arg0 ;
-(id)_navigationBarHiddenByDefault:(BOOL)arg0 ;
-(id)_navigationBarWindowForInterfaceOrientation:(id)arg0 ;
-(id)_navigationItems;
-(id)_navigationItemsCallingPublicAccessor:(BOOL)arg0 ;
-(id)_nestedTopViewController;
-(id)_nthChildViewControllerFromTop:(NSUInteger)arg0 ;
-(id)_outermostNavigationController;
-(id)_overridingPreferredFocusEnvironment;
-(id)_paletteForEdge:(NSUInteger)arg0 size:(struct CGSize )arg1 paletteClass:(Class)arg2 ;
-(id)_pinningBarForPalette:(id)arg0 ;
-(id)_popViewControllerWithTransition:(int)arg0 allowPoppingLast:(BOOL)arg1 ;
-(id)_recallRememberedFocusedItemForViewController:(id)arg0 ;
-(id)_screenEdgePanGestureRecognizer;
-(id)_scrollDetentOffsetsForScrollView:(id)arg0 ;
-(id)_separateViewControllersAfterAndIncludingViewController:(id)arg0 forSplitViewController:(id)arg1 ;
-(id)_snapshotView;
-(id)_startInteractiveBarTransition:(id)arg0 ;
-(id)_targetNavigationBarForUISplitViewControllerSidebarButton;
-(id)_toolbarWindowForInterfaceOrientation:(id)arg0 ;
-(id)_topPalette;
-(id)_topViewControllerObservableScrollViewForEdge:(NSUInteger)arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_transitionAnimationContext;
-(id)_transitionCoordinator;
-(id)_viewControllerForDisappearCallback;
-(id)_viewControllerForObservableScrollView;
-(id)_viewControllerForSearchPalette;
-(id)_viewForContentInPopover;
-(id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg0 ;
-(id)_window;
-(id)allowedChildViewControllersForUnwindingFromSource:(id)arg0 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForPointerLock;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForUserInterfaceStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)defaultPNGName;
-(id)existingPaletteForEdge:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)moreListTableCell;
-(id)navigationItem;
-(id)paletteForEdge:(NSUInteger)arg0 size:(struct CGSize )arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToRootViewControllerWithTransition:(int)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popToViewController:(id)arg0 transition:(int)arg1 ;
-(id)popToViewControllerWithSnapbackIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(id)popViewControllerWithAnimationTransition:(NSInteger)arg0 duration:(CGFloat)arg1 curve:(NSInteger)arg2 ;
-(id)popViewControllerWithTransition:(int)arg0 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(id)rotatingFooterView;
-(id)rotatingHeaderView;
-(id)rotatingSnapshotViewForWindow:(id)arg0 ;
-(id)segueForUnwindingToViewController:(id)arg0 fromViewController:(id)arg1 identifier:(id)arg2 ;
-(id)separateSecondaryViewControllerForSplitViewController:(id)arg0 ;
-(id)tabBarItem;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)viewControllerForUnwindSegueAction:(SEL)arg0 fromViewController:(id)arg1 withSender:(id)arg2 ;
-(int)_deferredTransition;
-(int)_keyboardDirectionForTransition:(NSInteger)arg0 ;
-(int)_transitionForOldViewControllers:(id)arg0 newViewControllers:(id)arg1 ;
-(struct ? )_calculateTopLayoutInfoForViewController:(id)arg0 ;
-(struct ? )_heightRangeOfTopViews;
-(struct ? )_intrinsicNavigationBarHeightRangeForNavItem:(id)arg0 ;
-(struct CGPoint )_computeTopBarCenter:(id)arg0 hidden:(BOOL)arg1 edge:(NSUInteger)arg2 center:(struct CGPoint )arg3 offset:(CGFloat)arg4 ;
-(struct CGRect )_boundsForPalette:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGRect )_frameForPalette:(id)arg0 ;
-(struct CGRect )_frameForViewController:(id)arg0 ;
-(struct CGRect )_frameForWrapperViewForViewController:(id)arg0 ;
-(struct CGRect )_incomingNavigationBarFrame;
-(struct CGSize )_adjustedContentSizeForPopover:(struct CGSize )arg0 ;
-(struct CGSize )_navigationBarSizeForViewController:(id)arg0 proposedHeight:(CGFloat)arg1 allowRubberBandStretch:(BOOL)arg2 ;
-(struct CGSize )_preferredContentSizeForcingLoad:(BOOL)arg0 ;
-(struct CGSize )contentSizeForViewInPopover;
-(struct CGSize )preferredContentSize;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct NSDirectionalEdgeInsets )_layoutMarginsforNavigationBar:(id)arg0 ;
-(struct UIEdgeInsets )_avoidanceInsets;
-(struct UIEdgeInsets )_calculateEdgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_collapsableContentPaddingForObservedScrollView:(id)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsDeferringToCommandeeringTableHeaderViewStyleSearchControllerWithPresentingViewController:(id)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_expectedContentInsetDeltaForViewController:(id)arg0 ;
-(struct UIEdgeInsets )_revealableContentPaddingForObservedScrollView:(id)arg0 includeContentWithCollapsedAffinity:(BOOL)arg1 ;
-(void)__viewWillLayoutSubviews;
-(void)_calculateTopViewFramesForExpandedLayoutWithViewController:(id)arg0 contentScrollView:(id)arg1 gettingNavBarFrame:(struct CGRect *)arg2 topPaletteFrame:(struct CGRect *)arg3 ;
-(void)_calculateTopViewFramesForLayoutWithViewController:(id)arg0 contentScrollView:(id)arg1 navBarFrame:(struct CGRect *)arg2 topPaletteFrame:(struct CGRect *)arg3 topLayoutType:(NSInteger)arg4 ;
-(void)_calculateTopViewFramesFromLayoutHeightsWithViewController:(id)arg0 contentScrollView:(id)arg1 preservingContentInset:(BOOL)arg2 respectFullExtension:(BOOL)arg3 gettingNavBarFrame:(struct CGRect *)arg4 topPaletteFrame:(struct CGRect *)arg5 ;
-(void)_cancelInteractiveTransition:(CGFloat)arg0 transitionContext:(id)arg1 ;
-(void)_clearLastOperation;
-(void)_collapseViewController:(id)arg0 forSplitViewController:(id)arg1 ;
-(void)_commonInitWithBuiltinTransitionGap:(CGFloat)arg0 ;
-(void)_commonNonCoderInit;
-(void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg0 ;
-(void)_configureBarSwipeGesture;
-(void)_configureBarTapGesture;
-(void)_configureBarsAutomaticActions;
-(void)_configureKeyboardBarHiding;
-(void)_configureToolbar;
-(void)_createAndAttachSearchPaletteForTransitionToTopViewControllerIfNecesssary:(id)arg0 ;
-(void)_detachPalette:(id)arg0 ;
-(void)_detachTopPaletteIfShowingSearchBarForTopmostViewControllerInNavigationController:(id)arg0 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_eagerlyUpdateSafeAreaInsets;
// -(void)_executeNavigationHandler:(id)arg0 deferred:(unk)arg1  ;
-(void)_executeSplitViewControllerActions:(id)arg0 ;
-(void)_finishAnimationTracking;
-(void)_finishInteractiveTransition:(CGFloat)arg0 transitionContext:(id)arg1 ;
-(void)_forgetFocusedItemForViewController:(id)arg0 ;
-(void)_forwardPaletteToViewControllerIfNeeded:(id)arg0 ;
-(void)_gestureRecognizedInteractiveHide:(id)arg0 ;
-(void)_gestureRecognizedToggleVisibility:(id)arg0 ;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_handleSubtreeDidGainScrollView:(id)arg0 ;
-(void)_hideForKeyboardAppearance;
-(void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg0 ;
-(void)_hideShowNavigationBarDidStop:(id)arg0 finished:(id)arg1 context:(id)arg2 ;
-(void)_hideShowToolbarDidStop:(id)arg0 finished:(id)arg1 context:(id)arg2 ;
-(void)_initializeNavigationDeferredTransitionContextIfNecessary;
-(void)_installPaletteIntoViewHierarchy:(id)arg0 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg0 ;
-(void)_layoutContainerViewSemanticContentAttributeChanged:(id)arg0 ;
-(void)_layoutTopViewController;
-(void)_layoutTopViewControllerLookForNested:(BOOL)arg0 ;
-(void)_layoutViewController:(id)arg0 ;
-(void)_makeBarHideGestureIfNecessary;
-(void)_makeBarSwipeGestureIfNecessary;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_navigationBar:(id)arg0 itemBackButtonUpdated:(id)arg1 ;
-(void)_navigationBar:(id)arg0 itemEnabledAutoScrollTransition:(id)arg1 ;
-(void)_navigationBar:(id)arg0 requestPopToItem:(id)arg1 ;
-(void)_navigationBar:(id)arg0 topItemUpdatedContentLayout:(id)arg1 ;
-(void)_navigationBar:(id)arg0 topItemUpdatedLargeTitleDisplayMode:(id)arg1 ;
-(void)_navigationBarChangedSize:(id)arg0 ;
-(void)_navigationBarDidChangeStyle:(id)arg0 ;
-(void)_navigationBarDidEndAnimation:(id)arg0 ;
-(void)_navigationBarDidUpdateStack:(id)arg0 ;
-(void)_navigationBarWillBeginCoordinatedTransitionAnimations:(id)arg0 ;
-(void)_navigationBarWillRunAutomaticDeferredShowsScopeBar:(id)arg0 ;
-(void)_navigationItemDidUpdateSearchController:(id)arg0 oldSearchController:(id)arg1 ;
-(void)_navigationTransitionView:(id)arg0 didCancelTransition:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 wrapperView:(id)arg4 ;
-(void)_noteNestedNavigationControllerDidReturnToNormal:(id)arg0 ;
-(void)_notifyTransitionBegan:(id)arg0 ;
-(void)_observableScrollViewDidChangeFrom:(id)arg0 forViewController:(id)arg1 edges:(NSUInteger)arg2 ;
-(void)_observeScrollView:(id)arg0 didBeginTransitionToDeferredContentOffset:(struct CGPoint )arg1 ;
-(void)_observeScrollView:(id)arg0 willEndDraggingWithVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 unclampedOriginalTarget:(struct CGPoint )arg3 ;
-(void)_observeScrollViewAlignedContentMarginDidChange:(id)arg0 ;
-(void)_observeScrollViewDidEndDecelerating:(id)arg0 ;
-(void)_observeScrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 topLayoutType:(NSInteger)arg1 ;
-(void)_observeScrollViewGeometryAffectingContentBottomDidChange:(id)arg0 ;
-(void)_observeScrollViewWillBeginDragging:(id)arg0 ;
-(void)_performBackGesture:(id)arg0 ;
-(void)_performBackKeyCommand:(id)arg0 ;
-(void)_performCoordinatedLayoutToLayoutNavigationTransitionAnimations;
-(void)_performCoordinatedUpdateTopFramesTransitionAnimation;
-(void)_performSkippedHostedRefreshControlUpdateSchedulingDeferredUpdateIfNecessary;
-(void)_performTopViewGeometryUpdates:(id)arg0 ;
-(void)_performWhileIgnoringUpdateTopViewFramesToMatchScrollOffset:(id)arg0 ;
-(void)_playPopNavigationSound;
-(void)_playPushNavigationSound;
-(void)_popNavigationBar:(id)arg0 item:(id)arg1 ;
-(void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg0 ;
-(void)_positionNavigationBar:(id)arg0 hidden:(BOOL)arg1 edge:(NSUInteger)arg2 center:(struct CGPoint )arg3 offset:(CGFloat)arg4 ;
-(void)_positionNavigationBarHidden:(BOOL)arg0 ;
-(void)_positionNavigationBarHidden:(BOOL)arg0 edge:(NSUInteger)arg1 ;
-(void)_positionNavigationBarHidden:(BOOL)arg0 edge:(NSUInteger)arg1 initialOffset:(CGFloat)arg2 ;
-(void)_positionPaletteHidden:(BOOL)arg0 edge:(NSUInteger)arg1 ;
-(void)_positionPaletteHidden:(BOOL)arg0 edge:(NSUInteger)arg1 initialOffset:(CGFloat)arg2 ;
-(void)_positionToolbarHidden:(BOOL)arg0 ;
-(void)_positionToolbarHidden:(BOOL)arg0 edge:(NSUInteger)arg1 ;
-(void)_positionToolbarHidden:(BOOL)arg0 edge:(NSUInteger)arg1 crossFade:(BOOL)arg2 ;
-(void)_positionTransitioningPalette:(id)arg0 outside:(BOOL)arg1 edge:(NSUInteger)arg2 preservingYPosition:(BOOL)arg3 ;
-(void)_prepareCollectionViewController:(id)arg0 forSharingWithCollectionViewController:(id)arg1 ;
-(void)_prepareCollectionViewControllerForSharing:(id)arg0 ;
-(void)_prepareCollectionViewControllers:(id)arg0 forSharingInRange:(id)arg1 ;
-(void)_prepareForNestedDisplayWithNavigationController:(id)arg0 ;
-(void)_prepareForNormalDisplayWithNavigationController:(id)arg0 ;
-(void)_presentationTransitionUnwrapViewController:(id)arg0 ;
-(void)_presentationTransitionWrapViewController:(id)arg0 forTransitionContext:(id)arg1 ;
-(void)_privateWillShowViewController:(id)arg0 ;
-(void)_propagateContentAdjustmentsForControllersWithSharedViews;
-(void)_releaseContainerViews;
-(void)_reloadCachedInteractiveScrollMeasurements;
-(void)_rememberFocusedItem:(id)arg0 forViewController:(id)arg1 ;
-(void)_rememberPresentingFocusedItem:(id)arg0 ;
-(void)_repositionPaletteWithNavigationBarHidden:(BOOL)arg0 duration:(CGFloat)arg1 shouldUpdateNavigationItems:(BOOL)arg2 ;
-(void)_requestNavigationBarUpdateSearchBarForPlacementChangeIfApplicable;
-(void)_resetBottomBarHiddenState;
-(void)_resetScrollViewObservingForViewController:(id)arg0 ;
-(void)_safeAreaInsetsDidChangeForView;
-(void)_sendNavigationBarToBack;
-(void)_setAllowsFreezeLayoutForOrientationChangeOnDismissal:(BOOL)arg0 ;
-(void)_setBarsHidden:(BOOL)arg0 ;
-(void)_setBarsHidden:(BOOL)arg0 allowAnimation:(BOOL)arg1 ;
-(void)_setClipUnderlapWhileTransitioning:(BOOL)arg0 ;
-(void)_setClipsToBounds:(BOOL)arg0 ;
-(void)_setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setCustomTransition:(BOOL)arg0 ;
-(void)_setDefinesPresentationContextIfNecessaryForViewController:(id)arg0 ;
-(void)_setIsWrappingDuringAdaptation:(BOOL)arg0 ;
-(void)_setKeyboardNotificationToken:(id)arg0 ;
-(void)_setNavigationSoundsEnabled:(BOOL)arg0 ;
-(void)_setPreferredContentSizeFromChildContentContainer:(id)arg0 ;
-(void)_setUpContentFocusContainerGuide;
-(void)_setUseCurrentStatusBarHeight:(BOOL)arg0 ;
-(void)_setUseStandardStatusBarHeight:(BOOL)arg0 ;
-(void)_setupBackGestureRecognizer;
-(void)_setupBackKeyCommand;
-(void)_setupVisualStyle;
-(void)_startCoordinatedBottomBarUpdateForTransition:(int)arg0 ;
-(void)_startCustomTransition:(id)arg0 ;
-(void)_startDeferredTransitionIfNeeded;
-(void)_startDeferredTransitionIfNeeded:(id)arg0 ;
-(void)_startInteractiveNavbarTransition;
-(void)_startInteractiveToolbarTransition;
-(void)_startPaletteTransitionIfNecessary:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startToolbarTransitionIfNecessary:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startTransition:(int)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)_stopObservingContentScrollView:(id)arg0 ;
-(void)_stopObservingContentScrollViewsForViewController:(id)arg0 ;
-(void)_stopTransitionsImmediately;
-(void)_tabBarControllerDidFinishShowingTabBar:(id)arg0 isHidden:(BOOL)arg1 ;
-(void)_unhideNavigationBarForEdge:(NSUInteger)arg0 ;
-(void)_updateAndObserveScrollView:(id)arg0 viewController:(id)arg1 forEdges:(NSUInteger)arg2 ;
-(void)_updateBackgroundTransitionProgressForScrollView:(id)arg0 toolbar:(id)arg1 ;
-(void)_updateBackgroundTransitionProgressForScrollView:(id)arg0 toolbar:(id)arg1 isNavigationTransitionUpdate:(BOOL)arg2 ;
-(void)_updateBarsForCurrentInterfaceOrientation;
-(void)_updateBarsForCurrentInterfaceOrientationAndForceBarLayout:(BOOL)arg0 ;
-(void)_updateBottomBarHiddenState;
-(void)_updateBottomBarsForNavigationTransition;
-(void)_updateChildContentMargins;
-(void)_updateContainersForStackChange;
-(void)_updateControlledViewsToFrame:(struct CGRect )arg0 ;
-(void)_updateEnclosingSplitViewControllerForStackChange;
-(void)_updateEnclosingTabBarControllerForStackChange;
-(void)_updateInteractiveBarTransition:(id)arg0 withUUID:(id)arg1 percent:(CGFloat)arg2 isFinished:(BOOL)arg3 didComplete:(BOOL)arg4 completionSpeed:(CGFloat)arg5 completionCurve:(NSInteger)arg6 ;
-(void)_updateInteractivePopGestureEnabledState;
-(void)_updateInteractiveTransition:(CGFloat)arg0 ;
-(void)_updateLayoutForScrollView:(id)arg0 topLayoutType:(NSInteger)arg1 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_updateManualScrollEdgeAppearanceProgressForScrollView:(id)arg0 navigationItem:(id)arg1 ;
-(void)_updateNavigationBarHostedRefreshControlToHostRefreshControlForScrollView:(id)arg0 ;
-(void)_updatePaletteConstraints;
-(void)_updatePalettesWithBlock:(id)arg0 ;
-(void)_updateScrollViewFromViewController:(id)arg0 toViewController:(id)arg1 ;
-(void)_updateScrollViewObservationFlagsForScrollView:(id)arg0 navigationItem:(id)arg1 forEdges:(NSUInteger)arg2 ;
-(void)_updateSearchPaletteSettingsForTopViewController:(id)arg0 ;
-(void)_updateToolbarItemsFromViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateTopViewFramesForViewController:(id)arg0 ;
-(void)_updateTopViewFramesForViewController:(id)arg0 isCancelledTransition:(BOOL)arg1 isOrientationChange:(BOOL)arg2 ;
-(void)_updateTopViewFramesToMatchScrollOffsetInViewController:(id)arg0 contentScrollView:(id)arg1 topLayoutType:(NSInteger)arg2 ;
-(void)_viewControllerSubtreeDidGainViewController:(id)arg0 ;
-(void)_viewSubtreeDidGainScrollView:(id)arg0 enclosingViewController:(id)arg1 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)attachPalette:(id)arg0 isPinned:(BOOL)arg1 ;
-(void)collapseSecondaryViewController:(id)arg0 forSplitViewController:(id)arg1 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)detachPalette:(id)arg0 ;
-(void)detachPalette:(id)arg0 isInPaletteTransition:(BOOL)arg1 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadView;
-(void)navigationBarDidChangeOpacity:(id)arg0 ;
-(void)navigationBarDidResizeForPrompt:(id)arg0 ;
-(void)navigationTransitionView:(id)arg0 didEndTransition:(NSInteger)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)navigationTransitionView:(id)arg0 didStartTransition:(NSInteger)arg1 ;
-(void)navigationTransitionView:(id)arg0 enableUserInteractionOnContainerView:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 transition:(int)arg1 ;
-(void)pushViewController:(id)arg0 transition:(int)arg1 forceImmediate:(BOOL)arg2 ;
-(void)removeChildViewController:(id)arg0 notifyDidMove:(BOOL)arg1 ;
-(void)rename:(id)arg0 ;
-(void)setAllowUserInteractionDuringTransition:(BOOL)arg0 ;
-(void)setCondensesBarsOnSwipe:(BOOL)arg0 ;
-(void)setContentSizeForViewInPopover:(struct CGSize )arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEnableBackButtonDuringTransition:(BOOL)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)setSearchBarHidNavBar:(BOOL)arg0 ;
-(void)showViewController:(id)arg0 sender:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unwindForSegue:(id)arg0 towardsViewController:(id)arg1 ;
-(void)updateTabBarItemForViewController:(id)arg0 ;
-(void)updateTitleForViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif