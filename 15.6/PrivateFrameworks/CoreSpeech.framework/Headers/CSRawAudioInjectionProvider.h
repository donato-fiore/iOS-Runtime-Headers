// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSRAWAUDIOINJECTIONPROVIDER_H
#define CSRAWAUDIOINJECTIONPROVIDER_H

@class NSHashTable;
@protocol OS_dispatch_source, OS_dispatch_queue;


#import "CSAudioRecorder.h"

@interface CSRawAudioInjectionProvider : CSAudioRecorder

@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // ivar: _audioFeedTimer
@property (nonatomic) *__sFILE fp; // ivar: _fp
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(void)createSharedAudioSession;
-(BOOL)activateAudioSessionWithReason:(NSUInteger)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
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
-(id)recordDeviceInfoWithStreamHandleId:(NSUInteger)arg0 recordDeviceIndicator:(id)arg1 ;
-(id)recordRouteWithRecordDeviceIndicator:(id)arg0 ;
-(id)recordSettingsWithStreamHandleId:(NSUInteger)arg0 ;
-(id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg0 ;
-(void)_readAudioBufferAndFeed;
-(void)configureAlertBehavior:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enableMiniDucking:(BOOL)arg0 ;
-(void)enableSmartRoutingConsiderationForStream:(NSUInteger)arg0 enable:(BOOL)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)setAudioServerCrashEventDelegate:(id)arg0 ;
-(void)setAudioSessionEventDelegate:(id)arg0 ;
-(void)setContext:(id)arg0 completion:(id)arg1 ;
-(void)setDuckOthersOption:(BOOL)arg0 ;
-(void)setMeteringEnabled:(BOOL)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateMeters;


@end


#endif