// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERVIEWCONTROLLER_H
#define SBFLUIDSWITCHERVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, SBAppSwitcherDefaults, UIApplicationSceneDeactivationAssertion, NSSet, NSDictionary, NSString, UINotificationFeedbackGenerator, UITapGestureRecognizer, UIView, NSArray, NSCountedSet, NSPointerArray, UIPanGestureRecognizer, NSMutableSet, _UIWindowSceneActivationCleanupAction, CADisplayLink, _UIBackdropView, SBIconView, BSAnimationSettings, NSMutableArray, SBFHomeGrabberSettings, UILabel, UIScrollView;
@protocol SBFluidSwitcherPageContentViewProviderDelegate, SBChainableModifierDelegate, SBAppSwitcherSnapshotImageCacheDelegate, BSUIScrollViewDelegate, SBFluidSwitcherItemContainerDelegate, SBIconViewObserver, BSDescriptionProviding, UIGestureRecognizerDelegate, SBSearchGestureObserver, SBChainableModifierDelegate, PTSettingsKeyObserver, PTSettingsKeyPathObserver, SBHistorianSwitcherModifierDelegate, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBAppSwitcherReusableSnapshotViewDelegate, SBC2GroupCompletionDelegate, SBSwitcherLiveContentOverlayDelegate, SBFluidSwitcherContentViewDelegate, SBViewMorphAnimatorObserver, SBViewMorphAnimatorDelegate, SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate, SBFluidSwitcherSpaceOverlayAccessoryViewDelegate, SBSlideOverTongueViewDelegate, SBSwitcherShelfViewControllerDelegate, SBHSearchPresenterObserver, SBContinuousExposeStripTongueViewDelegate, SBAppInteractionEventSourceObserving, SBSystemPointerInteractionObserver, SBSwitcherContentViewControlling, SBSwitcherLiveContentOverlayCoordinating, BSInvalidatable, BSDefaultObserver, SAInvalidatable, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;


#import "SBLayoutStateTransitionCoordinator.h"
#import "SBSceneManager.h"
#import "SBFluidSwitcherPageContentViewProvider.h"
#import "SBAppSwitcherSnapshotImageCache.h"
#import "SBAppSwitcherSnapshotLockoutViewControllerProvider.h"
#import "SBAppSwitcherSettings.h"
#import "SBFluidSwitcherSheetMetricsCache.h"
#import "SBSwitcherKeyboardSuppressionMode.h"
#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBFluidSwitcherModifierTimelineController.h"
#import "SBFluidSwitcherContentView.h"
#import "SBHomeScreenBackdropViewBase.h"
#import "SBSwitcherAccessoryLayoutElement.h"
#import "SBSlideOverTongueView.h"
#import "SBShelfBackgroundView.h"
#import "SBFluidSwitcherItemContainer.h"
#import "SBDisplayItemLayoutAttributesCalculator.h"
#import "SBContinuousExposeStripTongueView.h"
#import "SBBestAppSuggestion.h"
#import "SBScrollSwitcherModifierEvent.h"
#import "SBFloatingDockBehaviorAssertion.h"
#import "SBFluidSwitcherLayoutContext.h"
#import "SBViewMorphAnimator.h"
#import "SBFluidSwitcherButton.h"
#import "SBSwitcherModifier.h"
#import "SBFluidSwitcherTitledButton.h"
#import "SBAppSwitcherScrollView.h"
#import "SBSwitcherController.h"
#import "SBFloatingDockWindowLevelAssertion.h"

