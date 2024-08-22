// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBNOTIFICATIONBANNERDESTINATION_H
#define SBNOTIFICATIONBANNERDESTINATION_H

@class NSString, NSMutableSet, BSServiceConnectionEndpoint, NCNotificationManagementViewPresenter, NCNotificationViewController, UIApplicationSceneDeactivationAssertion;
@protocol NCNotificationViewControllerDelegatePrivate, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, SBFMotionGestureObserver, SBAssistantObserver, NCNotificationManagementContentProviderDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationPresentableViewControllerDelegate, SBUICoronaAnimationControllerParticipant, SBBacklightControllerObserver, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler, SBFNotificationExtensionVisibilityProviding, NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving, BSInvalidatable, NCNotificationAlertDestinationDelegate, OS_dispatch_source, BNPresentable;

#import <Foundation/Foundation.h>

#import "SBInAppStatusBarHiddenAssertion.h"
#import "SBAssistantController.h"
#import "SBDashBoardLegibilityProvider.h"
#import "SBLockScreenManager.h"
#import "SBNotificationPresentableViewController.h"
#import "SBSetupManager.h"
#import "SBAppStatusBarSettingsAssertion.h"

@interface SBNotificationBannerDestination : NSObject <NCNotificationViewControllerDelegatePrivate, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, SBFMotionGestureObserver, SBAssistantObserver, NCNotificationManagementContentProviderDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationPresentableViewControllerDelegate, SBUICoronaAnimationControllerParticipant, SBBacklightControllerObserver, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler, SBFNotificationExtensionVisibilityProviding, NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving>



@property (readonly, nonatomic, getter=isAlertDestination) BOOL alertDestination;
@property (retain, nonatomic) SBInAppStatusBarHiddenAssertion *appsStatusBarAssertion; // ivar: _appsStatusBarAssertion
@property (retain, nonatomic) SBAssistantController *assistantController; // ivar: _assistantController
@property (retain, nonatomic) NSObject<BSInvalidatable> *bannerGestureRecognizerPriorityAssertion; // ivar: _bannerGestureRecognizerPriorityAssertion
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (retain, nonatomic) SBDashBoardLegibilityProvider *dashBoardLegibilityProvider; // ivar: _dashBoardLegibilityProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationAlertDestinationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *destinationObservers; // ivar: _destinationObservers
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dismissTimer; // ivar: _dismissTimer
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<BSInvalidatable> *idleTimerDisableAssertion; // ivar: _idleTimerDisableAssertion
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (retain, nonatomic) NCNotificationManagementViewPresenter *notificationManagementPresenter; // ivar: _notificationManagementPresenter
@property (retain, nonatomic, getter=_notificationViewControllerForActiveDragSession, setter=_setNotificationViewControllerForActiveDragSession:) NCNotificationViewController *notificationViewControllerForActiveDragSession; // ivar: _notificationViewControllerForActiveDragSession
@property (readonly, nonatomic) NSInteger participantState;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *presentTimer; // ivar: _presentTimer
@property (weak, nonatomic) NSObject<BNPresentable> *presentablePendingSnapshot; // ivar: _presentablePendingSnapshot
@property (readonly, retain, nonatomic) NCNotificationViewController *presentedBanner;
@property (retain, nonatomic, setter=_setPresentedPresentableVC:) SBNotificationPresentableViewController *presentedPresentableVC; // ivar: _presentedPresentableVC
@property (readonly, nonatomic, getter=isPresentingBanner) BOOL presentingBanner;
@property (readonly, nonatomic, getter=isPresentingBannerInLongLook) BOOL presentingBannerInLongLook;
@property (readonly, nonatomic, getter=isPresentingEmergencyNotification) BOOL presentingEmergencyNotification;
@property (readonly, nonatomic, getter=isPresentingStickyBanner) BOOL presentingStickyBanner;
@property (readonly, nonatomic, getter=isPreventingAutomaticLock) BOOL preventingAutomaticLock;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *replaceTimer; // ivar: _replaceTimer
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion; // ivar: _resignActiveAssertion
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (retain, nonatomic) SBSetupManager *setupManager; // ivar: _setupManager
@property (retain, nonatomic) NSObject<BSInvalidatable> *starModeDisableAssertion; // ivar: _starModeDisableAssertion
@property (readonly) Class superclass;
@property (retain, nonatomic) SBAppStatusBarSettingsAssertion *systemStatusBarAssertion; // ivar: _systemStatusBarAssertion
@property (nonatomic, getter=isUserInteractionInProgress) BOOL userInteractionInProgress; // ivar: _userInteractionInProgress


+(id)_test_notificationRequestForBannerWithIcon;
-(BOOL)_canReceiveNotificationRequestIfLocked:(id)arg0 ;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg0 ;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg0 ;
-(BOOL)_isContentSuppressedForNotificationRequest:(id)arg0 ;
-(BOOL)_isDeviceAuthenticated;
-(BOOL)_isDismissingLongLookForBanner;
-(BOOL)_isInSetupMode;
-(BOOL)_isPresentedBannerBeingDragged;
-(BOOL)_isShowingShortLookAtRest;
-(BOOL)_isUILocked;
-(BOOL)_presentedBannerMatchesNotificationRequest:(id)arg0 ;
-(BOOL)_revokeAllPresentablesWithRequesterIdentifier:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)_shouldAllowDragInteraction;
-(BOOL)_shouldDismissPresentedBannerPerformingPreludeForcingIfSticky:(BOOL)arg0 outReason:(*id)arg1 ;
-(BOOL)_shouldForceDismisssIfStickyForReason:(id)arg0 ;
-(BOOL)_shouldHideStatusBar;
-(BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)arg0 ;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg0 ;
-(BOOL)canReceiveNotificationRequest:(id)arg0 ;
-(BOOL)handleHomeButtonPress;
-(BOOL)isNotificationContentExtensionVisible:(id)arg0 ;
-(BOOL)notificationPresentableViewControllerShouldPresentLongLook:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowDragInteraction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowExpandedPlatterInteraction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldPan:(id)arg0 ;
-(BOOL)notificationViewControllerShouldSupportExpandedPlatterInteraction:(id)arg0 ;
-(BOOL)shouldAcquireWindowLevelAssertion;
-(BOOL)shouldDismissForReason:(id)arg0 outReason:(*id)arg1 ;
-(id)_dashBoardLegibilitySettings;
-(id)_notificationSectionSettingsForSectionIdentifier:(id)arg0 ;
-(id)_notificationViewControllerForRequest:(id)arg0 ;
-(id)_startTimerWithDelay:(NSUInteger)arg0 eventHandler:(id)arg1 ;
-(id)init;
-(id)notificationManagementViewPresenter:(id)arg0 sectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg0 ;
-(id)notificationViewController:(id)arg0 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 withLongLook:(BOOL)arg2 ;
-(id)notificationViewController:(id)arg0 staticContentProviderForNotificationRequest:(id)arg1 ;
-(id)notificationViewControllerContainerViewProviderForExpandedContent:(id)arg0 ;
-(void)_cancelDismissTimer;
-(void)_cancelReplaceAndDismissTimers;
-(void)_cancelReplaceTimer;
-(void)_dismissBannerCompleted:(id)arg0 ;
-(void)_dismissPresentedBannerAnimated:(BOOL)arg0 reason:(id)arg1 forceIfSticky:(BOOL)arg2 ;
-(void)_dismissPresentedBannerOnly:(BOOL)arg0 reason:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissPresentedBannerOnly:(BOOL)arg0 reason:(id)arg1 animated:(BOOL)arg2 forceIfSticky:(BOOL)arg3 ;
-(void)_lockStateChanged;
-(void)_performCancelAction;
-(void)_performSilenceAction;
-(void)_postNotificationRequest:(id)arg0 modal:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentNotificationViewController:(id)arg0 modal:(BOOL)arg1 forRequest:(id)arg2 completion:(id)arg3 ;
-(void)_publishDidPresentBannerForNotificationRequest:(id)arg0 ;
-(void)_setReadyForNotificationRequests;
-(void)_setReadyForNotificationRequestsCoalescingWith:(id)arg0 ;
-(void)_setStatusBarsHidden:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)_setupModeChanged;
-(void)_setupSystemStateChangeNotifications;
-(void)_setupTimers;
-(void)_startDismissTimer;
-(void)_startReplaceAndDismissTimersForRequest:(id)arg0 ;
-(void)_startReplaceTimer;
-(void)_test_dismissNotificationRequest:(id)arg0 ;
-(void)_test_postNotificationRequest:(id)arg0 completion:(id)arg1 ;
-(void)_updateMotionGestureObservation;
-(void)assistantDidDisappear:(id)arg0 ;
-(void)backlightController:(id)arg0 didAnimateBacklightToFactor:(float)arg1 source:(NSInteger)arg2 ;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)coronaAnimationController:(id)arg0 willAnimateCoronaTransitionWithAnimator:(id)arg1 ;
-(void)dealloc;
-(void)destinationDidBecomeDisabled;
-(void)didReceiveRaiseGesture;
-(void)longLookDidDismissForNotificationViewController:(id)arg0 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg0 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg0 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationManagementContentProvider:(id)arg0 requestsPresentingNotificationManagementViewType:(NSUInteger)arg1 forNotificationRequest:(id)arg2 withPresentingView:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsNotifications:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setDeliverQuietly:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenterDidDismissManagementView:(id)arg0 ;
-(void)notificationManagementViewPresenterWillPresentManagementView:(id)arg0 ;
-(void)notificationPresentableViewController:(id)arg0 presentationSize:(struct CGSize *)arg1 containerSize:(struct CGSize *)arg2 ;
-(void)notificationViewController:(id)arg0 dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(NSUInteger)arg3 ;
-(void)notificationViewController:(id)arg0 dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(NSUInteger)arg3 ;
-(void)notificationViewController:(id)arg0 dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)notificationViewController:(id)arg0 executeAction:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)notificationViewController:(id)arg0 requestPermissionToExecuteAction:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)notificationViewController:(id)arg0 shouldFinishLongLookTransitionForTrigger:(NSInteger)arg1 withCompletionBlock:(id)arg2 ;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg0 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg0 ;
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg0 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg0 ;
-(void)presentModalBannerAndExpandForNotificationRequest:(id)arg0 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)registerNotificationBannerDestinationObserver:(id)arg0 ;
-(void)unregisterNotificationBannerDestinationObserver:(id)arg0 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif