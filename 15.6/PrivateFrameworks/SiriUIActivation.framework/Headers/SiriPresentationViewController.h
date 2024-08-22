// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIPRESENTATIONVIEWCONTROLLER_H
#define SIRIPRESENTATIONVIEWCONTROLLER_H

@class UIViewController, NSDate, AFRequestCompletionOptions, UIScreen, AFWatchdogTimer, NSTimer, BSServiceConnection, NSArray, NSString, AFUISiriLanguage, UINavigationController, AFUISiriSetupViewController, AFUISiriViewController, AFQueue, AFConnection;
@protocol SASStateChangeListener, AFUISiriLanguageDelegate, AFUISiriViewControllerDelegate, AFUISiriViewControllerDataSource, AFUISiriSetupViewControllerDelegate, SiriPresentation, OS_dispatch_queue, SiriPresentationIntentUsageDelegate, SiriPresentationControllerDelegate;



@interface SiriPresentationViewController : UIViewController <SASStateChangeListener, AFUISiriLanguageDelegate, AFUISiriViewControllerDelegate, AFUISiriViewControllerDataSource, AFUISiriSetupViewControllerDelegate, SiriPresentation>

 {
    InstrumentationDismissalState _instrumentationDismissalState;
    NSInteger _identifier;
    NSDate *_lastGuideCheck;
    AFRequestCompletionOptions *_completionOptions;
    UIScreen *_activeScreen;
    BOOL _activationHandled;
    BOOL _isIdleAndQuiet;
    id *_buttonTrigger;
    BOOL _receivedIncomingPhoneCall;
    NSObject<OS_dispatch_queue> *_watchdogQueue;
    os_unfair_lock_s _presentationStateProcessingLock;
    id *_dismissalCompletion;
}


@property (retain, nonatomic) AFWatchdogTimer *animationDismissalTimer; // ivar: _animationDismissalTimer
@property (nonatomic, getter=_buttonDownEventDidOccur, setter=_setButtonDownEventDidOccur:) BOOL buttonDownEventDidOccur; // ivar: _buttonDownEventDidOccur
@property (nonatomic, getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:) CGFloat buttonDownTimestamp; // ivar: _buttonDownTimestamp
@property (retain, nonatomic, getter=_carSiriButtonHoldToTalkTimer, setter=_setCarSiriButtonHoldToTalkTimer:) NSTimer *carSiriButtonHoldToTalkTimer; // ivar: _carSiriButtonHoldToTalkTimer
@property (nonatomic, getter=_carSiriButtonTimeInterval, setter=_setCarSiriButtonTimeInterval:) CGFloat carSiriButtonTimeInterval; // ivar: _carSiriButtonTimeInterval
@property (retain, nonatomic) NSTimer *clearSiriViewControllerTimer; // ivar: _clearSiriViewControllerTimer
@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSArray *contextAppInfosForSiriViewController; // ivar: _contextAppInfosForSiriViewController
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList; // ivar: _currentCarPlaySupportedOEMAppIdList
@property (nonatomic) NSUInteger currentLockState; // ivar: _currentLockState
@property (nonatomic) NSInteger currentViewMode; // ivar: _currentViewMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect hostedPresentationFrame; // ivar: _hostedPresentationFrame
@property (readonly, nonatomic) NSInteger identifier; // ivar: identifier
@property (retain, nonatomic) NSObject<SiriPresentationIntentUsageDelegate> *intentUsageDelegate;
@property (retain, nonatomic) NSObject<SiriPresentationIntentUsageDelegate> *intentUsageDelegate; // ivar: _intentUsageDelegate
@property (nonatomic, getter=_isVoiceActivationMaskShown, setter=_setVoiceActivationMaskShown:) BOOL isVoiceActivationMaskShown; // ivar: _isVoiceActivationMaskShown
@property (readonly, nonatomic, getter=_language) AFUISiriLanguage *language; // ivar: _language
@property (retain, nonatomic, getter=_lastAppUpdateTimestamp, setter=_setLastAppUpdateTimestamp:) NSDate *lastAppUpdateTimestamp; // ivar: _lastAppUpdateTimestamp
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSTimer *pongTimer; // ivar: _pongTimer
@property (nonatomic) BOOL predictedRecordRouteIsZLL; // ivar: _predictedRecordRouteIsZLL
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (getter=_shouldDeferWake, setter=_setShouldDeferWake:) BOOL shouldDeferWake; // ivar: _shouldDeferWake
@property (weak, nonatomic) NSObject<SiriPresentationControllerDelegate> *siriPresentationControllerDelegate; // ivar: siriPresentationControllerDelegate
@property (retain, nonatomic) UINavigationController *siriSetupNavigationController; // ivar: _siriSetupNavigationController
@property (retain, nonatomic) AFUISiriSetupViewController *siriSetupViewController; // ivar: _siriSetupViewController
@property (retain, nonatomic) AFUISiriViewController *siriViewController; // ivar: _siriViewController
@property (nonatomic, getter=_isSpringBoardIdleTimerDisabled, setter=_setSpringBoardIdleTimerDisabled:) BOOL springBoardIdleTimerDisabled; // ivar: _springBoardIdleTimerDisabled
@property (retain, nonatomic) NSArray *starkAppBundleIdentifierContext; // ivar: _starkAppBundleIdentifierContext
@property (nonatomic, getter=_startGuidedAccessOnDismissal, setter=_setStartGuidedAccessOnDismissal:) BOOL startGuidedAccessOnDismissal; // ivar: _startGuidedAccessOnDismissal
@property (readonly) Class superclass;
@property (copy, nonatomic, getter=_testInputQueue) AFQueue *testInputQueue; // ivar: _testInputQueue
@property (retain, nonatomic) AFConnection *unownedConnection; // ivar: _unownedConnection
@property (nonatomic, getter=_isWaitingForTelephonyToStart, setter=_setWaitingForTelephonyToStart:) BOOL waitingForTelephonyToStart; // ivar: _waitingForTelephonyToStart
@property (nonatomic, getter=_wasScreenOffDuringActivation, setter=_setScreenOffDuringActivation:) BOOL wasScreenOffDuringActivation; // ivar: _wasScreenOffDuringActivation


