// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINSWITCHERCONTROLLERCOORDINATOR_H
#define SBMAINSWITCHERCONTROLLERCOORDINATOR_H

@class NSMapTable, NSArray, NSMutableDictionary, NSCountedSet, NSMutableSet, NSDictionary, NSMutableArray, SiriContinuitySource, UIApplicationSceneDeactivationAssertion, BSSimpleAssertion, BSAbsoluteMachTimer, NSHashTable, FBScene, SBFHomeGrabberSettings, SBSDisplayLayoutElement, NSString;
@protocol SBApplicationSupportServiceRequestPersistenceIdentifierProvider, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBAppInteractionEventSourceObserving, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBSwitcherViewControllerDelegate, SBButtonEventsHandler, BSInvalidatable, OS_dispatch_queue, BSDefaultObserver;

#import <Foundation/Foundation.h>

#import "SBAppSwitcherServiceSet.h"
#import "SBFluidSwitcherGestureWorkspaceTransaction.h"
#import "SBAppLayout.h"
#import "SBSwitcherModelRemovalResults.h"
#import "SBSwitcherCoordinatedLayoutStateTransitionContext.h"
#import "SBAppSwitcherSettings.h"
#import "SBFluidSwitcherSheetMetricsCache.h"
#import "SBAppSwitcherModel.h"
#import "SBSwitcherDemoCommandsServer.h"
#import "SBSwitcherDemoFilteringController.h"
#import "SBApplicationUserQuitMonitorServer.h"
#import "SBWorkspaceKeyboardFocusController.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBStatusBarPartVisibilityAssertion.h"
#import "SBKeyboardHomeAffordanceAssertion.h"

@interface SBMainSwitcherControllerCoordinator : NSObject <SBApplicationSupportServiceRequestPersistenceIdentifierProvider, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBAppInteractionEventSourceObserving, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBSwitcherViewControllerDelegate, SBButtonEventsHandler>

 {
    NSMapTable *_switcherControllersByWindowScene;
    NSMapTable *_lastMeaningfullyDifferentLayoutStatesByWindowScene;
    NSMapTable *_layoutStateTransitionCoordinatorsByWindowScene;
    NSMapTable *_currentWindowingModeCompatibleAppLayoutsByWindowScene;
    NSArray *_appLayouts;
    SBAppSwitcherServiceSet *_switcherServices;
    NSMutableDictionary *_appLayoutToAcquiredTransientOverlayViewController;
    NSMutableDictionary *_appLayoutToEligibleTransientOverlayViewController;
    NSCountedSet *_draggingAppLayouts;
    NSMutableSet *_windowDragSceneIdentifiers;
    SBFluidSwitcherGestureWorkspaceTransaction *_activeGestureTransaction;
    BOOL _liveContentOverlayUpdatesSuspended;
    SBAppLayout *_activeAppLayoutWhenActivatingMainSwitcher;
    SBSwitcherModelRemovalResults *_activeTransitionModelRemovalResults;
    NSDictionary *_activeTransitionModelRemovalAppLayoutToRemovalContext;
    SBSwitcherCoordinatedLayoutStateTransitionContext *_currentCoordinatedLayoutStateTransitionContext;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherSheetMetricsCache *_sheetMetricsCache;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    NSMutableSet *_liveDisplayItemsBeingTerminated;
    BOOL _ignoreModelUpdates;
    id<BSInvalidatable> *_deferRotationForAppSwitcherAssertion;
    id<BSInvalidatable> *_lockKeyboardFocusAssertion;
    id<BSInvalidatable> *_wallpaperScaleAssertion;
    SBAppLayout *_testItemForInsertion;
    NSUInteger _testItemInsertionIndex;
    SBAppSwitcherModel *_mainSwitcherModel;
    SBSwitcherDemoCommandsServer *_demoCommandsServer;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSArray *_demoFilteringHiddenAppLayouts;
    SBApplicationUserQuitMonitorServer *_userQuitMonitorServer;
    SiriContinuitySource *_siriSource;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<BSInvalidatable> *_keyboardFocusObserver;
    UIApplicationSceneDeactivationAssertion *_deactivatingScenesResignActiveAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_mainStatusBarAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_floatingStatusBarAssertion;
    SBStatusBarPartVisibilityAssertion *_containerStatusBarContentAssertion;
    BSSimpleAssertion *_preventSupplementalSnapshotsAssertion;
    BSAbsoluteMachTimer *_preventSupplementalSnapshotsInvalidationTimer;
    NSMutableSet *_asynchronousRenderingAssertions;
    NSHashTable *_asynchronousRenderingCachedSurfacesReasons;
    BSAbsoluteMachTimer *_disableCachingAsynchronousRenderingSurfacesTimer;
    NSMutableDictionary *_recentSwipeUpToKillTimestampsForAppLayouts;
    BOOL _isKeyboardShowing;
    FBScene *_medusaKeyboardScene;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    NSMutableSet *_activeBetaLaunchHandles;
    NSObject<OS_dispatch_queue> *_storeAppLaunchUIActivationQueue;
    SBSDisplayLayoutElement *_homeScreenDisplayLayoutElement;
    NSMapTable *_homeScreenDisplayLayoutElementAssertionsBySwitcherController;
    NSMapTable *_displayLayoutTransitionsBySwitcherController;
    id<BSDefaultObserver> *_chamoisWindowingUIEverEnabledObserver;
}


