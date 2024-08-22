// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSPEECHCONTROLLER_H
#define CSSPEECHCONTROLLER_H

@class NSDictionary, CSAudioZeroCounter, SOClockAlarmObserver, CSAsset, CSPlainAudioFileWriter, CSAudioRecordContext, NSString, NSMutableDictionary, NSUUID, SOMediaNowPlayingObserver, CSAudioPowerMeter, CSSelectiveChannelAudioFileWriter, SSRSpeakerRecognitionController, NSArray, SOClockTimerObserver, SSRVoiceProfileManager;
@protocol CSAudioConverterDelegate, CSSmartSiriVolumeControllerDelegate, CSAudioStreamProvidingDelegate, CSAudioAlertProvidingDelegate, CSAudioSessionControllerDelegate, CSAudioDecoderDelegate, CSEndpointAnalyzerImplDelegate, CSLanguageCodeUpdateMonitorDelegate, SOMediaNowPlayingListening, SOClockAlarmListening, SOClockTimerListening, CSSpeakerRecognitionProxyProtocol, SSRSpeakerRecognitionControllerDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSXPCClientDelegate, CSAudioSessionProvidingDelegate, CSSpeechManagerDelegate, CSContinuousVoiceTriggerDelegate, OS_dispatch_queue, OS_dispatch_group, CSAudioAlertProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSSpeechControllerDelegate, CSEndpointAnalyzer, CSLanguageDetectorDelegate, CSAudioSessionProviding, CSSpeakerIdentificationDelegate, CSAudioStreamProviding;

#import <Foundation/Foundation.h>

#import "CSAudioConverter.h"
#import "CSAudioSampleRateConverter.h"
#import "CSAudioDeviceInfo.h"
#import "CSAudioSessionController.h"
#import "CSAudioStream.h"
#import "CSContinuousVoiceTrigger.h"
#import "CSXPCClient.h"
#import "CSEndpointerProxy.h"
#import "CSLanguageDetector.h"
#import "CSStopRecordingOptions.h"
#import "CSSACInfoMonitor.h"
#import "CSSpeakerRecognitionProxy.h"
#import "CSSpeechEndHostTimeEstimator.h"
#import "CSSmartSiriVolumeController.h"
#import "CSVolumeMonitor.h"
#import "CSXPCClientFactory.h"

@interface CSSpeechController : NSObject <CSAudioConverterDelegate, CSSmartSiriVolumeControllerDelegate, CSAudioStreamProvidingDelegate, CSAudioAlertProvidingDelegate, CSAudioSessionControllerDelegate, CSAudioDecoderDelegate, CSEndpointAnalyzerImplDelegate, CSLanguageCodeUpdateMonitorDelegate, SOMediaNowPlayingListening, SOClockAlarmListening, SOClockTimerListening, CSSpeakerRecognitionProxyProtocol, SSRSpeakerRecognitionControllerDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSXPCClientDelegate, CSAudioSessionProvidingDelegate, CSSpeechManagerDelegate, CSContinuousVoiceTriggerDelegate>

 {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_contextResetQueue;
    CSAudioConverter *_opusAudioConverter;
    CSAudioConverter *_narrowBandOpusConverter;
    CSAudioConverter *_audioConverter;
    CSAudioSampleRateConverter *_downsampler;
    NSDictionary *_requestedRecordSettings;
    NSDictionary *_lastVoiceTriggerInfo;
    NSDictionary *_lastRTSTriggerInfo;
    CSAudioZeroCounter *_continuousZeroCounter;
    NSObject<OS_dispatch_queue> *_audibleFeedbackQueue;
    NSObject<OS_dispatch_group> *_twoShotAudibleFeedbackDecisionGroup;
}


