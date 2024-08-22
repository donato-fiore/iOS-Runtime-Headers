// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNAUDIORECORDINGQUEUE_H
#define SNAUDIORECORDINGQUEUE_H

@class AVAudioFormat;

#import <Foundation/Foundation.h>

#import "SNAudioQueueConfiguration.h"
#import "SNAudioRecordingQueueScheduler.h"

@interface SNAudioRecordingQueue : NSObject {
    AVAudioFormat *_recordFormat;
    SNAudioQueueConfiguration *_audioQueueConfiguration;
    BOOL _running;
    *OpaqueAudioQueue _audioQueue;
    SNAudioRecordingQueueScheduler *_aqCallbackScheduler;
}




-(BOOL)startHandlingBuffersOnQueue:(id)arg0 audioSession:(id)arg1 handler:(id)arg2 ;
-(id)initWithFormat:(id)arg0 audioQueueConfiguration:(id)arg1 ;
-(void)_stop;
-(void)dealloc;
-(void)stop;


@end


#endif