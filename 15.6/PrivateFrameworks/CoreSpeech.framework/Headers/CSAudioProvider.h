// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOPROVIDER_H
#define CSAUDIOPROVIDER_H

@class NSString, CSADPPreventStandbyAssertion, NSUUID, NSMutableArray, NSHashTable, CSAudioTimeConverter, CSAudioCircularBuffer, CSAudioRecordContext, CSOSTransaction, NSMutableDictionary;
@protocol CSAudioRecorderDelegate, CSAudioServerCrashMonitorDelegate, CSAudioPreprocessorDelegate, CSAudioStreamProviding, CSAudioSessionProviding, CSAudioMetricProviding, CSAudioAlertProviding, CSAudioMeterProviding, CSTriggerInfoProviding, CSAudioAlertProvidingDelegate, OS_dispatch_source, OS_dispatch_queue, CSAudioProviderDelegate, OS_dispatch_group, CSAudioSessionProvidingDelegate;

#import <Foundation/Foundation.h>

#import "CSAudioPreprocessor.h"
#import "CSAudioRecorder.h"
#import "CSMicUsageReporter.h"
#import "CSAudioRecordDeviceIndicator.h"

@interface CSAudioProvider : NSObject <CSAudioRecorderDelegate, CSAudioServerCrashMonitorDelegate, CSAudioPreprocessorDelegate, CSAudioStreamProviding, CSAudioSessionProviding, CSAudioMetricProviding, CSAudioAlertProviding, CSAudioMeterProviding, CSTriggerInfoProviding>



@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) CSADPPreventStandbyAssertion *adpAssertion; // ivar: _adpAssertion
@property (weak, nonatomic) NSObject<CSAudioAlertProvidingDelegate> *alertDelegate; // ivar: _alertDelegate
@property (retain, nonatomic) NSUUID *alertPlaybackFinishTimeoutToken; // ivar: _alertPlaybackFinishTimeoutToken
@property (retain, nonatomic) NSMutableArray *alertPlaybackFinishWaitingCompletions; // ivar: _alertPlaybackFinishWaitingCompletions
@property (retain, nonatomic) NSHashTable *alertPlaybackFinishWaitingStreams; // ivar: _alertPlaybackFinishWaitingStreams
@property (nonatomic) NSUInteger audioPacketDeliveryCount; // ivar: _audioPacketDeliveryCount
@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioPacketWatchdog; // ivar: _audioPacketWatchdog
@property (retain, nonatomic) CSAudioPreprocessor *audioPreprocessor; // ivar: _audioPreprocessor
@property (retain, nonatomic) CSAudioRecorder *audioRecorder; // ivar: _audioRecorder
@property (nonatomic) NSUInteger audioStreamHandleId; // ivar: _audioStreamHandleId
@property (nonatomic) NSInteger audioStreamType; // ivar: _audioStreamType
@property (nonatomic) BOOL audioSystemRecovering; // ivar: _audioSystemRecovering
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // ivar: _audioTimeConverter
@property (retain, nonatomic) CSAudioCircularBuffer *circularBuffer; // ivar: _circularBuffer
@property (nonatomic) NSUInteger circularBufferStartHostTime; // ivar: _circularBufferStartHostTime
@property (nonatomic) NSUInteger circularBufferStartSampleCount; // ivar: _circularBufferStartSampleCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger estimatedStartHostTime; // ivar: _estimatedStartHostTime
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *historicalBufferRequestStreams; // ivar: _historicalBufferRequestStreams
@property (retain, nonatomic) CSAudioRecordContext *lastAudioRecorderContext; // ivar: _lastAudioRecorderContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // ivar: _loggingQueue
@property (retain, nonatomic) CSMicUsageReporter *micUsageReporter; // ivar: _micUsageReporter
@property (retain, nonatomic) NSMutableArray *pendingStartCompletions; // ivar: _pendingStartCompletions
@property (retain, nonatomic) NSMutableArray *pendingStopCompletions; // ivar: _pendingStopCompletions
@property (weak, nonatomic) NSObject<CSAudioProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (retain, nonatomic) CSAudioRecordDeviceIndicator *recordDeviceIndicator; // ivar: _recordDeviceIndicator
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue; // ivar: _recordQueue
@property (retain, nonatomic) CSOSTransaction *recordingTransaction; // ivar: _recordingTransaction
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup; // ivar: _recordingWillStartGroup
@property (weak, nonatomic) NSObject<CSAudioSessionProvidingDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (retain, nonatomic) NSMutableDictionary *startPendingOnStoppingStreamToCompletionDict; // ivar: _startPendingOnStoppingStreamToCompletionDict
@property (retain, nonatomic) NSHashTable *startPendingOnStoppingStreams; // ivar: _startPendingOnStoppingStreams
@property (retain, nonatomic) NSHashTable *startPendingStreams; // ivar: _startPendingStreams
@property (retain, nonatomic) NSUUID *startRecordingWatchDogToken; // ivar: _startRecordingWatchDogToken
@property (retain, nonatomic) NSHashTable *stopPendingStreams; // ivar: _stopPendingStreams
@property (retain, nonatomic) NSUUID *stopRecordingWatchDogToken; // ivar: _stopRecordingWatchDogToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *streamHandleQueue; // ivar: _streamHandleQueue
@property (retain, nonatomic) NSMutableArray *streamHolders; // ivar: _streamHolders
@property (nonatomic) NSUInteger streamState; // ivar: _streamState
@property (retain, nonatomic) NSHashTable *streams; // ivar: _streams
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitingForAlertFinish; // ivar: _waitingForAlertFinish


