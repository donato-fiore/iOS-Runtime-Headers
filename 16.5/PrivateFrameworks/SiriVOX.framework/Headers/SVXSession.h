// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSESSION_H
#define SVXSESSION_H

@class AFConnection, NSUUID, AFSpeechRequestOptions, NSMutableArray, AFAnalyticsTurnBasedInstrumentationContext, NSMutableSet, AFXPCWrapper, AFInstanceContext, AFPreferences, AFAnalytics, SASetApplicationContext, AFDeviceContext, AFHomeAccessoryInfo, NSMutableDictionary, NSUserActivity, AFModesConfiguration, SRSTClient, NSString;
@protocol AFAssistantUIService, AFSpeechDelegate, SVXSpeechSynthesisListening, SVXTaskTrackingCenterDelegate, SVXAudioSessionProviding, SVXPerforming, SVXSessionDelegate, AFRelinquishableAssertion;

#import <Foundation/Foundation.h>

#import "SVXActivationContext.h"
#import "SVXDeactivationContext.h"
#import "SVXTaskTrackingCenter.h"
#import "SVXServiceCommandHandler.h"
#import "SVXSpeechSynthesizer.h"
#import "SVXActivationInstrumentation.h"
#import "SVXDeviceProblemsState.h"
#import "SVXDeviceSetupContext.h"

@interface SVXSession : NSObject <AFAssistantUIService, AFSpeechDelegate, SVXSpeechSynthesisListening, SVXTaskTrackingCenterDelegate, SVXAudioSessionProviding>

 {
    AFConnection *_connection;
    NSInteger _currentState;
    NSInteger _activityState;
    NSUUID *_activityUUID;
    id *_postResignActiveBlock;
    SVXActivationContext *_currentActivationContext;
    SVXDeactivationContext *_currentDeactivationContext;
    NSUUID *_currentRequestUUID;
    AFSpeechRequestOptions *_currentSpeechRequestOptions;
    id *_currentSpeechRequestDidStartBlock;
    NSMutableArray *_currentSpeechRequestPendingBlocks;
    BOOL _currentRequestWillPresentUUFR;
    BOOL _currentRequestDidPresentUUFR;
    AFAnalyticsTurnBasedInstrumentationContext *_previousRequestInstrumentationContext;
    AFAnalyticsTurnBasedInstrumentationContext *_currentRequestInstrumentationContext;
    SVXTaskTrackingCenter *_taskTrackingCenter;
    NSMutableSet *_sessionIdleAssertions;
    AFXPCWrapper *_inputAudioPowerWrapper;
    AFXPCWrapper *_outputAudioPowerWrapper;
    unsigned int _audioSessionID;
    NSMutableSet *_audioSessionAssertions;
    id<SVXPerforming> *_performer;
    SVXServiceCommandHandler *_serviceCommandHandler;
    SVXSpeechSynthesizer *_speechSynthesizer;
    AFInstanceContext *_instanceContext;
    AFPreferences *_preferences;
    AFAnalytics *_analytics;
    id<SVXSessionDelegate> *_delegate;
    int _currentInstrumentationUIState;
    SVXActivationInstrumentation *_svxActivationInstrumentation;
    NSMutableArray *_pendingRequestBarriers;
    BOOL _isMostRecentRequestStartingMediaPlaybackLocally;
    BOOL _isMostRecentRequestSuppressedError;
    SASetApplicationContext *_setApplicationContext;
    SVXDeviceProblemsState *_deviceProblemsState;
    SVXDeviceSetupContext *_deviceSetupContext;
    AFDeviceContext *_localDeviceContext;
    AFHomeAccessoryInfo *_currentAccessoryInfo;
    id *_myriadToken;
    NSInteger _myriadState;
    NSMutableArray *_pendingMyriadDecisionHandlers;
    NSMutableDictionary *_playbackRequestInfo;
    NSUserActivity *_userActivity;
    id<AFRelinquishableAssertion> *_audioDuckingCoordinationAssertion;
    AFModesConfiguration *_modesConfiguration;
    SRSTClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly) Class superclass;


-(id)_connection:(BOOL)arg0 ;
-(id)_currentAccessoryInfo;
-(id)activateWithContext:(id)arg0 completion:(id)arg1 ;
-(id)activateWithContext:(id)arg0 options:(NSUInteger)arg1 deviceSetupContext:(id)arg2 deviceProblemsState:(id)arg3 localDeviceContext:(id)arg4 speechSynthesisRecord:(id)arg5 speechSynthesisState:(NSInteger)arg6 speechRecordingAlertPolicy:(id)arg7 completion:(id)arg8 ;
-(id)beginWaitingForMyriadDecision;
-(id)currentRequestUUID;
-(id)getTaskTrackingCenter;
-(id)initWithPerformer:(id)arg0 serviceCommandHandler:(id)arg1 speechSynthesizer:(id)arg2 instanceContext:(id)arg3 preferences:(id)arg4 analytics:(id)arg5 delegate:(id)arg6 ;
-(void)_activateWithContext:(id)arg0 options:(NSUInteger)arg1 deviceSetupContext:(id)arg2 deviceProblemsState:(id)arg3 localDeviceContext:(id)arg4 speechSynthesisRecord:(id)arg5 speechSynthesisState:(NSInteger)arg6 speechRecordingAlertPolicy:(id)arg7 taskTracker:(id)arg8 completion:(id)arg9 ;
-(void)_addRequestBarrier:(id)arg0 ;
-(void)_beginThinking;
-(void)_beginWaitingForMyriadDecisionWithToken:(id)arg0 ;
-(void)_cancelRequestWithOptions:(NSUInteger)arg0 keepTaskTracker:(id)arg1 ;
-(void)_checkIsActiveWithCompletion:(id)arg0 ;
-(void)_clearContext;
-(void)_continuePendingSpeechRequest:(BOOL)arg0 ;
-(void)_deactivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_didChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)_discardPendingRequestBarriers;
-(void)_dismiss;
-(void)_endThinking;
-(void)_endWaitingForMyriadDecisionWithToken:(id)arg0 state:(NSInteger)arg1 ;
-(void)_forceAudioSessionActiveWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_forceAudioSessionInactiveWithReason:(id)arg0 completion:(id)arg1 ;
-(void)_getAlarmAndTimerFiringContextWithCompletion:(id)arg0 ;
-(void)_handleAudioSessionDidBecomeActive:(BOOL)arg0 ;
-(void)_handleAudioSessionDidBeginInterruption;
-(void)_handleAudioSessionDidEndInterruption:(BOOL)arg0 ;
-(void)_handleAudioSessionWillBecomeActive:(BOOL)arg0 ;
-(void)_handleCommand:(id)arg0 taskTracker:(id)arg1 completion:(id)arg2 ;
-(void)_handleDidChangeAudioSessionID:(unsigned int)arg0 ;
-(void)_handleDidFailStartPlaybackWithDestination:(NSInteger)arg0 ;
-(void)_handleDidHandleQuickStopWithActions:(NSUInteger)arg0 ;
-(void)_handleDidStartAudioPlaybackRequest:(id)arg0 ;
-(void)_handleDidStopAudioPlaybackRequest:(id)arg0 error:(id)arg1 ;
-(void)_handleDismissAssistant;
-(void)_handleReceivedCommand:(id)arg0 completion:(id)arg1 ;
-(void)_handleRequestFailedWithError:(id)arg0 ;
-(void)_handleRequestFinished;
-(void)_handleRequestWillStart;
-(void)_handleShouldSpeak:(BOOL)arg0 ;
-(void)_handleSpeechRecognitionDidFailWithError:(id)arg0 ;
-(void)_handleSpeechRecognized:(id)arg0 ;
-(void)_handleSpeechRecognizedPartialResult:(id)arg0 ;
-(void)_handleSpeechRecordingDidBeginOnAVRecordRoute:(id)arg0 ;
-(void)_handleSpeechRecordingDidCancel;
-(void)_handleSpeechRecordingDidChangeAVRecordRoute:(id)arg0 ;
-(void)_handleSpeechRecordingDidDetectStartpoint;
-(void)_handleSpeechRecordingDidEnd;
-(void)_handleSpeechRecordingDidFailWithError:(id)arg0 ;
-(void)_handleSpeechRecordingPerformTwoShotPromptWithType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_handleSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg0 ;
-(void)_handleSpeechSynthesizerDidBecomeIdle;
-(void)_handleSpeechSynthesizerDidCancelRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)_handleSpeechSynthesizerDidFailRequest:(id)arg0 taskTracker:(id)arg1 error:(id)arg2 ;
-(void)_handleSpeechSynthesizerDidFinishRequest:(id)arg0 record:(id)arg1 taskTracker:(id)arg2 ;
-(void)_handleSpeechSynthesizerDidInterruptRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)_handleSpeechSynthesizerDidStartRequest:(id)arg0 record:(id)arg1 taskTracker:(id)arg2 ;
-(void)_handleSpeechSynthesizerWillBecomeBusy;
-(void)_handleSpeechSynthesizerWillStartRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)_handleWillProcessStartPlaybackWithDestination:(NSInteger)arg0 intent:(id)arg1 completion:(id)arg2 ;
-(void)_handleWillStartAudioPlaybackRequest:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateConnection;
-(void)_performBlockAfterContinueBlock:(id)arg0 ;
-(void)_performBlockAfterResignActive:(id)arg0 ;
-(void)_performNextPendingRequestBarrier;
-(void)_preheatWithStyle:(NSInteger)arg0 ;
-(void)_presentError:(id)arg0 taskTracker:(id)arg1 completion:(id)arg2 ;
-(void)_requestDidEndWithOptions:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_requestWillBeginWithTaskTracker:(id)arg0 ;
-(void)_resetMyriadDecision;
-(void)_resignActiveForReason:(id)arg0 ;
-(void)_sessionIdleFiredWithAssertion:(id)arg0 ;
-(void)_setApplicationContext:(id)arg0 ;
-(void)_setAudioSessionID:(unsigned int)arg0 ;
-(void)_setCurrentState:(NSInteger)arg0 ;
-(void)_setInputAudioPowerWrapper:(id)arg0 ;
-(void)_setOutputAudioPowerWrapper:(id)arg0 ;
-(void)_startActiveAudioSessionRequestForType:(NSInteger)arg0 taskTracker:(id)arg1 completion:(id)arg2 ;
-(void)_startRequestWithInfo:(id)arg0 clearsContext:(BOOL)arg1 deviceSetupContext:(id)arg2 taskTracker:(id)arg3 completion:(id)arg4 ;
-(void)_startSessionIdleTimerWithTimeInterval:(CGFloat)arg0 ;
-(void)_startSpeechRequestWithOptions:(id)arg0 clearsContext:(BOOL)arg1 deviceSetupContext:(id)arg2 deviceProblemsState:(id)arg3 localDeviceContext:(id)arg4 taskTracker:(id)arg5 completion:(id)arg6 ;
// -(void)_startSpeechSynthesisRequest:(id)arg0 languageCode:(id)arg1 voiceName:(id)arg2 gender:(NSInteger)arg3 audioSessionID:(unsigned int)arg4 introductionSoundID:(NSInteger)arg5 conclusionSoundID:(NSInteger)arg6 taskTracker:(id)arg7 postActivationHandler:(id)arg8 completion:(unk)arg9  ;
-(void)_stopSessionIdleTimer;
-(void)_stopSpeech;
-(void)_stopSpeechWithCurrentSpeechRequestOptions;
-(void)_transitSpeechToAutomaticEndpointingWithTimestamp:(NSUInteger)arg0 ;
-(void)_transitSpeechToManualEndpointing;
-(void)_updateSpeechEndpointerOperationMode:(NSInteger)arg0 ;
-(void)_waitForMyriadDecisionUsingHandler:(id)arg0 ;
-(void)_willChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)acquireAudioSessionForReason:(id)arg0 completion:(id)arg1 ;
-(void)activateWithSpeechRequestOptions:(id)arg0 options:(NSUInteger)arg1 deviceSetupContext:(id)arg2 deviceProblemsState:(id)arg3 localDeviceContext:(id)arg4 completion:(id)arg5 ;
-(void)addRequestBarrier:(id)arg0 ;
-(void)assistantConnection:(id)arg0 appLaunchFailedWithBundleIdentifier:(id)arg1 ;
-(void)assistantConnection:(id)arg0 audioSessionDidBecomeActive:(BOOL)arg1 ;
-(void)assistantConnection:(id)arg0 audioSessionWillBecomeActive:(BOOL)arg1 ;
-(void)assistantConnection:(id)arg0 didChangeAudioSessionID:(unsigned int)arg1 ;
-(void)assistantConnection:(id)arg0 didHandleQuickStopWithAction:(NSUInteger)arg1 ;
-(void)assistantConnection:(id)arg0 didStartAudioPlaybackRequest:(id)arg1 ;
-(void)assistantConnection:(id)arg0 didStopAudioPlaybackRequest:(id)arg1 error:(id)arg2 ;
-(void)assistantConnection:(id)arg0 receivedCommand:(id)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 recognitionUpdateWithPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3 ;
-(void)assistantConnection:(id)arg0 recognizedAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2 ;
-(void)assistantConnection:(id)arg0 requestFailedWithError:(id)arg1 requestClass:(id)arg2 ;
-(void)assistantConnection:(id)arg0 setUserActivtiyInfoAndMakeCurrent:(id)arg1 webpageURL:(id)arg2 ;
-(void)assistantConnection:(id)arg0 shouldSpeak:(BOOL)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecognized:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecognizedPartialResult:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 ;
-(void)assistantConnection:(id)arg0 speechRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecordingPerformTwoShotPromptWithType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 ;
-(void)assistantConnection:(id)arg0 startPlaybackDidFail:(NSInteger)arg1 ;
-(void)assistantConnection:(id)arg0 startUIRequestWithInfo:(id)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 startUIRequestWithText:(id)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 willProcessAppLaunchWithBundleIdentifier:(id)arg1 ;
-(void)assistantConnection:(id)arg0 willProcessStartPlayback:(NSInteger)arg1 intent:(id)arg2 completion:(id)arg3 ;
-(void)assistantConnection:(id)arg0 willStartAudioPlaybackRequest:(id)arg1 ;
-(void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg0 ;
-(void)assistantConnectionAudioSessionDidEndInterruption:(id)arg0 shouldResume:(BOOL)arg1 ;
-(void)assistantConnectionDismissAssistant:(id)arg0 ;
-(void)assistantConnectionRequestFinished:(id)arg0 ;
-(void)assistantConnectionRequestWillStart:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg0 ;
-(void)cancelRequest;
-(void)deactivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)endWaitingForMyriadDecisionWithToken:(id)arg0 result:(BOOL)arg1 ;
-(void)getActivityStateWithCompletion:(id)arg0 ;
-(void)getAlarmAndTimerFiringContextWithCompletion:(id)arg0 ;
-(void)getAudioPowerWithType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)getStateWithCompletion:(id)arg0 ;
-(void)handleCommand:(id)arg0 taskTracker:(id)arg1 ;
-(void)invalidate;
-(void)performBlock:(id)arg0 ;
-(void)preheatWithStyle:(NSInteger)arg0 ;
-(void)prewarmWithContext:(id)arg0 completion:(id)arg1 ;
-(void)speechSynthesizerDidBecomeBusy;
-(void)speechSynthesizerDidBecomeIdle;
-(void)speechSynthesizerDidCancelRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerDidFailRequest:(id)arg0 taskTracker:(id)arg1 error:(id)arg2 ;
-(void)speechSynthesizerDidFinishRequest:(id)arg0 utteranceInfo:(id)arg1 record:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizerDidInterruptRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerDidStartRequest:(id)arg0 record:(id)arg1 taskTracker:(id)arg2 ;
-(void)speechSynthesizerWillEnqueueRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerWillStartRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)startAudioPlaybackRequest:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)stopAudioPlaybackRequest:(id)arg0 immediately:(BOOL)arg1 ;
-(void)stopSpeech;
-(void)taskTrackingCenter:(id)arg0 didBeginTrackingTaskWithContext:(id)arg1 ;
-(void)taskTrackingCenter:(id)arg0 didEndTrackingTaskWithContext:(id)arg1 ;
-(void)taskTrackingCenterDidBecomeIdle:(id)arg0 ;
-(void)taskTrackingCenterWillBecomeBusy:(id)arg0 ;
-(void)transitSpeechToAutomaticEndpointingWithTimestamp:(NSUInteger)arg0 ;
-(void)transitSpeechToManualEndpointing;
-(void)updateDeviceProblemsState:(id)arg0 ;
-(void)updateDeviceSetupContext:(id)arg0 ;
-(void)updateLocalDeviceContext:(id)arg0 ;


@end


#endif