@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (retain, nonatomic) SOClockAlarmObserver *alarmMonitor; // ivar: _alarmMonitor
@property (retain, nonatomic) NSObject<CSAudioAlertProviding> *alertProvider; // ivar: _alertProvider
@property (retain, nonatomic) CSAsset *asset; // ivar: _asset
@property (retain, nonatomic) CSAudioDeviceInfo *audioDeviceInfo; // ivar: _audioDeviceInfo
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // ivar: _audioFileWriter
@property (retain, nonatomic) NSObject<CSAudioMeterProviding> *audioMeterProvider; // ivar: _audioMeterProvider
@property (retain, nonatomic) NSObject<CSAudioMetricProviding> *audioMetricProvider; // ivar: _audioMetricProvider
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext; // ivar: _audioRecordContext
@property (nonatomic) CGFloat audioSessionActivationDelay; // ivar: _audioSessionActivationDelay
@property (retain, nonatomic) CSAudioSessionController *audioSessionController; // ivar: _audioSessionController
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) NSString *bundleIdFromDictation; // ivar: _bundleIdFromDictation
@property (nonatomic) float cachedAvgPower; // ivar: _cachedAvgPower
@property (nonatomic) float cachedPeakPower; // ivar: _cachedPeakPower
@property (nonatomic) BOOL canPerformDelayedStop; // ivar: _canPerformDelayedStop
@property (retain, nonatomic) CSContinuousVoiceTrigger *continuousVoiceTrigger; // ivar: _continuousVoiceTrigger
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger decoderProcessedSampleCountForTV; // ivar: _decoderProcessedSampleCountForTV
@property (retain, nonatomic) NSMutableDictionary *decodersForTV; // ivar: _decodersForTV
@property (weak, nonatomic) NSObject<CSSpeechControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceRoleIsStereo; // ivar: _deviceRoleIsStereo
@property (nonatomic) BOOL didDeliverFirstSpeechPacket; // ivar: _didDeliverFirstSpeechPacket
@property (nonatomic) BOOL didDeliverLastBuffer; // ivar: _didDeliverLastBuffer
@property (retain, nonatomic) CSXPCClient *duckAudioXPCClient; // ivar: _duckAudioXPCClient
@property (readonly, nonatomic) NSObject<CSEndpointAnalyzer> *endpointAnalyzer;
@property (readonly, copy, nonatomic) NSUUID *endpointId; // ivar: _endpointId
@property (retain, nonatomic) CSEndpointerProxy *endpointerProxy; // ivar: _endpointerProxy
@property (nonatomic) BOOL hasPerformedDelayedStop; // ivar: _hasPerformedDelayedStop
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAlarmPlaying; // ivar: _isAlarmPlaying
@property (nonatomic) BOOL isAsrOnDevice; // ivar: _isAsrOnDevice
@property (nonatomic) BOOL isAudioSessionActivated; // ivar: _isAudioSessionActivated
@property (nonatomic) BOOL isMediaPlaying; // ivar: _isMediaPlaying
@property (nonatomic) BOOL isNarrowBand; // ivar: _isNarrowBand
@property (nonatomic) BOOL isOpus; // ivar: _isOpus
@property (nonatomic) BOOL isRemoteVADAvailableStream; // ivar: _isRemoteVADAvailableStream
@property (nonatomic) BOOL isSiriClientListening; // ivar: _isSiriClientListening
@property (nonatomic) BOOL isSoundPlaying; // ivar: _isSoundPlaying
@property (nonatomic) BOOL isTimerPlaying; // ivar: _isTimerPlaying
@property (retain, nonatomic) CSLanguageDetector *languageDetector; // ivar: _languageDetector
@property (weak, nonatomic) NSObject<CSLanguageDetectorDelegate> *languageDetectorDelegate; // ivar: _languageDetectorDelegate
@property (retain, nonatomic) NSString *logEventUUID; // ivar: _logEventUUID
@property (nonatomic) NSUInteger maxAllowedTrailingSamplesAfterSchedulingStop; // ivar: _maxAllowedTrailingSamplesAfterSchedulingStop
@property (retain, nonatomic) SOMediaNowPlayingObserver *mediaPlayingMonitor; // ivar: _mediaPlayingMonitor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaPlayingObserverQueue; // ivar: _mediaPlayingObserverQueue
@property (nonatomic) BOOL myriadPreventingTwoShotFeedback; // ivar: _myriadPreventingTwoShotFeedback
@property (nonatomic) NSUInteger numTrailingSamplesAfterSchedulingStop; // ivar: _numTrailingSamplesAfterSchedulingStop
@property (copy, nonatomic) id *pendingAudioSessionActivationCompletion; // ivar: _pendingAudioSessionActivationCompletion
@property (nonatomic) NSUInteger pendingAudioSessionActivationReason; // ivar: _pendingAudioSessionActivationReason
@property (retain, nonatomic) NSUUID *pendingAudioSessionActivationToken; // ivar: _pendingAudioSessionActivationToken
@property (retain, nonatomic) CSAudioPowerMeter *powerMeter; // ivar: _powerMeter
@property (retain, nonatomic) NSString *recordEventUUID; // ivar: _recordEventUUID
@property (retain, nonatomic) NSString *requestMHUUID; // ivar: _requestMHUUID
@property (retain, nonatomic) CSStopRecordingOptions *requestedStopRecordingOptions; // ivar: _requestedStopRecordingOptions
@property (retain, nonatomic) CSSACInfoMonitor *sacInfoMonitor; // ivar: _sacInfoMonitor
@property (retain, nonatomic) CSSelectiveChannelAudioFileWriter *serverLoggingWriter; // ivar: _serverLoggingWriter
@property (retain, nonatomic) NSObject<CSAudioSessionProviding> *sessionProvider; // ivar: _sessionProvider
@property (nonatomic) BOOL setupStarted; // ivar: _setupStarted
@property (nonatomic) BOOL shouldUseLanguageDetectorForCurrentRequest; // ivar: _shouldUseLanguageDetectorForCurrentRequest
@property (weak, nonatomic) NSObject<CSSpeakerIdentificationDelegate> *speakerIdDelegate; // ivar: _speakerIdDelegate
@property (retain, nonatomic) SSRSpeakerRecognitionController *speakerRecognitionController; // ivar: _speakerRecognitionController
@property (retain, nonatomic) CSSpeakerRecognitionProxy *speakerRecognitionProxy; // ivar: _speakerRecognitionProxy
@property (retain, nonatomic) NSDictionary *speakerRecognitionScores; // ivar: _speakerRecognitionScores
@property (retain, nonatomic) CSSpeechEndHostTimeEstimator *speechEndHostTimeEstimator; // ivar: _speechEndHostTimeEstimator
@property (retain, nonatomic) NSArray *ssrAssets; // ivar: _ssrAssets
@property (retain, nonatomic) NSString *ssvLogFilePath; // ivar: _ssvLogFilePath
@property (retain, nonatomic) NSObject<CSAudioStreamProviding> *streamProvider; // ivar: _streamProvider
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportHearstVoiceTrigger; // ivar: _supportHearstVoiceTrigger
@property (nonatomic) BOOL supportLazySessionActivtion; // ivar: _supportLazySessionActivtion
@property (nonatomic) BOOL supportPhatic; // ivar: _supportPhatic
@property (nonatomic) BOOL supportSessionActivateDelay; // ivar: _supportSessionActivateDelay
@property (nonatomic) BOOL supportTriagleModeSessionActivationRetry; // ivar: _supportTriagleModeSessionActivationRetry
@property (retain, nonatomic) SOClockTimerObserver *timerMonitor; // ivar: _timerMonitor
@property (nonatomic) BOOL twoShotNotificationEnabled; // ivar: _twoShotNotificationEnabled
@property (retain, nonatomic) SSRVoiceProfileManager *voiceProfileManager; // ivar: _voiceProfileManager
@property (retain, nonatomic) CSSmartSiriVolumeController *volumeController; // ivar: _volumeController
@property (retain, nonatomic) CSVolumeMonitor *volumeMonitor; // ivar: _volumeMonitor
@property (retain, nonatomic) CSXPCClient *xpcClient; // ivar: _xpcClient
@property (retain, nonatomic) CSXPCClientFactory *xpcClientFactory; // ivar: _xpcClientFactory


