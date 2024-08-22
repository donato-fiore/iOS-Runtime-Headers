// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYOUTGOINGSYNCALLOBJECTSSESSION_H
#define SYOUTGOINGSYNCALLOBJECTSSESSION_H

@class NSMutableArray;
@protocol OS_os_activity, OS_dispatch_source;


#import "SYSession.h"

@interface SYOutgoingSyncAllObjectsSession : SYSession {
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    BOOL _errorIsLocal;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    CGFloat _sessionStartTime;
    NSMutableArray *_changesToSend;
    BOOL _cancelled;
    BOOL canRestart;
    BOOL canRollback;
}




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
-(void)_fetchChanges;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_processNextState;
-(void)_sendChanges;
-(void)_sessionCompleteWithError:(id)arg0 ;
-(void)_sessionFailed;
-(void)_setStateQuietly:(unsigned int)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;
-(void)setState:(unsigned int)arg0 ;
-(void)start:(id)arg0 ;


@end


#endif