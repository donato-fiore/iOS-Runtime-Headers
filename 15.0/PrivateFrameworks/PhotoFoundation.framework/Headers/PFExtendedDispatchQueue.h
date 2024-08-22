// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFEXTENDEDDISPATCHQUEUE_H
#define PFEXTENDEDDISPATCHQUEUE_H

@protocol PFDispatchQueueRunBlock;


#import "PFDispatchQueue.h"
#import "PFSerialQueue.h"
#import "PFDispatchQueueExtensionManager.h"

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock>

 {
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    NSUInteger _suspendCount;
}




-(*void)getSpecific:(*void)arg0 ;
-(BOOL)assertNotOnQueue;
-(BOOL)assertOnQueue;
-(BOOL)assertQueueBarrier;
-(BOOL)onQueue;
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
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)wrappedQueue;
-(unsigned int)qualityOfService;
// -(void)_invoke:(id)arg0 extensionDataArray:(unk)arg1  ;
-(void)_performAsyncNotify:(id)arg0 enqueueBlock:(id)arg1 ;
-(void)addExtensions:(id)arg0 ;
-(void)disableExtension:(id)arg0 ;
-(void)dispatchAfter:(NSUInteger)arg0 block:(id)arg1 ;
-(void)dispatchAfterDelay:(NSUInteger)arg0 block:(id)arg1 ;
-(void)dispatchAfterInterval:(CGFloat)arg0 block:(id)arg1 ;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchAsyncWithQOS:(unsigned int)arg0 block:(id)arg1 ;
-(void)dispatchBarrierAsync:(id)arg0 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned int)arg0 block:(id)arg1 ;
-(void)dispatchBarrierSync:(id)arg0 ;
-(void)dispatchGroup:(id)arg0 async:(id)arg1 ;
-(void)dispatchGroup:(id)arg0 notify:(id)arg1 ;
-(void)dispatchSync:(id)arg0 ;
-(void)enableExtension:(id)arg0 ;
-(void)removeAllQueuedBlocks;
-(void)removeAllQueuedBlocksAndWait;
-(void)resume;
-(void)resumeRequests;
-(void)runBlock:(id)arg0 ;
-(void)setSpecific:(*void)arg0 forKey:(*void)arg1 ;
-(void)setTargetQueue:(id)arg0 ;
-(void)suspend;
-(void)suspendRequests;


@end


#endif