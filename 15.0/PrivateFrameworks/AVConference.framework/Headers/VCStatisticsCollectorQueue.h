// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSTATISTICSCOLLECTORQUEUE_H
#define VCSTATISTICSCOLLECTORQUEUE_H


#import <Foundation/Foundation.h>


@interface VCStatisticsCollectorQueue : NSObject {
    *OpaqueFigThread _thread;
    BOOL _shouldBlockWhenFull;
    ? _messageQueue;
    int _firstMessageIndex;
    int _nextMessageIndex;
    int _maxQueueSize;
    int _almostFullQueueSize;
    _opaque_pthread_mutex_t _queueMutex;
    _opaque_pthread_cond_t _queueNotFullCondition;
    _opaque_pthread_cond_t _queueNotEmptyCondition;
    _opaque_pthread_mutex_t _waitMutex;
    _opaque_pthread_cond_t _waitCondition;
    BOOL _shouldProcessMessageOnExternalThread;
    BOOL _shouldProcessMessageImmediately;
    unsigned int _queueProcessWaitTimeMs;
    unsigned int _queueFullCounter;
}


@property (readonly) BOOL isThreadRunning; // ivar: _isThreadRunning
@property (copy) id *messageHandler; // ivar: _messageHandler


-(BOOL)addStatisticsMessage:(struct ? )arg0 ;
-(BOOL)dequeue:(struct ? *)arg0 ;
-(BOOL)enqueue:(struct ? )arg0 ;
-(BOOL)isQueueFull;
-(id)initWithQueueSize:(int)arg0 shouldBlockWhenFull:(BOOL)arg1 queueWaitTimeMs:(unsigned int)arg2 useExternalThread:(BOOL)arg3 ;
-(int)queueSize;
-(void)cancelWait;
-(void)dealloc;
-(void)drainAndProcessAllStatistics;
-(void)flushAllStatistics;
-(void)processMessage:(struct ? )arg0 ;
-(void)start;
-(void)stop;
-(void)stopThread;
-(void)waitBeforeProcessingQueue;


@end


#endif