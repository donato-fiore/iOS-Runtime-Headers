// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKLOWPRIORITYTHREADDISPATCHER_H
#define TSKLOWPRIORITYTHREADDISPATCHER_H

@protocol OS_dispatch_queue;


#import "TSKThreadDispatcher.h"

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {
    NSObject<OS_dispatch_queue> *_queue;
    uint8_t _suspendCount;
}


@property (readonly, getter=isSuspended) BOOL suspended;


+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedLowPriorityDispatcher;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)p_dispatchQueue;
-(void)resume;
-(void)suspend;


@end


#endif