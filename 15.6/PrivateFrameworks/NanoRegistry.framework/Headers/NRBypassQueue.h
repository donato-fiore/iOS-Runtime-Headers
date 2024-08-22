// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRBYPASSQUEUE_H
#define NRBYPASSQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NRBypassQueue : NSObject {
    NSObject<OS_dispatch_queue> *_suspendableQueue;
    NSObject<OS_dispatch_queue> *_bypassQueue;
    BOOL _suspended;
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)enqueueBlock:(id)arg0 ;
-(void)enqueueBlockAsync:(id)arg0 ;
-(void)enqueueBypassBlock:(id)arg0 ;
-(void)enqueueBypassBlockAsync:(id)arg0 ;
-(void)invalidate;
-(void)resume;
-(void)suspend;


@end


#endif