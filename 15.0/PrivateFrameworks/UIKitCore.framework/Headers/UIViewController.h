// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVIEWCONTROLLER_H
#define UIVIEWCONTROLLER_H

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString, NSLayoutConstraint, NSMutableDictionary, NSExtensionContext, NSUUID, NSBundle;
@protocol NSExtensionRequestHandling, _UIFallbackEnvironment, _UIViewServiceDeputy, UIWindowDelegate, _UITraitEnvironmentInternal, _UIContentContainerInternal, _UIFocusEnvironmentInternal, _UIStatusBarAnimationProviding, NSCoding, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment, UIViewControllerTransitioningDelegate, _UIViewControllerContentViewEmbedding, UILayoutSupport><_UILayoutItem, _UIFocusBehavior, UIFocusItemContainer, _UIFocusRegionContainer, UIFocusItem;


#import "UIResponder.h"
#import "UIView.h"
#import "UITabBarItem.h"
#import "UINavigationItem.h"
#import "UIViewController.h"
#import "UIViewControllerAction.h"
#import "UIBarButtonItem.h"
#import "UISearchDisplayController.h"
#import "UIPopoverController.h"
#import "UIScrollView.h"
#import "UITraitCollection.h"
#import "UIAccessibilityHUDView.h"
#import "UIWindow.h"
#import "UIMultiColumnViewController.h"
#import "UIPresentationController.h"
#import "UIStoryboardSegue.h"
#import "_UIActionSheetPresentationController.h"
#import "UITransitionView.h"
#import "UIDropShadowView.h"
#import "UIFocusSystem.h"
#import "_UIFocusSystemSceneComponent.h"
#import "UINavigationController.h"
#import "UINavigationContentAdjustments.h"
#import "UIStatusBarHideAnimationParameters.h"
#import "UIStatusBarStyleAnimationParameters.h"
#import "UISplitViewController.h"
#import "UIStoryboard.h"
#import "UITabBarController.h"

@interface UIViewController : UIResponder <NSExtensionRequestHandling, _UIFallbackEnvironment, _UIViewServiceDeputy, UIWindowDelegate, _UITraitEnvironmentInternal, _UIContentContainerInternal, _UIFocusEnvironmentInternal, _UIStatusBarAnimationProviding, NSCoding, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment>

 {
    id<UIViewControllerTransitioningDelegate> *_overrideTransitioningDelegate;
    UIView *_view;
    UITabBarItem *_tabBarItem;
    UINavigationItem *_navigationItem;
    NSArray *_toolbarItems;
    UIViewController *_parentViewController;
    UIViewController *_childModalViewController;
    UIViewController *_previousRootViewController;
    UIResponder *_modalPreservedFirstResponder;
    id *_dimmingView;
    UIViewControllerAction *_currentAction;
    NSDictionary *_externalObjectsTableForViewLoading;
    NSArray *_topLevelObjectsToKeepAliveFromStoryboard;
    UIView *_savedFooterSuperview;
    UIBarButtonItem *_editButtonItem;
    UISearchDisplayController *_searchDisplayController;
    UISearchDisplayController *_strongSearchDisplayController;
    NSInteger _lastKnownInterfaceOrientation;
    UIPopoverController *_popoverController;
    CGSize _formSheetSize;
    UIScrollView *_recordedContentScrollView;
    NSInteger _explicitAppearanceTransitionLevel;
    NSArray *_interfaceBuilderKeyCommands;
    NSArray *_addedKeyCommands;
    NSMapTable *_overrideTraitCollectionsForChildren;
    NSMutableArray *_previewSourceViews;
    ? _viewControllerFlags;
    NSInteger _retainCount;
    BOOL _ignoreAppSupportedOrientations;
    BOOL _viewHostsLayoutEngine;
    NSString *_storyboardIdentifier;
    id<UIViewControllerTransitioningDelegate> *_transitioningDelegate;
    UITraitCollection *_frozenTraitCollection;
    UIAccessibilityHUDView *_accessibilityHUD;
    CGSize _lastForwardedTransitionSize;
}


@property (readonly, nonatomic) ? __sizeClassPair;
@property (readonly, nonatomic) BOOL _allowsStylingSheetsAsCards;
@property (readonly, retain, nonatomic) NSLayoutConstraint *_bottomBarInsetGuideConstraint; // ivar: _bottomBarInsetGuideConstraint
@property (retain, nonatomic, setter=_setChildControllerToIgnoreWhileLookingForTransitionCoordinator:) UIViewController *_childControllerToIgnoreWhileLookingForTransitionCoordinator; // ivar: __childControllerToIgnoreWhileLookingForTransitionCoordinator
@property (nonatomic, setter=_setContentMargin:) CGFloat _contentMargin; // ivar: _contentMargin
@property (nonatomic, setter=_setContentOverlayInsets:) UIEdgeInsets _contentOverlayInsets; // ivar: _contentOverlayInsets
@property (weak, nonatomic) UIViewController *_departingParentViewController; // ivar: __departingParentViewController
@property (readonly, nonatomic) NSObject<_UIViewControllerContentViewEmbedding> *_embeddedDelegate;
@property (nonatomic, setter=_setEmbeddedDelegate:) NSObject<_UIViewControllerContentViewEmbedding> *_embeddedDelegate; // ivar: __embeddedDelegate
@property (readonly, nonatomic) UIView *_embeddedView;
@property (retain, nonatomic, setter=_setEmbeddedView:) UIView *_embeddedView; // ivar: __embeddedView
@property (nonatomic, setter=_setEmbeddedViewFrame:) CGRect _embeddedViewFrame; // ivar: __embeddedViewFrame
@property (retain, nonatomic, setter=_setEmbeddingView:) UIView *_embeddingView; // ivar: __embeddingView
@property (retain, nonatomic, setter=_setExpectedWindow:) UIWindow *_expectedWindow; // ivar: _expectedWindow
@property (nonatomic, setter=_setFreezeLayoutForOrientationChangeOnDismissal:) BOOL _freezeLayoutForOrientationChangeOnDismissal;
@property (readonly, nonatomic) BOOL _hasDeepestActionResponder;
@property (readonly, nonatomic) NSInteger _horizontalSizeClass;
@property (readonly, nonatomic) BOOL _isDimmingBackground;
@property (readonly, nonatomic) BOOL _isInSheetPresentation;
@property (readonly, nonatomic) BOOL _isModalSheet;
@property (readonly, nonatomic) BOOL _isPresentedFormSheet;
@property (readonly, nonatomic) UITraitCollection *_lastNotifiedTraitCollection; // ivar: _lastNotifiedTraitCollection
@property (nonatomic, setter=_setLeftContentMargin:) CGFloat _leftContentMargin; // ivar: _leftContentMargin
@property (nonatomic, setter=_setModalSourceViewController:) UIViewController *_modalSourceViewController; // ivar: _modalSourceViewController
@property (readonly, nonatomic) BOOL _monitorsSystemLayoutFittingSize;
@property (readonly, nonatomic) UIMultiColumnViewController *_multiColumnViewController;
@property (readonly, nonatomic) BOOL _navControllerIsLayingOutTopViewController;
@property (nonatomic, setter=_setNavigationControllerContentInsetAdjustment:) UIEdgeInsets _navigationControllerContentInsetAdjustment;
@property (nonatomic, setter=_setNavigationControllerContentOffsetAdjustment:) CGFloat _navigationControllerContentOffsetAdjustment; // ivar: _navigationControllerContentOffsetAdjustment
@property (readonly, nonatomic) UINavigationItem *_navigationItemCreatingDefaultIfNotSet;
@property (nonatomic) BOOL _nextResponderIgnoresChildModalVC; // ivar: _nextResponderIgnoresChildModalVC
@property (nonatomic) BOOL _nextResponderIgnoresOverride; // ivar: _nextResponderIgnoresOverride
@property (readonly, nonatomic) NSMutableDictionary *_observableScrollViews; // ivar: _observableScrollViews
@property (readonly, nonatomic) UIViewController *_parentModalViewController;
@property (readonly, nonatomic) UIViewController *_parentViewController;
@property (readonly, nonatomic) NSArray *_preferredContentSizes;
@property (retain, nonatomic, setter=_setPresentationController:) UIPresentationController *_presentationController; // ivar: _presentationController
@property (retain, nonatomic, setter=_setPresentedStatusBarViewController:) UIViewController *_presentedStatusBarViewController; // ivar: _presentedStatusBarViewController
@property (retain, nonatomic, setter=_setPresentedUserInterfaceStyleViewController:) UIViewController *_presentedUserInterfaceStyleViewController; // ivar: _presentedUserInterfaceStyleViewController
@property (retain, nonatomic, setter=_setPreviousFittingSizeInfo:) NSDictionary *_previousFittingSizeInfo;
@property (nonatomic, setter=_setRequiresIgnoredContentScrollViewSizeWhileAppearingInNavigationStack:) BOOL _requiresIgnoredContentScrollViewSizeWhileAppearingInNavigationStack;
@property (nonatomic, setter=_setRightContentMargin:) CGFloat _rightContentMargin; // ivar: _rightContentMargin
@property (retain, nonatomic, setter=_setSegueResponsibleForModalPresentation:) UIStoryboardSegue *_segueResponsibleForModalPresentation; // ivar: _segueResponsibleForModalPresentation
@property (nonatomic, setter=_setSourceViewControllerIfPresentedViaPopoverSegue:) UIViewController *_sourceViewControllerIfPresentedViaPopoverSegue; // ivar: _sourceViewControllerIfPresentedViaPopoverSegue
@property (readonly, retain, nonatomic) NSLayoutConstraint *_topBarInsetGuideConstraint; // ivar: _topBarInsetGuideConstraint
@property (nonatomic, setter=_setTransitioningOutWithoutDisappearing:) BOOL _transitioningOutWithoutDisappearing;
@property (readonly, nonatomic) BOOL _transitionsChildViewControllers;
@property (readonly, nonatomic) BOOL _useSheetRotation;
@property (readonly, nonatomic) NSInteger _verticalSizeClass;
@property (readonly, nonatomic) BOOL _viewHostsLayoutEngineAllowsTAMIC_NO;
@property (readonly, nonatomic) UIEdgeInsets _viewSafeAreaInsetsFromScene;
@property (readonly, nonatomic) _UIActionSheetPresentationController *actionSheetPresentationController;
@property (nonatomic) UIEdgeInsets additionalSafeAreaInsets; // ivar: _additionalSafeAreaInsets
@property (copy, nonatomic) id *afterAppearanceBlock; // ivar: _afterAppearance
@property (nonatomic) BOOL appearanceTransitionsAreDisabled;
@property (nonatomic) BOOL areChildrenFocused;
@property (nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property (nonatomic) BOOL autoresizesArchivedViewToFullSize;
@property (readonly, nonatomic, getter=isBeingDismissed) BOOL beingDismissed;
@property (readonly, nonatomic, getter=isBeingPresented) BOOL beingPresented;
@property (readonly, retain, nonatomic) NSObject<UILayoutSupport><_UILayoutItem> *bottomLayoutGuide; // ivar: _bottomLayoutGuide
@property (retain, nonatomic) UIViewController *childModalViewController;
@property (readonly, nonatomic) UIViewController *childViewControllerForStatusBarHidden;
@property (readonly, nonatomic) UIViewController *childViewControllerForStatusBarStyle;
@property (readonly, nonatomic) UIViewController *childViewControllerForUserInterfaceStyle;
@property (readonly, nonatomic) NSArray *childViewControllers;
@property (readonly, nonatomic) NSUInteger childViewControllersCount;
@property (nonatomic) CGSize contentSizeForViewInPopover; // ivar: _contentSizeForViewInPopover
@property (nonatomic) CGFloat customNavigationInteractiveTransitionDuration; // ivar: _customNavigationInteractiveTransitionDuration
@property (nonatomic) CGFloat customNavigationInteractiveTransitionPercentComplete; // ivar: _customNavigationInteractiveTransitionPercentComplete
@property (retain, nonatomic) UITransitionView *customTransitioningView; // ivar: _customTransitioningView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL definesPresentationContext;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disablesAutomaticKeyboardDismissal;
@property (retain, nonatomic) UIDropShadowView *dropShadowView; // ivar: _dropShadowView
@property (nonatomic) NSUInteger edgesForExtendedLayout; // ivar: _edgesForExtendedLayout
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (nonatomic) BOOL extendedLayoutIncludesOpaqueBars;
@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property (retain, nonatomic, setter=_setExtensionContextUUID:) NSUUID *extensionContextUUID;
@property (nonatomic, getter=isFinishingModalTransition) BOOL finishingModalTransition;
@property (readonly, nonatomic, getter=_focusBehavior) NSObject<_UIFocusBehavior> *focusBehavior;
@property (copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) NSObject<_UIFocusRegionContainer> *focusMapContainer;
@property (readonly, nonatomic, getter=_focusSystem) UIFocusSystem *focusSystem;
@property (readonly, nonatomic, getter=_focusSystemSceneComponent) _UIFocusSystemSceneComponent *focusSystemSceneComponent;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic) BOOL ignoresParentMargins; // ivar: _ignoresParentMargins
@property (nonatomic, getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;
@property (readonly, nonatomic) BOOL inExplicitAppearanceTransition;
@property (nonatomic, getter=isInWillRotateCallback) BOOL inWillRotateCallback;
@property (readonly, nonatomic) BOOL isSettingAppearState;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (nonatomic) BOOL modalInPopover;
@property (nonatomic) BOOL modalPresentationCapturesStatusBarAppearance; // ivar: _modalPresentationCapturesStatusBarAppearance
@property (nonatomic) NSInteger modalPresentationStyle; // ivar: _modalPresentationStyle
@property (nonatomic) NSInteger modalTransitionStyle; // ivar: _modalTransitionStyle
@property (readonly, nonatomic) UIViewController *modalViewController;
@property (readonly, nonatomic, getter=isMovingFromParentViewController) BOOL movingFromParentViewController;
@property (readonly, nonatomic, getter=isMovingToParentViewController) BOOL movingToParentViewController;
@property (retain, nonatomic) NSMutableArray *mutableChildViewControllers; // ivar: _childViewControllers
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UINavigationContentAdjustments *navigationInsetAdjustment; // ivar: _navigationInsetAdjustment
@property (readonly, nonatomic) UINavigationItem *navigationItem;
@property (nonatomic) BOOL needsDidMoveCleanup;
@property (retain, nonatomic) NSBundle *nibBundle; // ivar: _nibBundle
@property (copy, nonatomic) NSString *nibName; // ivar: _nibName
@property (retain, nonatomic, getter=_originalPresentationController, setter=_setOriginalPresentationController:) UIPresentationController *originalPresentationController; // ivar: _originalPresentationController
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection; // ivar: _overrideTraitCollection
@property (retain, nonatomic, getter=_overrideTransitioningDelegate, setter=_setOverrideTransitioningDelegate:) NSObject<UIViewControllerTransitioningDelegate> *overrideTransitioningDelegate;
@property (nonatomic, getter=_overrideUseCustomPresentation, setter=_setOverrideUseCustomPresentation:) BOOL overrideUseCustomPresentation; // ivar: overrideUseCustomPresentation
@property (nonatomic) NSInteger overrideUserInterfaceStyle;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic) UIViewController *parentModalViewController; // ivar: _parentModalViewController
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly, nonatomic) BOOL performsActionsWhilePresentingModally;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (weak, nonatomic) UIView *preferredFocusedItem; // ivar: _preferredFocusedItem
@property (weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (readonly, nonatomic) NSInteger preferredStatusBarStyle;
@property (readonly, nonatomic, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (readonly, nonatomic) NSInteger preferredStatusBarUpdateAnimation;
@property (readonly, nonatomic) NSInteger preferredUserInterfaceStyle;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (nonatomic, getter=_presentationSizeClassPair, setter=_setPresentationSizeClassPair:) ? presentationSizeClassPair; // ivar: _presentationSizeClassPair
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic, getter=_presentingFocusedItem, setter=_setPresentingFocusedItem:) NSObject<UIFocusItem> *presentingFocusedItem; // ivar: _presentingFocusedItem
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) NSArray *previewActionItems;
@property (nonatomic) BOOL providesPresentationContextTransitionStyle;
@property (nonatomic) BOOL restoresFocusAfterTransition;
@property (readonly, nonatomic) UIView *savedHeaderSuperview; // ivar: _savedHeaderSuperview
@property (nonatomic) BOOL searchBarHidNavBar;
@property (retain, nonatomic) UISearchDisplayController *searchDisplayController;
@property (readonly, nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods;
@property (readonly, nonatomic) UISplitViewController *splitViewController;
@property (retain, nonatomic, setter=_setStoryboard:) UIStoryboard *storyboard; // ivar: _storyboard
@property (readonly, nonatomic) NSArray *storyboardCommitSegueTemplates; // ivar: _storyboardCommitSegueTemplates
@property (readonly, nonatomic) NSArray *storyboardPreviewSegueTemplates; // ivar: _storyboardPreviewSegueTemplates
@property (readonly, nonatomic) NSArray *storyboardPreviewingRegistrants; // ivar: _storyboardPreviewingRegistrants
@property (readonly, nonatomic) NSArray *storyboardSegueTemplates; // ivar: _storyboardSegueTemplates
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDirectionalEdgeInsets systemMinimumLayoutMargins; // ivar: _systemMinimumLayoutMargins
@property (readonly, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UITabBarItem *tabBarItem;
@property (retain, nonatomic) UIScrollView *tabBarObservedScrollView;
@property (retain, nonatomic, getter=_temporaryPresentationController, setter=_setTemporaryPresentationController:) UIPresentationController *temporaryPresentationController; // ivar: _temporaryPresentationController
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, retain, nonatomic) NSObject<UILayoutSupport><_UILayoutItem> *topLayoutGuide; // ivar: _topLayoutGuide
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (weak, nonatomic) NSObject<UIViewControllerTransitioningDelegate> *transitioningDelegate;
@property (retain, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *viewIfLoaded;
@property (readonly, nonatomic, getter=isViewLoaded) BOOL viewLoaded;
@property (nonatomic) BOOL wantsFullScreenLayout;
@property (readonly, nonatomic, getter=_window) UIWindow *window;


+(BOOL)_allViewControllersInArray:(id)arg0 allowAutorotationToInterfaceOrientation:(NSInteger)arg1 predicate:(id)arg2 ;
+(BOOL)_directlySetsContentOverlayInsetsForChildren;
+(BOOL)_doesOverrideLegacyShouldAutorotateMethod;
+(BOOL)_initializedByViewServices;
+(BOOL)_isSecureForRemoteViewService;
+(BOOL)_isViewSizeFullScreen:(id)arg0 inWindow:(id)arg1 ;
+(BOOL)_isViewSizeFullScreen:(id)arg0 inWindow:(id)arg1 ignoreInWindowCheck:(BOOL)arg2 ;
+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)_shouldAnimateTransitions;
+(BOOL)_shouldDeferTransitions;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)_shouldRememberFocusForDismissal;
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(BOOL)_shouldUseLegacyUnwindDestinationSearch;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(BOOL)doesOverrideViewControllerMethod:(SEL)arg0 ;
+(BOOL)doesOverrideViewControllerMethod:(SEL)arg0 inBaseClass:(Class)arg1 ;
+(CGFloat)_boundsWidthWithMinimumHorizontalContentMarginForView:(id)arg0 preservingContentWidth:(CGFloat)arg1 ;
+(CGFloat)_horizontalContentMarginForView:(id)arg0 ;
+(CGFloat)_horizontalContentMarginForView:(id)arg0 ofWidth:(CGFloat)arg1 ;
+(CGFloat)_slimHorizontalContentMargin;
+(CGFloat)durationForTransition:(int)arg0 ;
+(id)XPCInterface;
+(id)_allDescriptions;
+(id)_exportedInterface;
+(id)_printHierarchy;
+(id)_remoteViewControllerInterface;
+(id)_safeAreaInsetsTrace;
+(id)_traitCollectionWithParentTraitCollection:(id)arg0 overrideTraitCollection:(id)arg1 ;
+(id)_viewControllerForFullScreenPresentationFromView:(id)arg0 ;
+(id)_whitelistOfSubclassableViewControllersMarkedSafe;
+(id)viewControllerForView:(id)arg0 ;
+(int)_keyboardDirectionForTransition:(int)arg0 ;
+(struct CGSize )defaultFormSheetSize;
+(void)_performWithoutDeferringTransitions:(id)arg0 ;
+(void)_scheduleTransition:(id)arg0 ;
+(void)_setShouldDeferTransitions:(BOOL)arg0 ;
+(void)_traverseViewControllerHierarchy:(id)arg0 ;
+(void)_traverseViewControllerHierarchyWithDelayedRelease:(id)arg0 ;
+(void)_withDisabledAppearanceTransitions:(BOOL)arg0 forDescendantsOf:(id)arg1 visibleOnly:(BOOL)arg2 perform:(id)arg3 ;
+(void)_withDisabledAppearanceTransitionsForVisibleDescendantsOf:(id)arg0 perform:(id)arg1 ;
+(void)attemptRotationToDeviceOrientation;
+(void)initialize;
+(void)removeViewControllerForView:(id)arg0 ;
-(BOOL)__isKindOfUIViewController;
-(BOOL)__knownPresentationWithoutPresentationControllerInstance;
-(BOOL)_allowNestedNavigationControllers;
-(BOOL)_allowsAutorotation;
-(BOOL)_allowsFreezeLayoutForOrientationChangeOnDismissal;
-(BOOL)_allowsSkippingLayout;
-(BOOL)_ancestorViewControllerIsInPopover;
-(BOOL)_canBecomeDeepestUnambiguousResponder;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)_canInfluenceSceneOrientation;
-(BOOL)_canPerformUnwindSegueAction:(SEL)arg0 fromViewController:(id)arg1 sender:(id)arg2 ;
-(BOOL)_canReloadView;
-(BOOL)_canResignIfContainsFirstResponder;
-(BOOL)_canRestoreFocusAfterTransitionToItem:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_containsFirstResponder;
-(BOOL)_displaysFullScreen;
-(BOOL)_formSheetObeysContentContainerSize;
-(BOOL)_forwardAppearanceMethods;
-(BOOL)_forwardRotationMethods;
-(BOOL)_hackFor11408026_beginAppearanceTransition:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)_hackFor11408026_endAppearanceTransition;
-(BOOL)_handlesCounterRotationForPresentation;
-(BOOL)_hasAppeared;
-(BOOL)_hasDeepestPresentedActionResponderOrBlock:(id)arg0 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_ignoreAppSupportedOrientations;
-(BOOL)_ignoresWrapperViewForContentOverlayInsets;
-(BOOL)_isContainmentChanging;
-(BOOL)_isDeallocating;
-(BOOL)_isDelayingPresentation;
-(BOOL)_isHostedRootViewController;
-(BOOL)_isInContextOfPresentationControllerOfClass:(Class)arg0 effective:(BOOL)arg1 ;
-(BOOL)_isInCustomTransition;
-(BOOL)_isInPopoverPresentation;
-(BOOL)_isInViewControllerThatHandlesKeyboardAvoidance;
-(BOOL)_isInterfaceAutorotationDisabled;
-(BOOL)_isMemberOfViewControllerHierarchy:(id)arg0 ;
-(BOOL)_isNavigationController;
-(BOOL)_isNestedNavigationController;
-(BOOL)_isPresentationContextByDefault;
-(BOOL)_isRootViewController;
-(BOOL)_isSearchController;
-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_isViewController;
-(BOOL)_isViewControllerForObservableScrollViewAmbiguous;
-(BOOL)_isViewControllerInWindowHierarchy;
-(BOOL)_mayForwardPresentationsToPresentedViewController;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(BOOL)_prefersFocusContainment;
-(BOOL)_providesCustomBasePresentationInsets;
-(BOOL)_reallyWantsFullScreenLayout;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)_shouldAbortAdaptationFromTraitCollection:(id)arg0 toTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_shouldAutoPinInputViewsForModalFormSheet;
-(BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg0 ;
-(BOOL)_shouldForceLayoutForHostedAnimation;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(BOOL)_shouldFreezeUnderlapsStatusBar;
-(BOOL)_shouldIgnoreChildFocusRegions;
-(BOOL)_shouldLoadInputAccessoryViewsOnAppearance;
-(BOOL)_shouldLoadViewDuringRestoration:(id)arg0 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg0 parentViewController:(id)arg1 ;
-(BOOL)_shouldUseOnePartRotation;
-(BOOL)_suppressesBottomBar;
-(BOOL)_tryRetain;
-(BOOL)_tvTabBarShouldAutohide;
-(BOOL)_tvTabBarShouldOverlap;
-(BOOL)_useCustomDimmingView;
-(BOOL)_usesSharedView;
-(BOOL)_wantsContentClippedToSafeAreaInSidebarContext;
-(BOOL)_wrapsNavigationController:(*id)arg0 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)canHandleSnapbackIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canPerformUnwindSegueAction:(SEL)arg0 fromViewController:(id)arg1 sender:(id)arg2 ;
-(BOOL)canPerformUnwindSegueAction:(SEL)arg0 fromViewController:(id)arg1 withSender:(id)arg2 ;
-(BOOL)containmentSupport;
-(BOOL)isEditing;
-(BOOL)isModalInPopover;
-(BOOL)isModalInPresentation;
-(BOOL)isPerformingModalTransition;
-(BOOL)isSheet;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersPointerLocked;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldPerformSegueWithIdentifier:(id)arg0 sender:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg0 ;
-(BOOL)transitionViewShouldUseViewControllerCallbacks;
-(BOOL)useLayoutToLayoutNavigationTransitions;
-(CGFloat)_canvasSystemMinimumMargin;
-(CGFloat)_contentMarginForChildViewController:(id)arg0 ;
-(CGFloat)_contentMarginForView:(id)arg0 ;
-(CGFloat)_statusBarHeightAdjustmentForCurrentOrientation;
-(CGFloat)_statusBarHeightForCurrentInterfaceOrientation;
-(CGFloat)_topBarHeight;
-(CGFloat)durationForTransition:(int)arg0 ;
-(Class)restorationClass;
-(NSInteger)_imagePickerStatusBarStyle;
-(NSInteger)_lastKnownInterfaceOrientation;
-(NSInteger)_overrideInterfaceOrientationMechanics;
-(NSInteger)_preferredInterfaceOrientationGivenCurrentOrientation:(NSInteger)arg0 ;
-(NSInteger)_preferredModalPresentationStyle;
-(NSInteger)_preferredWhitePointAdaptivityStyle;
-(NSInteger)_rotatingFromInterfaceOrientation;
-(NSInteger)_rotatingToInterfaceOrientation;
-(NSInteger)interfaceOrientation;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)__supportedInterfaceOrientations;
-(NSUInteger)preferredScreenEdgesDeferringSystemGestures;
-(NSUInteger)retainCount;
-(NSUInteger)supportedInterfaceOrientations;
-(SEL)_customSelectorToCreateChildViewControllerAtIndex:(NSInteger)arg0 ;
-(id)_activityContinuationSuitableToBecomeCurrent;
-(id)_adaptedPresentationControllerForTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(id)_additionalViewControllersToCheckForUserActivity;
-(id)_allContainedViewControllers;
-(id)_animatorForOperation:(NSInteger)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)_appearanceContainer;
-(id)_appearanceGuideClass;
-(id)_backdropBarGroupName;
-(id)_backgroundColorForModalFormSheet;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(id)_childViewControllerForSupportedInterfaceOrientations;
-(id)_childViewControllerForWhitePointAdaptivityStyle;
-(id)_completionBlock:(SEL)arg0 ;
-(id)_contentOrObservableScrollViewForEdge:(NSUInteger)arg0 ;
-(id)_contentScrollView;
-(id)_customChildViewControllerSelectorsNames;
-(id)_customPresentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_decodeRestorableStateAndReturnContinuationWithCoder:(SEL)arg0 ;
-(id)_deepestActionResponder;
-(id)_deepestPresentedActionResponderOrBlock:(id)arg0 ;
-(id)_defaultAnimationController;
-(id)_definiteTransitionCoordinator;
-(id)_descriptionWithChildren:(int)arg0 ;
-(id)_destinationForUnwindingFromSource:(id)arg0 visitedViewControllers:(id)arg1 ;
-(id)_effectiveHomeIndicatorAutoHiddenViewController;
-(id)_effectivePointerLockViewController;
-(id)_effectiveScreenEdgesDeferringSystemGesturesViewController;
-(id)_effectiveStatusBarHiddenViewController;
-(id)_effectiveStatusBarStyleViewController;
-(id)_effectiveUserInterfaceStyleViewController;
-(id)_effectiveViewControllerForMultitaskingDragExclusionRects;
-(id)_effectiveViewControllerForSupportedInterfaceOrientations;
-(id)_effectiveWhitePointAdaptivityStyleViewController;
-(id)_existingNavigationItem;
-(id)_existingPresentationControllerImmediate:(BOOL)arg0 effective:(BOOL)arg1 ;
-(id)_existingPresentationControllerImmediate:(BOOL)arg0 effective:(BOOL)arg1 includesRoot:(BOOL)arg2 ;
-(id)_existingTabBarItem;
-(id)_existingView;
-(id)_fallbackTraitCollection;
-(id)_firstResponder;
-(id)_hostApplicationBundleIdentifier;
-(id)_independentContainedScrollViewIntermediateToDescendantViewController:(id)arg0 ;
-(id)_keyCommands;
-(id)_lastNavigationItems;
-(id)_moreListTitle;
-(id)_multitaskingDragExclusionRects;
-(id)_navControllerToCreateManagedSearchPaletteForNavController:(id)arg0 ;
-(id)_navigationBarForDragAffordance;
-(id)_nextResponderUsingTargetActionStrategyFromChildViewController:(id)arg0 didTraverseToParentViewController:(*BOOL)arg1 ;
-(id)_nextResponderUsingTraversalStrategy:(NSUInteger)arg0 ;
-(id)_nextViewController;
-(id)_nextViewControllerForUnwindSegueSearch;
-(id)_nonModalAncestorViewController;
-(id)_nonModalAncestorViewControllerStopAtIsPresentationContext:(BOOL)arg0 ;
-(id)_nonPresentationAppearanceContainer;
-(id)_observableScrollViewForEdges:(NSUInteger)arg0 ;
-(id)_overrideTraitCollectionToPassDuringTraitChangeToChildViewController:(id)arg0 ;
-(id)_overridingPreferredFocusEnvironment;
-(id)_parentContentContainer;
-(id)_parentTraitEnvironment;
-(id)_popoverController;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_printHierarchy;
-(id)_registerForPreviewingWithDelegate:(id)arg0 sourceView:(id)arg1 implementation:(NSInteger)arg2 ;
-(id)_remoteViewControllerProxy;
-(id)_remoteViewControllerProxyWithErrorHandler:(id)arg0 ;
-(id)_restorationClassName;
-(id)_rootAncestorViewController;
-(id)_safeAreaInsetsTrace;
-(id)_safePrimaryViewControllerForAutorotationBelowWindow:(id)arg0 ;
-(id)_safeViewControllerForRotationWithDismissCheck:(BOOL)arg0 ;
-(id)_safeViewControllerForSupportedInterfaceOrientationsWithDismissCheck:(BOOL)arg0 ;
-(id)_safeWindowForAutorotationBelowWindow:(id)arg0 ;
-(id)_screen;
-(id)_shim_contentScrollView;
-(id)_splitViewControllerEnforcingClass:(BOOL)arg0 ;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_tabBarControllerEnforcingClass:(BOOL)arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_transitionCoordinator;
-(id)_uiCollectionView;
-(id)_vanillaInit;
-(id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(BOOL)arg0 ;
-(id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg0 ;
-(id)_visibleView;
-(id)_visualStyleOfContainingAlertController;
-(id)allowedChildViewControllersForUnwindingFromSource:(id)arg0 ;
-(id)autorelease;
-(id)childViewControllerContainingSegueSource:(id)arg0 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForPointerLock;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)contentScrollView;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)currentAction;
-(id)defaultPNGName;
-(id)editButtonItem;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)invalidate;
-(id)keyCommands;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)moreListTableCell;
-(id)nextResponder;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(id)popoverPresentationController;
-(id)presentationController;
-(id)registerForPreviewingWithDelegate:(id)arg0 sourceView:(id)arg1 ;
-(id)retain;
-(id)rotatingContentViewForWindow:(id)arg0 ;
-(id)rotatingFooterView;
-(id)rotatingFooterViewForWindow:(id)arg0 ;
-(id)rotatingHeaderView;
-(id)rotatingHeaderViewForWindow:(id)arg0 ;
-(id)rotatingSnapshotViewForWindow:(id)arg0 ;
-(id)safeAreaLayoutGuide;
-(id)segueForUnwindingToViewController:(id)arg0 fromViewController:(id)arg1 identifier:(id)arg2 ;
-(id)separateSecondaryViewControllerForSplitViewController:(id)arg0 ;
-(id)sheetPresentationController;
-(id)targetViewControllerForAction:(SEL)arg0 sender:(id)arg1 ;
-(id)toolbarItems;
-(id)traitCollectionForChildViewController:(id)arg0 ;
-(id)transitionCoordinator;
-(id)viewControllerForUnwindSegueAction:(SEL)arg0 fromViewController:(id)arg1 withSender:(id)arg2 ;
-(int)_appearState;
-(int)_hostProcessIdentifier;
-(int)_preferredStatusBarVisibility;
-(struct ? )_cumulativeOverlayInsetsInView:(id)arg0 ;
-(struct ? )_hostAuditToken;
-(struct CGPoint )_centerForOrientation:(NSInteger)arg0 ;
-(struct CGRect )_boundsForOrientation:(NSInteger)arg0 ;
-(struct CGRect )_defaultInitialViewFrame;
-(struct CGSize )_formSheetSizeForWindowWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_resolvedPreferredContentSize;
-(struct CGSize )_systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct CGSize )formSheetSize;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )_avoidanceInsets;
-(struct UIEdgeInsets )_customBasePresentationInsetsForView:(id)arg0 ;
-(struct UIEdgeInsets )_devicePeripheryInsets;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_minimumLayoutMarginsForView;
-(struct UIEdgeInsets )_overlayInsetsAdjustment;
-(void)__prepareForDisconnectionWithCompletionHandler:(id)arg0 ;
-(void)__viewControllerWillBePresented:(BOOL)arg0 ;
-(void)__viewDidAppear:(BOOL)arg0 ;
-(void)__viewWillAppear:(BOOL)arg0 ;
-(void)__willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)_addChildViewController:(id)arg0 ;
-(void)_addChildViewController:(id)arg0 notifyWillMove:(BOOL)arg1 ;
-(void)_addChildViewController:(id)arg0 performHierarchyCheck:(BOOL)arg1 notifyWillMove:(BOOL)arg2 ;
-(void)_beginAppearanceTransitionToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_beginDelayingPresentation;
-(void)_beginDelayingPresentation:(CGFloat)arg0 cancellationHandler:(id)arg1 ;
-(void)_beginDisablingInterfaceAutorotation;
-(void)_cancelDelayedPresentation:(BOOL)arg0 ;
-(void)_cleanupPresentation;
-(void)_clearCachedPopoverContentSize;
-(void)_clearRecordedContentScrollView;
-(void)_collapseSecondaryViewController:(id)arg0 forSplitViewController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_containingAlertControllerDidChangeVisualStyle:(id)arg0 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)_didCancelDismissTransition:(id)arg0 ;
-(void)_didCancelPresentTransition:(id)arg0 ;
-(void)_didEndCounterRotationForPresentation;
-(void)_didFinishDismissTransition;
-(void)_didFinishPresentTransition;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_didRotateFromInterfaceOrientation:(NSInteger)arg0 forwardToChildControllers:(BOOL)arg1 skipSelf:(BOOL)arg2 ;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_dismissAccessibilityHUD;
-(void)_dismissViewControllerWithTransition:(int)arg0 from:(id)arg1 completion:(id)arg2 ;
-(void)_eagerlyUpdateSafeAreaInsetsToViewDescendant:(id)arg0 ;
-(void)_embedContentViewInView:(id)arg0 withContentFrame:(struct CGRect )arg1 delegate:(id)arg2 ;
-(void)_endAppearanceTransitionToViewController:(id)arg0 ;
-(void)_endDelayingPresentation;
-(void)_endDisablingInterfaceAutorotation;
-(void)_enumerateAncestorViewControllersUntilStop:(*BOOL)arg0 usingBlock:(id)arg1 ;
-(void)_executeAfterAppearanceBlock;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_handleTapToDismissModalCurl:(id)arg0 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg0 ;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg0 ;
-(void)_legacyModalPresentTransitionDidComplete;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_observableScrollViewDidChangeFrom:(id)arg0 forViewController:(id)arg1 edges:(NSUInteger)arg2 ;
-(void)_parent:(id)arg0 willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_populateArchivedChildViewControllers:(id)arg0 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)_prepareForContainerTransition:(id)arg0 ;
-(void)_prepareForNestedDisplayWithNavigationController:(id)arg0 ;
-(void)_prepareForNormalDisplayWithNavigationController:(id)arg0 ;
-(void)_prepareForTapGesture:(id)arg0 ;
-(void)_preparePresentationControllerForPresenting:(id)arg0 ;
-(void)_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentViewController:(id)arg0 modalSourceViewController:(id)arg1 presentationController:(id)arg2 animationController:(id)arg3 interactionController:(id)arg4 completion:(id)arg5 ;
-(void)_presentViewController:(id)arg0 withAnimationController:(id)arg1 completion:(id)arg2 ;
-(void)_presentViewControllerForStateRestoration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)_presentationControllerDidDismiss:(id)arg0 ;
-(void)_presentationControllerWillDismiss:(id)arg0 ;
-(void)_presentingViewControllerDidChange:(id)arg0 ;
-(void)_presentingViewControllerWillChange:(id)arg0 ;
-(void)_primitiveSetNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets )arg0 ;
-(void)_primitiveSetNavigationControllerContentOffsetAdjustment:(CGFloat)arg0 ;
-(void)_recordContentScrollView;
-(void)_rememberPresentingFocusedItem:(id)arg0 ;
-(void)_removeChildViewController:(id)arg0 ;
-(void)_replaceViewControllerInPresentationHierarchy:(id)arg0 ;
-(void)_restoreInputViewsForPresentation;
-(void)_safeAreaInsetsDidChangeForView;
-(void)_sceneSettingsSafeAreaInsetsDidChangeForWindow:(id)arg0 ;
-(void)_setAllowNestedNavigationControllers:(BOOL)arg0 ;
-(void)_setAllowsAutorotation:(BOOL)arg0 ;
-(void)_setAvoidanceInsetsNeedsUpdate;
-(void)_setCustomChildViewControllerSelectorsNames:(id)arg0 ;
-(void)_setExistingNavigationItem:(id)arg0 ;
-(void)_setExistingTabBarItem:(id)arg0 ;
-(void)_setFormSheetSize:(struct CGSize )arg0 ;
-(void)_setHostApplicationBundleIdentifier:(id)arg0 ;
-(void)_setHostAuditToken:(struct ? )arg0 ;
-(void)_setHostProcessIdentifier:(int)arg0 ;
-(void)_setIgnoreAppSupportedOrientations:(BOOL)arg0 ;
-(void)_setIgnoresWrapperViewForContentOverlayInsets:(BOOL)arg0 ;
-(void)_setImagePickerMediaTypes:(id)arg0 ;
-(void)_setInCustomTransition:(BOOL)arg0 ;
-(void)_setKeyCommands:(id)arg0 ;
-(void)_setMayForwardPresentationsToPresentedViewController:(BOOL)arg0 ;
-(void)_setNeedsNonDeferredFocusUpdate;
-(void)_setNeedsScreenWhitePointAdaptivityStyleUpdate;
-(void)_setNeedsStatusBarAppearanceUpdateWithAnimationParameters:(id)arg0 ;
-(void)_setNeedsUpdateOfMultitaskingDragExclusionRects;
-(void)_setNeedsUpdateOfSupportedInterfaceOrientations;
-(void)_setNeedsUserInterfaceAppearanceUpdate;
-(void)_setObservableScrollView:(id)arg0 forEdges:(NSUInteger)arg1 ;
-(void)_setPopoverController:(id)arg0 ;
-(void)_setRemoteViewControllerProxy:(id)arg0 ;
-(void)_setSecurityModeForViewsLayer;
-(void)_setShouldFreezeUnderlapsStatusBar:(BOOL)arg0 ;
-(void)_setShouldLoadInputAccessoryViewOnAppearance:(BOOL)arg0 ;
-(void)_setSuppressesBottomBar:(BOOL)arg0 ;
-(void)_setTraitStorageList:(id)arg0 ;
-(void)_setUseTelephonyUI:(BOOL)arg0 ;
-(void)_setUsesSharedView:(BOOL)arg0 ;
-(void)_showAccessibilityHUDItem:(id)arg0 ;
-(void)_showViewController:(id)arg0 withAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg0 ;
-(void)_startPresentCustomTransitionWithDuration:(CGFloat)arg0 ;
-(void)_stateRestorationDidFinish:(BOOL)arg0 ;
-(void)_stopTransitionsImmediately;
-(void)_supportedInterfaceOrientationsDidChange;
-(void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 childViewController:(id)arg1 ;
-(void)_toggleEditing:(id)arg0 ;
-(void)_traitCollectionDidChange:(id)arg0 ;
-(void)_transitionToNavigationViewController:(id)arg0 withWrapper:(id)arg1 ;
// -(void)_transitionToViewController:(id)arg0 whilePerforming:(id)arg1 completion:(unk)arg2  ;
-(void)_traverseViewControllerHierarchyFromLevel:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)_unembedContentView;
-(void)_unembedContentViewSettingDelegate:(id)arg0 ;
-(void)_unsafeParentWillTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_updateChildContentMargins;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)_updateContentOverlayInsetsFromParentForNavigationTransitionWithFinalRectInParent:(struct CGRect )arg0 ;
-(void)_updateContentOverlayInsetsFromParentIfNecessary;
-(void)_updateControlledViewsToFrame:(struct CGRect )arg0 ;
-(void)_updateInteractivePopGestureEnabledState;
-(void)_updateInterfaceOrientationAnimated:(BOOL)arg0 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(void)_updateToolbarItemsFromViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateTraitsIfNecessary;
-(void)_viewSubtreeDidGainScrollView:(id)arg0 enclosingViewController:(id)arg1 ;
-(void)_willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3 ;
-(void)_willAppearInRemoteViewController;
-(void)_willAppearInRemoteViewController:(id)arg0 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)_willBeginCounterRotationForPresentation;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)_willResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3 ;
-(void)_window:(id)arg0 viewWillTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_window:(id)arg0 willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)accessibilityLargeTextDidChange;
-(void)addChildViewController:(id)arg0 ;
-(void)addKeyCommand:(id)arg0 ;
-(void)applicationDidResume;
-(void)applicationFinishedRestoringState;
-(void)applicationWantsViewsToDisappear;
-(void)applicationWillSuspend;
-(void)attentionClassDumpUser:(id)arg0 yesItsUsAgain:(id)arg1 althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)arg2 itWasntMuchFunWhenYourAppStoppedWorking:(id)arg3 pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)arg4 ;
-(void)awakeFromNib;
-(void)beginAppearanceTransition:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)cancelBeginAppearanceTransition;
-(void)collapseSecondaryViewController:(id)arg0 forSplitViewController:(id)arg1 ;
-(void)dealloc;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)dismissModalViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissModalViewControllerWithTransition:(int)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissViewControllerWithTransition:(int)arg0 completion:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endAppearanceTransition;
-(void)forceUnloadView;
-(void)getRotationContentSettings:(struct ? *)arg0 forWindow:(id)arg1 ;
-(void)loadView;
-(void)loadViewIfNeeded;
-(void)loadViewIfRequired;
-(void)performSegueWithIdentifier:(id)arg0 sender:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)presentModalViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentModalViewController:(id)arg0 withTransition:(int)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentViewController:(id)arg0 withTransition:(int)arg1 completion:(id)arg2 ;
-(void)purgeMemoryForReason:(int)arg0 ;
-(void)registerPreviewSourceView:(id)arg0 previewingDelegate:(id)arg1 ;
-(void)release;
-(void)removeChildViewController:(id)arg0 ;
-(void)removeChildViewController:(id)arg0 notifyDidMove:(BOOL)arg1 ;
-(void)removeFromParentViewController;
-(void)removeKeyCommand:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)setContainmentSupport:(BOOL)arg0 ;
-(void)setContentScrollView:(id)arg0 forEdge:(NSUInteger)arg1 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setFormSheetSize:(struct CGSize )arg0 ;
-(void)setInterfaceOrientation:(NSInteger)arg0 ;
-(void)setIsSheet:(BOOL)arg0 ;
-(void)setModalInPresentation:(BOOL)arg0 ;
-(void)setNeedsFocusUpdate;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)setNeedsUpdateOfPrefersPointerLocked;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)setNeedsUserInterfaceAppearanceUpdate;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)setPerformingModalTransition:(BOOL)arg0 ;
-(void)setRestorationClass:(Class)arg0 ;
-(void)setShouldForceNonAnimatedTransition:(BOOL)arg0 ;
-(void)setStoryboardIdentifier:(id)arg0 ;
-(void)setToolbarItems:(id)arg0 ;
-(void)setToolbarItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)setUserActivity:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;
-(void)showViewController:(id)arg0 sender:(id)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
// -(void)transitionFromViewController:(id)arg0 toViewController:(id)arg1 duration:(CGFloat)arg2 options:(NSUInteger)arg3 animations:(id)arg4 completion:(unk)arg5  ;
-(void)unloadViewForced:(BOOL)arg0 ;
-(void)unloadViewIfReloadable;
-(void)unregisterForPreviewingWithContext:(id)arg0 ;
-(void)unregisterPreviewSourceView:(id)arg0 ;
-(void)unregisterPreviewing:(id)arg0 ;
-(void)unwindForSegue:(id)arg0 towardsViewController:(id)arg1 ;
-(void)updateFocusIfNeeded;
-(void)updateTabBarItemForViewController:(id)arg0 ;
-(void)updateTitleForViewController:(id)arg0 ;
-(void)updateUserActivityState:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewIsAppearing:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillMoveToWindow:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)window:(id)arg0 didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 ;
-(void)window:(id)arg0 didRotateFromInterfaceOrientation:(NSInteger)arg1 ;
-(void)window:(id)arg0 didRotateFromInterfaceOrientation:(NSInteger)arg1 oldSize:(struct CGSize )arg2 ;
-(void)window:(id)arg0 resizeFromOrientation:(NSInteger)arg1 ;
-(void)window:(id)arg0 setupWithInterfaceOrientation:(NSInteger)arg1 ;
-(void)window:(id)arg0 statusBarWillChangeFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 ;
-(void)window:(id)arg0 willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)window:(id)arg0 willAnimateFromContentFrame:(struct CGRect )arg1 toContentFrame:(struct CGRect )arg2 ;
-(void)window:(id)arg0 willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)window:(id)arg0 willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 newSize:(struct CGSize )arg3 ;
-(void)window:(id)arg0 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)window:(id)arg0 willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)window:(id)arg0 willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 newSize:(struct CGSize )arg3 ;


@end


#endif