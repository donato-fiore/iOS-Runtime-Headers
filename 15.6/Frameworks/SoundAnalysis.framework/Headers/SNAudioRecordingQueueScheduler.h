// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNAUDIORECORDINGQUEUESCHEDULER_H
#define SNAUDIORECORDINGQUEUESCHEDULER_H

@class AVAudioFormat;
@protocol OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface SNAudioRecordingQueueScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_bufferHandlerQueue;
    id *_bufferHandler;
    NSObject<OS_os_transaction> *_transaction;
    AVAudioFormat *_recordFormat;
}




-(id)init;
// -(id)initWithBufferHandler:(id)arg0 queue:(unk)arg1 recordFormat:(id)arg2  ;
-(void)handleAudioBufferCallbackForQueue:(struct OpaqueAudioQueue *)arg0 buffer:(struct AudioQueueBuffer *)arg1 startTime:(struct AudioTimeStamp *)arg2 numberPacketDescriptions:(unsigned int)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4 ;


@end


#endif