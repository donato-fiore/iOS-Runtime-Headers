// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUISIRIVIEWCONTROLLER_H
#define AFUISIRIVIEWCONTROLLER_H

@class UIViewController, SRUIFDelayedActionCommandCache, SiriUIConfiguration, NSString, SiriUIKeyboardView, NSDictionary, SASRequestOptions, UIView, NSNumber, SiriUIAudioRoutePickerController, UIStatusBar, UIView<AFUISiriRemoteViewHosting>;
@protocol AFUINetworkAvailabilityStateMachineDelegate, AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate, AFUISiriViewDelegate, AFUISiriContentDelegate, AFUISiriCompactViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDataSource, SiriUIKeyboardViewDelegate, AFUISiriTapPanDismissalPolicyManagerDelegate, SRUIFDelayedActionCommandCacheDelegate, SiriUIPresentationRemoteControlling, OS_dispatch_queue, AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate;


#import "AFUINetworkAvailabilityStateMachine.h"
#import "AFUISiriTapPanDismissalPolicyManager.h"
#import "AFUISiriRemoteSceneViewController.h"
#import "AFUISiriSession.h"

@interface AFUISiriViewController : UIViewController <AFUINetworkAvailabilityStateMachineDelegate, AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate, AFUISiriViewDelegate, AFUISiriContentDelegate, AFUISiriCompactViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDataSource, SiriUIKeyboardViewDelegate, AFUISiriTapPanDismissalPolicyManagerDelegate, SRUIFDelayedActionCommandCacheDelegate, SiriUIPresentationRemoteControlling>

 {
    BOOL _active;
    BOOL _remoteViewControllerDispatchQueueSuspended;
    NSInteger _vtEnabledCount;
    NSInteger _currentRequestSource;
    id *_triggerUpdater;
    SRUIFDelayedActionCommandCache *_delayedActionCommandCache;
    BOOL _siriSessionWantsToEnd;
    SiriUIConfiguration *_configuration;
    NSString *_uiAppearanceUUIDString;
    NSObject<OS_dispatch_queue> *_uiAppearanceRecordQueue;
    BOOL _presentedConversationFromBreadcrumb;
    SiriUIKeyboardView *_inputAccessoryView;
    ? _keyboardInfo;
    BOOL _unlockScreenVisible;
    BOOL _statusViewWasHiddenBeforeEditingStarted;
    BOOL _remoteViewControllerIsPresenting;
    NSInteger _hostingConnectionState;
    NSDictionary *_dismissalUserInfo;
    BOOL _recordingStartedOnRoute;
    BOOL _shouldShowVoiceActivationMaskView;
    NSInteger _statusBarDeferralState;
    NSInteger _requestCancellationReason;
    BOOL _requestedBlurVisible;
    AFUINetworkAvailabilityStateMachine *_networkAvailabilityStateMachine;
    NSUInteger _currentSessionAvailabilityState;
    BOOL _isProcessingAppLaunch;
    BOOL _hasDonatedDismissalToBiome;
    AFUISiriTapPanDismissalPolicyManager *_tapPanDismissalPolicyManager;
    BOOL _immersiveExperienceOn;
    NSUInteger _launchSignpostID;
}


