// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYOUTGOINGBATCHSYNCSESSION_H
#define SYOUTGOINGBATCHSYNCSESSION_H

@class NSMutableIndexSet;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_activity;


#import "SYSession.h"
#import "_SYCountedSemaphore.h"
#import "_SYMessageTimerTable.h"

@interface SYOutgoingBatchSyncSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSUInteger _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    BOOL _errorIsLocal;
    BOOL _hasSentEnd;
    _SYMessageTimerTable *_timers;
    CGFloat _sessionStartTime;
    BOOL _canRestart;
    BOOL _canRollback;
    BOOL _cancelled;
}




-(BOOL)_handleBatchAck:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleBatchSyncEndResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)canRestart;
-(BOOL)canRollback;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)wasCancelled;
-(CGFloat)remainingSessionTime;
-(NSUInteger)protocolVersion;
-(id)initWithService:(id)arg0 ;
-(unsigned int)state;
-(void)_fetchNextBatch;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_messageExpiredWithSeqno:(NSUInteger)arg0 identifier:(id)arg1 ;
-(void)_notifySessionComplete;
-(void)_processNextState;
-(void)_sendSyncBatch:(id)arg0 nextState:(unsigned int)arg1 ;
-(void)_sendSyncCancelled;
-(void)_sendSyncCompleteAndRunBlock:(id)arg0 ;
-(void)_sendSyncRestart;
-(void)_sendSyncStart;
-(void)_sentMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_sessionComplete;
-(void)_setMessageTimerForSeqno:(NSUInteger)arg0 ;
-(void)_setStateQuietly:(unsigned int)arg0 ;
-(void)_setupChangeConcurrency;
-(void)_waitForMessageWindow;
-(void)cancelWithError:(id)arg0 ;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;
-(void)setState:(unsigned int)arg0 ;
-(void)start:(id)arg0 ;


@end


#endif