+(BOOL)isSmartSiriVolumeAvailable;
+(id)sharedController;
-(BOOL)_activateAudioSessionWithReason:(NSUInteger)arg0 delay:(CGFloat)arg1 delayRequested:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_activateAudioSessionWithReason:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_canPlayPhaticDuringMediaPlayback;
-(BOOL)_createAudioProviderFromXPCWithContext:(id)arg0 ;
-(BOOL)_currentConfigurationSupportsDucking;
-(BOOL)_doActivateAudioSessionWithReason:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_fetchAudioProviderWithContext:(id)arg0 ;
-(BOOL)_fetchLastTriggerInfo;
-(BOOL)_isDelayedDuckingSupportedContext;
-(BOOL)_isDuckingAvailableRoute:(id)arg0 ;
-(BOOL)_isHubRequestTV;
-(BOOL)_isRecordRouteBuiltinMic;
-(BOOL)_lazyActivateAudioSessionWithReason:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_setupAudioConverter:(BOOL)arg0 isNarrowBand:(BOOL)arg1 ;
-(BOOL)_shouldFetchRaiseToSpeakInfo;
-(BOOL)_shouldFetchVoiceTriggerInfo;
-(BOOL)_shouldReportEstimatedSpeechEndHostTime;
-(BOOL)_shouldResetContextAtPrepare;
-(BOOL)_shouldSchedulePhaticAtStartRecording;
-(BOOL)_shouldSetStartSampleCount;
-(BOOL)_shouldSetStartSampleCountForRTS;
-(BOOL)_shouldTrackLaunchLatency;
-(BOOL)_shouldUseLanguageDetector:(id)arg0 ;
-(BOOL)_shouldUseSoundPlaybackMonitors;
-(BOOL)initializeRecordSessionWithRecordContext:(id)arg0 ;
-(BOOL)isRecording;
-(BOOL)isSmartSiriVolumeAvailable;
-(BOOL)playAlertSoundForType:(NSInteger)arg0 ;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)prepareRecordWithSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)prewarmAudioSession;
-(BOOL)setAlertSoundFromURL:(id)arg0 forType:(NSInteger)arg1 ;
-(BOOL)setCurrentRecordContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)setRecordBufferDuration:(CGFloat)arg0 ;
-(BOOL)startRecording:(*id)arg0 ;
-(BOOL)startRecordingWithSettings:(id)arg0 error:(*id)arg1 ;
-(CGFloat)getRecordBufferDuration;
-(CGFloat)lastEndOfVoiceActivityTime;
-(NSInteger)_currentAudioRecorderSampleRate;
-(NSUInteger)_phaticPlaybackReason;
-(NSUInteger)alertStartTime;
-(NSUInteger)outputReferenceChannel;
-(float)_scheduledPhaticDelay;
-(float)averagePowerForChannel:(NSUInteger)arg0 ;
-(float)averagePowerForOutputReference;
-(float)getSmartSiriVolume;
-(float)getVolumeForTTSType:(NSUInteger)arg0 ;
-(float)peakPowerForChannel:(NSUInteger)arg0 ;
-(float)peakPowerForOutputReference;
-(id)_contextToString:(id)arg0 ;
-(id)_createAlarmMonitor;
-(id)_createMediaPlayingMonitor;
-(id)_createTimerMonitor;
-(id)_fetchAudioDecoderForTV:(unsigned int)arg0 ;
-(id)_fetchFallbackAudioSessionReleaseProviding;
-(id)_getSpeechIdentifier;
-(id)_languageDetectorOptionFromSettings:(id)arg0 ;
-(id)_mapScoresToSharedSiriId:(id)arg0 ;
-(id)_processSpeakerRecognitionResult:(id)arg0 ;
-(id)endpointerModelVersion;
-(id)getAudioConverterForTest;
-(id)init;
-(id)initWithEndpointId:(id)arg0 ;
-(id)initWithEndpointId:(id)arg0 xpcClientFactory:(id)arg1 endpointer:(id)arg2 continuousVoiceTrigger:(id)arg3 siriVolumeController:(id)arg4 mediaPlayingMonitor:(id)arg5 alarmMonitor:(id)arg6 timerMonitor:(id)arg7 sacInfoMonitor:(id)arg8 audioSessionController:(id)arg9 supportPhatic:(BOOL)arg10 supportHearstVoiceTrigger:(BOOL)arg11 supportTriagleModeSessionActivationRetry:(BOOL)arg12 supportSessionActivateDelay:(BOOL)arg13 supportLazySessionActivtion:(BOOL)arg14 ;
-(id)playbackRoute;
-(id)recordDeviceInfo;
-(id)recordRoute;
-(id)recordSettings;
-(id)voiceTriggerInfo;
-(struct AudioStreamBasicDescription )getLPCMAudioStreamBasicDescription;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg0 didInstallNewAsset:(BOOL)arg1 assetProviderType:(NSUInteger)arg2 ;
-(void)CSXPCClient:(id)arg0 didDisconnect:(BOOL)arg1 ;
-(void)_audioStreamProvdider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)_cancelPendingAudioSessionActivateForReason:(id)arg0 ;
-(void)_createAudioPowerMeterIfNeeded;
-(void)_createLanguageDetectorIfNeeded;
-(void)_deviceAudioLoggingWithFileWriter:(id)arg0 ;
-(void)_didStopForReason:(NSInteger)arg0 ;
-(void)_fetchMetricsAndLog;
-(void)_initializeAlarmState;
-(void)_initializeMediaPlayingState;
-(void)_initializeTimerState;
-(void)_logRecordingStopErrorIfNeeded:(NSInteger)arg0 ;
-(void)_performPendingAudioSessionActivateForReason:(id)arg0 ;
-(void)_refreshSpeakerRecognitionAssets;
// -(void)_scheduleActivateAudioSessionWithDelay:(CGFloat)arg0 sessionActivateReason:(NSUInteger)arg1 scheduleReason:(id)arg2 validator:(id)arg3 completion:(unk)arg4  ;
-(void)_setAlarmIsPlaying:(BOOL)arg0 ;
-(void)_setMediaPlaybackState:(BOOL)arg0 isInterrupted:(BOOL)arg1 ;
-(void)_setSoundPlayingState;
-(void)_setTimerIsPlaying:(BOOL)arg0 ;
-(void)_setupAudioProviderFromXPC:(id)arg0 ;
-(void)_setupDownsamplerIfNeeded;
-(void)_setupSpeakerRecognitionController;
-(void)_startPhaticDecision;
-(void)_teardownAudioProviderIfNeeded;
-(void)_updateRecordContextIfNeeded:(id)arg0 ;
-(void)audioAlertProvidingDidFinishAlertPlayback:(id)arg0 ofType:(NSInteger)arg1 error:(id)arg2 ;
-(void)audioConverterDidConvertPackets:(id)arg0 packets:(id)arg1 durationInSec:(float)arg2 timestamp:(NSUInteger)arg3 arrivalTimestampToAudioRecorder:(NSUInteger)arg4 ;
-(void)audioDecoderDidDecodePackets:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 timestamp:(NSUInteger)arg4 arrivalTimestampToAudioRecorder:(NSUInteger)arg5 wasBuffered:(BOOL)arg6 receivedNumChannels:(unsigned int)arg7 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionProvider:(id)arg0 didChangeContext:(BOOL)arg1 ;
-(void)audioSessionProvider:(id)arg0 didSetAudioSessionActive:(BOOL)arg1 ;
-(void)audioSessionProvider:(id)arg0 providerInvalidated:(BOOL)arg1 ;
-(void)audioSessionProvider:(id)arg0 willSetAudioSessionActive:(BOOL)arg1 ;
-(void)audioSessionProviderBeginInterruption:(id)arg0 ;
-(void)audioSessionProviderBeginInterruption:(id)arg0 withContext:(id)arg1 ;
-(void)audioSessionProviderEndInterruption:(id)arg0 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didHardwareConfigurationChange:(NSInteger)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)beginWaitingForMyriad;
-(void)cancelCurrentLanguageDetectorRequest;
-(void)clockAlarmObserver:(id)arg0 alarmDidDismiss:(id)arg1 ;
-(void)clockAlarmObserver:(id)arg0 alarmDidFire:(id)arg1 ;
-(void)clockAlarmObserver:(id)arg0 snapshotDidUpdateFrom:(id)arg1 to:(id)arg2 ;
-(void)clockTimerObserver:(id)arg0 snapshotDidUpdateFrom:(id)arg1 to:(id)arg2 ;
-(void)clockTimerObserver:(id)arg0 timerDidDismiss:(id)arg1 ;
-(void)clockTimerObserver:(id)arg0 timerDidFire:(id)arg1 ;
-(void)continuousVoiceTrigger:(id)arg0 detectedSilenceAfterVoiceTriggerAt:(CGFloat)arg1 ;
-(void)continuousVoiceTrigger:(id)arg0 detectedVoiceTriggerResult:(id)arg1 ;
-(void)didFinishSpeakerRecognition:(id)arg0 ;
-(void)didReceiveSpeakerRecognitionScoreCard:(id)arg0 ;
-(void)didTTSVolumeChange:(id)arg0 forReason:(NSUInteger)arg1 ;
-(void)endWaitingForMyriadWithDecision:(NSUInteger)arg0 ;
-(void)endpointer:(id)arg0 detectedTwoShotAtTime:(CGFloat)arg1 ;
-(void)fetchAudioMetricsWithCompletion:(id)arg0 ;
-(void)keywordDetectorDidDetectKeyword;
-(void)languageDetectorSetMostRecentRecognitionLanguage:(id)arg0 ;
-(void)nowPlayingObserver:(id)arg0 playbackStateDidChangeFrom:(NSInteger)arg1 to:(NSInteger)arg2 lastPlayingDate:(id)arg3 ;
-(void)preheat;
-(void)processServerEndpointFeatures:(id)arg0 ;
-(void)releaseAudioSession;
-(void)releaseAudioSession:(NSUInteger)arg0 ;
-(void)reset;
-(void)resetAudioSession;
-(void)resetEndpointer;
-(void)setDuckOthersOption:(BOOL)arg0 ;
-(void)setEndpointerOperationMode:(NSInteger)arg0 ;
-(void)setMeteringEnabled:(BOOL)arg0 ;
-(void)setPermanentVolumeOffsetWithDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumeDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumePercentage:(float)arg0 ;
-(void)setSynchronousCallbackEnabled:(BOOL)arg0 ;
-(void)shouldAcceptEagerResultForDuration:(CGFloat)arg0 resultsCompletionHandler:(id)arg1 ;
-(void)speakerRecognitionController:(id)arg0 hasSpeakerInfo:(id)arg1 ;
-(void)speakerRecognitionFinishedProcessing:(id)arg0 withFinalSpeakerInfo:(id)arg1 ;
-(void)startController;
-(void)stopEndpointer;
-(void)stopRecording;
-(void)stopRecordingWithOptions:(id)arg0 ;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg0 ;
-(void)updateEndpointerThreshold:(float)arg0 ;
-(void)updateMeters;
-(void)voiceTriggerAssetHandler:(id)arg0 endpointId:(id)arg1 didChangeCachedAsset:(id)arg2 ;


@end


#endif