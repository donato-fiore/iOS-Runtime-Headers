// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMBINEDLISTVIEWCONTROLLER_H
#define CSCOMBINEDLISTVIEWCONTROLLER_H

@class UIViewController, NCNotificationStructuredListViewController, UIView, NSHashTable, SBFTouchPassThroughView, BSAbsoluteMachTimer, NSMapTable, NSMutableSet, NSMutableArray, NSArray, _UILegibilitySettings, _UIGestureStudyInteraction, NSDate, DNDState, FCActivityManager, NCNotificationViewController, NCNotificationRequest, NSLayoutConstraint, NSString, NSSet, SBSLockScreenContentAssertion, DNDEventBehaviorResolutionService, DNDStateService, UIScrollView, NSMutableDictionary, PRWidgetMetricsProvider;
@protocol CSNotificationAdjunctListViewControllerDelegate, SBFMotionGestureObserver, NCNotificationStructuredListContentObserver, CSStatusBarBackgroundIntersecting, PTSettingsKeyObserver, CSHomeGestureParticipating, CSDNDBedtimeControllerObserver, DNDStateUpdateListener, CSDNDBedtimeGreetingDelegate, CSApplicationInformationObserving, NCNotificationStructuredListViewControllerDelegate, SBUICoronaAnimationControllerParticipant, _UIGestureStudyInteractionDelegate, CSProximitySensorProviderObserver, CSListItemContaining, FCActivityManagerObserving, CSNotificationDestination, CSDateViewScrolling, CSAppearanceProviding, SBFBacklightSceneHostEnvironmentProviding, SBUIBiometricResource, BSInvalidatable, CSActivityItemObserving, CSApplicationInforming, SBFAuthenticationStatusProvider, SBFActionProviding, CSCoverSheetGestureHandling, CSCoverSheetViewPresenting, CSCombinedListViewControllerDelegate, CSDeviceOrientationProviding, CSNotificationDispatcher, CSHomeAffordanceControlling, CSNotificationPresenting, CSPageViewControllerProtocol, CSPlatterHomeGestureManaging, CSProximitySensorProviding, CSRemoteContentInlineProviding, CSScrollablePageViewControllerProtocol, CSUnlockRequesting;


#import "CSCoverSheetViewControllerBase.h"
#import "CSComponent.h"
#import "CSStatusBarBackgroundComponent.h"
#import "CSStatusBarComponent.h"
#import "CSWallpaperFloatingLayerComponent.h"
#import "CSQuickActionsComponent.h"
#import "CSDNDBedtimeController.h"
#import "CSDNDBedtimeGreetingViewController.h"
#import "CSNotificationAdjunctListViewController.h"
#import "CSLayoutStrategy.h"
#import "CSLockScreenSettings.h"
#import "CSListItemManager.h"

