// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFCONNECTION_H
#define AFCONNECTION_H

@class NSXPCConnection, NSString, NSArray, NSUUID, NSMutableDictionary, NSError, USTAgentConnection;
@protocol NSXPCListenerDelegate, AFAudioPowerUpdaterDelegate, AFAccessibilityListening, AFDeviceRingerSwitchListening, AFInterstitialProviderDelegate, OS_dispatch_queue, OS_dispatch_group, AFAssistantUIService, AFSpeechDelegate;

#import <Foundation/Foundation.h>

#import "AFCallSiteInfo.h"
#import "AFWatchdogTimer.h"
#import "AFOneArgumentSafetyBlock.h"
#import "AFAudioPowerUpdater.h"
#import "AFClientConfiguration.h"
#import "AFInterstitialProvider.h"
#import "AFQueue.h"
#import "AFInstanceContext.h"
#import "AFAnalytics.h"
#import "AFSiriClientStateManager.h"

@interface AFConnection : NSObject <NSXPCListenerDelegate, AFAudioPowerUpdaterDelegate, AFAccessibilityListening, AFDeviceRingerSwitchListening, AFInterstitialProviderDelegate>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_outstandingRequestClass;
    *void _clientID;
    AFCallSiteInfo *_initiationCallSiteInfo;
    NSArray *_cachedBulletins;
    NSUUID *_activeRequestUUID;
    NSInteger _activeRequestType;
    NSInteger _activeRequestUsefulUserResultType;
    AFWatchdogTimer *_requestTimeoutTimer;
    AFOneArgumentSafetyBlock *_requestCompletion;
    NSInteger _activeRequestActivationEvent;
    NSInteger _activeRequestSpeechEvent;
    BOOL _activeRequestHasSpeechRecognition;
    BOOL _activeRequestIsDucking;
    BOOL _activeRequestIsTwoShot;
    CGFloat _activeRequestBeginTime;
    NSUInteger _activeRequestSpeechEndHostTime;
    NSUInteger _activeRequestNumberOfPresentedInterstitials;
    CGFloat _activeRequestStartSpeechTimeRequested;
    CGFloat _activeRequestStartSpeechTimeAPICalled;
    CGFloat _activeRequestStopSpeechTimeRequested;
    CGFloat _activeRequestStopSpeechTimeAPICalled;
    CGFloat _activeRequestSpeechRecordingEndTimeInterval;
    CGFloat _activeRequestSpeechRecognitionTimeInterval;
    CGFloat _activeRequestInitialInterstitialBeginTimeInterval;
    NSUUID *_activeTurnIdentifer;
    NSMutableDictionary *_replyHandlerForAceId;
    BOOL _stateInSync;
    BOOL _shouldSpeak;
    BOOL _isCapturingSpeech;
    BOOL _hasOutstandingRequest;
    unsigned int _audioSessionID;
    NSString *_recordRoute;
    NSString *_playbackRoute;
    AFAudioPowerUpdater *_inputAudioPowerUpdater;
    AFClientConfiguration *_clientConfiguration;
    AFInterstitialProvider *_interstitialProvider;
    AFQueue *_interstitialCommandQueue;
    BOOL _clientConfigurationIsInSync;
    BOOL _voiceOverIsActive;
    NSError *_lastRetryError;
    NSUInteger _pendingSpeechRequestCounter;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    USTAgentConnection *_testAgentConnection;
    NSUInteger _uufrID;
    AFInstanceContext *_instanceContext;
    AFAnalytics *_analytics;
    AFSiriClientStateManager *_siriClientStateManager;
    uint8_t _activePlaybackCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFAssistantUIService> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActiveRequest;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRecording;
@property (weak, nonatomic) NSObject<AFSpeechDelegate> *speechDelegate; // ivar: _speechDelegate
@property (readonly) Class superclass;


+(BOOL)assistantIsSupported;
+(BOOL)assistantIsSupportedForLanguageCode:(id)arg0 error:(*id)arg1 ;
+(BOOL)isAvailable;
+(BOOL)isNetworkAvailable;
+(BOOL)siriIsSupportedForLanguageCode:(id)arg0 deviceProductVersion:(id)arg1 error:(*id)arg2 ;
+(BOOL)siriIsSupportedForLanguageCode:(id)arg0 productName:(id)arg1 productVersion:(id)arg2 error:(*id)arg3 ;
+(BOOL)userDataSyncNeeded;
+(id)currentLanguageCode;
+(id)outputVoice;
+(void)beginMonitoringAvailability;
+(void)defrost;
+(void)initialize;
+(void)stopMonitoringAvailability;
-(BOOL)_shouldEmitUEIRequestLinkForRequestInfo:(id)arg0 ;
-(BOOL)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg0 ;
-(BOOL)shouldSpeak;
-(float)averagePower;
-(float)peakPower;
-(id)_activeRequestUUID;
-(id)_cachedBulletins;
-(id)_clientConfiguration;
-(id)_clientService;
-(id)_clientServiceWithErrorHandler:(id)arg0 ;
-(id)_connection;
-(id)_metricContextValueForUseDeviceSpeakerForTTS:(NSInteger)arg0 ;
-(id)_siriClientStateManager;
-(id)_startRequestMetricSettings;
-(id)_testAgent;
-(id)acquireUserInteractionAssertion;
-(id)init;
-(id)initWithTargetQueue:(id)arg0 ;
-(id)initWithTargetQueue:(id)arg0 instanceContext:(id)arg1 ;
-(id)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(SEL)arg0 ;
-(unsigned int)audioSessionID;
-(void)_aceConnectionWillRetryOnError:(id)arg0 ;
-(void)_barrier;
-(void)_beginInterstitialsForReason:(id)arg0 ;
-(void)_cancelRequestTimeoutForReason:(id)arg0 ;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg0 ;
-(void)_clearAssistantInfoForAccountWithIdentifier:(id)arg0 ;
-(void)_clearConnection;
-(void)_completeRequestWithUUID:(id)arg0 forReason:(NSInteger)arg1 error:(id)arg2 ;
-(void)_connectionFailedWithError:(id)arg0 ;
-(void)_destroyTestAgent;
-(void)_dispatchCallbackGroupBlock:(id)arg0 ;
-(void)_dispatchCommand:(id)arg0 isInterstitial:(BOOL)arg1 interstitialPhase:(NSInteger)arg2 interstitialDelay:(CGFloat)arg3 reply:(id)arg4 ;
-(void)_endInterstitialsForReason:(id)arg0 ;
-(void)_enqueueInterstitialCommand:(id)arg0 ;
-(void)_extendExistingRequestTimeoutForReason:(id)arg0 ;
-(void)_extendRequestTimeoutForReason:(id)arg0 ;
-(void)_fetchShouldSpeak:(id)arg0 ;
-(void)_handleCommand:(id)arg0 reply:(id)arg1 ;
-(void)_handleInterstitialPhase:(NSInteger)arg0 fromProvider:(id)arg1 displayText:(id)arg2 speakableText:(id)arg3 expectedDelay:(CGFloat)arg4 context:(id)arg5 completion:(id)arg6 ;
-(void)_invokeRequestTimeoutForReason:(id)arg0 ;
-(void)_markIsDucking;
-(void)_markIsTwoShot;
-(void)_markSpeechRecognized;
-(void)_pauseRequestTimeoutForReason:(id)arg0 ;
-(void)_requestDidEnd;
-(void)_requestWillBeginWithRequestClass:(id)arg0 isSpeechRequest:(BOOL)arg1 speechRequestOptions:(id)arg2 requestInfo:(id)arg3 analyticsEventProvider:(id)arg4 ;
-(void)_requestWillBeginWithRequestClass:(id)arg0 isSpeechRequest:(BOOL)arg1 speechRequestOptions:(id)arg2 requestInfo:(id)arg3 isBackgroundRequest:(BOOL)arg4 analyticsEventProvider:(id)arg5 ;
-(void)_resumeRequestTimeoutForReason:(id)arg0 ;
-(void)_scheduleRequestTimeoutForReason:(id)arg0 ;
-(void)_setAudioSessionID:(unsigned int)arg0 ;
-(void)_setRecordRoute:(id)arg0 ;
-(void)_setShouldSpeak:(BOOL)arg0 ;
-(void)_speechRecordingDidFailWithError:(id)arg0 ;
-(void)_startRequestWithAceCommand:(id)arg0 turnIdentifier:(id)arg1 suppressAlert:(BOOL)arg2 ;
-(void)_startRequestWithInfo:(id)arg0 ;
-(void)_startUIRequestWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)_startUIRequestWithText:(id)arg0 completion:(id)arg1 ;
-(void)_stopInputAudioPowerUpdates;
-(void)_tellDelegateAudioPlaybackRequestDidStart:(id)arg0 ;
-(void)_tellDelegateAudioPlaybackRequestDidStop:(id)arg0 error:(id)arg1 ;
-(void)_tellDelegateAudioPlaybackRequestWillStart:(id)arg0 ;
-(void)_tellDelegateAudioSessionDidBecomeActive:(BOOL)arg0 ;
-(void)_tellDelegateAudioSessionDidBeginInterruptionWithUserInfo:(id)arg0 ;
-(void)_tellDelegateAudioSessionDidEndInterruption:(BOOL)arg0 userInfo:(id)arg1 ;
-(void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg0 ;
-(void)_tellDelegateAudioSessionWillBecomeActive:(BOOL)arg0 ;
-(void)_tellDelegateCacheImage:(id)arg0 ;
-(void)_tellDelegateDidDetectMusic;
-(void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg0 ;
-(void)_tellDelegateExtensionRequestFinishedForApplication:(id)arg0 error:(id)arg1 ;
-(void)_tellDelegateExtensionRequestWillStartForApplication:(id)arg0 ;
-(void)_tellDelegateFailedToLaunchAppWithBundleIdentifier:(id)arg0 ;
-(void)_tellDelegateInvalidateCurrentUserActivity;
-(void)_tellDelegateRequestWillStart;
-(void)_tellDelegateSetUserActivityInfo:(id)arg0 webpageURL:(id)arg1 ;
-(void)_tellDelegateShouldSpeakChanged:(BOOL)arg0 ;
-(void)_tellDelegateStartPlaybackDidFail:(NSInteger)arg0 ;
-(void)_tellDelegateWillProcessAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)_tellDelegateWillProcessStartPlayback:(NSInteger)arg0 intent:(id)arg1 completion:(id)arg2 ;
-(void)_tellDelegateWillStartAcousticIDRequest;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg0 ;
-(void)_tellSpeechDelegateRecognitionUpdateWillBeginForTask:(id)arg0 ;
-(void)_tellSpeechDelegateRecognizedAdditionalSpeechInterpretation:(id)arg0 refId:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg0 audioSessionID:(unsigned int)arg1 ;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg0 ;
-(void)_tellSpeechDelegateRecordingDidDetectStartpoint;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg0 ;
-(void)_tellSpeechDelegateRecordingDidUpdateRecognitionPhrases:(id)arg0 utterances:(id)arg1 refId:(id)arg2 ;
-(void)_tellSpeechDelegateRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg0 ;
-(void)_tellSpeechDelegateSpeechRecognized:(id)arg0 ;
-(void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg0 ;
-(void)_tellSpeechDelegateToPerformTwoShotPromptWithType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)_updateClientConfiguration;
-(void)_updateSpeechEndHostTime:(NSUInteger)arg0 ;
-(void)_updateState;
-(void)_updateStateIfNotInSync;
-(void)_willCancelRequest;
-(void)_willCompleteRequest;
-(void)_willEndSession;
-(void)_willFailRequestWithError:(id)arg0 ;
-(void)_willPresentUsefulUserResultWithType:(NSInteger)arg0 ;
-(void)_willStartRequestWithSpeech:(BOOL)arg0 speechRequestOptions:(id)arg1 requestInfo:(id)arg2 analyticsEventProvider:(id)arg3 ;
-(void)_willStopRecordingWithSignpostID:(NSUInteger)arg0 ;
-(void)accessibilityObserver:(id)arg0 stateDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)acquireAudioSessionWithContext:(id)arg0 completion:(id)arg1 ;
-(void)adviseSessionArbiterToContinueWithPreviousWinner:(BOOL)arg0 ;
-(void)audioPowerUpdaterDidUpdate:(id)arg0 averagePower:(float)arg1 peakPower:(float)arg2 ;
-(void)boostedPreheatWithStyle:(NSInteger)arg0 completion:(id)arg1 ;
-(void)broadcastCommandDictionary:(id)arg0 ;
-(void)cancelRequest;
-(void)cancelRequestForReason:(NSInteger)arg0 ;
-(void)cancelSpeech;
-(void)checkLanguageReady:(id)arg0 completion:(id)arg1 ;
-(void)clearContext;
-(void)dealloc;
-(void)deviceRingerObserver:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)didDismissUI;
-(void)endSession;
-(void)failRequestWithError:(id)arg0 ;
-(void)fetchAppicationContextForApplicationInfo:(id)arg0 supplementalContext:(id)arg1 refID:(id)arg2 ;
-(void)fetchShouldSpeak:(id)arg0 ;
-(void)forceAudioSessionActive;
-(void)forceAudioSessionActiveWithContext:(id)arg0 completion:(id)arg1 ;
-(void)forceAudioSessionActiveWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)forceAudioSessionActiveWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)forceAudioSessionActiveWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 speechRequestOptions:(id)arg2 completion:(id)arg3 ;
-(void)forceAudioSessionInactive;
-(void)forceAudioSessionInactiveWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getCachedObjectsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)getDeferredObjectsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)getRemoteClockTimerSnapshotWithCompletion:(id)arg0 ;
-(void)interstitialProvider:(id)arg0 handlePhase:(NSInteger)arg1 displayText:(id)arg2 speakableText:(id)arg3 expectedDelay:(CGFloat)arg4 context:(id)arg5 completion:(id)arg6 ;
-(void)invalidate;
-(void)preheatWithStyle:(NSInteger)arg0 ;
-(void)preheatWithStyle:(NSInteger)arg0 forOptions:(id)arg1 ;
-(void)prepareForPhoneCall;
-(void)recordRequestMetric:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(void)recordUIMetrics:(id)arg0 ;
-(void)reportIssueForError:(id)arg0 type:(NSInteger)arg1 context:(id)arg2 ;
-(void)reportIssueForError:(id)arg0 type:(NSInteger)arg1 subtype:(id)arg2 context:(id)arg3 ;
-(void)reportIssueForType:(id)arg0 subtype:(id)arg1 context:(id)arg2 ;
-(void)requestBarrier:(id)arg0 ;
-(void)resumeInterruptedAudioPlaybackIfNeeded;
-(void)rollbackClearContext;
-(void)rollbackRequest;
-(void)sendFeedbackToAppPreferencesPredictorForMetricsContext:(id)arg0 selectedBundleId:(id)arg1 ;
-(void)sendGenericAceCommand:(id)arg0 ;
-(void)sendGenericAceCommand:(id)arg0 conflictHandler:(id)arg1 ;
-(void)sendGenericAceCommand:(id)arg0 turnIdentifier:(id)arg1 conflictHandler:(id)arg2 ;
-(void)sendReplyCommand:(id)arg0 ;
-(void)setAccessibilityState:(id)arg0 ;
-(void)setAlertContextWithBulletins:(id)arg0 ;
-(void)setAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)arg0 ;
-(void)setApplicationContext:(id)arg0 ;
-(void)setApplicationContextForApplicationInfos:(id)arg0 ;
-(void)setApplicationContextForApplicationInfos:(id)arg0 withRefId:(id)arg1 ;
-(void)setCarDNDActive:(BOOL)arg0 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setDeviceRingerSwitchState:(NSInteger)arg0 ;
-(void)setIsDeviceInStarkMode:(BOOL)arg0 ;
-(void)setLockState:(BOOL)arg0 screenLocked:(BOOL)arg1 ;
-(void)setMyriadDecisionResult:(BOOL)arg0 ;
-(void)setOverriddenApplicationContext:(id)arg0 withContext:(id)arg1 ;
-(void)setShouldWaitForMyriad:(BOOL)arg0 ;
-(void)setVoiceOverIsActive:(BOOL)arg0 ;
-(void)setWatchAuthenticated:(BOOL)arg0 ;
-(void)startAcousticIDRequestWithOptions:(id)arg0 ;
-(void)startAudioPlaybackRequest:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)startContinuationRequestWithUserInfo:(id)arg0 ;
-(void)startDirectActionRequestWithString:(id)arg0 ;
-(void)startRecordingForPendingSpeechRequestWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)startRequestWithAceCommand:(id)arg0 ;
-(void)startRequestWithCorrectedText:(id)arg0 forSpeechIdentifier:(id)arg1 userSelectionResults:(id)arg2 ;
-(void)startRequestWithCorrectedText:(id)arg0 forSpeechIdentifier:(id)arg1 userSelectionResults:(id)arg2 turnIdentifier:(id)arg3 ;
-(void)startRequestWithInfo:(id)arg0 ;
-(void)startRequestWithInfo:(id)arg0 activationEvent:(NSInteger)arg1 ;
-(void)startRequestWithText:(id)arg0 ;
-(void)startSpeechPronunciationRequestWithOptions:(id)arg0 pronunciationContext:(id)arg1 ;
-(void)startSpeechRequestWithOptions:(id)arg0 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg0 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg0 isNarrowBand:(BOOL)arg1 ;
-(void)startUIRequest;
-(void)stopAllAudioPlaybackRequests:(BOOL)arg0 ;
-(void)stopAudioPlaybackRequest:(id)arg0 immediately:(BOOL)arg1 ;
-(void)stopSpeech;
-(void)stopSpeechWithOptions:(id)arg0 ;
-(void)telephonyRequestCompleted;
-(void)updateSpeechOptions:(id)arg0 ;
-(void)updateSpeechSynthesisRecord:(id)arg0 ;
-(void)usefulUserResultWillPresent;
-(void)willPresentUI;
-(void)willPresentUsefulUserResultWithType:(NSInteger)arg0 ;
-(void)willPresentUsefulUserResultWithType:(NSInteger)arg0 forCommand:(id)arg1 ;
-(void)willSetApplicationContextWithRefId:(id)arg0 ;


@end


#endif