@property (nonatomic) BOOL announcementRequestsPermittedWhilePresentationActive; // ivar: _announcementRequestsPermittedWhilePresentationActive
@property (nonatomic) BOOL carDNDActive; // ivar: _carDNDActive
@property (copy, nonatomic, getter=_currentRequestOptions, setter=_setCurrentRequestOptions:) SASRequestOptions *currentRequestOptions; // ivar: _currentRequestOptions
@property (weak, nonatomic) NSObject<AFUISiriViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUISiriViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceInStarkMode, setter=setDeviceInStarkMode:) BOOL deviceIsInStarkMode; // ivar: _deviceIsInStarkMode
@property (nonatomic) NSInteger directActionEvent; // ivar: _directActionEvent
@property (nonatomic, getter=isEyesFree) BOOL eyesFree; // ivar: _eyesFree
@property (nonatomic, getter=_hasCalledBeginAppearanceTransition, setter=_setHasCalledBeginAppearanceTransition:) BOOL hasCalledBeginAppearanceTransition; // ivar: _hasCalledBeginAppearanceTransition
@property (nonatomic, getter=_hasCalledEndAppearanceTransition, setter=_setHasCalledEndAppearanceTransition:) BOOL hasCalledEndAppearanceTransition; // ivar: _hasCalledEndAppearanceTransition
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect hostedPresentationFrame; // ivar: _hostedPresentationFrame
@property (nonatomic, getter=_isInHoldToTalkMode, setter=_setInHoldToTalkMode:) BOOL inHoldToTalkMode; // ivar: _inHoldToTalkMode
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly, nonatomic) BOOL isProcessingAcousticIdRequest;
@property (nonatomic, getter=_isPunchingOut, setter=_setPunchingOut:) BOOL punchingOut; // ivar: _punchingOut
@property (nonatomic) BOOL receivedIncomingPhoneCall; // ivar: _receivedIncomingPhoneCall
@property (retain, nonatomic, getter=_recordingStartedTimeValue, setter=_setRecordingStartedTimeValue:) NSNumber *recordingStartedTimeValue; // ivar: _recordingStartedTimeValue
@property (readonly, nonatomic, getter=_remoteViewController) AFUISiriRemoteSceneViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly, nonatomic, getter=_remoteViewControllerDispatchQueue) NSObject<OS_dispatch_queue> *remoteViewControllerDispatchQueue; // ivar: _remoteViewControllerDispatchQueue
@property (retain, nonatomic) SiriUIAudioRoutePickerController *routePickerController; // ivar: _routePickerController
@property (readonly, nonatomic, getter=_session) AFUISiriSession *session; // ivar: _session
@property (nonatomic) BOOL showsStatusBar; // ivar: _showsStatusBar
@property (nonatomic, getter=_siriRemoteViewControllerIsEditing, setter=_setSiriRemoteViewControllerIsEditing:) BOOL siriRemoteViewControllerIsEditing; // ivar: _siriRemoteViewControllerIsEditing
@property (nonatomic) BOOL skipLoggingListeningEventForLaunchIntoListening; // ivar: _skipLoggingListeningEventForLaunchIntoListening
@property (retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar; // ivar: _statusBar
@property (nonatomic) BOOL statusBarEnabled; // ivar: _statusBarEnabled
@property (nonatomic, getter=_statusViewHidden, setter=_setStatusViewHidden:) BOOL statusViewHidden; // ivar: _statusViewHidden
@property (readonly) Class superclass;
@property (nonatomic) BOOL turnsOnScreenOnAppearance; // ivar: _turnsOnScreenOnAppearance
@property (retain, nonatomic) UIView<AFUISiriRemoteViewHosting> *view;
@property (nonatomic, getter=_viewDidAppearTime, setter=_setViewDidAppearTime:) CGFloat viewDidAppearTime; // ivar: _viewDidAppearTime
@property (nonatomic, getter=isViewDisappearing) BOOL viewDisappearing; // ivar: _viewDisappearing
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_canIgnoreHoldToTalkThreshold;
-(BOOL)_canShowWhileLocked;
-(BOOL)_holdToTalkThresholdHasElapsed;
-(BOOL)_isDeviceScreenOn;
-(BOOL)_isInitialSpeechRequest;
-(BOOL)_isTextInputEnabled;
-(BOOL)_recordingStartedOnRoute;
-(BOOL)_shouldShowVoiceActivationMaskViewWithSiriView:(id)arg0 requestSource:(NSInteger)arg1 screenOff:(BOOL)arg2 connectedToCarPlay:(BOOL)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isInitialBringUp;
-(BOOL)isListening;
-(BOOL)isPreventingActivationGesture;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(BOOL)shouldNonLocalDelegateHandlePunchouts;
-(BOOL)siriView:(id)arg0 attemptUnlockWithPassword:(id)arg1 ;
-(BOOL)siriViewShouldSupportTextInput:(id)arg0 ;
-(CGFloat)_delayForHoldToTalkStopRequestsWithSource:(NSInteger)arg0 ;
-(CGFloat)_manualEndpointingThreshold;
-(CGFloat)_thresholdForBarSwipeDismissal;
-(NSInteger)carPlayEnhancedVoiceTriggerModeForSiriSession:(id)arg0 ;
-(NSInteger)currentSource;
-(NSInteger)getDeviceOrientation:(id)arg0 ;
-(NSInteger)keyboardAppearance;
-(NSInteger)siriRemoteViewControllerRequestsActivationSource:(id)arg0 ;
-(NSInteger)userAccountCountForSiriView:(id)arg0 ;
-(NSUInteger)_currentSessionAvailabilityState;
-(NSUInteger)lockStateForSiriRemoteViewController:(id)arg0 ;
-(NSUInteger)lockStateForSiriSession:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(float)audioRecordingPowerLevelForSiriView:(id)arg0 ;
-(id)_carPlaySiriView;
-(id)_compactSiriView;
-(id)_configuration;
-(id)_fullSiriView;
-(id)_orbViewControllingView;
-(id)_siriView;
-(id)_systemState;
-(id)_uiPresentationIdentifier;
-(id)activeAccountForSiriView:(id)arg0 ;
-(id)assistantVersionForSiriView:(id)arg0 ;
-(id)bulletinsForSiriSession:(id)arg0 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)contextAppInfosForSiriSession:(id)arg0 ;
-(id)currentCarPlaySupportedOEMAppIDListForSiriSession:(id)arg0 ;
-(id)currentRequestOptions;
-(id)initWithConnection:(id)arg0 configuration:(id)arg1 ;
-(id)initWithConnection:(id)arg0 configuration:(id)arg1 requestSource:(NSInteger)arg2 ;
-(id)siriRemoteViewController:(id)arg0 bulletinWithIdentifier:(id)arg1 ;
-(id)starkAppBundleIdentifierContextForSiriSession:(id)arg0 ;
-(id)underlyingConnection;
-(struct ? )_keyboardInfoFromNotification:(id)arg0 ;
-(void)_activationTriggerDidRelease:(id)arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_didDetectAudioRoutePickerTap;
-(void)_donateUIDismissalToBiome:(NSUInteger)arg0 ;
-(void)_enqueueRemoteViewControllerMessageBlock:(id)arg0 ;
-(void)_enterHoldToTalkMode;
-(void)_exitHoldToTalkMode;
-(void)_handleHelpAction;
-(void)_handleMicButtonLongPressBeganFromSource:(NSInteger)arg0 ;
-(void)_handleMicButtonLongPressEndedFromSource:(NSInteger)arg0 ;
-(void)_handleMicButtonTapFromSource:(NSInteger)arg0 ;
-(void)_handleReportBugAction;
-(void)_handleReportBugLongPressAction;
-(void)_handleSiriDidActivateFromSource:(NSInteger)arg0 ;
-(void)_hideStatusBarAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_holdToTalkTriggerDidReleaseFromSource:(NSInteger)arg0 ;
-(void)_informRemoteViewControllerOfOrbViewTapToCancelRequest;
-(void)_informRemoteViewControllerOfParentIfNecessary;
-(void)_keyboardDidHideNotification:(id)arg0 ;
-(void)_keyboardDidShowNotification:(id)arg0 ;
-(void)_presentDeferredFlamesViewIfNecessary;
-(void)_presentRemoteViewController;
-(void)_recordUIAppearance;
-(void)_recordUIDismissal;
-(void)_removeStatusBar;
-(void)_resumeRemoteViewControllerDispatchQueue;
-(void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg0 ;
-(void)_sendEndAppearanceTransitionIfReady;
-(void)_setAudioRoutePickerBluetoothOn:(BOOL)arg0 ;
-(void)_setFullScreenDimmingLayerVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setInFluidDismissal:(BOOL)arg0 ;
-(void)_setRecordingStartedOnRoute:(BOOL)arg0 ;
-(void)_setShowAudioRoutePicker:(BOOL)arg0 ;
-(void)_setShowKeyboardIfTextInputEnabled:(BOOL)arg0 ;
-(void)_setShowKeyboardIfTextInputEnabled:(BOOL)arg0 minimized:(BOOL)arg1 ;
-(void)_setTypeToSiriViewHidden:(BOOL)arg0 ;
-(void)_setVoiceTriggerEnabled:(BOOL)arg0 ;
-(void)_showStatusBarAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_showVoiceActivationMaskView:(BOOL)arg0 ;
-(void)_statusBarFrameDidChange:(id)arg0 ;
-(void)_stopRequestWithOptions:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)_suspendRemoteViewControllerDispatchQueue;
-(void)_transitionToAutomaticEndpointMode;
-(void)_transitionToManualEndpointMode;
-(void)_triggerPeopleSuggesterLogging;
-(void)_updateAudioRoutePicker;
-(void)_updateRemoteViewControllerStateForAppearance;
-(void)_updateSiriAvailability:(NSUInteger)arg0 ;
-(void)_willEnterFullScreenScreenshotMode:(id)arg0 ;
-(void)animateOrbViewDismissalIfNecessaryWithCompletion:(id)arg0 ;
-(void)animatedAppearanceWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)animatedDisappearanceWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)cancelSpeechRecordingIfNecessary;
-(void)commandCache:(id)arg0 didSuccessfullyHandleCommandsInDelayedActionCommand:(id)arg1 ;
-(void)compactView:(id)arg0 blurVisibilityDidChange:(BOOL)arg1 ;
-(void)compactView:(id)arg0 bottomContentInsetDidChange:(CGFloat)arg1 ;
-(void)deactivateScene;
-(void)dealloc;
-(void)defrost;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveButtonUpWithRequestOptions:(id)arg0 ;
-(void)dismissSiriRemoteViewController:(id)arg0 userInfo:(id)arg1 withReason:(NSUInteger)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)emitInstrumentationEvent:(id)arg0 ;
-(void)emitInstrumentationEvent:(id)arg0 atTime:(NSUInteger)arg1 ;
-(void)emitUIStateTransitionForSiriDismissalWithReason:(NSUInteger)arg0 ;
-(void)endSession;
-(void)enterUITrackingMode;
-(void)exitUITrackingMode;
-(void)handlePasscodeUnlockAndCancelRequest:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)handlePasscodeUnlockWithCompletion:(id)arg0 ;
-(void)handlePunchoutCommand:(id)arg0 completion:(id)arg1 ;
-(void)handleViewFullyRevealed;
-(void)hasContentAtPoint:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)hideVoiceActivationMaskViewIfNecessary;
-(void)invalidate;
-(void)keyboardView:(id)arg0 didReceiveText:(id)arg1 ;
-(void)keyboardViewDidReceiveAudioRouteAction:(id)arg0 ;
-(void)keyboardViewDidReceiveBugButtonLongPress:(id)arg0 ;
-(void)keyboardViewDidReceiveHelpButtonAction:(id)arg0 ;
-(void)keyboardViewDidReceiveReportBugAction:(id)arg0 ;
-(void)loadView;
-(void)openURL:(id)arg0 bundleId:(id)arg1 inPlace:(BOOL)arg2 completion:(id)arg3 ;
-(void)preheat;
-(void)preloadPluginBundles;
-(void)preloadPresentationBundleWithIdentifier:(id)arg0 ;
-(void)presentRemoteViewControllerIfNecessary;
-(void)presentationStateUpdatedFromPresentationState:(NSInteger)arg0 toPresentationState:(NSInteger)arg1 ;
-(void)proximityStatusChanged:(BOOL)arg0 ;
-(void)reactivateScene;
-(void)requestBlurVisible:(BOOL)arg0 reason:(NSInteger)arg1 fence:(id)arg2 ;
-(void)requestStatusBarVisible:(BOOL)arg0 ;
-(void)requestStatusBarVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)resetContextTypes:(NSInteger)arg0 ;
-(void)resetGestureBehaviors;
-(void)routePickerController:(id)arg0 hasRoutesToPick:(BOOL)arg1 ;
-(void)routePickerControllerPickedNewRoute:(id)arg0 isBluetooth:(BOOL)arg1 ;
-(void)routePickerControllerWillDismiss:(id)arg0 ;
-(void)routePickerControllerWillShow:(id)arg0 ;
-(void)setAlertContext;
-(void)setDockFrame:(struct CGRect )arg0 ;
-(void)setFluidDismissalState:(id)arg0 ;
-(void)setLockState:(NSUInteger)arg0 ;
-(void)setShouldDismissForSwipesOutsideContent:(BOOL)arg0 ;
-(void)setShouldDismissForTapOutsideContent:(BOOL)arg0 ;
-(void)setShouldDismissForTapsOutsideContent:(BOOL)arg0 ;
-(void)setShouldPassTouchesThroughToSpringBoard:(BOOL)arg0 ;
-(void)setSiriRequestCancellationReason:(NSInteger)arg0 ;
-(void)setWaitingForTelephonyToStart:(BOOL)arg0 ;
-(void)shortTapActionWithRequestOptions:(id)arg0 ;
-(void)showPasscodeUnlockScreenForRequest:(id)arg0 unlockCompletion:(id)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg0 properties:(id)arg1 lockState:(NSUInteger)arg2 ;
-(void)siriContentDidReceiveOrbHoldDidBeginAction:(id)arg0 ;
-(void)siriContentDidReceiveOrbHoldDidEndAction:(id)arg0 ;
-(void)siriContentDidReceiveOrbTappedAction:(id)arg0 ;
-(void)siriContentDidReceiveReportBugAction:(id)arg0 ;
-(void)siriContentDidReceiveReportBugLongPress:(id)arg0 ;
-(void)siriDidActivateFromSource:(NSInteger)arg0 ;
-(void)siriDidDeactivate;
-(void)siriRemoteViewController:(id)arg0 didChangePresentationPeekMode:(NSUInteger)arg1 ;
-(void)siriRemoteViewController:(id)arg0 didDismissViewControllerWithStatusBarStyle:(NSInteger)arg1 ;
-(void)siriRemoteViewController:(id)arg0 didFinishTest:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 didPresentViewControllerWithStatusBarStyle:(NSInteger)arg1 ;
-(void)siriRemoteViewController:(id)arg0 didRequestCurrentTextInputWithReplyHandler:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 didRequestKeyboard:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 didRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg0 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 failTest:(id)arg1 withReason:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg0 handlePasscodeUnlockWithCompletion:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 invalidatedForReason:(NSUInteger)arg1 explanation:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg0 presentedIntentWithBundleId:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 requestsDismissalWithReason:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg0 requestsKeyboardWithCompletion:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 requestsPresentation:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 sceneDidActivateWithIdentifier:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setBugReportingAvailable:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setCarDisplaySnippetMode:(NSInteger)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setFullScreenDimmingLayerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg0 setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setRequestHandlingStatus:(NSUInteger)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg0 setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)siriRemoteViewController:(id)arg0 setStatusViewDisabled:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setStatusViewHidden:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 setTypeToSiriViewHidden:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 siriIdleAndQuietStatusDidChange:(BOOL)arg1 ;
-(void)siriRemoteViewController:(id)arg0 startRequestWithOptions:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg0 willDismissViewControllerWithStatusBarStyle:(NSInteger)arg1 ;
-(void)siriRemoteViewController:(id)arg0 willPresentViewControllerWithStatusBarStyle:(NSInteger)arg1 ;
-(void)siriRemoteViewController:(id)arg0 willStartTest:(id)arg1 ;
-(void)siriRemoteViewControllerCancelHIDEventDefferal:(id)arg0 ;
-(void)siriRemoteViewControllerDidDeactivateScene:(id)arg0 ;
-(void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(id)arg0 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg0 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg0 ;
-(void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg0 ;
-(void)siriRemoteViewControllerDidEndEditing:(id)arg0 ;
-(void)siriRemoteViewControllerDidEnterUITrackingMode:(id)arg0 ;
-(void)siriRemoteViewControllerDidExitUITrackingMode:(id)arg0 ;
-(void)siriRemoteViewControllerDidFinishDismissing:(id)arg0 ;
-(void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(id)arg0 ;
-(void)siriRemoteViewControllerDidPresentKeyboard:(id)arg0 ;
-(void)siriRemoteViewControllerDidPresentUserInterface:(id)arg0 ;
-(void)siriRemoteViewControllerDidResetTextInput:(id)arg0 ;
-(void)siriRemoteViewControllerPulseHelpButton:(id)arg0 ;
-(void)siriRemoteViewControllerRequestsHIDEventDefferal:(id)arg0 ;
-(void)siriRemoteViewControllerWillBeginEditing:(id)arg0 ;
-(void)siriSession:(id)arg0 didChangeToState:(NSInteger)arg1 ;
-(void)siriSession:(id)arg0 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)siriSession:(id)arg0 didReceiveDeviceUnlockRequestWithCompletion:(id)arg1 ;
-(void)siriSession:(id)arg0 failedToLaunchAppWithBundleIdentifier:(id)arg1 ;
-(void)siriSession:(id)arg0 speechRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(void)siriSession:(id)arg0 willProcessAppLaunchWithBundleIdentifier:(id)arg1 ;
-(void)siriSessionAudioOutputDidChangePowerLevel:(float)arg0 ;
-(void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg0 ;
-(void)siriSessionDidEnd:(id)arg0 ;
-(void)siriSessionDidFinishRequestWithError:(id)arg0 ;
-(void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg0 completion:(id)arg1 ;
-(void)siriSessionDidReceiveDelayedActionCommand:(id)arg0 completion:(id)arg1 ;
-(void)siriSessionDidReceiveSetUpdateMaskCommand:(id)arg0 completion:(id)arg1 ;
-(void)siriSessionDidReceiveTakeScreenshotCommand:(id)arg0 completion:(id)arg1 ;
-(void)siriSessionDidResetContext:(id)arg0 ;
-(void)siriSessionDidUpdateSessionInfo:(id)arg0 ;
-(void)siriSessionImmersiveExperienceRequested;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg0 ;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionWillEnd:(id)arg0 ;
-(void)siriView:(id)arg0 didReceiveSiriActivationMessageWithSource:(NSInteger)arg1 ;
-(void)siriViewDidReceiveAudioRouteAction:(id)arg0 ;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg0 ;
-(void)siriViewDidReceiveHelpAction:(id)arg0 ;
-(void)siriViewDidReceiveReportBugAction:(id)arg0 ;
-(void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg0 ;
-(void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg0 ;
-(void)siriViewDidRecieveStatusViewTappedAction:(id)arg0 ;
-(void)siriWillActivateFromSource:(NSInteger)arg0 ;
-(void)siriWillBeginTearDownForDismissalReason:(NSUInteger)arg0 ;
-(void)startGuidedAccessForRemoteViewController:(id)arg0 ;
-(void)startRequestWithActivationTrigger:(id)arg0 ;
-(void)startRequestWithActivationTrigger:(id)arg0 completion:(id)arg1 ;
-(void)startRequestWithOptions:(id)arg0 ;
-(void)startRequestWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)stopRequestWithOptions:(id)arg0 ;
-(void)tapPanDismissalPolicyManager:(id)arg0 dismissalPolicyDidChange:(BOOL)arg1 ;
-(void)telephonyRequestCompleted;
-(void)tvRemoteSentButtonDownWhileListening;
-(void)updateContexts:(NSInteger)arg0 ;
-(void)updateRequestOptions:(id)arg0 ;
-(void)updateToPresentationWithIdentifier:(id)arg0 presentationProperties:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif