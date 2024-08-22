// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKASTATUSSUBSCRIPTIONSERVICECLIENT_H
#define SKASTATUSSUBSCRIPTIONSERVICECLIENT_H

@class NSString;
@protocol SKStatusSubscriptionDaemonProtocol, SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate, SKADatabaseManaging, SKAStatusEncryptionManaging, OS_dispatch_queue, SKAStatusSubscriptionManaging;

#import <Foundation/Foundation.h>

#import "SKAStatusSubscriptionServiceClientConnection.h"

@interface SKAStatusSubscriptionServiceClient : NSObject <SKStatusSubscriptionDaemonProtocol, SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate>



@property (nonatomic) BOOL accountCheckCompleted; // ivar: _accountCheckCompleted
@property (nonatomic) BOOL accountIsStatusKitCapable; // ivar: _accountIsStatusKitCapable
@property (retain, nonatomic) SKAStatusSubscriptionServiceClientConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SKAStatusEncryptionManaging> *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSString *statusTypeIdenfifier; // ivar: _statusTypeIdenfifier
@property (retain, nonatomic) NSObject<SKAStatusSubscriptionManaging> *subscriptionManager; // ivar: _subscriptionManager
@property (readonly) Class superclass;


+(id)_accountNotCapableError;
+(id)_genericMissingSubscriptionEntitlmentError;
+(id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)arg0 ;
+(id)_subscriptionIdentifierNotFoundError:(id)arg0 ;
+(id)logger;
-(BOOL)_validateChannelIsKnownForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)channelMatchesClientStatusTypeIdentifier:(id)arg0 ;
-(id)_currentStatusForChannel:(id)arg0 ;
-(id)_handlesAssociatedWithChannel:(id)arg0 ;
-(id)_subscriptionMetadataForChannel:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 databaseManager:(id)arg2 subscriptionManager:(id)arg3 encryptionManager:(id)arg4 ;
-(void)accountIsStatusKitCapableWithCompletion:(id)arg0 ;
-(void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)allSubscriptionMetadatasForStatusTypeIdentifier:(id)arg0 includingPersonalSubscription:(BOOL)arg1 completion:(id)arg2 ;
-(void)allSubscriptionMetadatasWithActiveAssertionsForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)allSubscriptionMetadatasWithActiveSubscriptionsForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteSubscriptionWithIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)handleReceivedInvitationForChannel:(id)arg0 ;
-(void)handleReceivedStatusUpdate:(id)arg0 onChannel:(id)arg1 ;
-(void)handleRemoteDatabaseChangeForChannels:(id)arg0 ;
-(void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)subscriptionMetadataForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)subscriptionMetadataForPersonalSubscriptionWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionServiceClientConnectionWasInterrupted:(id)arg0 ;
-(void)subscriptionServiceClientConnectionWasInvalidated:(id)arg0 ;
-(void)subscriptionValidationTokenForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationToken:(id)arg0 fromSender:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif