// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKACCESSCONTROLLER_H
#define TSKACCESSCONTROLLER_H

@class NSCondition, NSMutableDictionary, NSMutableArray, TSUWeakReference;

#import <Foundation/Foundation.h>


@interface TSKAccessController : NSObject {
    _opaque_pthread_rwlock_t _rwLock;
    BOOL _secondaryThreadWriting;
    NSCondition *_cond;
    NSMutableDictionary *_signalIdentifiers;
    NSMutableDictionary *_waitIdentifiers;
    *__CFRunLoopSource _mainThreadPingSource;
    NSMutableArray *_pendingMainThreadInvocations;
    _TSKThreadInfo _readerInfo;
    unsigned int _readerCount;
    NSMutableArray *_writerQueue;
    BOOL _writeHeld;
    BOOL _writeBlockedMainThread;
    TSUWeakReference *_delegate;
}




-(BOOL)currentThreadHasWriteLock;
-(BOOL)hasRead;
-(BOOL)hasWrite;
-(BOOL)p_hasRead;
-(BOOL)p_hasWrite;
-(BOOL)p_waitWithCondition:(id)arg0 untilDate:(id)arg1 ;
-(BOOL)waitOnIdentifier:(id)arg0 untilDate:(id)arg1 releaseReadWhileWaiting:(BOOL)arg2 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)p_threadIdentifier;
-(void)dealloc;
-(void)p_asyncPerformSelectorOnMainThread:(SEL)arg0 withTarget:(id)arg1 argument:(*void)arg2 ;
-(void)p_blockMainThreadForWrite;
-(void)p_dequeueWrite;
-(void)p_enqueueWriteAndBlock;
-(void)p_flushPendingMainThreadBlocksQueueAcquiringLock:(BOOL)arg0 ;
-(void)p_performReadOnMainThread:(id)arg0 ;
-(void)p_readLock;
-(void)p_readUnlock;
-(void)p_scheduleMainThreadRead:(id)arg0 ;
-(void)p_signalThread:(id)arg0 ;
-(void)p_writeLockAndBlockMainThread:(BOOL)arg0 ;
-(void)p_writeUnlock;
-(void)p_writeUnlockAndPerformWithMainThreadBlocked:(id)arg0 ;
-(void)performRead:(SEL)arg0 thenReadOnMainThread:(SEL)arg1 withTarget:(id)arg2 argument:(*void)arg3 ;
-(void)performRead:(SEL)arg0 thenWrite:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(id)arg3 argument:(*void)arg4 ;
-(void)performRead:(SEL)arg0 thenWrite:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(id)arg3 argument:(*void)arg4 passReadResultToMainThreadRead:(BOOL)arg5 ;
-(void)performRead:(SEL)arg0 withTarget:(id)arg1 argument:(*void)arg2 ;
-(void)performRead:(SEL)arg0 withTarget:(id)arg1 argument:(*void)arg2 argument2:(*void)arg3 ;
-(void)performRead:(id)arg0 ;
-(void)performWrite:(SEL)arg0 withTarget:(id)arg1 argument:(*void)arg2 ;
-(void)performWrite:(id)arg0 ;
// -(void)performWrite:(id)arg0 blockMainThread:(unk)arg1  ;
-(void)signalIdentifier:(id)arg0 ;
-(void)spinMainThreadRunLoopUntil:(SEL)arg0 onTarget:(id)arg1 ;
-(void)waitOnIdentifier:(id)arg0 ;


@end


#endif