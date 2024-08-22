// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKADATABASEMANAGER_H
#define SKADATABASEMANAGER_H

@class NSString;
@protocol SKADatabaseManaging, SKADatabaseProviding, SKADatabaseManagingDelegate;

#import <Foundation/Foundation.h>


@interface SKADatabaseManager : NSObject <SKADatabaseManaging>



@property (readonly, nonatomic) NSObject<SKADatabaseProviding> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SKADatabaseManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logger;
-(BOOL)copyInvitedUsersFromChannel:(id)arg0 toChannel:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)decomissionAllPersonalChannelsWithStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(BOOL)deleteAllInvitedUsersForPersonalChannel:(id)arg0 databaseContext:(id)arg1 ;
-(BOOL)deleteInvitedUserForHandle:(id)arg0 personalChannel:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)deletePendingPublishRequestWithWithUniqueIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(BOOL)deletePersonalChannelForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(BOOL)deleteRemovedUserWithHandle:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)deleteSubscriptionAssertionWithSubscriptionIdentifier:(id)arg0 applicationIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)incrementPendingPublishRequestRetryCountWithUniqueIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingChannelsForChannelIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingChannelsForDatabaseChannel:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingDecomissionedPersonalChannelsWithDatabaseContext:(id)arg0 ;
-(id)_existingInvitedUsersForDatabaseInvitedUser:(id)arg0 databaseChannel:(id)arg1 databaseContext:(id)arg2 ;
-(id)_existingInvitedUsersForInvitedHandle:(id)arg0 channel:(id)arg1 databaseContext:(id)arg2 ;
-(id)_existingPendingPublishRequestForUniqueIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingPendingPublishRequestsForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingPendingPublishRequestsWithDatabaseContext:(id)arg0 ;
-(id)_existingPersonalChannelForDatabaseChannel:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingPersonalChannelForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingPersonalChannelsForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingReceivedInvitationsForChannelIdentifier:(id)arg0 sortedByDateReceived:(BOOL)arg1 databaseContect:(id)arg2 ;
-(id)_existingReceivedInvitationsForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)_existingRemovedUsersForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)_existingSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 applicationIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)_existingSubscriptionAssertionsForStatusTypeIdentifier:(id)arg0 applicationIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)_existingTransientSubscriptionHistoryForChannelIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)_existingTransientSubscriptionHistoryWithLimit:(NSInteger)arg0 orderedByLastSubscriptionDateAscending:(BOOL)arg1 databaseContext:(id)arg2 ;
-(id)allExistingChannelsForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)allExistingChannelsForStatusTypeIdentifier:(id)arg0 includingPersonalChannel:(BOOL)arg1 databaseContext:(id)arg2 ;
-(id)allPersistentSubscriptionAssertionChannelIdentifiersWithDatabaseContext:(id)arg0 ;
-(id)createChannelForStatusTypeIdentifier:(id)arg0 channelIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)createGeneratedEncryptionKeyWithOriginalOutgoingRatchetState:(id)arg0 personalChannel:(id)arg1 databaseContext:(id)arg2 ;
-(id)createInvitedUserWithHandle:(id)arg0 senderHandle:(id)arg1 invitationPayload:(id)arg2 channel:(id)arg3 databaseContext:(id)arg4 ;
-(id)createOrUpdateTransientSubscriptionHistoryForChannelIdentifier:(id)arg0 lastSubscriptionDate:(id)arg1 databaseContext:(id)arg2 ;
-(id)createPendingPublishRequestWithUniqueIdentifier:(id)arg0 dateCreated:(id)arg1 payloadData:(id)arg2 statusTypeIdentifier:(id)arg3 databaseContext:(id)arg4 ;
-(id)createPersonalChannelForStatusTypeIdentifier:(id)arg0 channelIdentifier:(id)arg1 channelToken:(id)arg2 databaseContext:(id)arg3 ;
-(id)createReceivedInvitationForChannel:(id)arg0 senderHandle:(id)arg1 invitedHandle:(id)arg2 invitationIdentifier:(id)arg3 dateInvitationCreated:(id)arg4 incomingRatchetState:(id)arg5 invitationPayload:(id)arg6 databaseContext:(id)arg7 ;
-(id)createRemovedUserWithHandle:(id)arg0 dateRemoved:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3 ;
-(id)createStatusWithUniqueIdentifier:(id)arg0 dateCreated:(id)arg1 datePublished:(id)arg2 dateReceived:(id)arg3 dateExpired:(id)arg4 rawData:(id)arg5 channelIdentifier:(id)arg6 databaseContext:(id)arg7 ;
-(id)createSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 applicationIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3 ;
-(id)existingChannelForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)existingChannelForSubscriptionIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)existingInvitedUsersForInvitedHandle:(id)arg0 onChannel:(id)arg1 databaseContext:(id)arg2 ;
-(id)existingInvitedUsersForPersonalChannel:(id)arg0 databaseContext:(id)arg1 ;
-(id)existingPendingPublishRequestForUniqueIdentifier:(id)arg0 withDatabaseContext:(id)arg1 ;
-(id)existingPendingPublishRequestsForStatusTypeIdentifier:(id)arg0 withDatabaseContext:(id)arg1 ;
-(id)existingPendingPublishRequestsWithDatabaseContext:(id)arg0 ;
-(id)existingPersonalChannelForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)existingRecentTransientSubscriptionHistoriesWithLimit:(NSInteger)arg0 databaseContext:(id)arg1 ;
-(id)existingRemovedUserWithHandle:(id)arg0 statusTypeIdentifier:(id)arg1 withDatabaseContext:(id)arg2 ;
-(id)existingStatusForChannel:(id)arg0 databaseContext:(id)arg1 ;
-(id)existingStatusForUniqueIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(id)existingSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 applicationIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)existingSubscriptionAssertionsForStatusTypeIdentifier:(id)arg0 applicationIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(id)generatedEncryptionKeysForPersonalChannel:(id)arg0 databaseContext:(id)arg1 ;
-(id)initWithDatabaseProvider:(id)arg0 delegate:(id)arg1 ;
-(id)newBackgroundContext;
-(id)receivedInvitationsForChannel:(id)arg0 databaseContext:(id)arg1 ;
-(id)updateInvitationPayload:(id)arg0 onExistingInvitedUser:(id)arg1 channel:(id)arg2 databaseContext:(id)arg3 ;
-(id)updatePersonalChannel:(id)arg0 withCurrentOutgoingRatchetState:(id)arg1 databaseContext:(id)arg2 ;
-(void)cleanupDecommisionedChannelsWithDatabaseContext:(id)arg0 ;
-(void)cleanupOldChannelsForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(void)cleanupOldReceivedInvitationsForChannelIdentifier:(id)arg0 excludingInvitation:(id)arg1 databaseContext:(id)arg2 ;
-(void)cleanupOldStatusUpdatesForChannelIdentifier:(id)arg0 excludingStatusUniqueIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id)arg0 ;


@end


#endif