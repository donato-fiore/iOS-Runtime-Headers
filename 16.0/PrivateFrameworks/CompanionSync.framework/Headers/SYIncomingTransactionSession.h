// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYINCOMINGTRANSACTIONSESSION_H
#define SYINCOMINGTRANSACTIONSESSION_H

@protocol OS_os_activity;


#import "SYSession.h"
#import "SYChangeMessage.h"

@interface SYIncomingTransactionSession : SYSession {
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    id *_completion;
    BOOL canRestart;
    BOOL canRollback;
    unsigned int state;
}




-(BOOL)canRestart;
-(BOOL)canRollback;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)wasCancelled;
-(NSUInteger)protocolVersion;
-(id)initWithService:(id)arg0 transaction:(id)arg1 completion:(id)arg2 ;
-(unsigned int)state;
-(void)_sendCancelled;
-(void)_sendChanges;
-(void)_sendComplete;
-(void)cancelWithError:(id)arg0 ;
-(void)didCompleteSession;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;
-(void)setState:(unsigned int)arg0 ;
-(void)start:(id)arg0 ;


@end


#endif