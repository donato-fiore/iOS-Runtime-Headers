// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOINJECTIONPROVIDER_H
#define CSAUDIOINJECTIONPROVIDER_H

@class NSString, NSMutableDictionary, NSMutableArray, NSHashTable, NSUUID;
@protocol CSAudioInjectionEngineDelegate, OS_dispatch_queue;


#import "CSAudioRecorder.h"
#import "CSAudioInjectionEngine.h"
#import "CSAudioInjectionDevice.h"

@interface CSAudioInjectionProvider : CSAudioRecorder <CSAudioInjectionEngineDelegate>



@property (nonatomic) NSUInteger activateEndTime; // ivar: _activateEndTime
@property (nonatomic) NSUInteger activateStartTime; // ivar: _activateStartTime
@property (retain, nonatomic) NSString *atvRemoteDeviceID; // ivar: _atvRemoteDeviceID
@property (retain, nonatomic) NSMutableDictionary *audioInjectionEngines; // ivar: _audioInjectionEngines
@property (retain, nonatomic) CSAudioInjectionEngine *builtInAudioInjectionEngine; // ivar: _builtInAudioInjectionEngine
@property (retain, nonatomic) CSAudioInjectionDevice *builtInDevice; // ivar: _builtInDevice
@property (retain, nonatomic) CSAudioInjectionDevice *bundleTvRemote; // ivar: _bundleTvRemote
@property (retain, nonatomic) NSMutableArray *connectedDevices; // ivar: _connectedDevices
@property (nonatomic) NSUInteger deactivateEndTime; // ivar: _deactivateEndTime
@property (nonatomic) NSUInteger deactivateStartTime; // ivar: _deactivateStartTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float didStartDelayInSeconds; // ivar: _didStartDelayInSeconds
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger latestPluginStreamId; // ivar: _latestPluginStreamId
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)defaultInjectionProvider;
+(void)createSharedAudioSession;
-(BOOL)activateAudioSessionWithReason:(NSUInteger)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)deactivateAudioSession:(NSUInteger)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)duckOthersOption;
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
-(id)audioDeviceInfoWithStreamHandleId:(NSUInteger)arg0 recordDeviceIndicator:(id)arg1 ;
-(id)init;
-(id)metrics;
-(id)playbackRoute;
-(id)primaryInputDevice;
-(id)recordDeviceInfoWithStreamHandleId:(NSUInteger)arg0 recordDeviceIndicator:(id)arg1 ;
-(id)recordRouteWithRecordDeviceIndicator:(id)arg0 ;
-(id)recordSettingsWithStreamHandleId:(NSUInteger)arg0 ;
-(id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg0 ;
-(void)_connectPluginDevice:(id)arg0 ;
-(void)_createSpeechDetectionVADIfNeeded;
-(void)_tearDownSpeechDetectionVADIfNeeded;
-(void)audioEngineAudioChunkForTvAvailable:(id)arg0 audioChunk:(id)arg1 ;
-(void)audioEngineBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 atTime:(NSUInteger)arg4 ;
-(void)audioEngineDidStartRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)audioEngineDidStopRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)configureAlertBehavior:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 ;
-(void)connectDevice:(id)arg0 ;
-(void)dealloc;
-(void)disconnectDevice:(id)arg0 ;
-(void)enableMiniDucking:(BOOL)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)setAudioServerCrashEventDelegate:(id)arg0 ;
-(void)setAudioSessionEventDelegate:(id)arg0 ;
-(void)setContext:(id)arg0 completion:(id)arg1 ;
-(void)setDuckOthersOption:(BOOL)arg0 ;
-(void)setMeteringEnabled:(BOOL)arg0 ;
-(void)start;
-(void)stop;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateMeters;
-(void)willDestroy;


@end


#endif