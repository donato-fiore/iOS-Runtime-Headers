// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAPRESENCEMANAGER_H
#define SKAPRESENCEMANAGER_H

@class NSMapTable, NSString;
@protocol SKAPresenceManaging, SKAAccountProviding, SKAChannelManaging, SKADatabaseManaging, SKAPresenceManagingDelegate, OS_dispatch_queue, SKAMessagingProviding;

#import <Foundation/Foundation.h>


@interface SKAPresenceManager : NSObject <SKAPresenceManaging>



@property (retain, nonatomic) NSObject<SKAAccountProviding> *accountProvider; // ivar: _accountProvider
@property (retain, nonatomic) NSMapTable *activeParticipantsByChannel; // ivar: _activeParticipantsByChannel
@property (retain, nonatomic) NSMapTable *activePresenceAssertionsByClient; // ivar: _activePresenceAssertionsByClient
@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAPresenceManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue; // ivar: _internalWorkQueue
@property (retain, nonatomic) NSObject<SKAMessagingProviding> *messagingProvider; // ivar: _messagingProvider
@property (readonly) Class superclass;


+(id)_keyGenerationError;
+(id)_noExistingAssertionError;
+(id)_noExistingChannelError;
+(id)_payloadGenerationError;
+(id)logger;
-(BOOL)_activePresenceAssertionExistsForPresenceIdentifier:(id)arg0 ;
-(BOOL)_activePresenceAssertionsExist;
-(BOOL)_addPresenceAssertionForClient:(id)arg0 presenceIdentifier:(id)arg1 ;
-(BOOL)_addPresentDeviceForChannel:(id)arg0 presentDevice:(id)arg1 ;
-(BOOL)_removePresenceAssertionForClient:(id)arg0 presenceIdentifier:(id)arg1 ;
-(BOOL)_removePresentDeviceForChannel:(id)arg0 presentDevice:(id)arg1 ;
-(BOOL)_shouldReassert;
-(BOOL)_shouldReauthForError:(id)arg0 ;
-(NSInteger)_reassertResetTimeSeconds;
-(NSUInteger)_currentCheckpointForChannel:(id)arg0 ;
-(id)_activePresenceAssertionsForClient:(id)arg0 ;
-(id)_activePresentDevicesForChannel:(id)arg0 ;
-(id)_deviceIdentifierForToken:(id)arg0 ;
-(id)_mostRecentPublishTimeForTokenURI:(id)arg0 onChannel:(id)arg1 ;
-(id)_presentDeviceFromPayload:(id)arg0 onChannel:(id)arg1 ;
-(id)_sortAndDedupePresenceIdentifiers:(id)arg0 ;
-(id)initWithDatabaseManager:(id)arg0 channelManager:(id)arg1 accountProvider:(id)arg2 messagingProvider:(id)arg3 delegate:(id)arg4 ;
-(void)_clearPresentDevicesForChannel:(id)arg0 ;
-(void)_handleBulkUpdateParticipantPayloads:(id)arg0 forChannel:(id)arg1 ;
-(void)_markReassert;
-(void)_presencePayloadForChannel:(id)arg0 timestamp:(id)arg1 completion:(id)arg2 ;
-(void)_presentDevicesChangedForChannel:(id)arg0 ;
-(void)_recalculateActivityTracking;
-(void)_sendPollingMessageForChannel:(id)arg0 completion:(id)arg1 ;
-(void)_sendPresenceAssertionMessageForChannel:(id)arg0 isRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(void)_sendPresenceDeactivationMessageForChannel:(id)arg0 completion:(id)arg1 ;
-(void)_setCheckpointForChannel:(id)arg0 checkpoint:(NSUInteger)arg1 ;
-(void)channelReceivedIncomingPayloadUpdate:(id)arg0 channel:(id)arg1 ;
-(void)createPresenceChannelForPresenceIdentifier:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)findOrCreatePresenceChannelForPresenceIdentifier:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)findPresenceChannelForPresenceIdentifier:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)presentDevicesForPresenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releaseAllPresenceAssertionsAssociatedWithClient:(id)arg0 completion:(id)arg1 ;
-(void)releasePresenceAssertionForPresenceIdentifier:(id)arg0 client:(id)arg1 completion:(id)arg2 ;
-(void)retainPresenceAssertionForPresenceIdentifier:(id)arg0 client:(id)arg1 completion:(id)arg2 ;


@end


#endif