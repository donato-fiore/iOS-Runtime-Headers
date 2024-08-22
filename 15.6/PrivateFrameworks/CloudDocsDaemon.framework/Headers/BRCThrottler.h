// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCTHROTTLER_H
#define BRCTHROTTLER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BRCThrottleBase.h"

@interface BRCThrottler : NSObject {
    BRCThrottleBase *_throttle;
    NSInteger _latestRetry;
    unsigned int _retryCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}




-(id)initWithName:(id)arg0 throttleParameters:(id)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)cancel;
-(void)reset;
-(void)resume;
-(void)scheduleNextEvent;
-(void)suspend;


@end


#endif