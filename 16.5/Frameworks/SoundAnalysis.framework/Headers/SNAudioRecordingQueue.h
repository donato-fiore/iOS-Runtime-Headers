// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAUDIORECORDINGQUEUE_H
#define SNAUDIORECORDINGQUEUE_H

@class AVAudioFormat, AVAudioSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SNAudioQueueConfiguration.h"
#import "SNAudioRecordingQueueScheduler.h"

@interface SNAudioRecordingQueue : NSObject {
    AVAudioFormat *_recordFormat;
    SNAudioQueueConfiguration *_audioQueueConfiguration;
    AVAudioSession *_session;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id *_bufferHandler;
    id *_interruptionHandler;
    BOOL _running;
    *OpaqueAudioQueue _audioQueue;
    SNAudioRecordingQueueScheduler *_aqCallbackScheduler;
}




-(id)init;
-(void)dealloc;


@end


#endif