// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKASTATUSPUBLISHINGSERVICECLIENT_H
#define SKASTATUSPUBLISHINGSERVICECLIENT_H

@class NSString;
@protocol SKStatusPublishingDaemonProtocol, SKAStatusPublishingServiceClientConnectionLifecycleDelegate, SKAChannelManaging, SKADatabaseManaging, SKADatabaseProviding, SKAStatusPublishingServiceClientDelegate, SKAMessagingProviding, SKAStatusPublishingManaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKAStatusPublishingServiceClientConnection.h"
#import "SKAInvitationManager.h"

@interface SKAStatusPublishingServiceClient : NSObject <SKStatusPublishingDaemonProtocol, SKAStatusPublishingServiceClientConnectionLifecycleDelegate>



@property (nonatomic) BOOL accountCheckCompleted; // ivar: _accountCheckCompleted
@property (nonatomic) BOOL accountIsStatusKitCapable; // ivar: _accountIsStatusKitCapable
@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property (retain, nonatomic) SKAStatusPublishingServiceClientConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (retain, nonatomic) NSObject<SKADatabaseProviding> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAStatusPublishingServiceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKAInvitationManager *invitationManager; // ivar: _invitationManager
@property (retain, nonatomic) NSObject<SKAMessagingProviding> *messagingProvider; // ivar: _messagingProvider
@property (retain, nonatomic) NSObject<SKAStatusPublishingManaging> *publishingManager; // ivar: _publishingManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSString *statusTypeIdenfifier; // ivar: _statusTypeIdenfifier
@property (readonly) Class superclass;


+(id)_accountNotCapableError;
+(id)_dateCreatedDriftError;
+(id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)arg0 ;
+(id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)arg0 ;
+(id)_noUsersToShareWithError;
+(id)_unableToResolveSenderHandleError;
+(id)logger;
-(CGFloat)_delayForStatusPublishRequest:(id)arg0 ;
-(CGFloat)_randomScheduledPublishDelay;
-(CGFloat)_randomSecondaryDeviceRepublishDelay;
-(CGFloat)_randomUnscheduledPublishDelay;
-(CGFloat)_scheduledPublishMaxDelayTime;
-(CGFloat)_secondaryDeviceRepublishMaxDelayTime;
-(CGFloat)_secondaryDeviceRepublishMinDelayTime;
-(CGFloat)_serverBagTimeIntervalForKey:(id)arg0 withDefaultValue:(CGFloat)arg1 ;
-(CGFloat)_unscheduledPublishMaxDelayTime;
-(id)_serverBagNumberForKey:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 delegate:(id)arg2 databaseManager:(id)arg3 invitationManager:(id)arg4 publishingManager:(id)arg5 channelManager:(id)arg6 ;
-(void)accountIsStatusKitCapableWithCompletion:(id)arg0 ;
-(void)fetchHandleInvitability:(id)arg0 fromHandle:(id)arg1 forStatusTypeIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)inviteHandles:(id)arg0 fromSenderHandle:(id)arg1 withInvitationPayload:(id)arg2 statusTypeIdentifier:(id)arg3 completion:(id)arg4 ;
-(void)invitedHandlesForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)isHandleInviteable:(id)arg0 fromHandle:(id)arg1 forStatusTypeIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 forStatusTypeIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)publishStatusRequest:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)publishingServiceClientConnectionWasInterrupted:(id)arg0 ;
-(void)publishingServiceClientConnectionWasInvalidated:(id)arg0 ;
-(void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeAllInvitedHandlesFromPersonalChannelWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeInvitedHandles:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif