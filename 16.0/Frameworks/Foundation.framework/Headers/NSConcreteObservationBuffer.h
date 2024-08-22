// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONCRETEOBSERVATIONBUFFER_H
#define NSCONCRETEOBSERVATIONBUFFER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;


#import "NSObservationBuffer.h"
#import "NSOperationQueue.h"

@interface NSConcreteObservationBuffer : NSObservationBuffer {
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSOperationQueue *_outputQueue;
    NSInteger _policy;
    int _state;
    _opaque_pthread_mutex_t _lock;
    NSMutableArray *_dequeue;
    NSUInteger _maxCount;
    id *_bufferFullHandler;
    BOOL _memoryPressureSensitive;
    BOOL _automaticallyEmitsObjects;
}




-(BOOL)automaticallyEmitsObjects;
-(BOOL)isMemoryPressureSensitive;
-(id)bufferFullHandler:(SEL)arg0 ;
-(id)initWithMaximumObjectCount:(NSUInteger)arg0 fullPolicy:(NSInteger)arg1 outputQueue:(id)arg2 ;
-(void)_alreadyOnQueueEmitAllObjects;
-(void)_alreadyOnQueueEmitObject;
-(void)_mergeChanges;
-(void)_receiveBox:(id)arg0 ;
-(void)dealloc;
-(void)emitAllObjects;
-(void)emitObject;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg0 ;
-(void)setBufferFullHandler:(id)arg0 ;
-(void)setMemoryPressureSensitive:(BOOL)arg0 ;


@end


#endif