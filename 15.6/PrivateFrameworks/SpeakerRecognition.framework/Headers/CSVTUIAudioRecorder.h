// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVTUIAUDIORECORDER_H
#define CSVTUIAUDIORECORDER_H

@class AVVoiceController, NSDictionary, NSString, NSHashTable;
@protocol AVVoiceControllerRecordDelegate, CSAudioServerCrashEventProviding, CSAudioSessionEventProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSVTUIRemoteRecordClient.h"
#import "CSVTUIAudioRecorderRemoteDeviceContext.h"

@interface CSVTUIAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, CSAudioServerCrashEventProviding, CSAudioSessionEventProviding>

 {
    AVVoiceController *_voiceController;
    AudioBufferList _interleavedABL;
    *AudioBufferList _pNonInterleavedABL;
    CSVTUIRemoteRecordClient *_remoteRecordClient;
    NSDictionary *_latestContext;
    BOOL _waitingForDidStart;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CSVTUIAudioRecorderRemoteDeviceContext *remoteDeviceContext; // ivar: _remoteDeviceContext
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue; // ivar: _voiceControllerCreationQueue


+(NSUInteger)_convertDeactivateOption:(NSUInteger)arg0 ;
-(BOOL)_shouldUseRemoteBuiltInMic:(id)arg0 ;
-(BOOL)activateAudioSessionWithReason:(NSUInteger)arg0 streamHandleId:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isRecordingWithStreamHandleId:(NSUInteger)arg0 ;
-(BOOL)prepareAudioStreamRecordWithStreamHandleId:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)startAudioStreamWithStreamHandleId:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)stopAudioStreamWithStreamHandleId:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)setContext:(id)arg0 error:(*id)arg1 ;
-(id)_compensateChannelDataIfNeeded:(id)arg0 receivedNumChannels:(unsigned int)arg1 ;
-(id)_getRecordSettingsWithRequest;
-(id)_voiceControllerWithError:(*id)arg0 ;
-(id)initWithQueue:(id)arg0 error:(*id)arg1 ;
-(id)playbackRoute;
-(id)recordRouteWithStreamHandleId:(NSUInteger)arg0 ;
-(void)_audioRecorderDidStartRecordingSuccessfully:(BOOL)arg0 streamHandleID:(NSUInteger)arg1 error:(id)arg2 ;
-(void)_audioRecorderDidStopRecordingForReason:(NSInteger)arg0 streamHandleID:(NSUInteger)arg1 ;
-(void)_destroyVoiceController;
-(void)_processAudioBuffer:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 arrivalTimestampToAudioRecorder:(NSUInteger)arg2 ;
-(void)_processAudioChain:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 remoteVAD:(id)arg2 atTime:(NSUInteger)arg3 arrivalTimestampToAudioRecorder:(NSUInteger)arg4 numberOfChannels:(int)arg5 ;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateAudioRecorderForTrainingDevice:(NSUInteger)arg0 deviceUUIDs:(id)arg1 ;
-(void)voiceControllerAudioCallback:(id)arg0 forStream:(NSUInteger)arg1 buffer:(id)arg2 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg0 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg0 withContext:(id)arg1 ;
-(void)voiceControllerDidSetAudioSessionActive:(id)arg0 isActivated:(BOOL)arg1 ;
-(void)voiceControllerDidStartRecording:(id)arg0 forStream:(NSUInteger)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerDidStopRecording:(id)arg0 forStream:(NSUInteger)arg1 forReason:(NSInteger)arg2 ;
-(void)voiceControllerEndRecordInterruption:(id)arg0 ;
-(void)voiceControllerMediaServicesWereLost:(id)arg0 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg0 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg0 toConfiguration:(int)arg1 ;
-(void)voiceControllerWillSetAudioSessionActive:(id)arg0 willActivate:(BOOL)arg1 ;


@end


#endif