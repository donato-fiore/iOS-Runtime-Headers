// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIORECORDER_H
#define CSAUDIORECORDER_H

@class AVVoiceController, NSMutableDictionary, NSString, NSHashTable;
@protocol AVVoiceControllerRecordDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate, CSRemoteRecordClientDelegate, CSAudioServerCrashEventProviding, CSAudioSessionEventProviding, CSAudioServerCrashEventProvidingDelegate, OS_dispatch_queue, CSAudioSessionEventProvidingDelegate;

#import <Foundation/Foundation.h>

#import "CSRemoteRecordClient.h"
#import "CSAudioFileReader.h"

@interface CSAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate, CSRemoteRecordClientDelegate, CSAudioServerCrashEventProviding, CSAudioSessionEventProviding>

 {
    AVVoiceController *_voiceController;
    AudioBufferList _interleavedABL;
    *AudioBufferList _pNonInterleavedABL;
    CSRemoteRecordClient *_remoteRecordClient;
    NSMutableDictionary *_opusDecoders;
    CSAudioFileReader *_audioFileReader;
    NSUInteger _audioFilePathIndex;
    BOOL _waitingForDidStart;
    NSUInteger _pendingTwoShotVTToken;
}


@property (weak, nonatomic) NSObject<CSAudioServerCrashEventProvidingDelegate> *crashEventDelegate; // ivar: _crashEventDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL duckOthersOption;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<CSAudioSessionEventProvidingDelegate> *sessionEventDelegate; // ivar: _sessionEventDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue; // ivar: _voiceControllerCreationQueue


