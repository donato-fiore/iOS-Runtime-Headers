// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYRECEIVINGSESSION_H
#define SYRECEIVINGSESSION_H

@class NSMutableIndexSet;
@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_group;


#import "SYSession.h"

@interface SYReceivingSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    NSObject<OS_os_activity> *_sessionActivity;
    NSObject<OS_dispatch_group> *_asyncResetGroupToWaitOn;
    id *_weakBlockWaitingForReset;
    os_unfair_lock_s _flagsLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL metadataModified;


-(BOOL)_handleEndSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleRestartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleStartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleSyncBatchResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_hasCompleted;
-(BOOL)_hasStarted;
-(BOOL)_isMissingSyncBatches;
-(BOOL)_postAsyncResetRequestReturningError:(*id)arg0 ;
-(BOOL)canRestart;
-(BOOL)canRollback;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)wasCancelled;
-(id)_newMessageHeader;
-(id)initWithService:(id)arg0 isReset:(BOOL)arg1 metadata:(id)arg2 ;
-(unsigned int)state;
-(void)_continue;
-(void)_handleEndSession:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_handleRestartSession:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_handleSyncBatch:(id)arg0 response:(id)arg1 completion:(id)arg2 ;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_midStreamErrorHandled;
-(void)_notifyErrorAndShutdown;
-(void)_peerProcessedMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_processNextState;
-(void)_resolvedIdentifier:(id)arg0 forResponse:(id)arg1 ;
-(void)_resolvedIdentifierForRequest:(id)arg0 ;
-(void)_sendEndSessionAndError:(id)arg0 ;
-(void)_sentMessageWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_sessionCancelled;
-(void)_sessionFinished;
-(void)_sessionRestarted;
-(void)_setCancelled;
-(void)_setCompleted;
-(void)_setStarted;
-(void)_setStateQuietly:(unsigned int)arg0 ;
-(void)_tweakMessageHeader:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setSessionMetadata:(id)arg0 ;
-(void)setState:(unsigned int)arg0 ;
-(void)start:(id)arg0 ;


@end


#endif