@interface CSCombinedListViewController : CSCoverSheetViewControllerBase <CSNotificationAdjunctListViewControllerDelegate, SBFMotionGestureObserver, NCNotificationStructuredListContentObserver, CSStatusBarBackgroundIntersecting, PTSettingsKeyObserver, CSHomeGestureParticipating, CSDNDBedtimeControllerObserver, DNDStateUpdateListener, CSDNDBedtimeGreetingDelegate, CSApplicationInformationObserving, NCNotificationStructuredListViewControllerDelegate, SBUICoronaAnimationControllerParticipant, _UIGestureStudyInteractionDelegate, CSProximitySensorProviderObserver, CSListItemContaining, FCActivityManagerObserving, CSNotificationDestination, CSDateViewScrolling, CSAppearanceProviding, SBFBacklightSceneHostEnvironmentProviding>

 {
    UIViewController *_captureOnlyMaterialViewController;
    NCNotificationStructuredListViewController *_structuredListViewController;
    UIView *_containerViewForExpandedNotificationContent;
    NSHashTable *_notificationContainerViewAssertions;
    SBFTouchPassThroughView *_clippingView;
    CGFloat _cachedAdjunctHeight;
    CGFloat _footerOffset;
    BOOL _listDismissingContent;
    BOOL _listBeingLaidOut;
    BSAbsoluteMachTimer *_significantUserInteractionTimer;
    BOOL _listSuppressLongLookDismissal;
    NSMapTable *_overrideNotificationListDisplayStyleAssertions;
    CSComponent *_dateViewComponent;
    CSComponent *_complicationContainerComponent;
    CSComponent *_remoteInlineContentComponent;
    CSStatusBarBackgroundComponent *_statusBarBackgroundComponent;
    CSComponent *_proudLockComponent;
    CSComponent *_homeAffordanceComponent;
    CSComponent *_footerCallToActionLabelComponent;
    CSStatusBarComponent *_statusBarComponent;
    CSWallpaperFloatingLayerComponent *_wallpaperFloatingLayerComponent;
    NSMutableSet *_quickActionsHiddenReasons;
    CSQuickActionsComponent *_quickActionsComponent;
    CSDNDBedtimeController *_dndBedtimeController;
    CSDNDBedtimeGreetingViewController *_dndBedtimeGreetingViewController;
    NSMutableSet *_backgroundAnimationDisabledReasons;
    NSMutableSet *_footerCallToActionHiddenReasons;
    NSMutableSet *_notificationListHiddenReasons;
    NSMutableSet *_dismissGestureDisabledReasons;
    NSMutableArray *_viewControllersPreferringProminentPresentation;
    NSArray *_viewsFromAdjunctListPreferringProminentPresentation;
    _UILegibilitySettings *_legibilitySettings;
    _UIGestureStudyInteraction *_gestureStudyInteraction;
    NSDate *_screenOnTime;
    BOOL _confirmedNotInPocket;
    BOOL _shouldPadBottomSpacingWhileDragging;
    id<SBUIBiometricResource> *_biometricResource;
    id<BSInvalidatable> *_faceDetectWantedAssertion;
    id<BSInvalidatable> *_notificationLongPressProximitySensorAssertion;
    id<BSInvalidatable> *_deviceWakeProximitySensorAssertion;
    BOOL _faceInView;
    BOOL _liftDetected;
    BOOL _homeButtonPressDetected;
    BOOL _lockButtonPressDetected;
    BOOL _coverSheetWasDismissed;
    BOOL _historyWasRevealed;
    BOOL _proximitySensorCoveredSinceWake;
    BOOL _hasProximitySensor;
    BOOL _hadBreakthroughContent;
    DNDState *_activeDNDState;
    NSHashTable *_breakthroughContentObservers;
    FCActivityManager *_focusActivityManager;
}


