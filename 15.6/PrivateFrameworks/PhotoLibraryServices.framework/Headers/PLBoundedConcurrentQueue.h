// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBOUNDEDCONCURRENTQUEUE_H
#define PLBOUNDEDCONCURRENTQUEUE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PLBoundedConcurrentQueue : NSObject {
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_semaphore> *_bound;
}




-(id)initWithName:(id)arg0 concurrencyLimit:(unsigned char)arg1 ;
-(void)async:(id)arg0 ;
-(void)sync:(id)arg0 ;


@end


#endif