@interface SBFluidSwitcherViewController : UIViewController <SBFluidSwitcherPageContentViewProviderDelegate, SBChainableModifierDelegate, SBAppSwitcherSnapshotImageCacheDelegate, BSUIScrollViewDelegate, SBFluidSwitcherItemContainerDelegate, SBIconViewObserver, BSDescriptionProviding, UIGestureRecognizerDelegate, SBSearchGestureObserver, SBChainableModifierDelegate, PTSettingsKeyObserver, PTSettingsKeyPathObserver, SBHistorianSwitcherModifierDelegate, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBAppSwitcherReusableSnapshotViewDelegate, SBC2GroupCompletionDelegate, SBSwitcherLiveContentOverlayDelegate, SBFluidSwitcherContentViewDelegate, SBViewMorphAnimatorObserver, SBViewMorphAnimatorDelegate, SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate, SBFluidSwitcherSpaceOverlayAccessoryViewDelegate, SBSlideOverTongueViewDelegate, SBSwitcherShelfViewControllerDelegate, SBHSearchPresenterObserver, SBContinuousExposeStripTongueViewDelegate, SBAppInteractionEventSourceObserving, SBSystemPointerInteractionObserver, SBSwitcherContentViewControlling>

 {
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    SBSceneManager *_sceneManager;
    id<SBSwitcherLiveContentOverlayCoordinating> *_liveContentOverlayCoordinator;
    NSMutableDictionary *_appLayoutToTitleItemController;
    CGPoint _scrollViewLastContentOffset;
    BOOL _scrollViewLastScrolledForward;
    SBFluidSwitcherPageContentViewProvider *_pageContentViewProvider;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    SBAppSwitcherDefaults *_defaults;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherSheetMetricsCache *_sheetMetricsCache;
    UIApplicationSceneDeactivationAssertion *_transitionBeginResignActiveAssertion;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSSet *_resignActiveAssertions;
    NSDictionary *_lastAppLayoutsToResignActive;
    SBSwitcherKeyboardSuppressionMode *_lastKeyboardSuppressionMode;
    NSString *_fluidSwitcherAssertionReason;
    NSString *_tapticEngineEmptySwitcherReason;
    NSString *_tapticEngineForcePressPreviewReason;
    NSString *_tapticEngineForcePressCommitReason;
    SBWorkspaceApplicationSceneTransitionContext *_pendingTransitionContext;
    UINotificationFeedbackGenerator *_emptySwitcherFeedbackGenerator;
    UINotificationFeedbackGenerator *_flyInFeedbackGenerator;
    UINotificationFeedbackGenerator *_reduceMotionFeedbackGenerator;
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    UIView *_crossfadeSnapshotView;
    UIView *_hitTestBlockerView;
    BOOL _currentWallpaperRequiredForSwitcher;
    NSInteger _currentWallpaperStyle;
    BOOL _currentHomeScreenContentRequired;
    NSInteger _currentHomeScreenBackdropBlurType;
    NSInteger _currentSwitcherBackdropBlurType;
    SBFluidSwitcherModifierTimelineController *_modifierTimelineController;
    NSArray *_cachedAdjustedAppLayouts;
    NSArray *_cachedAdjustedLeafAppLayouts;
    NSUInteger _appLayoutsGenerationCount;
    NSUInteger _continuousExposeIdentifiersGenerationCount;
    NSCountedSet *_requestedHiddenAppLayouts;
    BOOL _hasAnyUnadjustedAppLayoutsInDuality;
    NSSet *_visibleAdjustedAppLayouts;
    NSDictionary *_leafAppLayoutsToAdjustedAppLayouts;
    NSDictionary *_leafAppLayoutsToRecencyAppLayouts;
    id *_activeTransitionSubcompletionGenerator;
    NSString *_debugName;
    BOOL _isShowingModifierTimeline;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    id<BSDefaultObserver> *_chamoisWindowingUIEnabledObserver;
    id<BSDefaultObserver> *_chamoisDefaultsObserver;
    BOOL _chamoisDefaultsObserver_prefersStripsHidden;
    BOOL _chamoisDefaultsObserver_prefersDockHidden;
    NSPointerArray *_outstandingAnimations;
    UIPanGestureRecognizer *_borrowableScrollViewPanGestureRecognizer;
    SBFluidSwitcherContentView *_stashedContentView;
    SBHomeScreenBackdropViewBase *_backdropView;
    SBSwitcherAccessoryLayoutElement *_backdropLayoutElement;
    UIView *_dimmingView;
    SBSwitcherAccessoryLayoutElement *_dimmingViewLayoutElement;
    SBSwitcherAccessoryLayoutElement *_genericAccessoryLayoutElement;
    SBSlideOverTongueView *_slideOverTongue;
    SBSwitcherAccessoryLayoutElement *_slideOverTongueLayoutElement;
    SBShelfBackgroundView *_shelfBackgroundView;
    NSSet *_shelfFocusedDisplayItems;
    BOOL _hasDispatchedInitialSetupEvent;
    NSUInteger _keyboardUIPosition;
    BOOL _isKeyboardShowing;
    BOOL _isSoftwareKeyboardVisible;
    CGRect _currentKeyboardFrame;
    NSMutableSet *_overlayAccessoryViewsReusePool;
    NSMutableSet *_underlayAccessoryViewsReusePool;
    NSMutableSet *_systemApertureContentSuppressionAssertionsForGesture;
    NSMutableDictionary *_systemApertureContentSuppressionAssertionsByInvalidationUUID;
    NSMutableDictionary *_systemApertureGlobalSuppressionAssertionsByInvalidationUUID;
    id<SAInvalidatable> *_systemApertureShadowAssertion;
    UIView *_rootDestOutClippingView;
    NSMutableDictionary *_centerWindowActivationAnimationContexts;
    id *_centerWindowInAppMorphCompletion;
    _UIWindowSceneActivationCleanupAction *_pendingCenterWindowCleanupAction;
    NSCountedSet *_shadowPathDisplayLinkRequiringReasons;
    CADisplayLink *_shadowPathDisplayLink;
    NSArray *_cachedOrderedAllLayoutElementViews;
    NSSet *_foregroundingAppLayouts;
    NSArray *_continuousExposeIdentifiersInSwitcher;
    NSArray *_continuousExposeIdentifiersInStrip;
    NSDictionary *_appLayoutsForContinuousExposeIdentifiers;
    NSUInteger _continuousExposeStripsPresentationOptions;
    SBFluidSwitcherItemContainer *_itemContainerToResizeUsingPointer;
    SBDisplayItemLayoutAttributesCalculator *_displayItemLayoutAttributesCalculator;
    _UIBackdropView *_continuousExposeStripCaptureAndBlurHomeScreenBackdropView;
    _UIBackdropView *_continuousExposeStripTongueCaptureOnlyBackdropView;
    SBSwitcherAccessoryLayoutElement *_continuousExposeStripTongueBackdropCaptureLayoutElement;
    SBContinuousExposeStripTongueView *_continuousExposeStripTongue;
    BOOL _isInvalidated;
}


@property (retain, nonatomic) NSMutableDictionary *animatableProperties; // ivar: _animatableProperties
@property (readonly, nonatomic) NSArray *appLayouts;
@property (nonatomic, getter=isAsyncRenderingDisabled) BOOL asyncRenderingDisabled; // ivar: _asyncRenderingDisabled
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // ivar: _bestAppSuggestion
@property (nonatomic) NSUInteger bounceIconGenerationCount; // ivar: _bounceIconGenerationCount
@property (retain, nonatomic) SBIconView *bounceIconView; // ivar: _bounceIconView
@property (readonly, nonatomic) BOOL canInterruptActiveTransition;
@property (nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (retain, nonatomic) SBFluidSwitcherContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) SBScrollSwitcherModifierEvent *currentScrollEvent; // ivar: _currentScrollEvent
@property (weak, nonatomic) NSObject<SBSwitcherContentViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property (weak, nonatomic) NSObject<SBSwitcherContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *focusedItemBackdropsBeingRemoved; // ivar: _focusedItemBackdropsBeingRemoved
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *hiddenAppLayoutAssertionsForShelves; // ivar: _hiddenAppLayoutAssertionsForShelves
@property (retain, nonatomic) NSMutableDictionary *hiddenIconViewContainers; // ivar: _hiddenIconViewContainers
@property (retain, nonatomic) NSMutableDictionary *hiddenIconViews; // ivar: _hiddenIconViews
@property (retain, nonatomic) NSMutableArray *hiddenRecycledItemContainers; // ivar: _hiddenRecycledItemContainers
@property (retain, nonatomic) SBFHomeGrabberSettings *homeGrabberSettings; // ivar: _homeGrabberSettings
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *inAppFloatingDockBehaviorAssertion; // ivar: _inAppFloatingDockBehaviorAssertion
@property (retain, nonatomic) SBFluidSwitcherLayoutContext *layoutContext; // ivar: _layoutContext
@property (readonly, nonatomic) NSMutableDictionary *liveContentOverlays; // ivar: _liveContentOverlays
@property (retain, nonatomic) UILabel *modifierStackDebugLabel; // ivar: _modifierStackDebugLabel
@property (weak, nonatomic) SBViewMorphAnimator *pipViewMorphAnimator; // ivar: _pipViewMorphAnimator
@property (retain, nonatomic) SBFluidSwitcherButton *plusButton; // ivar: _plusButton
@property (retain, nonatomic) SBSwitcherModifier *reduceMotionModifier; // ivar: _reduceMotionModifier
@property (retain, nonatomic) SBFluidSwitcherTitledButton *reopenClosedWindowsButton; // ivar: _reopenClosedWindowsButton
@property (retain, nonatomic) SBSwitcherModifier *rootModifier; // ivar: _rootModifier
@property (retain, nonatomic) SBAppSwitcherScrollView *scrollView; // ivar: _scrollView
@property (nonatomic, getter=isShowingModifierTimeline) BOOL showModifierTimeline;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SBSwitcherController *switcherController; // ivar: _switcherController
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *switcherFloatingDockBehaviorAssertion; // ivar: _switcherFloatingDockBehaviorAssertion
@property (retain, nonatomic) SBFloatingDockWindowLevelAssertion *switcherFloatingDockWindowLevelAssertion; // ivar: _switcherFloatingDockWindowLevelAssertion
@property (readonly, nonatomic) UIScrollView *switcherScrollView;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *transientOverlayFloatingDockBehaviorAssertion; // ivar: _transientOverlayFloatingDockBehaviorAssertion
@property (retain, nonatomic) SBFloatingDockWindowLevelAssertion *transientOverlayFloatingDockWindowLevelAssertion; // ivar: _transientOverlayFloatingDockWindowLevelAssertion
@property (retain, nonatomic) NSMutableDictionary *visibleItemContainerBackdropViews; // ivar: _visibleItemContainerBackdropViews
@property (retain, nonatomic) NSMutableDictionary *visibleItemContainers; // ivar: _visibleItemContainers
@property (retain, nonatomic) NSMutableDictionary *visibleOverlayAccessoryViews; // ivar: _visibleOverlayAccessoryViews
@property (retain, nonatomic) NSMutableDictionary *visibleShelves; // ivar: _visibleShelves
@property (retain, nonatomic) NSMutableSet *visibleShelvesHostedInContentView; // ivar: _visibleShelvesHostedInContentView
@property (retain, nonatomic) NSMutableDictionary *visibleUnderlayAccessoryViews; // ivar: _visibleUnderlayAccessoryViews
@property (retain, nonatomic) NSObject<BSInvalidatable> *wallpaperRequireAssertion; // ivar: _wallpaperRequireAssertion


