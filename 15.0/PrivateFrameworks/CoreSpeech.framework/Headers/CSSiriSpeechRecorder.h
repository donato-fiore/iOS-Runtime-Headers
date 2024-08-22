// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSIRISPEECHRECORDER_H
#define CSSIRISPEECHRECORDER_H

@class NSString, NSFileHandle, NSUUID, NSXPCConnection, AFWatchdogTimer, NSArray, AFSpeechSynthesisRecord, AFClientConfiguration, NSMutableDictionary, AFBluetoothWirelessSplitterSessionStateObserver, AFExperimentContext;
@protocol CSSiriAcousticFingerprinterDelegate, CSSpeechControllerDelegate, CSEndpointAnalyzerDelegate, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, CSAudioSessionControllerDelegate, CSSiriSpeechCapturing, CSSiriSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source, CSEndpointAnalyzer, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CSSpeechController.h"
#import "CSAudioSessionController.h"
#import "CSSiriAudioPlaybackService.h"
#import "CSSiriSpeechRecordingContext.h"
#import "CSSiriAudioActivationInfo.h"
#import "CSAudioRecordDeviceInfo.h"
#import "CSSiriAcousticFingerprinter.h"
#import "CSSiriAudioFileWriter.h"
#import "CSEndpointerMetrics.h"
#import "CSEndpointDelayReporter.h"

