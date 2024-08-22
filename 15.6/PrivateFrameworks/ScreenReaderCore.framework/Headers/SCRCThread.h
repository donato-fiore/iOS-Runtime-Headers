// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCTHREAD_H
#define SCRCTHREAD_H


#import <Foundation/Foundation.h>

#import "SCRCStackQueue.h"

@interface SCRCThread : NSObject {
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id *_queueLock;
    *__CFRunLoopSource _source;
    *__CFRunLoop _runLoop;
    BOOL _isInvalid;
    BOOL _isRegistered;
    BOOL _isTimerSet;
    BOOL _shouldStop;
    BOOL _isWaitingForStoppingThread;
}


@property (retain, nonatomic, setter=_setKey:) id *_key; // ivar: __key
@property (nonatomic, setter=_setLastStartTime:) CGFloat lastStartTime; // ivar: _lastStartTime


+(BOOL)_addThreadToRegisteredThreads:(id)arg0 withThreadKey:(id)arg1 ;
+(BOOL)_removeThreadFromRegisteredThreads:(id)arg0 withThreadKey:(id)arg1 ;
+(CGFloat)_performSelector:(SEL)arg0 withThreadKey:(id)arg1 onTarget:(id)arg2 waitTime:(CGFloat)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 firstObject:(id)arg6 moreObjects:(char *)arg7 ;
+(CGFloat)lastStartTimeForKey:(id)arg0 ;
+(NSInteger)activeThreadCount;
+(NSInteger)defaultThreadPriority;
+(id)activity;
+(id)currentThreadTaskCache;
+(id)threadTaskCacheKey;
+(void)initialize;
+(void)invalidateForKey:(id)arg0 ;
+(void)postStopNotification;
+(void)setDefaultThreadPriority:(NSInteger)arg0 ;
-(BOOL)_debug_currentlyRunningOnThisThread;
-(BOOL)_isWaitingForStoppingThread;
-(BOOL)_shouldStop;
-(BOOL)isInvalid;
-(CGFloat)_performSelector:(SEL)arg0 onTarget:(id)arg1 cancelMask:(unsigned int)arg2 count:(unsigned int)arg3 firstObject:(id)arg4 moreObjects:(char *)arg5 ;
-(CGFloat)performSelector:(SEL)arg0 onTarget:(id)arg1 cancelMask:(unsigned int)arg2 count:(unsigned int)arg3 objects:(id)arg4 ;
-(CGFloat)performSelector:(SEL)arg0 onTarget:(id)arg1 count:(unsigned int)arg2 objects:(id)arg3 ;
-(id)_initWithKey:(id)arg0 task:(id)arg1 ;
-(id)init;
-(id)rawDescription;
-(void)_assignThreadPriority;
-(void)_enqueueImmediateTask:(id)arg0 cancelMask:(unsigned int)arg1 lastStartTime:(*CGFloat)arg2 ;
-(void)_enqueueTask:(id)arg0 cancelMask:(unsigned int)arg1 lastStartTime:(*CGFloat)arg2 ;
-(void)_enqueueWaitingTask:(id)arg0 cancelMask:(unsigned int)arg1 lastStartTime:(*CGFloat)arg2 ;
-(void)_processQueue;
-(void)_processQueueFromTimer;
-(void)_runThread:(id)arg0 ;
-(void)_setIsWaitingForStoppingThread:(BOOL)arg0 ;
-(void)_threadDidStop;
-(void)dealloc;
-(void)setIsInvalid:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif