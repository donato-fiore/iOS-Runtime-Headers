// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVTUIAUDIOSESSIONRECORDER_H
#define CSVTUIAUDIOSESSIONRECORDER_H

@class NSString, CSAudioPowerMeter;
@protocol CSVTUIAudioRecorderDelegate, CSVTUIAudioSession, OS_dispatch_queue, CSVTUIAudioSessionDelegate;

#import <Foundation/Foundation.h>

#import "CSVTUIAudioRecorder.h"

@interface CSVTUIAudioSessionRecorder : NSObject <CSVTUIAudioRecorderDelegate, CSVTUIAudioSession>

 {
    CSVTUIAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isRemoteDarwinDisplayConnected;
    BOOL _forceSupportsRemoteDarwinDisplay;
}


@property (nonatomic) NSUInteger audioStreamHandleId; // ivar: _audioStreamHandleId
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVTUIAudioSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSAudioPowerMeter *powerMeter; // ivar: _powerMeter
@property (readonly) Class superclass;


-(BOOL)_hasCorrectInputAudioRoute;
-(BOOL)_hasCorrectOutputAudioRoute;
-(BOOL)hasAudioRoute;
-(BOOL)hasCorrectAudioRoute;
-(BOOL)isRecording;
-(BOOL)prepareRecord;
-(BOOL)startRecording;
-(NSInteger)convertStopReason:(NSInteger)arg0 ;
-(NSUInteger)audioSource;
-(float)averagePower;
-(id)_audioRecorder;
-(id)init;
-(id)initWithAudioRecorder:(id)arg0 forceSupportsRemoteDarwinDisplay:(BOOL)arg1 ;
-(void)_handleDidStopWithReason:(NSInteger)arg0 ;
-(void)_updateRemoteDarwinDisplayConnectedIfNeeded;
-(void)audioRecorderBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 atTime:(NSUInteger)arg4 arrivalTimestampToAudioRecorder:(NSUInteger)arg5 numberOfChannels:(int)arg6 ;
-(void)audioRecorderDidStartRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)audioRecorderDidStopRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 reason:(NSInteger)arg2 ;
-(void)audioRecorderDisconnected:(id)arg0 ;
-(void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg0 toConfiguration:(NSInteger)arg1 ;
-(void)releaseAudioSession;
-(void)resetEndPointer;
-(void)setEndpointerDelegate:(id)arg0 ;
-(void)stopRecording;
-(void)updateAudioRecorderForTrainingDevice:(NSUInteger)arg0 deviceUUIDs:(id)arg1 ;
-(void)updateMeters;


@end


#endif