-(BOOL)_allowsTitleItemsForAppLayout:(id)arg0 ;
-(BOOL)_appLayoutRequiresLegacyRotationSupport:(id)arg0 ;
-(BOOL)_appLayoutWantsToBeKeptInViewHierarchy:(id)arg0 ;
-(BOOL)_areContinuousExposeStripsUnoccluded;
-(BOOL)_controlsHomeScreenContents;
-(BOOL)_hitTestedToTopAffordance:(struct CGPoint )arg0 window:(id)arg1 forLeafAppLayout:(id)arg2 ;
-(BOOL)_isAppLayoutBlurred:(id)arg0 ;
-(BOOL)_isLayoutStateSwitcher:(id)arg0 allowTransitions:(BOOL)arg1 ;
-(BOOL)_isPerformingMatchMoveToIconView;
-(BOOL)_removeVisibleItemContainerForAppLayout:(id)arg0 ;
-(BOOL)_shouldInterruptPresentationAndDismiss;
-(BOOL)_shouldItemContainersUseDarkLabels;
-(BOOL)_supportsKillingForAppLayout:(id)arg0 ;
-(BOOL)anyHighlightedAppLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(BOOL)appLayoutContainsAnUnoccludedMaximizedDisplayItem:(id)arg0 ;
-(BOOL)appLayoutContainsOnlyResizableApps:(id)arg0 ;
-(BOOL)appLayoutRequiresLegacyRotationSupport:(id)arg0 ;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)canSelectContainer:(id)arg0 numberOfTaps:(NSInteger)arg1 ;
-(BOOL)displayItemIsClassic:(id)arg0 ;
-(BOOL)displayItemSupportsCenterRole:(id)arg0 ;
-(BOOL)displayItemSupportsMedusa:(id)arg0 ;
-(BOOL)displayItemSupportsMultipleWindowsIndicator:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasHomeButton;
-(BOOL)hitTestedToTopAffordance:(struct CGPoint )arg0 window:(id)arg1 ofItemContainer:(id)arg2 ;
-(BOOL)homeScreenHasModalLibraryOpenInForeground;
-(BOOL)homeScreenHasOpenFolder;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg0 ;
-(BOOL)homeScreenHasWidgetCenterOrLibraryOpen;
-(BOOL)isAppLayoutMostRecentRepresentationOfDisplayItems:(id)arg0 ;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg0 ;
-(BOOL)isChamoisWindowingUIEnabled;
-(BOOL)isDevicePad;
-(BOOL)isDisplayEmbedded;
-(BOOL)isEdgeProtectedForHomeGestureAtEdgeLocation:(CGFloat)arg0 edge:(NSUInteger)arg1 ;
-(BOOL)isFloatingDockFullyPresented;
-(BOOL)isFloatingDockGesturePossible;
-(BOOL)isFloatingDockSupported;
-(BOOL)isHomeScreenSidebarVisible;
-(BOOL)isInMedusaCapableSpace;
-(BOOL)isJindoEnabled;
-(BOOL)isLayoutRoleContentReady:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isMedusaEnabled;
-(BOOL)isRTLEnabled;
-(BOOL)isReduceMotionEnabled;
-(BOOL)isShowingSpotlightOrTodayView;
-(BOOL)isSoftwareKeyboardVisible;
-(BOOL)isSplitViewSupported;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg0 ;
-(BOOL)isStudyLogEnabled;
-(BOOL)isSystemApertureTransitionTargetForSceneIdentifier:(id)arg0 bundleIdentifier:(id)arg1 isPortrait:(BOOL)arg2 ;
-(BOOL)isUserInteractionEnabled;
-(BOOL)isWindowVisible;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg0 ;
-(BOOL)prefersDockHidden;
-(BOOL)prefersStripHidden;
-(BOOL)requireStripContentsInViewHierarchy;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldAddAppLayoutToFront:(id)arg0 forTransitionWithContext:(id)arg1 transitionCompleted:(BOOL)arg2 ;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldMorphToPIPForTransitionContext:(id)arg0 ;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(BOOL)snapshotView:(id)arg0 isInsetForHomeAffordanceForAppLayout:(id)arg1 ;
-(BOOL)snapshotView:(id)arg0 shouldShowAppClipOverlayForLayout:(id)arg1 ;
-(BOOL)switcherShelfViewController:(id)arg0 hitTestedToTopAffordance:(struct CGPoint )arg1 window:(id)arg2 ;
-(BOOL)underlayAccessoryViewShouldBeginPointerInteraction:(id)arg0 ;
-(CGFloat)_delayForTransitionWithContext:(id)arg0 animated:(BOOL)arg1 ;
-(CGFloat)contentAspectRatio;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 ;
-(CGFloat)continuousExposeStripProgress;
-(CGFloat)cornerRadiusForAppLayout:(id)arg0 ;
-(CGFloat)currentStatusBarHeightOfContainer:(id)arg0 ;
-(CGFloat)displayCornerRadius;
-(CGFloat)displayScaleForContentOverlay;
-(CGFloat)floatingDockHeight;
-(CGFloat)floatingDockPresentedHeight;
-(CGFloat)floatingDockViewTopMargin;
-(CGFloat)floatingDockWindowLevel;
-(CGFloat)homeScreenIconCornerRadiusForAppLayout:(id)arg0 ;
-(CGFloat)homeScreenIconScaleForAppLayout:(id)arg0 ;
-(CGFloat)homeScreenWindowLevel;
-(CGFloat)keyboardHeight;
-(CGFloat)minimumHomeScreenScale;
-(CGFloat)morphToPIPClippingCornerRadius;
-(CGFloat)morphToPIPSourceAlpha;
-(CGFloat)morphToPIPTargetScale;
-(CGFloat)presentationValueForAnimatableProperty:(id)arg0 ;
-(CGFloat)scaleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForDownscaledSnapshotsOfAppLayout:(id)arg0 inImageCache:(id)arg1 ;
-(CGFloat)screenScale;
-(CGFloat)separatorViewWidth;
-(CGFloat)shelfItemCornerRadiusForAppLayout:(id)arg0 inShelf:(id)arg1 ;
-(CGFloat)shelfItemScaleForAppLayout:(id)arg0 inShelf:(id)arg1 ;
-(CGFloat)shelfPresentedHeight;
-(CGFloat)snapshotScaleForSceneHandle:(id)arg0 ;
-(CGFloat)splitViewInnerCornerRadius;
-(CGFloat)statusBarHeight;
-(CGFloat)switcherWindowLevel;
-(NSInteger)_bestSupportedHomeAffordanceOrientationForOrientation:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)displayOrdinal;
-(NSInteger)homeAffordanceOrientationIfMismatchedFromCurrentLayoutState;
-(NSInteger)homeScreenInterfaceOrientation;
-(NSInteger)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg0 ;
-(NSInteger)numberOfVisibleAppLayoutsForBundleIdentifier:(id)arg0 ;
-(NSInteger)numberOfVisibleCards;
-(NSInteger)orientationForPageViewFromProvider:(id)arg0 ;
-(NSInteger)orientationForSnapshotOfAppLayout:(id)arg0 inImageCache:(id)arg1 ;
-(NSInteger)overlayAccessoryViewHomeScreenInterfaceOrientation:(id)arg0 ;
-(NSInteger)overlayAccessoryViewSwitcherInterfaceOrientation:(id)arg0 ;
-(NSInteger)switcherInterfaceOrientation;
-(NSInteger)userInterfaceStyle;
-(NSUInteger)_itemContainerFooterStyle;
-(NSUInteger)continuousExposeIdentifiersGenerationCount;
-(NSUInteger)homeScreenIconGridSizeClassForAppLayout:(id)arg0 ;
-(NSUInteger)newAppLayoutsGenCount;
-(NSUInteger)newContinuousExposeIdentifiersGenerationCount;
-(NSUInteger)numberOfRowsInGridSwitcher;
-(NSUInteger)supportedContentInterfaceOrientationsForItem:(id)arg0 ;
-(NSUInteger)supportedSizingPoliciesForItem:(id)arg0 inAppLayout:(id)arg1 ;
-(char)activityModeForAppLayout:(id)arg0 ;
-(char)jetsamModeForAppLayout:(id)arg0 ;
-(id)_activeTransientOverlayPresentedAppLayout;
-(id)_adjustedAppLayoutForItemContainerAtLocation:(struct CGPoint )arg0 environment:(NSInteger)arg1 ;
-(id)_adjustedGestureEventForGestureEvent:(id)arg0 fromGestureManager:(id)arg1 ;
-(id)_animatablePropertyWithNotifications:(id)arg0 progressEventType:(Class)arg1 ;
-(id)_appLayoutForWorkspaceTransientOverlay:(id)arg0 ;
-(id)_appLayoutFromLayoutElement:(id)arg0 ;
-(id)_applicationForDisplayItem:(id)arg0 ;
-(id)_centerWindowActivationAnimationContextForKey:(id)arg0 ;
-(id)_convertWindowDragEvent:(id)arg0 fromSwitcherContentViewController:(id)arg1 ;
-(id)_createWorkspaceTransientOverlayForAppLayout:(id)arg0 ;
-(id)_dequeueOverlayAccessoryViewFromReusePool;
-(id)_dequeueUnderlayAccessoryViewFromReusePool;
-(id)_firstZOrderedSubviewViewAtLocation:(struct CGPoint )arg0 ;
-(id)_floatingDockController;
-(id)_floatingDockIconLocationForTransitionSource:(NSInteger)arg0 ;
-(id)_iconForWorkspaceEntity:(id)arg0 ;
-(id)_iconLocationsForActivationSource:(NSInteger)arg0 ;
-(id)_iconViewForDisplayItem:(id)arg0 isVisible:(*BOOL)arg1 ;
-(id)_itemContainerAtLocation:(struct CGPoint )arg0 environment:(NSInteger)arg1 ;
-(id)_itemContainerForAppLayoutIfExists:(id)arg0 ;
-(id)_itemContainerNearestLocation:(struct CGPoint )arg0 environment:(NSInteger)arg1 prioritizeForegroundedItemContainers:(BOOL)arg2 ;
-(id)_keyboardFocusableLiveAppLayoutsMatchingFocusedApp:(BOOL)arg0 foundAtIndex:(*NSInteger)arg1 ;
-(id)_leafAppLayoutForItemContainerAtLocation:(struct CGPoint )arg0 environment:(NSInteger)arg1 ;
-(id)_leafAppLayoutInLiveContentOverlaysWithLayoutRole:(NSInteger)arg0 ;
-(id)_leafAppLayoutsInAppLayout:(id)arg0 intersectingHomeGrabber:(id)arg1 ;
-(id)_liveContentOverlayForHandlingHardwareButtonEvents;
-(id)_orderedViewsForLayoutElement:(id)arg0 excludeSwitcherHostedShelves:(BOOL)arg1 ;
-(id)_sbWindowScene;
-(id)_sceneDeactivationPredicateMatchingAppLayouts:(SEL)arg0 ;
-(id)_spaceContainingAppLayout:(id)arg0 ;
-(id)_spacesWithVisibleHomeAffordances;
-(id)_switcherDropRegionContextForDraggingLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atLocation:(struct CGPoint )arg2 ;
-(id)_transitionEventForTransitionWithContext:(id)arg0 identifier:(id)arg1 phase:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)_unadjustedAppLayouts;
-(id)_unadjustedLeafAppLayouts;
-(id)_webClipIdentifierForAppClipBundleIdentifier:(id)arg0 sceneIdentifier:(id)arg1 ;
-(id)_workspaceEntityForBundleIdentifier:(id)arg0 inTransitionContext:(id)arg1 ;
-(id)activatingDisplayItemForAppLayout:(id)arg0 ;
-(id)adjustedAppLayoutForLeafAppLayout:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)appLayoutByBringingItemToFront:(id)arg0 inAppLayout:(id)arg1 ;
-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)appLayoutOnStage;
-(id)appLayoutsContainedWithinAppLayout:(id)arg0 ;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)beginHidingAppLayout:(id)arg0 forReason:(id)arg1 ;
-(id)chamoisLayoutAttributes;
-(id)containerViewControllerForPageViewFromProvider:(id)arg0 ;
-(id)continuousExposeIdentifiersInStrip;
-(id)continuousExposeIdentifiersInSwitcher;
-(id)continuousExposeStripTongueBackdropCaptureLayoutElement;
-(id)currentVelocityValueForVisibleAppLayout:(id)arg0 key:(id)arg1 ;
-(id)defaultFocusItem;
-(id)delegateForForSnapshotPageViewFromProvider:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayIdentityForImageCache:(id)arg0 ;
-(id)displayIdentityForSnapshotView:(id)arg0 ;
-(id)displayItemLayoutAttributesCalculator;
-(id)draggingAppLayoutsForWindowDrag;
-(id)entityRemovalSettings;
-(id)foregroundAppLayouts;
-(id)genericSwitcherAccessoryLayoutElement;
-(id)homeGestureSettings;
-(id)homeGrabberViewForAppLayout:(id)arg0 ;
-(id)homeScreenIconLocationForAppLayout:(id)arg0 ;
-(id)iconForAppLayout:(id)arg0 ;
-(id)iconForDisplayItem:(id)arg0 ;
-(id)iconViewForAppLayout:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSwitcherController:(id)arg0 rootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4 shouldObserveChamoisWindowingChanges:(BOOL)arg5 debugName:(id)arg6 ;
-(id)itemContainerToResizeUsingPointer;
-(id)keyboardFocusedAppLayout;
-(id)layoutRestrictionInfoForItem:(id)arg0 ;
-(id)leadingStatusBarStyleRequest;
-(id)leafAppLayoutForKeyboardFocusedScene;
-(id)liveContentOverlayForAppLayout:(id)arg0 ;
-(id)liveOverlayForSceneHandle:(id)arg0 ;
-(id)liveOverlayForSceneIdentifier:(id)arg0 ;
-(id)liveOverlayForSceneIdentityToken:(id)arg0 ;
-(id)liveScenesIdentityTokens;
-(id)medusaSettings;
-(id)parentViewControllerForContentOverlay;
-(id)proposedAppLayoutsForWindowDrag;
-(id)sceneHandleProviderForImageCache:(id)arg0 ;
-(id)sceneHandleProviderForSnapshotView:(id)arg0 ;
-(id)shelfFocusedDisplayItems;
-(id)slideOverTongueLayoutElement;
-(id)snapshotCache;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)switcherBackdropLayoutElement;
-(id)switcherDimmingViewLayoutElement;
-(id)switcherSettings;
-(id)switcherShelfViewController:(id)arg0 liveViewForAppLayout:(id)arg1 ;
-(id)switcherWindow;
-(id)trailingStatusBarStyleRequest;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg0 fromProvider:(id)arg1 ;
-(struct CGAffineTransform )transformForCardUnderSheetForBoundsSize:(struct CGSize )arg0 ;
-(struct CGPoint )_scrollView:(id)arg0 adjustedOffsetForOffset:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 startPoint:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 horizontalVelocity:(*CGFloat)arg5 verticalVelocity:(*CGFloat)arg6 ;
-(struct CGPoint )gestureHandlingModifier:(id)arg0 averageVelocityOverDuration:(CGFloat)arg1 ;
-(struct CGPoint )morphToPIPTargetCenter;
-(struct CGPoint )scrollableQueryModifier:(id)arg0 contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint )arg1 ;
-(struct CGPoint )scrollableQueryModifier:(id)arg0 convertScrollViewPointToContainerViewCoordinateSpace:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForCenterItemInInterfaceOrientation:(NSInteger)arg0 centerConfiguration:(NSInteger)arg1 ;
-(struct CGRect )_frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(struct CGRect )_frameForItemWithRole:(NSInteger)arg0 inMainAppLayout:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(struct CGRect )_iconImageFrameForIconView:(id)arg0 ;
-(struct CGRect )centerWindowFrameInInterfaceOrientation:(NSInteger)arg0 centerConfiguration:(NSInteger)arg1 ;
-(struct CGRect )completedTransitionFrameForAppLayout:(id)arg0 ;
-(struct CGRect )containerViewBounds;
-(struct CGRect )containerViewBoundsForHomeGrabberView:(id)arg0 ;
-(struct CGRect )floatingApplicationFrameInInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(struct CGRect )frameForPageViewOfContainer:(id)arg0 fullyPresented:(BOOL)arg1 ;
-(struct CGRect )homeScreenIconFrameForAppLayout:(id)arg0 ;
-(struct CGRect )iconImageFrameForAppLayout:(id)arg0 ;
-(struct CGRect )layoutFrameForItemWithRole:(NSInteger)arg0 inAppLayout:(id)arg1 interfaceOrientation:(NSInteger)arg2 forSnapshotView:(id)arg3 ;
-(struct CGRect )morphToPIPClippingFrame;
-(struct CGRect )overlayAccessoryViewFrameForIconOverlayView:(id)arg0 fullPresented:(BOOL)arg1 ;
-(struct CGRect )preferredFrameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 bounds:(struct CGRect )arg2 interfaceOrientation:(NSInteger)arg3 ;
-(struct CGRect )scaledFrameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(struct CGRect )shelfItemFrameForAppLayout:(id)arg0 inShelf:(id)arg1 ;
-(struct CGRect )switcherViewBounds;
-(struct CGRect )systemApertureDefaultFrame;
-(struct CGSize )sizeForAppLayout:(id)arg0 fromProvider:(id)arg1 ;
-(struct CGSize )snapshotSizeForItemWithRole:(NSInteger)arg0 inAppLayout:(id)arg1 interfaceOrientation:(NSInteger)arg2 inImageCache:(id)arg3 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(void)SBC2GroupCompletionAnimationDidBegin:(id)arg0 ;
-(void)SBC2GroupCompletionAnimationDidComplete:(id)arg0 finished:(BOOL)arg1 retargeted:(BOOL)arg2 ;
-(void)_acquireKeyboardSuppressionAssertionForMode:(id)arg0 ;
-(void)_actuateEmptyAppSwitcherHaptic;
-(void)_addVisibleItemContainerForAppLayout:(id)arg0 reusingItemContainerIfExists:(id)arg1 ;
-(void)_applyRootContentViewBlurRadiusWithCompletion:(id)arg0 ;
-(void)_applyRootContentViewClippingWithCompletion:(id)arg0 ;
-(void)_applyStyleToAppLayout:(id)arg0 roleMask:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_applyStyleToLiveContentOverlay:(id)arg0 forItemContainer:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_applyStyleToVisibleItemContainersWithCompletion:(id)arg0 ;
-(void)_applyTouchBehaviorToLiveContentOverlay:(id)arg0 forAppLayout:(id)arg1 ;
-(void)_backgroundContrastDidChange:(id)arg0 ;
-(void)_beginRequiringItemContainerShadowPathDisplayLinkForReason:(id)arg0 ;
-(void)_blurItemContainer:(id)arg0 blurParameters:(id)arg1 withAnimationUpdateMode:(NSInteger)arg2 ;
-(void)_cancelInProcessAnimationsWithOptions:(NSUInteger)arg0 ;
-(void)_chamoisWindowingUIEnabledDefaultChangeHandler;
-(void)_configureApplicationAndTransientOverlayDockBehaviorAssertionsForContext:(id)arg0 ;
-(void)_configureTransitionRequestForGestureBegin:(id)arg0 ;
-(void)_containerScrolledEnoughToClipSwitcherIconView:(id)arg0 ;
-(void)_coolDownEmptyAppSwitcherHaptic;
-(void)_createChamoisWindowingUIObserver;
-(void)_dispatchEventAndHandleAction:(id)arg0 ;
-(void)_enqueueOverlayAccessoryViewInReusePool:(id)arg0 ;
-(void)_enqueueUnderlayAccessoryViewInReusePool:(id)arg0 ;
-(void)_ensureSubviewOrdering;
-(void)_ensureSubviewOrderingInsideSpace:(id)arg0 ;
-(void)_folderExpansionAnimationWillBegin:(id)arg0 ;
-(void)_handleDismissTapGesture:(id)arg0 ;
-(void)_handleEventResponse:(id)arg0 ;
-(void)_handleKeyboardFrameWillChange:(id)arg0 ;
-(void)_handlePlusButtonTapped:(id)arg0 ;
-(void)_iconControllerDidReconfigureChildControllers:(id)arg0 ;
-(void)_iconControllerOverlayVisibilityDidChange:(id)arg0 ;
-(void)_keyboardDidUIPosition:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_layoutAppLayout:(id)arg0 roleMask:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_layoutContinuousExposeStripTongueAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_layoutSlideoverTonguesWithCompletion:(id)arg0 ;
-(void)_layoutVisibleItemsWithCompletion:(id)arg0 ;
-(void)_layoutVisibleShelvesWithCompletion:(id)arg0 ;
-(void)_makeAppLayoutVisibleForTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_navigateFromFocusedAppWindowSceneToNextSceneFromStripInForwardDirection:(BOOL)arg0 withReachableAppLayouts:(id)arg1 ;
-(void)_navigateFromFocusedAppWindowSceneToNextSceneInForwardDirection:(BOOL)arg0 matchFocusedApp:(BOOL)arg1 ;
-(void)_noteItemContainerDidUpdateContentClippingWithMode:(NSInteger)arg0 ;
-(void)_noteSwitcherDropAnimationCompletedWithContext:(id)arg0 ;
-(void)_performBlurItemContainerResponse:(id)arg0 ;
-(void)_performContentViewScaleAnimationForDosido;
-(void)_performCrossfadeIfNeededWithCompletion:(id)arg0 ;
-(void)_performEventResponse:(id)arg0 ;
-(void)_performFolderSnapshotRequestResponse:(id)arg0 ;
-(void)_performInvalidateContinuousExposeIdentifiersResponse:(id)arg0 ;
-(void)_performInvalidateItemContainerBackdropResponse:(id)arg0 ;
-(void)_performInvalidateSnapshotCacheResponse:(id)arg0 ;
-(void)_performModifierCompletionResponse:(id)arg0 ;
-(void)_performModifierDosidoScaleAnimationResponse:(id)arg0 ;
-(void)_performModifierEmitSBEventResponse:(id)arg0 ;
-(void)_performModifierEmitStudyLogResponse:(id)arg0 ;
-(void)_performModifierHapticResponse:(id)arg0 ;
-(void)_performModifierIconOverlayVisibilityUpdateResponse:(id)arg0 ;
-(void)_performModifierIconViewVisibilityUpdateResponse:(id)arg0 ;
-(void)_performModifierInjectVelocityResponse:(id)arg0 ;
-(void)_performModifierInvalidateAdjustedAppLayoutsResponse:(id)arg0 ;
-(void)_performModifierInvalidateReopenButtonTextResponse:(id)arg0 ;
-(void)_performModifierMatchMoveToIconViewResponse:(id)arg0 ;
-(void)_performModifierNotifyIconWillZoomDownResponse:(id)arg0 ;
-(void)_performModifierPerformTransitionResponse:(id)arg0 ;
-(void)_performModifierReachabilityResponse:(id)arg0 ;
-(void)_performModifierScrollToAppLayoutResponse:(id)arg0 ;
-(void)_performModifierTimerEventResponse:(id)arg0 ;
-(void)_performModifierUpdateLayoutResponse:(id)arg0 ;
-(void)_performNewWindowSwitcherResponse:(id)arg0 ;
-(void)_performPresentContinuousExposeStripEdgeProtectGrabberResponse:(id)arg0 ;
-(void)_performRelinquishSystemApertureElementSuppressionResponse:(id)arg0 ;
-(void)_performRequestSystemApertureElementSuppressionResponse:(id)arg0 ;
-(void)_performSetInterfaceOrientationFromUserResizingResponse:(id)arg0 ;
-(void)_performSwitcherDropWithContext:(id)arg0 mutationBlock:(id)arg1 ;
-(void)_performSystemApertureBounceResponse:(id)arg0 ;
-(void)_performUpdateContinuousExposeStripsPresentationResponse:(id)arg0 ;
-(void)_performUpdateDragPlatterBlurResponse:(id)arg0 ;
-(void)_performWithFixedUpdateMode:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)_prepareForCrossfadeIfNeeded;
-(void)_rebuildCachedAdjustedAppLayouts;
-(void)_reduceMotionStatusDidChange:(id)arg0 ;
-(void)_removeCenterWindowAnimationContextWithKey:(id)arg0 ;
-(void)_removeSearchPresenterObservation;
-(void)_resetItemContainerShadowPathDisplayLink;
-(void)_rotateHomeAffordancesFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)_sceneUpdateDidChange:(id)arg0 ;
-(void)_scrollToAppLayout:(id)arg0 animated:(BOOL)arg1 alignment:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_setCenterWindowActivationContext:(id)arg0 forKey:(id)arg1 ;
-(void)_setUpSearchPresenterObservation;
-(void)_setupContentAndTransientViews;
-(void)_setupLiveContentOverlayForAppLayout:(id)arg0 itemContainer:(id)arg1 overlay:(id)arg2 ;
-(void)_setupMorphAnimatorIfNeededForEntity:(id)arg0 pipCoordinator:(id)arg1 appLayout:(id)arg2 appLayoutBoundingBox:(struct CGRect )arg3 uniqueID:(id)arg4 direction:(NSInteger)arg5 gestureInitiated:(BOOL)arg6 ;
-(void)_setupPIPMorphingIfNeededForTransitionContext:(id)arg0 response:(id)arg1 ;
-(void)_shadowPathDisplayLinkDidUpdate:(id)arg0 ;
-(void)_stopRequiringItemContainerShadowPathDisplayLinkForReason:(id)arg0 ;
-(void)_temporarilyHideMatchMovedZoomDownAnimationViewAnimated:(BOOL)arg0 ;
-(void)_toggleFloatingAppVisibility;
-(void)_unblurItemContainer:(id)arg0 blurParameters:(id)arg1 withAnimationUpdateMode:(NSInteger)arg2 ;
-(void)_updateAnimatableProperties;
-(void)_updateAppExposeAccessoryButtonsExtendedTouchRegions;
-(void)_updateAppStatusBarAndHomeGrabberVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateAsyncRenderingAndResizesHostedContext;
-(void)_updateAsynchronousSurfaceRetentionAssertion;
-(void)_updateAutoHideForGrabberAffordancesInAppLayout:(id)arg0 withResetDelay:(CGFloat)arg1 unhideDelay:(CGFloat)arg2 ;
-(void)_updateAutoHideForItemContainer:(id)arg0 appLayout:(id)arg1 ;
-(void)_updateBounceIcon;
-(void)_updateContentViewPassesTouchesThrough;
-(void)_updateContentViewSublayerTransform;
-(void)_updateContinuousExposeIdentifiersTransitioningFromAppLayout:(id)arg0 toAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateContinuousExposeStripTonguePresence;
-(void)_updateContinuousExposeStripsCaptureOnlyBackdropLayer;
-(void)_updateEdgeProtectAndAutoHideForHomeAffordancesInAppLayout:(id)arg0 withResetDelay:(CGFloat)arg1 unhideDelay:(CGFloat)arg2 ;
-(void)_updateFloatingDockBehaviorAssertion;
-(void)_updateFloatingDockWindowLevelAssertion;
-(void)_updateForegroundAppLayoutsList;
-(void)_updateForegroundAppLayoutsWithNewLayoutState:(id)arg0 ;
-(void)_updateHiddenAppLayoutsInShelves;
-(void)_updateHomeScreenBackdropType;
-(void)_updateHomeScreenContentRequirement;
-(void)_updateHomeScreenPointerInteractions;
-(void)_updateImplicitModifierStackInvalidatables;
-(void)_updateItemContainerBackdropPresenceForIndex:(NSUInteger)arg0 scale:(CGFloat)arg1 rotation:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 animationAttributes:(id)arg4 completion:(id)arg5 ;
-(void)_updateKeyboardSuppressionAssertion;
-(void)_updateLayoutFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)_updateLayoutWithCompletion:(id)arg0 ;
-(void)_updateModifierStackDebugLabel;
-(void)_updateModifierStackDebugLabelPresence;
-(void)_updateModifierTimelinePresence;
-(void)_updateOverlaysTopAffordanceContextMenu;
-(void)_updatePlusButtonPresence;
-(void)_updatePlusButtonStyleWithMode:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_updateReopenClosedWindowsButtonPresence;
-(void)_updateReopenClosedWindowsButtonText;
-(void)_updateReopenClosedWindowsButtonWithMode:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_updateResignActiveAssertions;
-(void)_updateScrollViewScrollEnabled;
-(void)_updateScrollViewSizeAndSpacing;
-(void)_updateShadowPathDisplayLink;
-(void)_updateShadowPathForIndex:(NSUInteger)arg0 ;
-(void)_updateSlideOverTonguePresence;
-(void)_updateSnapshotCache;
-(void)_updateSnapshotCacheReloadingForActiveInterfaceOrientationChange;
-(void)_updateSoftwareKeyboardVisibleWithKeyboardShowing:(BOOL)arg0 ;
-(void)_updateSpringBoardStatusBarVisibility;
-(void)_updateStatusBarAndHomeGrabberVisibilityForAppLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateStyleWithCompletion:(id)arg0 ;
-(void)_updateSuppressingHomeAffordanceBounce;
-(void)_updateSwitcherBackdropType;
-(void)_updateSwitcherBackdropViewPresence;
-(void)_updateSwitcherDimmingViewPresence;
-(void)_updateSystemApertureShadowAssertion;
-(void)_updateTitleItemsLabelColor;
-(void)_updateTitlePresenceForAdjustedAppLayout:(id)arg0 ;
-(void)_updateVisibleAccessoryViews;
-(void)_updateVisibleAdjustedAppLayouts;
-(void)_updateVisibleHomeAffordanceViews;
-(void)_updateVisibleItems;
-(void)_updateVisibleItemsAccessoryViewsLayoutAndStyleWithCompletion:(id)arg0 ;
-(void)_updateVisibleOverlayAndUnderlayViews;
-(void)_updateVisibleShelves;
-(void)_updateWallpaperStyle;
-(void)_updateWantsEnhancedWindowingEnabledState;
-(void)_warmupEmptyAppSwitcherHaptic;
-(void)acquiredViewController:(id)arg0 forTransientOverlayAppLayout:(id)arg1 ;
-(void)addLiveContentOverlay:(id)arg0 forAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)animatorWasCanceled:(id)arg0 ;
-(void)associateCenterWindowInteractionIdentifier:(id)arg0 withSceneIdentifier:(id)arg1 ;
-(void)cleanUpAfterCompletingCenterWindowAnimationWithAction:(id)arg0 ;
-(void)cleanUpAfterCoordinatedLayoutStateTransitionWithContext:(id)arg0 ;
-(void)clickReceivedForHomeGrabberView:(id)arg0 ;
-(void)clientWithSceneIdentifier:(id)arg0 suppressPreferredPointerLockStatusUpdated:(BOOL)arg1 ;
-(void)container:(id)arg0 didBecomeFocused:(BOOL)arg1 ;
-(void)containerDidEndAnimatingHighlight:(id)arg0 scale:(CGFloat)arg1 ;
-(void)containerDidEndSwipingToKill:(id)arg0 ;
-(void)containerSelectionStateChanged:(id)arg0 toState:(NSInteger)arg1 hover:(BOOL)arg2 ;
-(void)containerWillBeginAnimatingHighlight:(id)arg0 scale:(CGFloat)arg1 isTracking:(BOOL)arg2 ;
-(void)containerWillBeginSwipingToKill:(id)arg0 ;
-(void)continuousExposeStripTongueView:(id)arg0 didFinishAnimatingToState:(NSUInteger)arg1 ;
-(void)continuousExposeStripTongueViewTapped:(id)arg0 ;
-(void)dealloc;
-(void)didSelectContainer:(id)arg0 modifierFlags:(NSInteger)arg1 ;
-(void)dismissContinuousExposeStripEdgeProtectTongue;
-(void)dismissSlideOverEdgeProtectTongueOnEdge:(NSUInteger)arg0 ;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg0 ;
-(void)handleContinuousExposeHoverGesture:(id)arg0 ;
-(void)handleEventResponse:(id)arg0 ;
-(void)handleFluidSwitcherGestureManager:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)handleFluidSwitcherGestureManager:(id)arg0 didEndGesture:(id)arg1 ;
-(void)handleFluidSwitcherGestureManager:(id)arg0 didUpdateGesture:(id)arg1 ;
-(void)handleReopenClosedWindowsButtonTapped:(id)arg0 ;
-(void)handleTapToBringItemContainerForward:(id)arg0 ;
-(void)hideSourceViewForAnimator:(id)arg0 ;
-(void)historianModifier:(id)arg0 didRecordEntry:(id)arg1 ;
-(void)iconViewDidBecomeWindowless:(id)arg0 ;
-(void)iconViewSizeDidChange:(id)arg0 ;
-(void)iconViewWasDiscarded:(id)arg0 ;
-(void)iconViewWasRecycled:(id)arg0 ;
-(void)invalidate;
-(void)killContainer:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)liveContentOverlayDidUpdateHomeAffordanceEdgeProtectOrAutoHide:(id)arg0 ;
-(void)liveContentOverlayDidUpdateHomeAffordanceSupportedOrientations:(id)arg0 ;
-(void)loadView;
-(void)moveExistingLiveContentOverlay:(id)arg0 forAppLayout:(id)arg1 toAppLayout:(id)arg2 ;
-(void)noteAppLayoutsDidChange;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)noteModelDidMutateForInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 willAnimate:(BOOL)arg2 ;
-(void)overlayAccessoryView:(id)arg0 didSelectHeaderForRole:(NSInteger)arg1 ;
-(void)overlayAccessoryView:(id)arg0 didUpdateShowingIconOverlay:(BOOL)arg1 ;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 completion:(id)arg2 ;
-(void)performKeyboardShortcutAction:(NSInteger)arg0 ;
-(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)pointerDidMoveToFromWindowScene:(id)arg0 toWindowScene:(id)arg1 ;
-(void)pointerIsResizingItemContainer:(id)arg0 ;
-(void)prepareAnimatedInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 ;
-(void)prepareForCoordinatedLayoutStateTransitionWithContext:(id)arg0 ;
-(void)prepareForIncomingCenterWindowAnimationWithAction:(id)arg0 ;
-(void)presentContinuousExposeStripEdgeProtectTongue;
-(void)presentSlideOverEdgeProtectTongueOnEdge:(NSUInteger)arg0 ;
-(void)relinquishTransientOverlayViewController:(id)arg0 ;
// -(void)removeLayoutRole:(NSInteger)arg0 inSpace:(id)arg1 mutationBlock:(id)arg2 reason:(unk)arg3  ;
-(void)removeLiveContentOverlayForAppLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg0 ;
-(void)sceneLayoutTransitionWillStartWithTransitionContext:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 withContext:(struct ? )arg1 ;
-(void)scrollViewKillingProgressUpdated:(CGFloat)arg0 translation:(struct CGPoint )arg1 isDragging:(BOOL)arg2 decelerationTargetProgress:(CGFloat)arg3 forContainer:(id)arg4 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)searchGesture:(id)arg0 changedPercentComplete:(CGFloat)arg1 ;
-(void)searchGesture:(id)arg0 startedShowing:(BOOL)arg1 ;
-(void)searchPresenterWillPresentSearch:(id)arg0 animated:(BOOL)arg1 ;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg0 ;
-(void)setShelfFocusedDisplayItems:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)slideOverTongueViewTapped:(id)arg0 ;
-(void)switcherShelfViewController:(id)arg0 didFinishPresentation:(BOOL)arg1 ;
-(void)tapReceivedForGrabberTongueAtEdge:(NSUInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)underlayAccessoryView:(id)arg0 didSelectHeaderForRole:(NSInteger)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willBeginGestureWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(void)zStackActivationStateUpdated;


@end


#endif