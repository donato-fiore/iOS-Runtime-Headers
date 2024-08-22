// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAINVITATIONMANAGER_H
#define SKAINVITATIONMANAGER_H

@class NSString;
@protocol SKAInvitationManaging, SKAAccountProviding, OS_dispatch_queue, SKAChannelManaging, SKADatabaseManaging, SKAInvitationManagingDelegate, SKAMessagingProviding, SKAPresenceManaging;

#import <Foundation/Foundation.h>


@interface SKAInvitationManager : NSObject <SKAInvitationManaging>



@property (retain, nonatomic) NSObject<SKAAccountProviding> *accountProvider; // ivar: _accountProvider
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundCleanupQueue; // ivar: _backgroundCleanupQueue
@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAInvitationManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SKAMessagingProviding> *messagingProvider; // ivar: _messagingProvider
@property (retain, nonatomic) NSObject<SKAPresenceManaging> *presenceManager; // ivar: _presenceManager
@property (readonly) Class superclass;
@property (nonatomic) BOOL trafficModeEnabled; // ivar: _trafficModeEnabled


+(id)_invalidInvitedHandlesError;
+(id)_invalidSenderHandleError;
+(id)_keyRollFailedErrorWithUnderlyingError:(id)arg0 ;
+(id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)arg0 ;
+(id)_noPresenceChannelForIdentifier:(id)arg0 ;
+(id)_unableToFindAnyExistingInvitationToDeleteError;
+(id)_unableToFindExistingInvitationForHandlesError:(id)arg0 ;
+(id)logger;
-(BOOL)_rollEncryptionKeyForChannel:(id)arg0 databaseContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)_sendInvitationMessageForChannel:(id)arg0 toInvitedUsers:(id)arg1 subscriptionKeys:(id)arg2 error:(*id)arg3 ;
-(BOOL)_sendInvitationMessageForPresenceChannel:(id)arg0 toInvitedUsers:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldReauthForError:(id)arg0 ;
-(BOOL)_validateInvitedHandle:(id)arg0 ;
-(BOOL)rollEncryptionKeyForPersonalChannelWithStatusTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_addInvitedHandles:(id)arg0 senderHandle:(id)arg1 toDatabaseForPersonalChannel:(id)arg2 withInvitationPayload:(id)arg3 databaseContext:(id)arg4 ;
-(id)_addInvitedHandles:(id)arg0 senderHandle:(id)arg1 toDatabaseForPresenceChannel:(id)arg2 databaseContext:(id)arg3 ;
-(id)_ratchetEncryptionKeyForwardOrKeyRollForPersonalChannel:(id)arg0 databaseContext:(id)arg1 invitationWasSentViaKeyRoll:(*BOOL)arg2 error:(*id)arg3 ;
-(id)_updateOrCreateInvitedUserWithHandle:(id)arg0 senderHandle:(id)arg1 onChannel:(id)arg2 withInvitationPayload:(id)arg3 databaseContext:(id)arg4 ;
-(id)_validateInvitedHandles:(id)arg0 ;
-(id)initWithMessagingProvider:(id)arg0 databaseManager:(id)arg1 accountProvider:(id)arg2 channelManager:(id)arg3 presenceManager:(id)arg4 trafficMode:(BOOL)arg5 ;
-(id)resolveSenderHandleWithPreferredSenderHandle:(id)arg0 ;
-(void)_createPersonalChannelForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)_findOrCreatePersonalChannelForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)_isHandleInviteable:(id)arg0 completion:(id)arg1 ;
-(void)_isPresenceHandleInviteable:(id)arg0 completion:(id)arg1 ;
-(void)fetchHandleInvitability:(id)arg0 fromHandle:(id)arg1 forPresenceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)fetchHandleInvitability:(id)arg0 fromHandle:(id)arg1 forStatusTypeIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)handleIncomingInvitationMessage:(id)arg0 fromHandle:(id)arg1 toHandle:(id)arg2 messageGuid:(id)arg3 ;
-(void)isHandleInviteable:(id)arg0 fromHandle:(id)arg1 completion:(id)arg2 ;
-(void)isPresenceHandleInviteable:(id)arg0 fromHandle:(id)arg1 completion:(id)arg2 ;
-(void)revokeAllInvitationsFromPersonalChannelWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)revokeInvitationFromPersonalChannelWithStatusTypeIdentifier:(id)arg0 forHandles:(id)arg1 completion:(id)arg2 ;
-(void)revokeInvitationFromPresenceChannelWithPresenceIdentifier:(id)arg0 forHandles:(id)arg1 completion:(id)arg2 ;
-(void)rollPersonalChannelWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)rollPresenceChannelWithPresenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)sendInvitationForPersonalChannelWithStatusTypeIdentifier:(id)arg0 toHandles:(id)arg1 fromSenderHandle:(id)arg2 withInvitationPayload:(id)arg3 completion:(id)arg4 ;
-(void)sendInvitationForPresenceChannelWithPresenceIdentifier:(id)arg0 toHandles:(id)arg1 fromSenderHandle:(id)arg2 completion:(id)arg3 ;


@end


#endif