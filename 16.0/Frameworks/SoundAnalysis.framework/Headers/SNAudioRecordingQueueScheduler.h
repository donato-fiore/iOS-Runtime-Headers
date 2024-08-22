// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNAUDIORECORDINGQUEUESCHEDULER_H
#define SNAUDIORECORDINGQUEUESCHEDULER_H

@class AVAudioFormat;
@protocol OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface SNAudioRecordingQueueScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    uint8_t _eventHandlerQueueFundsSpent;
    uint8_t _eventHandlerQueueFundsEarned;
    uint8_t _eventHandlerQueueStopped;
    id *_bufferHandler;
    id *_interruptionHandler;
    NSObject<OS_os_transaction> *_transaction;
    AVAudioFormat *_recordFormat;
    ? _lastAudioHeartbeatTime;
    ? _lastProcessingHeartbeatTime;
    int _unhealthyBufferCount;
}




-(id)init;


@end


#endif