// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSTATUSSUBSCRIPTIONSERVICE_H
#define SKSTATUSSUBSCRIPTIONSERVICE_H

@class NSString, NSMapTable;
@protocol SKStatusSubscriptionDaemonDelegateProtocol, SKStatusSubscriptionConnectionDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKStatusSubscriptionDaemonConnection.h"
#import "SKStatusSubscription.h"

@interface SKStatusSubscriptionService : NSObject <SKStatusSubscriptionDaemonDelegateProtocol, SKStatusSubscriptionConnectionDelegateProtocol>



@property (retain, nonatomic) SKStatusSubscriptionDaemonConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMapTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKStatusSubscription *personalStatusSubscription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // ivar: _privateWorkQueue
@property (nonatomic) BOOL registeredForDelegateCallbacks; // ivar: _registeredForDelegateCallbacks
@property (readonly, nonatomic) NSString *statusTypeIdentifier; // ivar: _statusTypeIdentifier
@property (readonly) Class superclass;


+(id)logger;
-(id)_allStatusSubscriptionsIncludingPersonalSubscription:(BOOL)arg0 ;
-(id)allStatusSubscriptions;
-(id)allStatusSubscriptionsExceptPersonalSubscription;
-(id)allStatusSubscriptionsWithActiveAssertions;
-(id)allStatusSubscriptionsWithActiveSubscriptions;
-(id)initWithStatusTypeIdentifier:(id)arg0 ;
-(id)statusSubscriptionForHandle:(id)arg0 ;
-(id)subscriptionValidationTokenForHandle:(id)arg0 error:(*id)arg1 ;
-(id)subscriptionValidationTokensForHandle:(id)arg0 error:(*id)arg1 ;
-(void)_delegatesPerformOnResponseQueueForGroup:(id)arg0 block:(id)arg1 ;
-(void)_registerForDelegateCallbacksIfNecessary;
-(void)_simulateCrashIfNecessaryForError:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;
-(void)statusSubscriptionForHandle:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionDaemonConnectionDidDisconnect:(id)arg0 ;
-(void)subscriptionInvitationReceived:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionReceivedStatusUpdate:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionStateChangedForSubscriptions:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionValidationTokenForHandle:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionValidationTokensForHandle:(id)arg0 completion:(id)arg1 ;
-(void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationToken:(id)arg0 fromSender:(id)arg1 completion:(id)arg2 ;
-(void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)arg0 fromSender:(id)arg1 completion:(id)arg2 ;


@end


#endif