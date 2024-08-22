// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYINCOMINGFULLSYNCSESSION_H
#define SYINCOMINGFULLSYNCSESSION_H

@protocol OS_dispatch_source, OS_os_activity;


#import "SYSession.h"

@interface SYIncomingFullSyncSession : SYSession {
    unsigned int _state;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    BOOL canRestart;
    BOOL canRollback;
}


@property (readonly, nonatomic) NSObject<OS_os_activity> *sessionActivity; // ivar: _sessionActivity


-(BOOL)canRestart;
-(BOOL)canRollback;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(NSUInteger)protocolVersion;
-(id)initWithService:(id)arg0 ;
-(unsigned int)state;
-(void)_cancelSession;
-(void)_continueProcessing;
-(void)_handleBatchChunk:(id)arg0 completion:(id)arg1 ;
-(void)_handleEndSync:(id)arg0 completion:(id)arg1 ;
-(void)_installStateListener;
-(void)_notifyErrorAndShutdown;
-(void)_processNextState;
-(void)_sendEndSessionResponse:(id)arg0 ;
-(void)_sessionComplete;
-(void)_sessionEnded;
-(void)_setStateQuietly:(unsigned int)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;
-(void)setState:(unsigned int)arg0 ;
-(void)start:(id)arg0 ;


@end


#endif