+(id)extractTestingInputsFromContext:(id)arg0 ;
-(BOOL)_buttonIdentifierIsHoldToTalkTrigger:(NSInteger)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_cancelPendingPhoneCall;
-(BOOL)_handleTapButtonBehavior:(NSInteger)arg0 ;
-(BOOL)_handleTapDismissal:(NSInteger)arg0 ;
-(BOOL)_hasTestingInput;
-(BOOL)_isDelayingSessionEnd;
-(BOOL)_isDeviceButton:(NSInteger)arg0 ;
-(BOOL)_releaseExistingTrigger;
-(BOOL)_shouldAllowResizingBetweenModesForViewMode:(NSInteger)arg0 ;
-(BOOL)_shouldHandleNewRequestWithOptions:(id)arg0 currentRequest:(id)arg1 ;
-(BOOL)_shouldKeepPonging;
-(BOOL)_shouldProceedPresentingSiriViewController;
-(BOOL)_shouldRequestPresentationForState:(NSInteger)arg0 forNewRequest:(id)arg1 currentRequest:(id)arg2 ;
-(BOOL)_shouldShowSetupViewController;
-(BOOL)isEnabled;
-(BOOL)presentationHostedInSpringBoard;
-(BOOL)presentationisIdleAndQuiet;
-(BOOL)shouldAutorotate;
-(BOOL)siriSetupViewController:(id)arg0 openURL:(id)arg1 ;
-(BOOL)siriViewController:(id)arg0 attemptUnlockWithPassword:(id)arg1 ;
-(BOOL)siriViewControllerShouldEndSession:(id)arg0 ;
-(BOOL)siriViewControllerShouldSupportTextInput:(id)arg0 ;
-(NSInteger)_viewModeForRequestOptions:(id)arg0 ;
-(NSInteger)preferredFlamesViewFidelity;
-(NSUInteger)_dismissalReasonForDismissalWithOptions:(id)arg0 ;
-(NSUInteger)_impliedDismissalReasonFromState;
-(NSUInteger)lockStateForSiriViewController:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_analytics;
-(id)_createPresentationPropertiesWithRequestOptions:(id)arg0 ;
-(id)_createSiriViewControllerWithRequestOptions:(id)arg0 ;
-(id)_dequeueTestingInput;
-(id)_fallbackScreenForIdentifier:(NSInteger)arg0 ;
-(id)_uiPresentationIdentifier;
-(id)_updateDismissalOptionsIfNecessary:(id)arg0 ;
-(id)_updateRequestOptionsWithTestingInput:(id)arg0 ;
-(id)bulletinsForSiriViewController:(id)arg0 ;
-(id)contextAppInfosForSiriViewController:(id)arg0 ;
-(id)currentCarPlaySupportedOEMAppsForSiriViewController:(id)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 hostedPresentationFrame:(struct CGRect )arg1 ;
-(id)siriViewController:(id)arg0 bulletinWithIdentifier:(id)arg1 ;
-(id)siriViewController:(id)arg0 didStopRequestWithOptions:(id)arg1 ;
-(id)siriViewController:(id)arg0 willStartRequestWithOptions:(id)arg1 ;
-(id)starkAppBundleIdentifierContextForSiriViewController:(id)arg0 ;
-(struct CGRect )_fallbackFrameForScreen:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(struct UIEdgeInsets )safeAreaInsetsForSceneCreationInSiriViewController:(id)arg0 ;
-(void)_applicationsDidChange;
-(void)_callIsActiveDidChangeNotification:(id)arg0 ;
-(void)_cancelPendingActivationWithReason:(NSUInteger)arg0 ;
-(void)_carSiriButtonHoldToTalkIntervalFiredWithButtonIdentifier:(NSInteger)arg0 ;
-(void)_checkForGuideUpdatesIfNecessary;
-(void)_cleanupUnownedConnection;
-(void)_clearAllTestingInputs;
-(void)_clearSiriViewControllerWithCompletion:(id)arg0 ;
-(void)_dismissDueToUnexpectedError:(id)arg0 ;
-(void)_dismissSiriSetup;
-(void)_emitInstrumentationDismissalStateWithReason:(NSUInteger)arg0 ;
-(void)_enableAudioInjection:(BOOL)arg0 audioFiles:(id)arg1 ;
-(void)_enableSpringBoardIdleTimer;
-(void)_enqueueTestInput:(id)arg0 ;
-(void)_finishClearingSiriViewController:(id)arg0 ;
-(void)_handleButtonDownWhileListeningFromButtonIdentifier:(id)arg0 timestamp:(id)arg1 context:(id)arg2 ;
-(void)_handleContextClearForRequestOptions:(id)arg0 ;
-(void)_instrumentSuccessfulAppLaunchIfNecessary;
-(void)_invalidateCarSiriButtonHoldToTalkTimer;
-(void)_logDismissalRequestedForViewMode:(NSInteger)arg0 withDismissalReason:(NSUInteger)arg1 ;
-(void)_logDismissalToPowerLogWithReason:(NSUInteger)arg0 ;
-(void)_logSignatureWithType:(id)arg0 subType:(id)arg1 context:(id)arg2 ;
-(void)_prepareSiriViewControllerWithRequestOptions:(id)arg0 ;
-(void)_presentSiriViewControllerWithPresentationOptions:(id)arg0 requestOptions:(id)arg1 ;
-(void)_presentationDismissalRequestedWithOptions:(id)arg0 withCompletion:(id)arg1 ;
-(void)_presentationRequestedHandlerWithRequestOptions:(id)arg0 ;
-(void)_presentationRequestedWithPresentationOptions:(id)arg0 requestOptions:(id)arg1 ;
-(void)_processConnectionHouseKeeping;
-(void)_processIncomingRequestOptionsForTestingPayload:(id)arg0 ;
-(void)_punchout:(id)arg0 completion:(id)arg1 ;
-(void)_removePreviousConversationIfNeededWithTestName:(id)arg0 testOptions:(id)arg1 ;
-(void)_removePreviousInjectAudioSettings;
-(void)_removeSetupViewControllerIfNecessary;
-(void)_requestDismissal;
-(void)_requestDismissalWithOptions:(id)arg0 ;
-(void)_requestHomeAffordanceSuppression:(NSInteger)arg0 ;
-(void)_requestPresentationWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)_resetStateForInstrumentation;
-(void)_runSyntheticButtonActivationTest;
-(void)_scheduleConnectionHouseKeepingAfterDelay:(CGFloat)arg0 ;
-(void)_sendTelephonyHasStartedAfterDelay:(CGFloat)arg0 ;
-(void)_setUpUnownedConnectionIfNecessary;
-(void)_setupPongTimer;
-(void)_setupSiriViewControllerPresentedSuccessHandler;
-(void)_showPresentationAndActivateWithRequestOptions:(id)arg0 ;
-(void)_showSetupViewControllerIfNecessary;
-(void)_siriDidOpenURL:(id)arg0 ;
-(void)_startRequestWithOptions:(id)arg0 ;
-(void)_startUIRequestWithText:(id)arg0 testName:(id)arg1 ;
-(void)_teardownPongTimer;
-(void)_telephonyHasStarted;
-(void)_updateAnnouncementRequestsPermittedWhilePresentationActive:(BOOL)arg0 ;
-(void)_updateHostedPresentationFrame;
-(void)_updateLanguageCode;
-(void)_waitForPing;
-(void)_wasDismissedWithCompletion:(id)arg0 ;
// -(void)_watchdogQueue_startAnimationDismissalWatchdogTimerWithTimeoutHandler:(id)arg0 shouldTurnScreenOff:(unk)arg1  ;
// -(void)_watchdogQueue_stopAnimationDismissalWatchdogTimerIfNeededThen:(id)arg0 onQueue:(unk)arg1  ;
-(void)activateWithRequestOptions:(id)arg0 ;
-(void)activateWithSource:(NSInteger)arg0 requestOptions:(id)arg1 timestamp:(id)arg2 ;
-(void)activateWithSource:(NSInteger)arg0 timestamp:(id)arg1 ;
-(void)activationDeterminedShouldDeferWake:(id)arg0 ;
-(void)animatedAppearanceWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)animatedDisappearanceWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)bulletinManagerDidChangeBulletins;
-(void)callStateChangedToIsActive:(BOOL)arg0 isOutgoing:(BOOL)arg1 ;
-(void)cancelPendingActivationEventWithReason:(id)arg0 ;
-(void)cancelPreheat;
-(void)dealloc;
-(void)deviceWonMyriadElection;
-(void)disableSiriActivationRequestedBySiriSetupViewController:(id)arg0 ;
-(void)dismiss;
-(void)dismissSiriSetupViewController:(id)arg0 ;
-(void)dismissSiriViewController:(id)arg0 withReason:(NSUInteger)arg1 ;
-(void)dismissWithOptions:(id)arg0 ;
-(void)handleButtonDownFromButtonIdentifier:(id)arg0 timestamp:(id)arg1 context:(id)arg2 ;
-(void)handleButtonLongPressFromButtonIdentifier:(id)arg0 deviceIdentifier:(id)arg1 timestamp:(id)arg2 context:(id)arg3 ;
-(void)handleButtonTapFromButtonIdentifier:(id)arg0 ;
-(void)handleButtonUpFromButtonIdentifier:(id)arg0 deviceIdentifier:(id)arg1 timestamp:(id)arg2 context:(id)arg3 ;
-(void)handleRequestWithOptions:(id)arg0 ;
-(void)hasContentAtPoint:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)openSiriRequestedBySiriSetupViewController:(id)arg0 ;
-(void)openURL:(id)arg0 bundleId:(id)arg1 inPlace:(BOOL)arg2 completion:(id)arg3 ;
-(void)ping;
-(void)preheat;
-(void)presentationDismissalRequestedWithOptions:(id)arg0 ;
-(void)presentationRequestedWithPresentationOptions:(id)arg0 requestOptions:(id)arg1 ;
-(void)prewarmOrbViewShaders;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg0 ;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriViewController:(id)arg0 didChangePresentationPeekMode:(NSUInteger)arg1 ;
-(void)siriViewController:(id)arg0 didCompleteRequestWithError:(id)arg1 ;
-(void)siriViewController:(id)arg0 didEncounterUnexpectedError:(id)arg1 ;
-(void)siriViewController:(id)arg0 didHideStatusView:(BOOL)arg1 ;
-(void)siriViewController:(id)arg0 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg1 ;
-(void)siriViewController:(id)arg0 failedToLaunchAppWithBundleIdentifier:(id)arg1 ;
-(void)siriViewController:(id)arg0 onboardingScreenContinueButtonTappedWithRequestOptions:(id)arg1 ;
-(void)siriViewController:(id)arg0 presentedIntentWithBundleId:(id)arg1 ;
-(void)siriViewController:(id)arg0 requestsDismissalWithReason:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)siriViewController:(id)arg0 requestsPresentation:(id)arg1 ;
-(void)siriViewController:(id)arg0 siriIdleAndQuietStatusDidChange:(BOOL)arg1 ;
-(void)siriViewController:(id)arg0 updateHomeAffordanceForBlurVisibilty:(BOOL)arg1 ;
-(void)siriViewController:(id)arg0 voiceActivationMaskViewIsVisible:(BOOL)arg1 ;
-(void)siriViewController:(id)arg0 willProcessAppLaunchWithBundleIdentifier:(id)arg1 ;
-(void)siriViewControllerDidChangeVisibility:(id)arg0 ;
-(void)siriViewControllerDidFinishDismissing:(id)arg0 ;
-(void)siriViewControllerSessionDidResetContext:(id)arg0 ;
// -(void)startAnimationDismissalWatchdogTimerWithTimeoutHandler:(id)arg0 shouldTurnScreenOff:(unk)arg1  ;
-(void)startGuidedAccessForSiriViewController:(id)arg0 ;
// -(void)stopAnimationDimissalWatchdogTimerIfNeededThen:(id)arg0 onQueue:(unk)arg1  ;
-(void)updateCurrentLockState:(id)arg0 ;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)wakeScreenAfterActivationWithReason:(id)arg0 ;


@end


#endif