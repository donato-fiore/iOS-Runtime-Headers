// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCPEVENTSTREAMRECORDER_H
#define RCPEVENTSTREAMRECORDER_H



#import "RCPEventStream.h"
#import "RCPRecorderConfig.h"

@interface RCPEventStreamRecorder : RCPEventStream

@property (readonly, nonatomic) RCPRecorderConfig *config; // ivar: _config
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) NSInteger state; // ivar: _state


+(id)recorderWithConfiguration:(id)arg0 ;
-(void)enqueueEvent:(id)arg0 ;
-(void)startRecording;
-(void)stopRecording;


@end


#endif