+(NSUInteger)_convertDeactivateOption:(NSUInteger)arg0 ;
+(void)createSharedAudioSession;
-(BOOL)_hasLocalPendingTwoShot;
-(BOOL)_needResetAudioInjectionIndex:(id)arg0 ;
-(BOOL)_shouldInjectAudio;
-(BOOL)_shouldLogResourceNotAvailableError;
-(BOOL)_shouldUseRemoteBuiltInMic:(id)arg0 ;
-(BOOL)_startAudioStreamForAudioInjectionWithAVVCContext:(id)arg0 ;
-(BOOL)activateAudioSessionWithReason:(NSUInteger)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)deactivateAudioSession:(NSUInteger)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isNarrowBandWithStreamHandleId:(NSUInteger)arg0 ;
-(BOOL)isRecordingWithRecordDeviceIndicator:(id)arg0 ;
-(BOOL)isSessionCurrentlyActivated;
-(BOOL)playAlertSoundForType:(NSInteger)arg0 recordDevideIndicator:(id)arg1 ;
-(BOOL)playRecordStartingAlertAndResetEndpointerFromStream:(NSUInteger)arg0 ;
-(BOOL)prepareAudioStreamRecord:(id)arg0 recordDeviceIndicator:(id)arg1 error:(*id)arg2 ;
-(BOOL)prewarmAudioSessionWithStreamHandleId:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setAlertSoundFromURL:(id)arg0 forType:(NSInteger)arg1 ;
-(BOOL)setCurrentContext:(id)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setRecordMode:(NSInteger)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)startAudioStreamWithOption:(id)arg0 recordDeviceIndicator:(id)arg1 error:(*id)arg2 ;
-(BOOL)stopAudioStreamWithRecordDeviceIndicator:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)alertStartTime;
-(float)averagePowerForChannel:(NSUInteger)arg0 ;
-(float)peakPowerForChannel:(NSUInteger)arg0 ;
-(float)recordingSampleRateWithStreamHandleId:(NSUInteger)arg0 ;
-(id)_compensateChannelDataIfNeeded:(id)arg0 receivedNumChannels:(unsigned int)arg1 ;
-(id)_fetchRemoteRecordClientWithDeviceId:(id)arg0 streamHandleId:(NSUInteger)arg1 ;
-(id)_getRecordSettingsWithRequest:(id)arg0 ;
-(id)_updateLanguageCodeForRemoteVTEIResult:(id)arg0 ;
-(id)_voiceControllerWithError:(*id)arg0 ;
-(id)audioDeviceInfoWithStreamHandleId:(NSUInteger)arg0 ;
-(id)initWithQueue:(id)arg0 error:(*id)arg1 ;
-(id)metrics;
-(id)playbackRoute;
-(id)recordDeviceInfoWithStreamHandleId:(NSUInteger)arg0 ;
-(id)recordRouteWithRecordDeviceIndicator:(id)arg0 ;
-(id)recordSettingsWithStreamHandleId:(NSUInteger)arg0 ;
-(id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg0 ;
-(void)_audioRecorderDidStartRecordingSuccessfully:(BOOL)arg0 streamHandleID:(NSUInteger)arg1 error:(id)arg2 ;
-(void)_audioRecorderDidStopRecordingForReason:(NSInteger)arg0 streamHandleID:(NSUInteger)arg1 ;
-(void)_destroyVoiceController;
-(void)_logResourceNotAvailableErrorIfNeeded:(id)arg0 ;
-(void)_processAudioBuffer:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 arrivalTimestampToAudioRecorder:(NSUInteger)arg2 ;
-(void)_processAudioChain:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 remoteVAD:(id)arg2 atTime:(NSUInteger)arg3 arrivalTimestampToAudioRecorder:(NSUInteger)arg4 numberOfChannels:(int)arg5 ;
-(void)audioDecoderDidDecodePackets:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 timestamp:(NSUInteger)arg4 arrivalTimestampToAudioRecorder:(NSUInteger)arg5 wasBuffered:(BOOL)arg6 receivedNumChannels:(unsigned int)arg7 ;
-(void)audioFileReaderBufferAvailable:(id)arg0 buffer:(id)arg1 atTime:(NSUInteger)arg2 ;
-(void)audioFileReaderDidStartRecording:(id)arg0 successfully:(BOOL)arg1 error:(id)arg2 ;
-(void)audioFileReaderDidStopRecording:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)configureAlertBehavior:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enableMiniDucking:(BOOL)arg0 ;
-(void)enableSmartRoutingConsiderationForStream:(NSUInteger)arg0 enable:(BOOL)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)remoteRecordConnectionDisconnected:(id)arg0 ;
-(void)remoteRecordDidStartRecordingWithStreamHandleId:(NSUInteger)arg0 error:(id)arg1 ;
-(void)remoteRecordDidStopRecordingWithWithStreamHandleId:(NSUInteger)arg0 error:(id)arg1 ;
-(void)remoteRecordLPCMBufferAvailable:(id)arg0 streamHandleId:(NSUInteger)arg1 ;
-(void)remoteRecordTwoShotDetectedAtTime:(CGFloat)arg0 ;
-(void)setAnnounceCallsEnabled:(BOOL)arg0 withStreamHandleID:(NSUInteger)arg1 ;
-(void)setAudioServerCrashEventDelegate:(id)arg0 ;
-(void)setAudioSessionEventDelegate:(id)arg0 ;
-(void)setContext:(id)arg0 completion:(id)arg1 ;
-(void)setDuckOthersForStream:(NSUInteger)arg0 ;
-(void)setMeteringEnabled:(BOOL)arg0 ;
-(void)setMixWithOthersForStream:(NSUInteger)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateMeters;
-(void)voiceControllerAudioCallback:(id)arg0 forStream:(NSUInteger)arg1 buffer:(id)arg2 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg0 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg0 withContext:(id)arg1 ;
-(void)voiceControllerDidFinishAlertPlayback:(id)arg0 ofType:(int)arg1 error:(id)arg2 ;
-(void)voiceControllerDidSetAudioSessionActive:(id)arg0 isActivated:(BOOL)arg1 ;
-(void)voiceControllerDidStartRecording:(id)arg0 forStream:(NSUInteger)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerDidStopRecording:(id)arg0 forStream:(NSUInteger)arg1 forReason:(NSInteger)arg2 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)voiceControllerEndRecordInterruption:(id)arg0 ;
-(void)voiceControllerMediaServicesWereLost:(id)arg0 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg0 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg0 toConfiguration:(int)arg1 ;
-(void)voiceControllerStreamInvalidated:(id)arg0 forStream:(NSUInteger)arg1 ;
-(void)voiceControllerWillSetAudioSessionActive:(id)arg0 willActivate:(BOOL)arg1 ;
-(void)willDestroy;


@end


#endif