// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKACCESSCONTROLLER_H
#define TSKACCESSCONTROLLER_H

@class TSUWeakReference, NSCondition, NSMutableDictionary, NSMutableArray, NSThread;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "TSKRunLoopTicket.h"
#import "TSKAccessControllerRunLoop.h"

@interface TSKAccessController : NSObject {
    TSUWeakReference *_delegate;
    _opaque_pthread_rwlock_t _rwLock;
    BOOL _secondaryThreadWriting;
    BOOL _thenReadingOnPrimaryThread;
    NSCondition *_cond;
    NSMutableDictionary *_signalIdentifiers;
    NSMutableDictionary *_waitIdentifiers;
    *__CFRunLoopSource _primaryThreadPingSource;
    NSMutableArray *_pendingPrimaryThreadBlocks;
    ? _readerInfo;
    ? _primaryThreadTicketInfo;
    unsigned int _readerCount;
    NSMutableArray *_writerQueue;
    NSObject<OS_dispatch_semaphore> *_outstandingTicketReadLock;
    unsigned int _outstandingTicketCount;
    uint8_t _writeLockHeld;
    NSUInteger _writeBlockedPrimaryThreadCount;
    NSUInteger _primaryThreadWriteCount;
    ? _runLoop;
    uint8_t _isOnMainRunLoop;
    NSThread *_primaryThread;
    os_unfair_lock_s _primaryThreadIVarLock;
    uint8_t _primaryThreadQualityOfServiceClass;
    uint8_t _boostPrimaryThreadQualityOfServiceCount;
    TSKRunLoopTicket *_primaryRunLoopTicket;
    uint8_t _performWhileAnotherWaitingThreadHasWriteCount;
}


@property (readonly) BOOL hasRead;
@property (readonly) BOOL hasWrite;
@property (readonly) BOOL isOnMainRunLoop;
@property (readonly) BOOL isOnPrimaryRunLoop;
@property (readonly) BOOL isPrimaryThread;
@property (readonly) TSKAccessControllerRunLoop *primaryRunLoop;
@property (readonly) NSThread *primaryThread;
@property (readonly) unsigned int primaryThreadQualityOfServiceClass;
@property *__CFRunLoop runLoop;


-(BOOL)p_waitWithCondition:(id)arg0 untilDate:(id)arg1 ;
-(BOOL)waitOnIdentifier:(id)arg0 untilDate:(id)arg1 releaseReadWhileWaiting:(BOOL)arg2 ;
-(NSUInteger)p_writerQueueIndexOfThreadIdentifier:(id)arg0 ;
-(id)boostPrimaryThreadQualityOfService;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithPrimaryRunloop:(struct __CFRunLoop *)arg0 delegate:(id)arg1 ;
-(id)p_threadIdentifier;
-(struct ? *)p_ticketInfoForCurrentThread;
-(struct ? *)p_ticketInfoForTicket:(id)arg0 ;
-(void)addPrimaryThreadRunLoopSource:(struct __CFRunLoopSource *)arg0 mode:(struct __CFString *)arg1 ;
-(void)assertHasRead;
-(void)assertHasReadOrWrite;
-(void)assertHasWrite;
-(void)dealloc;
-(void)dispatchAsyncOnPrimaryThreadInMode:(struct __CFString *)arg0 block:(id)arg1 ;
-(void)i_finishReadForTicket:(id)arg0 ;
-(void)i_startReadForTicket:(id)arg0 ;
-(void)p_asyncPerformBlockOnPrimaryThread:(id)arg0 ;
-(void)p_blockPrimaryThread;
-(void)p_blockPrimaryThreadForWrite;
-(void)p_decrementCountForReaderAtIndex:(unsigned int)arg0 releasingRealLock:(BOOL)arg1 ;
-(void)p_dequeueWrite;
-(void)p_didAcquireReadLock;
-(void)p_didAcquireWriteLock;
-(void)p_didEndBoostingPrimaryThread;
-(void)p_enqueueWriteAndBlockAllowingPendingWrites:(BOOL)arg0 ;
-(void)p_finishReadForTicketInfo:(struct ? *)arg0 ;
-(void)p_flushPendingPrimaryThreadBlocksQueueAcquiringLock:(BOOL)arg0 ;
// -(void)p_performRead:(id)arg0 eagerlyBlockingPrimaryThread:(unk)arg1 thenWrite:(BOOL)arg2 allowingPendingWrites:(id)arg3 thenReadOnPrimaryThread:(unk)arg4  ;
// -(void)p_performReadOnPrimaryThread:(id)arg0 result:(unk)arg1  ;
-(void)p_readLock;
-(void)p_readLockTakingRealLock:(BOOL)arg0 ;
-(void)p_readUnlock;
-(void)p_readUnlockReleasingRealLock:(BOOL)arg0 ;
// -(void)p_schedulePrimaryThreadRead:(id)arg0 result:(unk)arg1  ;
-(void)p_signalPrimaryThreadWriteComplete;
-(void)p_signalThread:(id)arg0 ;
-(void)p_unblockPrimaryThread;
-(void)p_willAcquireReadLock;
-(void)p_willAcquireWriteLock;
-(void)p_willRelinquishReadLock;
-(void)p_willRelinquishWriteLock;
-(void)p_writeLockAndBlockPrimaryThread:(BOOL)arg0 ;
-(void)p_writeUnlock;
-(void)performRead:(id)arg0 ;
// -(void)performRead:(id)arg0 thenWrite:(unk)arg1 thenReadOnPrimaryThread:(id)arg2  ;
// -(void)performRead:(id)arg0 thenWriteBeforePendingWrites:(unk)arg1 thenReadOnPrimaryThread:(id)arg2  ;
// -(void)performReadAllowingOverlappingImplicitRead:(id)arg0 thenWrite:(unk)arg1 thenReadOnPrimaryThread:(id)arg2  ;
-(void)performReadGrantingTicket:(id)arg0 ;
-(void)performReadWithTicket:(id)arg0 block:(id)arg1 ;
-(void)performWhileAnotherWaitingThreadHasWrite:(id)arg0 ;
-(void)performWrite:(id)arg0 ;
// -(void)performWrite:(id)arg0 blockPrimaryThread:(unk)arg1  ;
-(void)removePrimaryThreadRunLoopSource:(struct __CFRunLoopSource *)arg0 mode:(struct __CFString *)arg1 ;
-(void)signalIdentifier:(id)arg0 ;
-(void)waitOnIdentifier:(id)arg0 ;
-(void)wakeUpPrimaryRunLoop;


@end


#endif