// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSSESSION_H
#define STSSESSION_H

@class NFSecureElementManagerSession;
@protocol STSSessionDelegate, OS_dispatch_queue, NFSession;

#import <Foundation/Foundation.h>

#import "STSTransactionHandler.h"

@interface STSSession : NSObject {
    id<STSSessionDelegate> *_sessionDelegate;
    os_unfair_lock_s _sessionUpdateLock;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (weak, nonatomic) NSObject<STSSessionDelegate> *delegate;
@property (retain, nonatomic) STSTransactionHandler *handler; // ivar: _handler
@property (retain, nonatomic) NSObject<NFSession> *initiatingSession; // ivar: _initiatingSession
@property (retain, nonatomic) NFSecureElementManagerSession *masterSESession; // ivar: _masterSESession
@property (copy, nonatomic) id *theStartCallback; // ivar: _theStartCallback


-(id)_activateChildSession;
-(id)_canStartSession;
-(id)enableExpressModeForActiveCredential:(BOOL)arg0 ;
-(id)getHandlerForCredential:(id)arg0 ;
-(id)init;
-(id)releaseCredential:(id)arg0 withAuthorization:(id)arg1 ;
-(id)releaseCredential:(id)arg0 withAuthorization:(id)arg1 iso18013Selection:(id)arg2 ;
-(id)setActiveCredential:(id)arg0 ;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)startWithDelegate:(id)arg0 ;
-(id)startWithDelegate:(id)arg0 callback:(id)arg1 ;
-(id)startWithNotificationTesterDelegate:(id)arg0 outNotificationListener:(*id)arg1 ;
-(id)stopTransaction;
-(void)_startWithDelegate:(id)arg0 isFirstInQueue:(*BOOL)arg1 ;
-(void)_tearDownWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)endSessionWithCompletion:(id)arg0 ;
-(void)fireDidExpireTransaction:(BOOL)arg0 ;
-(void)fireDidFailDeferredAuth:(BOOL)arg0 ;
-(void)fireDidPerformVASTransactions:(id)arg0 ;
-(void)fireDidReceiveActivityTimeout:(id)arg0 ;
-(void)fireDidSelectVAS:(BOOL)arg0 ;
-(void)fireExpressModeStateChange:(unsigned int)arg0 withObject:(id)arg1 ;
-(void)fireFieldDetectEvent:(BOOL)arg0 ;
-(void)fireFieldNotificationEvent:(id)arg0 ;
-(void)fireHasPendingServerRequest:(BOOL)arg0 ;
-(void)fireSessionDidConsumeAuthorizationEvent;
-(void)fireSessionDidEndUnexpectedlyEventWithStatus:(NSUInteger)arg0 ;
-(void)fireSessionEndEvent:(id)arg0 ;
-(void)fireTransactionEndEvent:(id)arg0 ;
-(void)fireTransactionStartEvent:(id)arg0 ;
-(void)startWithDelegate:(id)arg0 isFirstInQueue:(*BOOL)arg1 completion:(id)arg2 ;
-(void)testSendToAlternativeCarrier:(id)arg0 completion:(id)arg1 ;


@end


#endif