@interface CSSiriSpeechRecorder : NSObject <CSSiriAcousticFingerprinterDelegate, CSSpeechControllerDelegate, CSEndpointAnalyzerDelegate, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, CSAudioSessionControllerDelegate, CSSiriSpeechCapturing>

 {
    id<CSSiriSpeechCapturingDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isSpeechControllerInitialized;
    CSSpeechController *_speechController;
    CSAudioSessionController *_audioSessionController;
    CSSiriAudioPlaybackService *_audioPlaybackService;
    NSInteger _packetCount;
    NSInteger _speechCapturingMode;
    NSInteger _recordingAlertsConfiguration;
    NSObject<OS_dispatch_source> *_extendedEndpointTimer;
    id<CSEndpointAnalyzer> *_endpointAnalyzer;
    CSSiriSpeechRecordingContext *_context;
    CSSiriAudioActivationInfo *_currentActivationInfo;
    CSSiriAudioActivationInfo *_pendingActivationInfo;
    CSAudioRecordDeviceInfo *_currentRecordDeviceInfo;
    NSString *_currentPlaybackRoute;
    BOOL _fingerprintingEnabled;
    CSSiriAcousticFingerprinter *_fingerprinter;
    NSInteger _audioFileType;
    BOOL _needsAVVCLPCMCallbacks;
    BOOL _hasReceivedEmptyLPCMRecordBuffer;
    NSFileHandle *_audioFileHandle;
    CSSiriAudioFileWriter *_audioFileWriter;
    CSSiriAudioFileWriter *_audioLogggingFileWriter;
    NSInteger _startEvent;
    NSInteger _recordingState;
    NSInteger _endpointerOperationMode;
    BOOL _didReceiveFirstBuffer;
    BOOL _didReceiveLastBuffer;
    BOOL _didDetectStartpoint;
    BOOL _didDetectEndpoint;
    BOOL _didEnterTwoShotMode;
    BOOL _didFakeTwoShotWithAlert;
    NSUUID *_fakeTwoShotTTSPromptUUID;
    BOOL _serverDidRecognizeSpeech;
    BOOL _fingerprintWasRecognized;
    BOOL _serverDidEndpoint;
    BOOL _didTimeout;
    BOOL _wasCanceled;
    BOOL _suppressRecordingStoppedAlert;
    BOOL _isRecordingUsingBTRoute;
    CGFloat _twoShotStartTime;
    BOOL _didPerformTwoShotPrompt;
    BOOL _forceSuccessAlertOnStop;
    BOOL _isDriving;
    CGFloat _startRecordingTimestamp;
    CGFloat _firstBufferTimestamp;
    NSUInteger _firstBufferHostTime;
    NSUInteger _estimatedSpeechEndHostTime;
    CGFloat _lastPrepareTimestamp;
    CGFloat _accumulatedBufferDuration;
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;
    *OpaqueAudioConverter _decoder;
    CGFloat _expectedFirstBufferTimestamp;
    BOOL _isOpus;
    NSString *_recordDevice;
    BOOL _audioDuckingEnabled;
    NSXPCConnection *_speechRecordingEventListenerConnection;
    AFWatchdogTimer *_fakeTwoShotTTSPromptWatchdogTimer;
    NSUInteger _lastAudioRecordBufferStartTime;
    NSUInteger _lastAudioRecordBufferReceiptTime;
    CSEndpointerMetrics *_lastEndpointerMetrics;
    CSEndpointDelayReporter *_endpointDelayReporter;
    CGFloat _lastEndpointHintDuration;
    NSArray *_lastEndpointHintFeatures;
    id *_lastEndpointHintCompletion;
    AFSpeechSynthesisRecord *_mostRecentSpeechSynthesisRecord;
    AFClientConfiguration *_currentClientConfiguration;
    NSObject<OS_dispatch_group> *_alertPlaybackGroup;
    NSMutableDictionary *_numberOfAVVCAlertPlaybacksByType;
    AFBluetoothWirelessSplitterSessionStateObserver *_bluetoothWirelessSplitterSessionStateObserver;
    AFExperimentContext *_experimentContext;
    NSUUID *_mhUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressInterruptionEndedNotifications; // ivar: _suppressInterruptionEndedNotifications


-(BOOL)_checkAudioLoggingLimits:(id)arg0 ;
-(BOOL)_prepareSpeechControllerWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_setAudioContextWithInfo:(id)arg0 forReason:(id)arg1 ;
-(BOOL)_shouldEmitInstrumentation;
-(BOOL)_startAudioPlaybackRequest:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(BOOL)_updateAudioContextToPostVoiceForReason:(id)arg0 ;
-(BOOL)_updateAudioContextWithPendingInfoForReason:(id)arg0 ;
-(BOOL)prepareSpeechCaptureWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
// -(BOOL)startSpeechCaptureWithContext:(id)arg0 willStartHandler:(id)arg1 error:(unk)arg2  ;
-(id)_currentMHUUID:(BOOL)arg0 ;
-(id)_currentPlaybackRoute;
-(id)_currentRecordDeviceInfo;
-(id)_currentRecordRoute;
-(id)_currentRecordingInfo;
-(id)_fingerprinter;
-(id)_getFanInfoArray;
-(id)_recordingInfoForEvent:(NSInteger)arg0 audioAlertStyle:(NSInteger)arg1 includeBTInfo:(BOOL)arg2 includeRecordDeviceInfo:(BOOL)arg3 ;
-(id)_speechController;
-(id)_speechControllerWithError:(*id)arg0 ;
-(id)_speechRecordingEventListener;
-(id)convertVirtualAudioSubTypeToString:(unsigned int)arg0 ;
-(id)currentVTSatScore;
-(id)fetchRecordingInfo;
-(id)getAudioRouteInstrumentationWithRecordingInfo:(id)arg0 ;
-(id)initWithQueue:(id)arg0 speechController:(id)arg1 audioSessionController:(id)arg2 audioPlaybackService:(id)arg3 experimentContext:(id)arg4 ;
-(id)recordingInfoForPreheatWithEvent:(NSInteger)arg0 ;
// -(int)_mapInstrumentationEndpointTypeFromStopRecordingReason:(unk)arg0  ;
-(unsigned int)_audioDeviceID;
-(unsigned int)_audioSessionID;
-(unsigned int)fetchAudioSessionID;
-(void)_cancelExtendedEndpointTimer;
-(void)_checkIfLastEndpointHintShouldBeAccepted;
-(void)_clearEndpointHint;
-(void)_disableEndpointer;
-(void)_enforceEndpointHint;
-(void)_handleFakeTwoShotPromptCallbackWithUUID:(id)arg0 timestamp:(CGFloat)arg1 duration:(CGFloat)arg2 error:(id)arg3 ;
-(void)_handleFakeTwoShotPromptTimeoutWithUUID:(id)arg0 ;
-(void)_hardEndpointWasDetectedWithMetrics:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)_logAudioMetrics:(id)arg0 mhUUID:(id)arg1 ;
-(void)_logBluetoothStateWithMHUUID:(id)arg0 ;
-(void)_logFanState;
-(void)_logVoiceTriggerInfo:(id)arg0 withMHUUID:(id)arg1 ;
-(void)_performTwoShotPromptForType:(NSInteger)arg0 atTime:(CGFloat)arg1 ;
-(void)_playAudioAlert:(NSInteger)arg0 ;
-(void)_playPhaticWithCompletion:(id)arg0 ;
-(void)_playStopAlertIfNecessaryForReason:(NSInteger)arg0 endpointMode:(NSInteger)arg1 error:(id)arg2 ;
-(void)_resetSpeechController;
-(void)_scheduleExtendedEndpointTimer;
-(void)_setAlertsIfNeeded;
-(void)_setAudioDuckingEnabled:(BOOL)arg0 ;
-(void)_setDictationAudioModeEnabled:(BOOL)arg0 ;
-(void)_setEndpointStyle:(NSInteger)arg0 ;
-(void)_setEndpointerOperationMode:(NSInteger)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_setLanguageDetectorDelegateIfRequired;
-(void)_setSpeechCapturingMode:(NSInteger)arg0 ;
-(void)_setupAudioFileWritingForSpeechController:(id)arg0 info:(id)arg1 context:(id)arg2 ;
-(void)_speechControllerDidReceiveFirstAudioRecordBufferWithHostTime:(NSUInteger)arg0 atHostTime:(NSUInteger)arg1 mhUUID:(id)arg2 ;
-(void)_speechControllerDidReceiveLastAudioRecordBuffer:(id)arg0 forReason:(NSInteger)arg1 estimatedSpeechEndHostTime:(NSUInteger)arg2 isRecordingStopped:(BOOL)arg3 ;
-(void)_speechControllerDidStartRecording:(id)arg0 successfully:(BOOL)arg1 error:(id)arg2 ;
-(void)_speechControllerDidStopRecording:(id)arg0 audioDeviceInfo:(id)arg1 forReason:(NSInteger)arg2 estimatedSpeechEndHostTime:(NSUInteger)arg3 errorCodeOverride:(NSInteger)arg4 underlyingError:(id)arg5 ;
-(void)_speechControllerRequestsOperation:(NSUInteger)arg0 forReason:(NSUInteger)arg1 completion:(id)arg2 ;
// -(void)_stopRecordingForEndpointReason:(unk)arg0  ;
// -(void)_stopRecordingWithReason:(unk)arg0 hostTime:(struct ? )arg1  ;
-(void)_updateAudioContextWithInfo:(id)arg0 reason:(id)arg1 ;
-(void)_updateRecordBufferDuration;
-(void)_updateRecordDeviceInfoAndPlaybackRouteForReason:(id)arg0 audioDeviceInfo:(id)arg1 forcesUpdate:(BOOL)arg2 ;
-(void)acousticFingerprinter:(id)arg0 hasFingerprint:(id)arg1 duration:(CGFloat)arg2 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionOwnerLostNotification:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionOwnerResetNotification:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg1 ;
-(void)cancelSpeechCaptureSuppressingAlert:(BOOL)arg0 ;
-(void)dealloc;
-(void)eagerlyInitializeAudioRecording;
-(void)endpointer:(id)arg0 didDetectHardEndpointAtTime:(CGFloat)arg1 withMetrics:(id)arg2 ;
-(void)endpointer:(id)arg0 didDetectStartpointAtTime:(CGFloat)arg1 ;
-(void)enforcePreviousEndpointHint;
-(void)forceSuccessAudioAlertOnStop;
-(void)getLastStartpointTimestampAndCurrentTime:(id)arg0 ;
-(void)languageDetectorDidDetectLanguageWithConfidence:(id)arg0 confidence:(id)arg1 isConfident:(BOOL)arg2 ;
// -(void)performBlockAfterAlerts:(id)arg0 timeout:(unk)arg1  ;
-(void)playRecordingStartAlert;
-(void)preheat;
-(void)prepareForMode:(NSInteger)arg0 ;
-(void)releaseAudioSession;
-(void)setAudioFileHandle:(id)arg0 ;
-(void)setAudioFileType:(NSInteger)arg0 ;
-(void)setClientConfiguration:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setEARLanguageDetectorSpeechRequestId:(id)arg0 ;
-(void)setEndpointerDelayedTrigger:(BOOL)arg0 ;
-(void)setEndpointerThreshold:(CGFloat)arg0 ;
-(void)setFingerprintWasRecognized;
-(void)setFingerprintingEnabled:(BOOL)arg0 ;
-(void)setIsDriving:(BOOL)arg0 ;
-(void)setSpeechRecognizedContext:(id)arg0 ;
-(void)setSpeechRecordingEventListeningEndpoint:(id)arg0 ;
-(void)setSpeechRequestOptions:(id)arg0 ;
-(void)setSpeechWasRecognizedForElapsedTime:(CGFloat)arg0 isFinal:(BOOL)arg1 ;
-(void)speakerIdentificationDidDetectSpeakerWithScores:(id)arg0 ;
-(void)speechController:(id)arg0 didSetAudioSessionActive:(BOOL)arg1 ;
-(void)speechController:(id)arg0 willSetAudioSessionActive:(BOOL)arg1 ;
-(void)speechControllerBeginRecordInterruption:(id)arg0 withContext:(id)arg1 ;
-(void)speechControllerDidDeliverLastBuffer:(id)arg0 forReason:(NSInteger)arg1 estimatedSpeechEndHostTime:(NSUInteger)arg2 ;
-(void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg0 atTime:(CGFloat)arg1 wantsAudibleFeedback:(BOOL)arg2 ;
-(void)speechControllerDidFinishAlertPlayback:(id)arg0 ofType:(NSInteger)arg1 error:(id)arg2 ;
-(void)speechControllerDidStartRecording:(id)arg0 audioDeviceInfo:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)speechControllerDidStopRecording:(id)arg0 audioDeviceInfo:(id)arg1 forReason:(NSInteger)arg2 estimatedSpeechEndHostTime:(NSUInteger)arg3 ;
-(void)speechControllerDidUpdateSmartSiriVolume:(id)arg0 forReason:(NSUInteger)arg1 ;
-(void)speechControllerEndRecordInterruption:(id)arg0 ;
-(void)speechControllerLPCMRecordBufferAvailable:(id)arg0 buffer:(id)arg1 ;
-(void)speechControllerRecordBufferAvailable:(id)arg0 buffers:(id)arg1 durationInSec:(float)arg2 recordedAt:(NSUInteger)arg3 audioDeviceInfo:(id)arg4 ;
-(void)speechControllerRecordHardwareConfigurationDidChange:(id)arg0 toConfiguration:(NSInteger)arg1 ;
-(void)speechControllerRequestsOperation:(NSUInteger)arg0 forReason:(NSUInteger)arg1 ;
-(void)speechControllerRequestsOperation:(NSUInteger)arg0 forReason:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)stopSpeechCaptureForEvent:(NSInteger)arg0 suppressAlert:(BOOL)arg1 hostTime:(NSUInteger)arg2 ;
-(void)suppressUtteranceGradingIfRequired;
-(void)suspendAutomaticEndpointingInRange:(struct AFTimeRange )arg0 ;
-(void)updateEndpointHintForDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)updateServerEndpointFeatures:(id)arg0 ;
-(void)updateSpeechSynthesisRecord:(id)arg0 ;


@end


#endif