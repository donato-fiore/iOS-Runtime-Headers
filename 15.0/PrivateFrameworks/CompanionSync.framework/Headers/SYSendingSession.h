// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYSENDINGSESSION_H
#define SYSENDINGSESSION_H

@class NSMutableIndexSet, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_activity;


#import "SYSession.h"
#import "_SYCountedSemaphore.h"
#import "SYMessageStatusRecord.h"

@interface SYSendingSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSObject<OS_dispatch_source> *_messageTimer;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    NSUInteger _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_os_activity> *_sessionActivity;
    CGFloat _sessionStartTime;
    NSMutableDictionary *_batchObjectIDsByBatchIndex;
    SYMessageStatusRecord *_startMessageID;
    SYMessageStatusRecord *_endMessageID;
    NSMutableArray *_batchMessageIDs;
    os_unfair_lock_s _flagsLock;
    ? _flags;
}




-(BOOL)_handleEndSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleRestartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleStartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleSyncBatchResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_hasSentEnd;
-(BOOL)_localErrorOccurred;
-(BOOL)canRestart;
-(BOOL)canRollback;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)wasCancelled;
-(CGFloat)remainingSessionTime;
-(id)_newMessageHeader;
-(id)initWithService:(id)arg0 isReset:(BOOL)arg1 ;
-(unsigned int)state;
-(void)_confirmedEnd;
-(void)_confirmedStart;
-(void)_continue;
-(void)_fetchNextBatch;
-(void)_handleEndSession:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_handleRestartSession:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_handleSyncBatch:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_notifyErrorAndShutdown;
-(void)_peerProcessedMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_processNextState;
-(void)_resolvedIdentifier:(id)arg0 forResponse:(id)arg1 ;
-(void)_resolvedIdentifierForRequest:(id)arg0 ;
-(void)_sendEndSessionAndError:(id)arg0 ;
-(void)_sendSyncBatch:(id)arg0 nextState:(unsigned int)arg1 ;
-(void)_sendSyncCancelled;
-(void)_sendSyncCompleteAndRunBlock:(id)arg0 ;
-(void)_sendSyncRestart;
-(void)_sentEnd;
-(void)_sentMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_sentStart;
-(void)_sessionFinished;
-(void)_setCancelled;
-(void)_setComplete;
-(void)_setLocalErrorOccurred;
-(void)_setMessageTimer;
-(void)_setStateQuietly:(unsigned int)arg0 ;
-(void)_setupChangeConcurrency;
-(void)_startFailedForStateChangeWithError:(id)arg0 ;
-(void)_tweakMessageHeader:(id)arg0 ;
-(void)_waitForMessageWindow;
-(void)cancelWithError:(id)arg0 ;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;
-(void)setState:(unsigned int)arg0 ;
-(void)start:(id)arg0 ;


@end


#endif