@property (retain, nonatomic) NCNotificationViewController *activePlatterHomeAffordanceOwningNotificationViewController; // ivar: _activePlatterHomeAffordanceOwningNotificationViewController
@property (retain, nonatomic) NCNotificationRequest *activeRaiseToListenNotificationRequest; // ivar: _activeRaiseToListenNotificationRequest
@property (weak, nonatomic) NSObject<CSActivityItemObserving> *activityItemObserver; // ivar: _activityItemObserver
@property (retain, nonatomic) CSNotificationAdjunctListViewController *adjunctListViewController; // ivar: _adjunctListViewController
@property (retain, nonatomic) NSLayoutConstraint *adjunctListViewTopConstraint; // ivar: _adjunctListViewTopConstraint
@property (nonatomic) BOOL allowsDNDStateService; // ivar: _allowsDNDStateService
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (weak, nonatomic) NSObject<CSApplicationInforming> *applicationInformer; // ivar: _applicationInformer
@property (weak, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (readonly, nonatomic) CGFloat clippingOffset;
@property (readonly, copy, nonatomic) NSSet *components;
@property (weak, nonatomic) NSObject<SBFActionProviding> *contentActionProvider;
@property (weak, nonatomic) NSObject<CSCoverSheetGestureHandling> *coverSheetGestureHandling; // ivar: _coverSheetGestureHandling
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (weak, nonatomic) NSObject<CSCoverSheetViewPresenting> *coverSheetViewPresenting; // ivar: _coverSheetViewPresenting
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBFTouchPassThroughView *debugViewLeft; // ivar: _debugViewLeft
@property (retain, nonatomic) SBFTouchPassThroughView *debugViewRight; // ivar: _debugViewRight
@property (weak, nonatomic) NSObject<CSCombinedListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CSDeviceOrientationProviding> *deviceOrientationProvider; // ivar: _deviceOrientationProvider
@property (retain, nonatomic) UIViewController *digestOnboardingSuggestionViewController; // ivar: _digestOnboardingSuggestionViewController
@property (retain, nonatomic) SBSLockScreenContentAssertion *digestOnboardingSuggestionViewControllerAssertion; // ivar: _digestOnboardingSuggestionViewControllerAssertion
@property (readonly, nonatomic) BOOL disableBackgroundAnimation; // ivar: _disableBackgroundAnimation
@property (nonatomic, getter=_disableScrolling, setter=_setDisableScrolling:) BOOL disableScrolling; // ivar: _disableScrolling
@property (readonly, nonatomic) BOOL dismissGestureDisabled; // ivar: _dismissGestureDisabled
@property (weak, nonatomic) NSObject<CSNotificationDispatcher> *dispatcher; // ivar: _dispatcher
@property (readonly, nonatomic) CGFloat distanceFromBarToContent;
@property (retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService; // ivar: _dndEventBehaviorResolutionService
@property (retain, nonatomic) DNDStateService *dndStateService; // ivar: _dndStateService
@property (readonly, nonatomic) BOOL footerCallToActionLabelHidden; // ivar: _footerCallToActionLabelHidden
@property (readonly, nonatomic) BOOL hasContent; // ivar: _listPresentingContent
@property (readonly, nonatomic) BOOL hasUserInteraction;
@property (retain, nonatomic) NSMutableSet *hasUserInteractionReasons; // ivar: _hasUserInteractionReasons
@property (readonly, nonatomic) BOOL hasVisibleBreakthroughContent;
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSHomeAffordanceControlling> *homeAffordanceController; // ivar: _homeAffordanceController
@property (readonly, nonatomic) CGFloat horizontalInsetMargin;
@property (readonly, nonatomic) CGFloat itemSpacing;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSString *listViewControllerBackgroundGroupName;
@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings; // ivar: _lockScreenSettings
@property (readonly, nonatomic, getter=isNotificationHistoryRevealed) BOOL notificationHistoryRevealed;
@property (readonly, nonatomic) BOOL notificationListHidden; // ivar: _notificationListHidden
@property (readonly, nonatomic) UIScrollView *notificationListScrollView;
@property (readonly, nonatomic) UIViewController *notificationListViewController;
@property (weak, nonatomic) NSObject<CSNotificationPresenting> *notificationPresenter; // ivar: _notificationPresenter
@property (weak, nonatomic) NSObject<CSPageViewControllerProtocol> *page; // ivar: _page
@property (readonly, nonatomic) NSInteger participantState;
@property (weak, nonatomic) NSObject<CSPlatterHomeGestureManaging> *platterHomeGestureManager; // ivar: _platterHomeGestureManager
@property (nonatomic, getter=hasPresentationDirtiedAppearance) BOOL presentationDirtiedAppearance; // ivar: _presentationDirtiedAppearance
@property (weak, nonatomic) NSObject<CSProximitySensorProviding> *proximitySensorProvider; // ivar: _proximitySensorProvider
@property (weak, nonatomic) NSObject<CSRemoteContentInlineProviding> *remoteContentInlineProvider; // ivar: _remoteContentInlineProvider
@property (nonatomic, getter=_isScreenOn, setter=_setScreenOn:) BOOL screenOn; // ivar: _screenOn
@property (weak, nonatomic) NSObject<CSScrollablePageViewControllerProtocol> *scrollablePage; // ivar: _scrollablePage
@property (readonly, nonatomic, getter=isScrollingListContent) BOOL scrollingListContent;
@property (nonatomic, getter=isShowingFocusActivityView) BOOL showingFocusActivityView; // ivar: _showingFocusActivityView
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *supplementaryItemContainersByIdentifier; // ivar: _supplementaryItemContainersByIdentifier
@property (retain, nonatomic) CSListItemManager *supplementaryItemManager; // ivar: _supplementaryItemManager
@property (readonly, nonatomic) CGFloat topContentInset;
@property (weak, nonatomic) NSObject<CSUnlockRequesting> *unlockRequester; // ivar: _unlockRequester
@property (weak, nonatomic) PRWidgetMetricsProvider *widgetMetricsProvider;


-(BOOL)_allowNotificationsRevealPolicy;
-(BOOL)_allowsDateViewOrProudLockScroll;
-(BOOL)_hasExperiencedSignificantScrollingOnScrollView:(id)arg0 ;
-(BOOL)_isClockSnoozeAlarmNotificationRequest:(id)arg0 ;
-(BOOL)_shouldFilterNotificationRequest:(id)arg0 ;
-(BOOL)_shouldHideProudLockForScroll;
-(BOOL)_shouldPadBottomSpacing;
-(BOOL)_shouldPadBottomSpacingIsDragging:(BOOL)arg0 ;
-(BOOL)_shouldPreventNotificationHistoryRevealForActiveDNDState;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg0 ;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)interpretsViewAsContent:(id)arg0 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg0 ;
-(BOOL)isNotificationListSignificantlyScrolled;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)isTouchLocationInRestrictedRect:(struct CGPoint )arg0 ;
-(BOOL)notificationStructuredListViewController:(id)arg0 isClockNotificationRequest:(id)arg1 ;
-(BOOL)notificationStructuredListViewController:(id)arg0 shouldAllowInteractionsForNotificationRequest:(id)arg1 ;
-(BOOL)notificationStructuredListViewController:(id)arg0 shouldFilterNotificationRequest:(id)arg1 ;
-(BOOL)notificationStructuredListViewControllerShouldAllowLongPressGesture:(id)arg0 ;
-(BOOL)notificationStructuredListViewControllerShouldAllowNotificationHistoryReveal:(id)arg0 ;
-(BOOL)notificationStructuredListViewControllerShouldHintForDefaultAction:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(CGFloat)_minInsetsToPushDateOffScreen;
-(CGFloat)_minListHeightForPadding;
-(CGFloat)_sanitizedContentOffset:(CGFloat)arg0 forContentInset:(struct UIEdgeInsets )arg1 ;
-(CGFloat)_statusBarHeight;
-(CGFloat)defaultRestingOffsetExcludingAdjunct;
-(CGFloat)interItemSpacingToMimicForAdjunctListViewController:(id)arg0 ;
-(Class)notificationStructuredListViewControllerNotificationViewControllerClass:(id)arg0 ;
-(NSInteger)presentationPriority;
-(NSInteger)presentationTransition;
-(NSInteger)presentationType;
-(id)_identifierForNotificationRequest:(id)arg0 ;
-(id)_modeIdentifierForDNDState:(id)arg0 ;
-(id)_sortedViewsForProminentPresentationAndDismissal;
-(id)_testingNotificationRequestWithIdentifier:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_threadIdentifierForNotificationRequest:(id)arg0 ;
-(id)_updateProximitySensorAssertion:(id)arg0 wantsAssertion:(BOOL)arg1 forReason:(id)arg2 ;
-(id)acquireOverrideNotificationListDisplayStyleAssertionWithStyle:(NSUInteger)arg0 hideNotificationCount:(BOOL)arg1 reason:(id)arg2 ;
-(id)groupNameBaseForAdjunctListViewController:(id)arg0 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg0 ;
-(id)initWithDNDBedtimeController:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 dndBedtimeController:(id)arg2 ;
-(id)legibilitySettingsForNotificationStructuredListViewController:(id)arg0 ;
-(id)metadataForTriggeredInteraction:(id)arg0 ;
-(id)notificationStructuredListViewController:(id)arg0 containerViewProviderForExpandedContentForViewController:(id)arg1 ;
-(id)notificationStructuredListViewController:(id)arg0 keyboardAssertionForGestureWindow:(id)arg1 ;
-(id)notificationStructuredListViewController:(id)arg0 notificationRequestForUUID:(id)arg1 ;
-(id)notificationStructuredListViewController:(id)arg0 requestsSectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)notificationStructuredListViewControllerRequestsSystemSettings:(id)arg0 ;
-(id)notificationUsageTrackingStateForNotificationStructuredListViewController:(id)arg0 ;
-(id)sceneHostEnvironmentEntriesForBacklightSession;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationStructuredListViewController:(id)arg0 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg0 ;
-(struct CGPoint )_determineMaxContentOffsetForContentInset:(struct UIEdgeInsets )arg0 ;
-(struct CGRect )_suggestedListViewFrame;
-(struct CGSize )_adjunctListViewSize;
-(struct CGSize )_adjunctListViewSizeIncludingSpacing;
-(struct CGSize )effectiveContentSizeForScrollView:(id)arg0 ;
-(struct CGSize )sizeToMimicForAdjunctListViewController:(id)arg0 ;
-(struct CGSize )sizeToMimicForItemContentHost;
-(struct UIEdgeInsets )_listViewDefaultContentInsets;
-(struct UIEdgeInsets )insetMarginsToMimicForAdjunctListViewController:(id)arg0 ;
-(struct UIEdgeInsets )notificationStructuredListViewControllerRequestsEdgeInsetsForOverlayFooterView:(id)arg0 ;
-(void)_addStateCaptureHandlers;
-(void)_addViewControllerPreferringProminentPresentationAndDismissal:(id)arg0 ;
-(void)_didUpdateSetHasUserInteraction;
-(void)_dismissDNDBedtimeGreetingViewAnimated:(BOOL)arg0 ;
-(void)_evaluateShouldShowGreeting:(id)arg0 animated:(BOOL)arg1 ;
-(void)_handleBiometricEvent:(NSUInteger)arg0 ;
-(void)_homeButtonPressDetected;
-(void)_layoutListView;
-(void)_liftToWakeGestureDetected;
-(void)_lockButtonPressDetected;
-(void)_noteListContentsPotentiallyChanged;
-(void)_noteListContentsPotentiallyChangedAfterTransitionFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)_noteVisibleBreakthroughContentPotentiallyChanged;
-(void)_performSelfCorrectingListViewAction:(id)arg0 ;
-(void)_removeAllUserInteractionReasons;
-(void)_removeViewControllerPreferringProminentPresentationAndDismissal:(id)arg0 ;
-(void)_requestAuthenticationWithCompletion:(id)arg0 ;
-(void)_screenTimeExpirationApplicationsDidChange:(id)arg0 ;
-(void)_setInlineContentHidden:(BOOL)arg0 ;
-(void)_setListHasContent:(BOOL)arg0 ;
-(void)_setQuickActionsHidden:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_snapScrollView:(id)arg0 toAcceptableOffsetAnimated:(BOOL)arg1 ;
-(void)_snapToAcceptableOffsetForScrollView:(id)arg0 ;
-(void)_startScreenOnTimer;
-(void)_stopScreenOnTimer;
-(void)_tearDownContainerViewForExpandedNotificationContent;
-(void)_testingClearAllNotificationRequests;
-(void)_testingCoalesceExpandedBundleForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_testingExpandCoalescedBundleForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_toggleGestureStudyInteractionIfNecessary;
-(void)_triggerSignificantUserInteractionIfNeeded;
-(void)_updateActiveDNDState:(id)arg0 ;
-(void)_updateCaptureOnlyMaterialView;
-(void)_updateDeviceWakeProximitySensorAssertion;
-(void)_updateFaceDetectAssertion;
-(void)_updateHidingQuickActionsForSignificantScrolling:(BOOL)arg0 ;
-(void)_updateListViewContentInset;
-(void)_updateNotificationListOffsetForExternalUpdate;
-(void)_updateNotificationLongPressProximitySensorAssertion;
-(void)_updatePresentation;
-(void)_updateProudLockForHidden:(BOOL)arg0 scrollOffset:(CGFloat)arg1 ;
-(void)_updateQuickActionsVisibilityForScrollView:(id)arg0 ;
-(void)_updateRaiseGestureDetectionForNotificationRequest:(id)arg0 ;
-(void)_updateStructuredListOverrideUserInterfaceStyle;
-(void)activeActivityDidChangeForManager:(id)arg0 ;
-(void)addVisibleBreakthroughContentObserver:(id)arg0 ;
-(void)adjunctListViewController:(id)arg0 didUpdateWithSize:(struct CGSize )arg1 ;
-(void)adjunctListViewController:(id)arg0 updatedNowPlayingVisbility:(BOOL)arg1 ;
-(void)adjunctListViewController:(id)arg0 updatedViewsPreferringProminentPresentationOrDismissal:(id)arg1 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)applicationInformer:(id)arg0 updatedApplications:(id)arg1 ;
-(void)coronaAnimationController:(id)arg0 willAnimateCoronaTransitionWithAnimator:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveRaiseGesture;
-(void)dismissDNDBedtimeGreetingViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)dndBedtimeControllerActiveStateDidChange:(id)arg0 ;
-(void)dndBedtimeControllerShowGreetingStateDidChange:(id)arg0 animated:(BOOL)arg1 ;
-(void)focusActivityViewChangedToVisible:(BOOL)arg0 ;
-(void)forceNotificationHistoryRevealed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ownsHomeGesture:(BOOL)arg1 ;
-(void)itemManager:(id)arg0 cancelTouchesForInteractionWithItem:(id)arg1 ;
-(void)itemManager:(id)arg0 insertItem:(id)arg1 ;
-(void)itemManager:(id)arg0 insertSection:(id)arg1 ;
-(void)itemManager:(id)arg0 removeItem:(id)arg1 ;
-(void)itemManager:(id)arg0 requestsAuthenticationAndPerformBlock:(id)arg1 ;
-(void)itemManager:(id)arg0 requestsModalPresentationOfViewController:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)itemManager:(id)arg0 setNowPlayingItem:(id)arg1 ;
-(void)itemManager:(id)arg0 significantUserInteractionBeganWithItem:(id)arg1 ;
-(void)itemManager:(id)arg0 significantUserInteractionEndedWithItem:(id)arg1 ;
-(void)itemManager:(id)arg0 updateItem:(id)arg1 ;
-(void)itemManagerDidAddNewSceneHostEnvironment;
-(void)layoutListView;
-(void)migrateIncomingNotificationsToNotificationCenter;
-(void)notificationStructuredListViewController:(id)arg0 didBeginUserInteractionWithViewController:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 didEndUserInteractionWithViewController:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 didUpdateOverlayFooterContentVisibility:(BOOL)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 isPresentingLongLookForViewController:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsAuthenticationAndPerformBlock:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsClearingFromIncomingSectionNotificationRequests:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsClearingNotificationRequests:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsClearingNotificationRequestsInSections:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsClearingSupplementaryViewControllers:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 requestAuthentication:(BOOL)arg3 withParameters:(id)arg4 completion:(id)arg5 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsPresentingDigestOnboardingSuggestionViewController:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 requestsPresentingFocusActivityPickerFromView:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg0 setAllowsNotifications:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg0 setDeliverQuietly:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)notificationStructuredListViewController:(id)arg0 setNotificationSystemSettings:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg0 setSystemScheduledDeliveryEnabled:(BOOL)arg1 scheduledDeliveryTimes:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg0 shouldFinishLongLookTransitionForNotificationRequest:(id)arg1 trigger:(NSInteger)arg2 withCompletionBlock:(id)arg3 ;
-(void)notificationStructuredListViewControllerDidBeginUserInteraction:(id)arg0 ;
-(void)notificationStructuredListViewControllerDidEndUserInteraction:(id)arg0 ;
-(void)notificationStructuredListViewControllerDidScrollToRevealNotificationHistory:(id)arg0 ;
-(void)notificationStructuredListViewControllerDidSignificantUserInteraction:(id)arg0 ;
-(void)notificationStructuredListViewControllerWillExpandNotificationListCount:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)performCustomTransitionToVisible:(BOOL)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)proximitySensorProvider:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 ;
-(void)rebuildEverythingForReason:(id)arg0 ;
-(void)removeVisibleBreakthroughContentObserver:(id)arg0 ;
-(void)resetContentOffset;
-(void)resetOverrideNotificationListDisplayStyleSetting;
-(void)revealNotificationHistory:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setOverrideNotificationListDisplayStyleSetting:(NSUInteger)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)settleContentOffset;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)structuredListContentChanged:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAppearanceForHidden:(BOOL)arg0 offset:(CGFloat)arg1 ;
-(void)updateAppearanceForStatusBarBackgroundHidden:(BOOL)arg0 ;
-(void)updateForLegibilitySettings:(id)arg0 ;
-(void)updateNotificationRequest:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg0 previousSystemSettings:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif