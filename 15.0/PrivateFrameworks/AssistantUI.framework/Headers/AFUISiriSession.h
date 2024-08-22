// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUISIRISESSION_H
#define AFUISIRISESSION_H

@class SRUIFStateMachine, AFSpeechSynthesisRecord, NSMutableSet, AFConnection, AFSettingsConnection, AFSiriClientStateManager, NSString, NSArray, AFAnalyticsTurnBasedInstrumentationContext, SRUIFSiriSessionInfo;
@protocol AFAssistantUIService, AFSpeechDelegate, SRUIFStateMachineDelegate, AFUISiriSession, OS_dispatch_queue, OS_dispatch_group, AFUISiriSessionDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate;

#import <Foundation/Foundation.h>

#import "AFUIWatchAuthenticationManager.h"

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, SRUIFStateMachineDelegate, AFUISiriSession>

 {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _currentRequestDidPresent;
    SRUIFStateMachine *_stateMachine;
    AFSpeechSynthesisRecord *_lastSpeechSynthesisRecord;
    NSMutableSet *_speechRequestGroupGraveyard;
    AFConnection *_connection;
    id *_continuePendingRequest;
    BOOL _sendContextBeforeContinuingSpeechRequest;
    AFSettingsConnection *_settingsConnection;
    BOOL _isDeviceInStarkMode;
    AFSiriClientStateManager *_clientStateManager;
    NSUInteger _thinkingIntervalID;
}


@property (readonly, nonatomic, getter=_connection) AFConnection *connection;
@property (retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup; // ivar: _currentSpeechRequestGroup
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<AFUISiriSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *directActionApplicationContexts; // ivar: _directActionApplicationContexts
@property (nonatomic, getter=isEyesFree) BOOL eyesFree; // ivar: _eyesFree
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_instrumentationTurnContext, setter=_setInstrumentationTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *instrumentationTurnContext; // ivar: _instrumentationTurnContext
@property (readonly, nonatomic) BOOL isProcessingAcousticIdRequest; // ivar: _isProcessingAcousticIdRequest
@property (weak, nonatomic) NSObject<AFUISiriSessionLocalDataSource> *localDataSource; // ivar: _localDataSource
@property (weak, nonatomic) NSObject<AFUISiriSessionLocalDelegate> *localDelegate; // ivar: _localDelegate
@property (retain, nonatomic) NSArray *sessionDelegateContext; // ivar: _sessionDelegateContext
@property (retain, nonatomic) SRUIFSiriSessionInfo *siriSessionInfo; // ivar: _siriSessionInfo
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_watchAuthenticationManager, setter=_setWatchAuthenticationManager:) AFUIWatchAuthenticationManager *watchAuthenticationManager; // ivar: _watchAuthenticationManager


