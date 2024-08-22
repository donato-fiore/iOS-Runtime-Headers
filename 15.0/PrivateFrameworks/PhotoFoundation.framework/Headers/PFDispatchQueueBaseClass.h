// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUEBASECLASS_H
#define PFDISPATCHQUEUEBASECLASS_H

@protocol PFDispatchQueueMethods, OS_dispatch_queue;


#import "PFDispatchQueue.h"

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods>

 {
    NSObject<OS_dispatch_queue> *_queue;
}




-(*void)getSpecific:(*void)arg0 ;
-(BOOL)assertNotOnQueue;
-(BOOL)assertOnQueue;
-(BOOL)assertQueueBarrier;
-(char *)label;
-(id)_dispatchQueueForSetTargetQueue;
-(id)_extensionManager;
-(id)_extensionsForTargetingQueue;
-(id)description;
-(id)dispatchCancellable:(id)arg0 ;
-(id)dispatchCancellableAfterDelay:(NSUInteger)arg0 block:(id)arg1 ;
-(id)dispatchCancellableAfterInterval:(CGFloat)arg0 block:(id)arg1 ;
-(id)dispatchCancellableGroup:(id)arg0 notify:(id)arg1 ;
-(id)extensionMatching:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(unsigned int)qualityOfService;
-(void)dispatchAfter:(NSUInteger)arg0 block:(id)arg1 ;
-(void)dispatchAfterDelay:(NSUInteger)arg0 block:(id)arg1 ;
-(void)dispatchAfterInterval:(CGFloat)arg0 block:(id)arg1 ;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchBarrierAsync:(id)arg0 ;
-(void)dispatchBarrierSync:(id)arg0 ;
-(void)dispatchGroup:(id)arg0 async:(id)arg1 ;
-(void)dispatchGroup:(id)arg0 notify:(id)arg1 ;
-(void)dispatchSync:(id)arg0 ;
-(void)resume;
-(void)setSpecific:(*void)arg0 forKey:(*void)arg1 ;
-(void)setTargetQueue:(id)arg0 ;
-(void)suspend;


@end


#endif