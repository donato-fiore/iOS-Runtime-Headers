// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFAUDIORECORDER_H
#define HFAUDIORECORDER_H

@class AVAudioRecorder, NSDateFormatter, NSString, NSURL, NSNumber;
@protocol AVAudioRecorderDelegate, HFAudioRecorderDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFAudioRecorder : NSObject <AVAudioRecorderDelegate>



@property (retain, nonatomic) AVAudioRecorder *audioRecorder; // ivar: _audioRecorder
@property (weak, nonatomic) NSObject<HFAudioRecorderDelegate> *audioRecorderDelegate; // ivar: _audioRecorderDelegate
@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionIsActive; // ivar: _audioSessionIsActive
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerMeteringTimer; // ivar: _powerMeteringTimer
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (nonatomic) *OpaqueAudioFileID recordingAudiofileID; // ivar: _recordingAudiofileID
@property (retain, nonatomic) NSURL *recordingAudiofileURL; // ivar: _recordingAudiofileURL
@property (nonatomic) CGFloat recordingDurationLimit; // ivar: _recordingDurationLimit
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQueue; // ivar: _recordingQueue
@property (nonatomic) CGFloat recordingStartTimeInterval; // ivar: _recordingStartTimeInterval
@property (nonatomic) NSUInteger recordingStopSource; // ivar: _recordingStopSource
@property (nonatomic) CGFloat recordingStopTimeInterval; // ivar: _recordingStopTimeInterval
@property (retain, nonatomic) NSNumber *routeChangeReason; // ivar: _routeChangeReason
@property (nonatomic) unsigned int soundIDForRecordBegin; // ivar: _soundIDForRecordBegin
@property (nonatomic) unsigned int soundIDForRecordEnd; // ivar: _soundIDForRecordEnd
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalPacketsCount; // ivar: _totalPacketsCount


-(BOOL)_isPowerMeteringTimerValid;
-(CGFloat)currentRecordedDuration;
-(id)initWithActivationMode:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)initWithAudioRecorderDelegate:(id)arg0 ;
-(void)_activateRecordingAudioSession;
-(void)_cleanup;
-(void)_createSystemSounds;
-(void)_deactivateRecordingAudioSession:(BOOL)arg0 ;
-(void)_deregisterAudioSessionObservers;
-(void)_playStartRecordingToneWithCompletion:(id)arg0 ;
-(void)_playStopRecordingToneWithCompletion:(id)arg0 ;
-(void)_registerAudioSessionObservers;
-(void)_setupAudioFileForRecording;
-(void)_startPowerMeteringTimer;
-(void)_stopPowerMeteringTimer;
-(void)audioRecorderDidFinishRecording:(id)arg0 successfully:(BOOL)arg1 ;
-(void)audioSessionDidInterrupt:(id)arg0 ;
-(void)audioSessionMediaServicesWereLost:(id)arg0 ;
-(void)audioSessionMediaServicesWereReset:(id)arg0 ;
-(void)audioSessionRouteChanged:(id)arg0 ;
-(void)dealloc;
-(void)playAlertSoundForType:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)prepareRecording;
-(void)startRecording;
-(void)stopRecording;


@end


#endif