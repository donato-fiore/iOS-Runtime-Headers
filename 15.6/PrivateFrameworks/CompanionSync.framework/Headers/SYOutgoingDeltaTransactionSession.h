// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYOUTGOINGDELTATRANSACTIONSESSION_H
#define SYOUTGOINGDELTATRANSACTIONSESSION_H

@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_queue;


#import "SYSession.h"
#import "_SYCountedSemaphore.h"
#import "_SYMessageTimerTable.h"

@interface SYOutgoingDeltaTransactionSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    _SYMessageTimerTable *_timers;
    BOOL _canRestart;
    BOOL _canRollback;
    BOOL _cancelled;
}




-(BOOL)canRestart;
-(BOOL)canRollback;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)wasCancelled;
-(NSUInteger)protocolVersion;
-(id)initWithService:(id)arg0 ;
-(unsigned int)state;
-(void)_fetchNextBatch;
-(void)_installStateListener;
-(void)_messageExpiredWithSeqno:(NSUInteger)arg0 identifier:(id)arg1 ;
-(void)_notifySessionComplete;
-(void)_peerProcessedMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_processNextState;
-(void)_sendSyncBatch:(id)arg0 nextState:(unsigned int)arg1 ;
-(void)_sentMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
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