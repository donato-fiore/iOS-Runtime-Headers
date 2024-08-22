// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAUDIORECORDER_H
#define WFAUDIORECORDER_H

@class NSString, NSURL, AVAudioRecorder, NSTimer;
@protocol AVAudioRecorderDelegate, WFAudioRecorderDelegate;

#import <Foundation/Foundation.h>


@interface WFAudioRecorder : NSObject <AVAudioRecorderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAudioRecorderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFinished; // ivar: _hasFinished
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger outputFormat; // ivar: _outputFormat
@property (retain, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property (nonatomic) BOOL paused; // ivar: _paused
@property (retain, nonatomic) AVAudioRecorder *recorder; // ivar: _recorder
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) CGFloat recordingDuration; // ivar: _recordingDuration
@property (nonatomic) BOOL runningUpdateTimer;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *updateTimer; // ivar: _updateTimer


+(id)formattedStringWithDuration:(CGFloat)arg0 elapsedTime:(CGFloat)arg1 ;
-(id)initWithOutputFormat:(NSInteger)arg0 destinationURL:(id)arg1 ;
-(void)audioInterruption:(id)arg0 ;
-(void)audioRecorderDidFinishRecording:(id)arg0 successfully:(BOOL)arg1 ;
-(void)audioRecorderEncodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)countdownFire:(id)arg0 ;
-(void)finishRecording;
-(void)pauseRecording;
-(void)recordForDuration:(CGFloat)arg0 ;
-(void)resumeRecording;
-(void)startRecording;


@end


#endif