@property (readonly, nonatomic, getter=isAnySwitcherVisible) BOOL anySwitcherVisible;
@property (readonly, copy, nonatomic) NSArray *coordinatedSwitcherControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationAssertion; // ivar: _suspendWallpaperAnimationAssertion


+(id)_shim_activeSwitcherController;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)_contentControllerIsEmbeddedDisplayContentController:(id)arg0 ;
-(BOOL)_dismissSwitcherNoninteractivelyToAppLayout:(id)arg0 dismissFloatingSwitcher:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg0 ;
-(BOOL)_hasAppLayoutContainingDisplayItem:(id)arg0 ;
-(BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg0 ;
-(BOOL)_isPerformingModelTransitionForReplacementAppLayout:(id)arg0 ;
-(BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
-(BOOL)_shouldAddAppLayoutToFront:(id)arg0 ;
-(BOOL)_shouldMorphFromPIPForTransitionContext:(id)arg0 outForLayoutRole:(*NSInteger)arg1 ;
-(BOOL)_shouldMorphToPIPForTransitionContext:(id)arg0 outForLayoutRole:(*NSInteger)arg1 ;
-(BOOL)_shouldPrioritizeSortOrderForAppLayout:(id)arg0 ;
-(BOOL)_shouldReverseLayoutDirection;
-(BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
-(BOOL)_shouldTakeStatusBarAssertionForSwitcherController:(id)arg0 ;
-(BOOL)_shouldZoomFromSystemApertureForTransitionContext:(id)arg0 ;
-(BOOL)_supportsFloatingApplication;
-(BOOL)activateMainSwitcherNoninteractivelyWithSource:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 windowScene:(id)arg2 ;
-(BOOL)deleteAppLayoutForDisplayItem:(id)arg0 ;
-(BOOL)dismissAllSwitchersNoninteractivelyAnimated:(BOOL)arg0 ;
-(BOOL)dismissMainSwitcherNoninteractivelyAnimated:(BOOL)arg0 ;
-(BOOL)fluidSwitcherGestureManagerSupportsFloatingApplication:(id)arg0 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasAppLayoutForDisplayItem:(id)arg0 ;
-(BOOL)hasAppLayoutForTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(BOOL)hasTransientOverlayAppLayoutsForWindowScene:(id)arg0 ;
-(BOOL)isAcquiredTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg0 ;
-(BOOL)liveContentOverlayUpdatesSuspended;
-(BOOL)shouldPerformPreTransitionInsertionOfAppLayout:(id)arg0 forTransitionWithContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 displayItemSupportsCenterRole:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldMorphFromPIPForTransitionContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldMorphToPIPForTransitionContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldResignActiveForStartOfTransition:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 supportsKillingOfAppLayout:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 supportsTitleItemsForAppLayout:(id)arg1 ;
-(BOOL)switcherContentControllerControlsHomeScreenContents:(id)arg0 ;
-(BOOL)switcherContentControllerIsFloatingApplicationSupported:(id)arg0 ;
-(BOOL)switcherContentControllerIsKeyboardHomeAffordanceAssertionCurrentlyBeingTaken:(id)arg0 ;
-(BOOL)toggleMainSwitcherNoninteractivelyWithSource:(NSInteger)arg0 animated:(BOOL)arg1 windowScene:(id)arg2 ;
-(NSInteger)_overrideWindowActiveInterfaceOrientation;
-(NSInteger)homeScreenInterfaceOrientationForContentController:(id)arg0 ;
-(NSInteger)overrideInterfaceOrientationMechanicsForSwitcherViewController:(id)arg0 ;
-(NSInteger)sbActiveInterfaceOrientation;
-(NSInteger)switcherInterfaceOrientationForContentController:(id)arg0 ;
-(id)_activateSwitcherValidatorWithEventLabel:(SEL)arg0 animated:(id)arg1 ;
-(id)_activateSwitcherValidatorWithEventLabel:(SEL)arg0 animated:(id)arg1 windowScene:(BOOL)arg2 ;
-(id)_activeDisplaySwitcherController;
-(id)_appLayoutContainingDisplayItem:(id)arg0 ;
-(id)_appLayoutFromPrimaryLayoutItem:(id)arg0 sideLayoutElement:(id)arg1 configuration:(NSInteger)arg2 ;
-(id)_centerWindowSheetMetricsCache;
-(id)_dismissSwitcherValidatorToAppLayout:(SEL)arg0 dismissFloatingSwitcher:(id)arg1 withEventLabel:(BOOL)arg2 animated:(id)arg3 windowScene:(BOOL)arg4 ;
-(id)_embeddedDisplaySwitcherController;
-(id)_entityForDisplayItem:(id)arg0 displayIdentity:(id)arg1 ;
-(id)_entityForDisplayItem:(id)arg0 sceneHandleProvider:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_entityForDisplayItem:(id)arg0 switcherController:(id)arg1 ;
-(id)_init;
-(id)_medusaKeyboardSceneHandle;
-(id)_modelRemovalRequestForDisplayItemResolutionResults:(id)arg0 ;
-(id)_nonHiddenAppLayoutsForDisplayItem:(id)arg0 ;
-(id)_persistenceIdentifiersForBundleIdentifier:(id)arg0 onlyIncludeLaunchableIdentifiers:(BOOL)arg1 ;
-(id)_recentAppLayoutsController;
-(id)_resultsForDisplayItemRemovalResolutionRequest:(id)arg0 preferredAppLayoutForRemovalAnimationIfAny:(id)arg1 ;
-(id)_switcherControllerForContentViewController:(id)arg0 ;
-(id)_switcherControllerForDisplayItem:(id)arg0 ;
-(id)_switcherControllerForSwitcherViewController:(id)arg0 ;
-(id)_switcherControllerForTransitionRequest:(id)arg0 ;
-(id)_switcherControllerPassingTest:(id)arg0 ;
-(id)_switcherModelRemovalResultsForRequest:(id)arg0 forReason:(NSInteger)arg1 ;
-(id)_toggleSwitcherTransitionValidatorAnimated:(SEL)arg0 windowScene:(BOOL)arg1 ;
-(id)_transientOverlayPresentationManager;
-(id)acquireAllowHiddenAppAssertionForBundleIdentifier:(id)arg0 reason:(id)arg1 ;
-(id)activeGestureTransaction;
-(id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg0 ;
-(id)activeTransientOverlayPresentedAppLayoutForWindowScene:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ancillaryTransitionRequests:(id)arg1 ;
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg0 windowScene:(id)arg1 ;
-(id)appLayoutsForSwitcherContentController:(id)arg0 ;
-(id)appLayoutsForSwitcherController:(id)arg0 ;
-(id)appSwitcherModel:(id)arg0 willAddAppLayout:(id)arg1 replacingAppLayouts:(id)arg2 removingAppLayouts:(id)arg3 ;
-(id)appSwitcherModel:(id)arg0 willReplaceAppLayout:(id)arg1 proposedReplacementAppLayout:(id)arg2 ;
-(id)convertAppLayout:(id)arg0 fromSwitcherController:(id)arg1 toSwitcherController:(id)arg2 ;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg0 ;
-(id)currentCoordinatedLayoutStateTransitionContext;
-(id)draggingAppLayouts;
-(id)mainSwitcherWindow;
-(id)matchingIconViewForIconView:(id)arg0 ;
-(id)recentAppLayouts;
-(id)switcherContentController:(id)arg0 deviceApplicationSceneHandleForDisplayItem:(id)arg1 ;
-(id)switcherContentController:(id)arg0 hiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(id)switcherContentController:(id)arg0 transitionEventForContext:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(id)switcherContentController:(id)arg0 transitionEventForLayoutState:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(id)switcherContentController:(id)arg0 visibleAppLayoutsForBundleIdentifier:(id)arg1 ;
-(id)switcherContentController:(id)arg0 visibleDisplayItemsForBundleIdentifier:(id)arg1 ;
-(id)switcherControllerForAppLayout:(id)arg0 ;
-(id)switcherControllerForDisplayItem:(id)arg0 ;
-(id)switcherControllerForWindowScene:(id)arg0 ;
-(id)transitionEventForContext:(id)arg0 identifier:(id)arg1 phase:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)transitionEventForLayoutState:(id)arg0 identifier:(id)arg1 phase:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg0 ;
-(struct CGAffineTransform )switcherContentController:(id)arg0 transformForCardUnderSheetForBoundsSize:(struct CGSize )arg1 ;
-(struct CGRect )switcherContentController:(id)arg0 frameForCenterItemWithConfiguration:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(struct CGRect )switcherContentController:(id)arg0 frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg1 floatingConfiguration:(NSInteger)arg2 ;
-(struct CGRect )switcherContentController:(id)arg0 frameForItemWithRole:(NSInteger)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(NSInteger)arg3 ;
-(void)_acquireAssertion:(id)arg0 ;
-(void)_activateBetaLaunchHandlesIfNeededWithAppInfo:(id)arg0 processHandle:(id)arg1 ;
-(void)_activateNeighboringAppLayoutRequiringActiveAppLayout:(BOOL)arg0 appLayoutEnvironment:(NSInteger)arg1 inForwardDirection:(BOOL)arg2 windowScene:(id)arg3 eventLabel:(id)arg4 ;
-(void)_addAppLayoutToFront:(id)arg0 ;
-(void)_addAppLayoutToFront:(id)arg0 removeAppLayout:(id)arg1 ;
-(void)_applicationDidExit:(id)arg0 ;
-(void)_asyncOnStoreAppLaunchUIActivationQueue:(id)arg0 ;
-(void)_beginDisplayLayoutTransitionForSwitcherController:(id)arg0 reason:(id)arg1 ;
-(void)_buildAppLayoutCache;
-(void)_cancelPIPForDisplayItem:(id)arg0 ;
-(void)_chamoisWindowingUIEverEnabledDefaultChangeHandler;
-(void)_configureRequest:(id)arg0 forSwitcherTransitionRequest:(id)arg1 withEventLabel:(id)arg2 ;
-(void)_continuityAppSuggestionChanged:(id)arg0 ;
-(void)_deleteAppLayoutsMatchingBundleIdentifier:(id)arg0 ;
-(void)_doUglySiriActivationThingsIfNecessary:(id)arg0 ;
-(void)_endDisplayLayoutTransitionForSwitcherController:(id)arg0 ;
-(void)_enumerateSwitcherControllersWithBlock:(id)arg0 ;
-(void)_evaluateAsynchronousRenderingEnablement;
-(void)_focusNewlyAddedApplicationIfNeededTransitioningFromLayoutState:(id)arg0 toLayoutState:(id)arg1 windowScene:(id)arg2 ;
-(void)_handleFocusedIconSwitcherShortcutAction:(NSInteger)arg0 bundleIdentifier:(id)arg1 windowScene:(id)arg2 ;
// -(void)_insertAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 contentViewController:(id)arg2 modelMutationBlock:(id)arg3 completion:(unk)arg4  ;
// -(void)_insertAppLayouts:(id)arg0 atIndexes:(id)arg1 contentViewController:(id)arg2 modelMutationBlock:(id)arg3 completion:(unk)arg4  ;
-(void)_insertCardForDisplayIdentifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_loadContentViewControllerIfNecessaryForAllWindowScenes;
-(void)_loadContentViewControllerIfNecessaryForWindowScene:(id)arg0 ;
-(void)_lockKeyboardFocusForSwitcherController:(id)arg0 ;
-(void)_modifyModelWithDropContext:(id)arg0 ;
-(void)_noteUIWillLock;
-(void)_notifySwitcherControllersAppLayoutsDidChange;
-(void)_observerLayoutStateTransitionCoordinatorForWindowSceneIfNeeded:(id)arg0 ;
-(void)_performSceneDestructionForModelRemovalResults:(id)arg0 ;
-(void)_presentStoreKitSheetIfNeededWithAppInfo:(id)arg0 processHandle:(id)arg1 ;
-(void)_purgeHiddenAppLayoutsForUILock;
-(void)_rebuildAppListCache;
-(void)_rebuildCurrentWindowingModeCompatibleAppLayoutsIfNecessary;
-(void)_releaseKeyboardFocus;
-(void)_removeAcquiredTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(void)_removeAppLayout:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)_removeCardForDisplayIdentifier:(id)arg0 ;
-(void)_removeDisplayItem:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)_removeDisplayItem:(id)arg0 forReason:(NSInteger)arg1 preferredAppLayoutForRemovalAnimationIfAny:(id)arg2 ;
-(void)_reqlinquishAssertion:(id)arg0 ;
-(void)_requestAutomaticUpdateAuthorizationIfNecessaryWithAppInfo:(id)arg0 processHandle:(id)arg1 ;
-(void)_setAsynchronousRenderingEnabled:(BOOL)arg0 withMinificationFilter:(BOOL)arg1 forLayerTarget:(id)arg2 presentationManager:(id)arg3 ;
-(void)_setContainerStatusBarHidden:(BOOL)arg0 animationDuration:(CGFloat)arg1 usingAssertion:(*id)arg2 reason:(id)arg3 windowScene:(id)arg4 ;
-(void)_setInterfaceOrientationFromUserResizingIfSupported:(NSInteger)arg0 forSceneHandle:(id)arg1 ;
-(void)_setStatusBarPartsHidden:(NSUInteger)arg0 animated:(BOOL)arg1 windowScene:(id)arg2 ;
-(void)_switcherModelChanged:(id)arg0 ;
-(void)_switcherServiceAdded:(id)arg0 ;
-(void)_switcherServiceRemoved:(id)arg0 ;
-(void)_temp_92893062_observeLayoutStateTransitionCoordinatorForWindowScene:(id)arg0 ;
-(void)_updateAssertion:(id)arg0 ;
-(void)_updateBestAppSuggestion;
-(void)_updateHomeScreenDisplayLayoutElementForLayoutState:(id)arg0 switcherController:(id)arg1 ;
-(void)_updateKeyboardHomeAffordanceAssertion;
-(void)_warmAppInfoForAppsInList;
-(void)addAcquiredTransientOverlayViewController:(id)arg0 forAppLayout:(id)arg1 windowScene:(id)arg2 ;
-(void)addAppLayoutForDisplayItem:(id)arg0 windowScene:(id)arg1 completion:(id)arg2 ;
-(void)addAppLayoutForTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(void)addCenterRoleAppLayoutForDisplayItem:(id)arg0 windowScene:(id)arg1 completion:(id)arg2 ;
-(void)appSwitcherModel:(id)arg0 didRemoveAppLayoutForFallingOffList:(id)arg1 ;
-(void)betaLaunchHandle:(id)arg0 activateIfNeededEndedWithResult:(BOOL)arg1 ;
-(void)cancelActiveGestureForSwitcherContentController:(id)arg0 ;
-(void)cancelAnyPeekToHomescreenFromSource:(NSInteger)arg0 ;
-(void)cleanUpAfterCoordinatedLayoutStateTransitionWithContext:(id)arg0 ;
-(void)dealloc;
-(void)enumerateSwitcherControllersWithBlock:(id)arg0 ;
// -(void)enumerateTransientOverlayViewControllersUsingBlock:(id)arg0 windowScene:(unk)arg1  ;
-(void)eventSource:(id)arg0 userDeletedWebBookmark:(id)arg1 ;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)failMultitaskingGesturesForReason:(id)arg0 ;
-(void)fluidSwitcherGestureManager:(id)arg0 clickReceivedForHomeGrabberView:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didBeginDraggingWindowWithSceneIdentifier:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didEndGesture:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didPlatterizeWindowDragWithSceneIdentifier:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didUpdateGesture:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 tapReceivedForGrabberTongueAtEdge:(NSUInteger)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 willEndDraggingWindowWithSceneIdentifier:(id)arg1 ;
-(void)handleApplicationSceneEntityDestructionIntent:(id)arg0 forEntities:(id)arg1 ;
-(void)keyboardFocusController:(id)arg0 externalSceneDidAcquireFocus:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)noteKeyboardIsForMedusaWithOwningScene:(id)arg0 ;
-(void)noteKeyboardIsNotForMedusa;
-(void)performKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 windowScene:(id)arg2 ;
// -(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 windowScene:(unk)arg3  ;
-(void)prepareForCoordinatedLayoutStateTransitionWithContext:(id)arg0 ;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)removeAppLayoutForDisplayItem:(id)arg0 shouldDestroyScene:(BOOL)arg1 ;
-(void)removeAppLayoutTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)setActiveGestureTransaction:(id)arg0 ;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)switcherContentController:(id)arg0 activatedBestAppSuggestion:(id)arg1 ;
-(void)switcherContentController:(id)arg0 bringAppLayoutToFront:(id)arg1 ;
-(void)switcherContentController:(id)arg0 deletedDisplayItem:(id)arg1 inAppLayout:(id)arg2 forReason:(NSInteger)arg3 ;
-(void)switcherContentController:(id)arg0 layoutStateTransitionDidEndWithTransitionContext:(id)arg1 ;
-(void)switcherContentController:(id)arg0 performTransitionWithRequest:(id)arg1 gestureInitiated:(BOOL)arg2 ;
-(void)switcherContentController:(id)arg0 reopenHiddenAppLayoutsWithBundleIdentifier:(id)arg1 ;
-(void)switcherContentController:(id)arg0 requestNewWindowForBundleIdentifier:(id)arg1 ;
-(void)switcherContentController:(id)arg0 setCacheAsynchronousRenderingSurfaces:(BOOL)arg1 ;
-(void)switcherContentController:(id)arg0 setContainerStatusBarHidden:(BOOL)arg1 partsHidden:(NSUInteger)arg2 animationDuration:(CGFloat)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenAlpha:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurMaterialRecipeName:(id)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurProgress:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurType:(NSInteger)arg1 ;
-(void)switcherContentController:(id)arg0 setHomeScreenDimmingAlpha:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenScale:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setInterfaceOrientationFromUserResizing:(NSInteger)arg1 forDisplayItem:(id)arg2 ;
-(void)switcherContentController:(id)arg0 setPointerInteractionsEnabled:(BOOL)arg1 ;
-(void)switcherContentController:(id)arg0 setWallpaperScale:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setWallpaperStyle:(NSInteger)arg1 ;
-(void)switcherControllerDidUpdateWindowManagementStyle:(id)arg0 ;
-(void)switcherControllerWillUpdateWindowManagementStyle:(id)arg0 ;
-(void)switcherDemoFilteringControllerDidChangeHiddenApplicationBundleIDs:(id)arg0 ;
-(void)transactionDidComplete:(id)arg0 ;
-(void)updateUserInteractionEnabledForSwitcherContentController:(id)arg0 ;
-(void)updateWindowVisibilityForSwitcherContentController:(id)arg0 ;
-(void)viewDidLoadForSwitcherViewController:(id)arg0 ;
-(void)viewWillAppearForSwitcherViewController:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif