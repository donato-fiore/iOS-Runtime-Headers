// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIORECORDER_H
#define AVAUDIORECORDER_H

@class AVAudioSession, NSArray, NSDictionary, NSURL;
@protocol AVAudioSessionParticipant, AVAudioRecorderDelegate;

#import <Foundation/Foundation.h>

#import "AVAudioFormat.h"

@interface AVAudioRecorder : NSObject <AVAudioSessionParticipant>

 {
    *void _impl;
}


@property (retain) AVAudioSession *audioSession;
@property (copy, nonatomic) NSArray *channelAssignments;
@property (readonly) CGFloat currentTime;
@property (weak) NSObject<AVAudioRecorderDelegate> *delegate;
@property (readonly) CGFloat deviceCurrentTime;
@property (readonly) AVAudioFormat *format;
@property (nonatomic) BOOL instantaneousMetering;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (nonatomic) int processToTap;
@property (readonly, getter=isRecording) BOOL recording;
@property (readonly) NSDictionary *settings;
@property (readonly) NSURL *url;


-(BOOL)deleteRecording;
-(BOOL)prepareToRecord;
-(BOOL)record;
-(BOOL)recordAtTime:(CGFloat)arg0 ;
-(BOOL)recordAtTime:(CGFloat)arg0 forDuration:(CGFloat)arg1 ;
-(BOOL)recordForDuration:(CGFloat)arg0 ;
-(float)averagePowerForChannel:(NSUInteger)arg0 ;
-(float)peakPowerForChannel:(NSUInteger)arg0 ;
-(id)baseInit;
-(id)init;
-(id)initWithURL:(id)arg0 format:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 settings:(id)arg1 error:(*id)arg2 ;
-(struct AudioRecorderImpl *)impl;
-(void)beginInterruption;
-(void)dealloc;
-(void)endInterruption;
-(void)endInterruptionWithFlags;
-(void)finalize;
-(void)finishedRecording;
-(void)handleInterruption:(id)arg0 ;
-(void)pause;
-(void)privCommonCleanup;
-(void)privRemoveSessionPropertyListeners;
-(void)stop;
-(void)updateMeters;


@end


#endif