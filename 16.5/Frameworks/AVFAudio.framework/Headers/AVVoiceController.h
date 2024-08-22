// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVOICECONTROLLER_H
#define AVVOICECONTROLLER_H

@class NSString, NSDictionary;
@protocol AVAudioRemoteInputPlugin_PrivateTest, Endpointer, AVVoiceControllerRecordDelegate;

#import <Foundation/Foundation.h>

#import "AVAudioFormat.h"

@interface AVVoiceController : NSObject <AVAudioRemoteInputPlugin_PrivateTest>

 {
    *void _impl;
}


@property (readonly) NSUInteger alertStartTime; // ivar: _alertStartTime
@property float alertVolume;
@property (getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=setDuckOthersOption:) BOOL duckOthersOption;
@property (retain) NSObject<Endpointer> *endpointerDelegate;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger lastRecordStartTime;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (readonly) NSDictionary *metrics;
@property (readonly) NSUInteger numberOfChannels;
@property (readonly) AVAudioFormat *pcmRecordBufferFormat;
@property (readonly, copy) NSString *playbackRoute;
@property NSObject<AVVoiceControllerRecordDelegate> *recordDelegate;
@property CGFloat recordEndWaitTime;
@property int recordEndpointMode;
@property CGFloat recordInterspeechWaitTime;
@property (readonly, copy) NSString *recordRoute;
@property (readonly) NSDictionary *recordSettings;
@property CGFloat recordStartWaitTime;
@property (readonly, getter=isRecording) BOOL recording;
@property (getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;
@property (getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;
@property (readonly) Class superclass;
@property (getter=isSynchronousCallbackEnabled) BOOL synchronousCallbackEnabled;
@property (readonly) NSDictionary *voiceTriggerInfo;


-(BOOL)IsDeviceAvailableInLocalRoute:(id)arg0 error:(*id)arg1 ;
-(BOOL)activateAudioSessionForStream:(NSUInteger)arg0 isPrewarm:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)activateAudioSessionForStream:(NSUInteger)arg0 isPrewarm:(BOOL)arg1 recordMode:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)configureAlertBehaviorForStream:(id)arg0 error:(*id)arg1 ;
-(BOOL)enableSmartRoutingConsiderationForStream:(NSUInteger)arg0 enable:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isDuckingSupportedOnPickedRouteForStream:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isMeteringEnabledForStream:(NSUInteger)arg0 ;
-(BOOL)playAlertSoundForType:(int)arg0 ;
-(BOOL)playAlertSoundForType:(int)arg0 overrideMode:(NSInteger)arg1 ;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)prepareListenWithSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareRecordForStream:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareRecordWithSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)releaseAudioSessionForListening:(*id)arg0 ;
-(BOOL)releaseAudioSessionForListening:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setAlertSoundFromURL:(id)arg0 forType:(int)arg1 ;
-(BOOL)setAnnounceCallsEnabledForStream:(NSUInteger)arg0 enable:(BOOL)arg1 ;
-(BOOL)setContextForStream:(id)arg0 forStream:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setCurrentContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDuckOthersForStream:(NSUInteger)arg0 withSettings:(id)arg1 error:(*id)arg2 ;
-(BOOL)setRecordBufferDuration:(CGFloat)arg0 ;
-(BOOL)setRecordMode:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setRecordModeForStream:(NSUInteger)arg0 recordMode:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)startListening:(*id)arg0 ;
-(BOOL)startListeningWithSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)startRecordForStream:(id)arg0 error:(*id)arg1 ;
-(BOOL)startRecording;
-(BOOL)startRecording:(*id)arg0 ;
-(BOOL)startRecordingAtTime:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)startRecordingWithSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopRecordForStream:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)updateMeterForStream:(NSUInteger)arg0 ;
-(BOOL)willAcceptContext:(id)arg0 ;
-(CGFloat)getRecordBufferDuration;
-(CGFloat)getRecordBufferDurationForStream:(NSUInteger)arg0 ;
-(NSInteger)getCurrentSessionState;
-(NSInteger)getCurrentSessionStateForStream:(NSUInteger)arg0 ;
-(NSInteger)getCurrentStreamState:(NSUInteger)arg0 ;
-(NSInteger)getRecordModeForStream:(NSUInteger)arg0 ;
-(NSUInteger)getAlertStartTime;
-(NSUInteger)setContext:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)setContext:(id)arg0 streamType:(*NSInteger)arg1 error:(*id)arg2 ;
-(float)averagePowerForChannel:(NSUInteger)arg0 ;
-(float)getAveragePowerForStream:(NSUInteger)arg0 forChannel:(NSUInteger)arg1 ;
-(float)getPeakPowerForStream:(NSUInteger)arg0 forChannel:(NSUInteger)arg1 ;
-(float)peakPowerForChannel:(NSUInteger)arg0 ;
-(id)currentRecordDeviceInfo;
-(id)getRecordDeviceInfoForStream:(NSUInteger)arg0 ;
-(id)getRecordSettingsForStream:(NSUInteger)arg0 ;
-(id)initVoiceControllerForClient:(NSInteger)arg0 withError:(*id)arg1 ;
-(id)initWithContext:(id)arg0 error:(*id)arg1 ;
-(id)initWithError:(*id)arg0 ;
-(id)mockPluginEndpoint;
-(int)doStartRecordingAtTime_v1:(NSUInteger)arg0 behavior:(id)arg1 ;
-(struct shared_ptr<ControllerImpl> )impl;
-(void)_teardownWithError:(*id)arg0 ;
-(void)alertPlaybackFinishedOfType_v1v2:(int)arg0 ;
-(void)beganRecording_v1v2:(NSUInteger)arg0 status:(int)arg1 ;
-(void)beginAudioSessionActivate_v1v2:(BOOL)arg0 ;
-(void)beginRecordInterruptionWithContext_v1v2:(id)arg0 ;
-(void)configureAlertBehavior:(id)arg0 ;
-(void)configureAlertBehaviorForStream:(id)arg0 completion:(id)arg1 ;
-(void)deactivateAudioSessionForStream:(NSUInteger)arg0 withOptions:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)deactivateAudioSessionForStream:(NSUInteger)arg0 withOptions:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)deactivateAudioSessionWithOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enableMiniDucking:(BOOL)arg0 ;
-(void)enableTriangleModeForStream:(NSUInteger)arg0 enable:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)encodeError:(int)arg0 ;
-(void)endAudioSessionActivate_v1v2:(BOOL)arg0 ;
-(void)endRecordInterruption_v1v2;
-(void)endpointDetected;
-(void)finalize;
-(void)finishedRecording_v1v2:(NSUInteger)arg0 status:(int)arg1 ;
-(void)getDeviceLatenciesForStream:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)getInputChannelInfoForStream:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)handleInterruption_v1v2:(id)arg0 ;
-(void)handleMediaServerDeath_v1v2:(id)arg0 ;
-(void)handleMediaServerReset_v1v2:(id)arg0 ;
-(void)handlePluginDidPublishDevice:(id)arg0 withDevice:(id)arg1 ;
-(void)handlePluginDidUnpublishDevice:(id)arg0 withDevice:(id)arg1 ;
-(void)handleRouteChange_v1v2:(id)arg0 ;
-(void)hardwareConfigChanged:(int)arg0 ;
-(void)interspeechPointDetected;
-(void)notifyStreamInvalidated_v1v2:(NSUInteger)arg0 ;
-(void)playAlert:(int)arg0 withOverride:(NSInteger)arg1 completion:(id)arg2 ;
-(void)prepareRecordForStream:(id)arg0 completion:(id)arg1 ;
-(void)prewarmAudioSession;
-(void)releaseAudioSession;
-(void)releaseAudioSession:(NSUInteger)arg0 ;
-(void)removeSessionNotifications:(id)arg0 ;
-(void)resetEndpointer;
-(void)sendRemoteConnectionMessage:(id)arg0 ;
-(void)sessionCleanup_v1v2;
-(void)sessionSetup_v1v2;
-(void)setContext:(id)arg0 completion:(id)arg1 ;
-(void)setRecordStatusChangeBlock:(id)arg0 ;
-(void)setSessionNotifications_v1v2:(id)arg0 ;
-(void)setupAlertBehavior_v1:(id)arg0 ;
-(void)startRecordForStream:(id)arg0 completion:(id)arg1 ;
// -(void)startRecordWithSettings:(id)arg0 completion:(id)arg1 alertCompletion:(unk)arg2 audioCallback:(id)arg3  ;
-(void)startpointDetected;
-(void)stopRecordForStream:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)stopRecording;
-(void)teardownWithError:(*id)arg0 ;
-(void)updateMeters;


@end


#endif