-(BOOL)_activateAudioSessionWithReason:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_canSetContext;
-(BOOL)_deactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_didPlayStartAlertSoundForSiri:(id)arg0 audioStream:(id)arg1 ;
-(BOOL)_prepareAudioStreamSync:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldHandleStartPendingOnStopping:(NSUInteger)arg0 withStopReason:(NSInteger)arg1 ;
-(BOOL)_shouldStopRecording;
-(BOOL)activateAudioSessionWithReason:(NSUInteger)arg0 dynamicAttribute:(NSUInteger)arg1 bundleID:(id)arg2 error:(*id)arg3 ;
-(BOOL)deactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)duckOthersOption;
-(BOOL)isNarrowBand;
-(BOOL)isRecording;
-(BOOL)playAlertSoundForType:(NSInteger)arg0 ;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)prepareAudioStreamSync:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(BOOL)prewarmAudioSessionWithError:(*id)arg0 ;
-(BOOL)setAlertSoundFromURL:(id)arg0 forType:(NSInteger)arg1 ;
-(BOOL)setCurrentContext:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)alertStartTime;
-(NSUInteger)audioStreamId;
-(float)averagePowerForChannel:(NSUInteger)arg0 ;
-(float)peakPowerForChannel:(NSUInteger)arg0 ;
-(id)_audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)_audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 channelIdx:(NSUInteger)arg2 ;
-(id)_audioStreamWithRequest:(id)arg0 streamName:(id)arg1 error:(*id)arg2 ;
-(id)_streamStateName:(NSUInteger)arg0 ;
-(id)audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 channelIdx:(NSUInteger)arg2 ;
-(id)audioChunkToEndFrom:(NSUInteger)arg0 ;
-(id)audioChunkToEndFrom:(NSUInteger)arg0 channelIdx:(NSUInteger)arg1 ;
-(id)audioDeviceInfo;
-(id)audioMetric;
-(id)audioStreamWithRequest:(id)arg0 streamName:(id)arg1 error:(*id)arg2 ;
-(id)holdAudioStreamWithDescription:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)initWithAudioStreamHandleId:(NSUInteger)arg0 audioStreamType:(NSInteger)arg1 audioRecordContext:(id)arg2 audioRecorder:(id)arg3 ;
-(id)playbackRoute;
-(id)recordDeviceInfo;
-(id)recordRoute;
-(id)recordSettings;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg0 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)_cancelAudioPacketWatchDog;
-(void)_clearDidStartRecordingDelegateWatchDog;
-(void)_clearDidStopRecordingDelegateWatchDog;
-(void)_deliverHistoricalAudioToStreamsWithRemoteVAD:(id)arg0 ;
-(void)_didReceiveFinishStartAlertPlaybackAt:(NSUInteger)arg0 ;
-(void)_fetchHistoricalAudioAndForwardToStream:(id)arg0 remoteVAD:(id)arg1 ;
-(void)_forwardAudioChunk:(id)arg0 toStream:(id)arg1 ;
-(void)_forwardAudioChunkForTV:(id)arg0 toStream:(id)arg1 ;
-(void)_handleAudioSystemFailure;
-(void)_handleDidStartAudioStreamWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleDidStopAudioStreamWithReason:(NSInteger)arg0 ;
-(void)_holdRecordingExceptionIfNeeded:(BOOL)arg0 ;
-(void)_holdRecordingTransactionIfNeeded;
-(void)_onAudioPacketWatchdogFire;
-(void)_postEpilogueAudioStream;
-(void)_preEpilogueAudioStream;
-(void)_prepareAudioStream:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)_processAudioBuffer:(id)arg0 remoteVAD:(id)arg1 atTime:(NSUInteger)arg2 arrivalTimestampToAudioRecorder:(NSUInteger)arg3 numberOfChannels:(int)arg4 ;
-(void)_releaseRecordingTransactionIfNeeded;
-(void)_saveRecordingBufferFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 toURL:(id)arg2 ;
-(void)_schduleDidStartRecordingDelegateWatchDogWithToken:(id)arg0 ;
-(void)_scheduleAlertFinishTimeout:(CGFloat)arg0 ;
-(void)_scheduleAudioPacketWatchDog;
-(void)_scheduleDidStartRecordingDelegateWatchDog;
-(void)_scheduleDidStopRecordingDelegateWatchDog;
-(void)_scheduleDidStopRecordingDelegateWatchDog:(id)arg0 ;
-(void)_setLatestRecordContext:(id)arg0 ;
-(void)_startAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;
-(void)_stopAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;
-(void)_switchToListeningMode;
-(void)_switchToRecordingMode;
-(void)_tearDownCircularBufferIfNeeded;
-(void)_updateRemoteDeviceIdFromAVVCIfNeeded;
-(void)attachTandemStream:(id)arg0 toPrimaryStream:(id)arg1 completion:(id)arg2 ;
-(void)audioPreprocessor:(id)arg0 hasAvailableBuffer:(id)arg1 atTime:(NSUInteger)arg2 arrivalTimestampToAudioRecorder:(NSUInteger)arg3 numberOfChannels:(int)arg4 ;
-(void)audioRecorder:(id)arg0 didSetAudioSessionActive:(BOOL)arg1 ;
-(void)audioRecorder:(id)arg0 willSetAudioSessionActive:(BOOL)arg1 ;
-(void)audioRecorderBeginRecordInterruption:(id)arg0 ;
-(void)audioRecorderBeginRecordInterruption:(id)arg0 withContext:(id)arg1 ;
-(void)audioRecorderBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 ;
-(void)audioRecorderBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 atTime:(NSUInteger)arg4 arrivalTimestampToAudioRecorder:(NSUInteger)arg5 numberOfChannels:(int)arg6 ;
-(void)audioRecorderBuiltInAudioStreamInvalidated:(id)arg0 error:(id)arg1 ;
-(void)audioRecorderDidFinishAlertPlayback:(id)arg0 ofType:(NSInteger)arg1 error:(id)arg2 ;
-(void)audioRecorderDidStartRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)audioRecorderDidStopRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 reason:(NSInteger)arg2 ;
-(void)audioRecorderDisconnected:(id)arg0 ;
-(void)audioRecorderEndRecordInterruption:(id)arg0 ;
-(void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg0 toConfiguration:(NSInteger)arg1 ;
-(void)audioRecorderStreamHandleIdInvalidated:(NSUInteger)arg0 ;
-(void)audioRecorderWillBeDestroyed:(id)arg0 ;
-(void)audioStreamWithRequest:(id)arg0 streamName:(id)arg1 completion:(id)arg2 ;
-(void)cancelAudioStreamHold:(id)arg0 ;
-(void)configureAlertBehavior:(id)arg0 ;
-(void)dealloc;
-(void)enableMiniDucking:(BOOL)arg0 ;
-(void)enableSmartRoutingConsideration:(BOOL)arg0 ;
-(void)notifyProviderContextChanged;
-(void)prepareAudioStream:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)reportsDynamicActivityAttribute:(NSUInteger)arg0 bundleId:(id)arg1 ;
-(void)saveRecordingBufferFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 toURL:(id)arg2 ;
-(void)saveRecordingBufferToEndFrom:(NSUInteger)arg0 toURL:(id)arg1 ;
-(void)setAnnounceCallsEnabled:(BOOL)arg0 withStreamHandleID:(NSUInteger)arg1 ;
-(void)setAudioAlertDelegate:(id)arg0 ;
-(void)setAudioProviderDelegate:(id)arg0 ;
-(void)setAudioSessionDelegate:(id)arg0 ;
-(void)setDuckOthersOption:(BOOL)arg0 ;
-(void)setLatestRecordContext:(id)arg0 streamType:(NSInteger)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg0 ;
-(void)start;
-(void)startAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;
-(void)stopAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;
-(void)triggerInfoForContext:(id)arg0 completion:(id)arg1 ;
-(void)updateMeters;


@end


#endif