+(NSUInteger)availabilityState;
+(id)effectiveCoreLocationBundle;
+(void)beginMonitoringSiriAvailability;
-(BOOL)_aceObjectExpectsTurnIdentifierWhenSendingCommand:(id)arg0 ;
-(BOOL)_hasActiveRequest;
-(BOOL)_shouldFetchActiveAccount;
-(BOOL)isListening;
-(BOOL)isPreventingActivationGesture;
-(NSInteger)_state;
-(float)recordingPowerLevel;
-(id)_invocationContextFromTVRemoteType:(NSUInteger)arg0 ;
-(id)_invocationEventForRequestOptions:(id)arg0 localDataSource:(id)arg1 ;
-(id)_preparedSpeechRequestWithRequestOptions:(id)arg0 ;
-(id)_setRefIdForAllViewsInAddViews:(id)arg0 ;
-(id)_startingRecordingAlertPolicyForSoundID:(id)arg0 ;
-(id)_stateMachine;
-(id)initWithConnection:(id)arg0 delegateQueue:(id)arg1 ;
-(id)safeWrapResponseCompletion:(SEL)arg0 ;
-(id)stateMachine:(id)arg0 descriptionForEvent:(NSInteger)arg1 ;
-(id)underlyingConnection;
-(int)_mapEnhancedCarPlayTriggerMode:(NSInteger)arg0 ;
-(int)_mapInvocationSource:(NSInteger)arg0 ;
-(void)_applePaySheetPresented;
-(void)_continuePendingSpeechRequest;
-(void)_discardConnectionForReason:(NSInteger)arg0 ;
-(void)_discardCurrentSpeechGroup;
-(void)_handleRequestUpdateViewsCommand:(id)arg0 completion:(id)arg1 ;
-(void)_handleUnlockDeviceCommand:(id)arg0 completion:(id)arg1 ;
-(void)_handleUnlockDeviceWithWatchCommand:(id)arg0 completion:(id)arg1 ;
-(void)_localAuthenticationUIPresented;
-(void)_performAceCommand:(id)arg0 forRequestUpdateViewsCommand:(id)arg1 afterDelay:(CGFloat)arg2 ;
-(void)_performAceCommand:(id)arg0 turnIdentifier:(id)arg1 conflictHandler:(id)arg2 ;
-(void)_performAceCommands:(id)arg0 ;
-(void)_performBlockWithDelegate:(id)arg0 ;
-(void)_performPunchoutCommand:(id)arg0 delegate:(id)arg1 completion:(id)arg2 ;
-(void)_performTransitionForEvent:(NSInteger)arg0 ;
-(void)_playPhaticWithCompletion:(id)arg0 ;
-(void)_requestContextWithCompletion:(id)arg0 ;
-(void)_requestDidFinishWithError:(id)arg0 ;
-(void)_requestWillStart;
-(void)_siriNetworkAvailabilityDidChange:(id)arg0 ;
-(void)_startContinuityRequestWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)_startLegacyDirectActionRequestWithInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)_startRequestForReadoutOfBulletin:(id)arg0 ;
-(void)_startRequestWithBlock:(id)arg0 ;
-(void)_startRequestWithFinalOptions:(id)arg0 completion:(id)arg1 ;
-(void)_startRequestWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)_startRequestWithText:(id)arg0 completion:(id)arg1 ;
-(void)_startSpeechPronunciationRequestWithContext:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_startSpeechRequestWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)_startSpeechRequestWithSpeechFileAtURL:(id)arg0 completion:(id)arg1 ;
-(void)_startSpeechRequestWithSpeechRequestOptions:(id)arg0 isInitialBringUp:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateActiveAccount:(id)arg0 ;
-(void)_updateActiveAccount:(id)arg0 withNumberOfActiveAccounts:(NSUInteger)arg1 ;
-(void)_updateAssistantVersion:(id)arg0 ;
-(void)_updateCarPlayInvocationContext:(id)arg0 fromDirectActionEvent:(NSInteger)arg1 appBundleIdentifier:(id)arg2 ;
-(void)assistantConnection:(id)arg0 appLaunchFailedWithBundleIdentifier:(id)arg1 ;
-(void)assistantConnection:(id)arg0 didChangeAudioSessionID:(unsigned int)arg1 ;
-(void)assistantConnection:(id)arg0 didFinishAcousticIDRequestWithSuccess:(BOOL)arg1 ;
-(void)assistantConnection:(id)arg0 didLoadAssistant:(id)arg1 ;
-(void)assistantConnection:(id)arg0 extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2 ;
-(void)assistantConnection:(id)arg0 extensionRequestWillStartForApplication:(id)arg1 ;
-(void)assistantConnection:(id)arg0 openURL:(id)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 receivedCommand:(id)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 recognitionUpdateWithPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3 ;
-(void)assistantConnection:(id)arg0 recognizedAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2 ;
-(void)assistantConnection:(id)arg0 requestFailedWithError:(id)arg1 requestClass:(id)arg2 ;
-(void)assistantConnection:(id)arg0 speechRecognized:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecognizedPartialResult:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 ;
-(void)assistantConnection:(id)arg0 speechRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)assistantConnection:(id)arg0 speechRecordingPerformTwoShotPromptWithType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 startPlaybackDidFail:(NSInteger)arg1 ;
-(void)assistantConnection:(id)arg0 startUIRequestWithText:(id)arg1 completion:(id)arg2 ;
-(void)assistantConnection:(id)arg0 wantsToCacheImage:(id)arg1 ;
-(void)assistantConnection:(id)arg0 willProcessAppLaunchWithBundleIdentifier:(id)arg1 ;
-(void)assistantConnection:(id)arg0 willProcessStartPlayback:(NSInteger)arg1 intent:(id)arg2 completion:(id)arg3 ;
-(void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg0 userInfo:(id)arg1 ;
-(void)assistantConnectionAudioSessionDidEndInterruption:(id)arg0 shouldResume:(BOOL)arg1 userInfo:(id)arg2 ;
-(void)assistantConnectionDidChangeAudioRecordingPower:(id)arg0 ;
-(void)assistantConnectionDidDetectMusic:(id)arg0 ;
-(void)assistantConnectionDismissAssistant:(id)arg0 ;
-(void)assistantConnectionRequestFinished:(id)arg0 ;
-(void)assistantConnectionRequestWillStart:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg0 ;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg0 ;
-(void)assistantConnectionWillStartAcousticIDRequest:(id)arg0 ;
-(void)audioRoutePickerWillDismiss;
-(void)audioRoutePickerWillShow;
-(void)cancelSpeechRequest;
-(void)clearContext;
-(void)dealloc;
-(void)end;
-(void)endForReason:(NSInteger)arg0 ;
-(void)forceAudioSessionActive;
-(void)forceAudioSessionActiveWithCompletion:(id)arg0 ;
-(void)forceAudioSessionInactive;
-(void)notifyStateManagerPresentationTransitionBegan;
-(void)notifyStateManagerPresentationTransitionEnded;
-(void)notifyStateManagerSpeakingBegan;
-(void)notifyStateManagerSpeakingEnded;
-(void)notifyStateManagerTransactionBegan;
-(void)notifyStateManagerTransactionEnded;
-(void)performAceCommand:(id)arg0 turnIdentifier:(id)arg1 ;
-(void)preheat;
-(void)recordMetricsContext:(id)arg0 forDisambiguatedAppWIthBundleIdentifier:(id)arg1 ;
-(void)recordRequestMetricEvent:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(void)recordUIMetrics:(id)arg0 ;
-(void)requestDidPresentViewForErrorCommand:(id)arg0 ;
-(void)requestDidPresentViewForUICommand:(id)arg0 ;
-(void)resetContextTypes:(NSInteger)arg0 ;
-(void)resultDidChangeForAceCommand:(id)arg0 ;
-(void)resultDidChangeForAceCommand:(id)arg0 completion:(id)arg1 ;
-(void)resumeInterruptedAudioPlaybackIfNeeded;
-(void)rollbackClearContext;
-(void)setAlertContext;
-(void)setAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)arg0 ;
-(void)setApplicationContext;
-(void)setApplicationContextForDirectAction:(BOOL)arg0 ;
-(void)setCarDNDActive:(BOOL)arg0 ;
-(void)setDeviceInStarkMode:(BOOL)arg0 ;
-(void)setLockState:(NSUInteger)arg0 ;
-(void)setWatchAuthenticated:(BOOL)arg0 ;
-(void)settingsConnectionDidChangeActiveAccount:(id)arg0 ;
-(void)siriUIDidPresentDynamicSnippetWithInfo:(id)arg0 ;
-(void)speechSynthesisDidFinish:(id)arg0 ;
-(void)speechSynthesisDidUpdatePowerLevelTo:(float)arg0 ;
-(void)startCorrectedRequestWithText:(id)arg0 correctionIdentifier:(id)arg1 userSelectionResults:(id)arg2 turnIdentifier:(id)arg3 ;
-(void)startRequestWithOptions:(id)arg0 ;
-(void)startRequestWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)stateMachine:(id)arg0 didTransitionFromState:(NSInteger)arg1 forEvent:(NSInteger)arg2 ;
-(void)stopRecordingSpeech;
-(void)stopRequestWithOptions:(id)arg0 ;
-(void)telephonyRequestCompleted;
-(void)updateRequestOptions:(id)arg0 ;


@end


#endif