// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPSHAREDTRIPSERVICE_H
#define MSPSHAREDTRIPSERVICE_H

@class NSXPCConnection, NSDate, GEOObserverHashTable, NSMutableArray, NSMutableDictionary, NSString, NSArray;
@protocol MSPSharedTripXPCServer, MSPSharedTripXPCClient, MSPSharedTripContactControllerDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "MSPSharedTripContactController.h"
#import "MSPSharedTripSharingIdentity.h"
#import "MSPMapsPaths.h"

@interface MSPSharedTripService : NSObject <MSPSharedTripXPCServer, MSPSharedTripXPCClient, MSPSharedTripContactControllerDelegate>

 {
    NSXPCConnection *_connection;
    BOOL _connectionError;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUInteger _connectionRetryCounter;
    NSDate *_reconnectionBackoffUntilDate;
    GEOObserverHashTable *_receivingObservers;
    GEOObserverHashTable *_sendingObservers;
    NSMutableArray *_receivedTrips;
    MSPSharedTripContactController *_sharingContactController;
    NSMutableDictionary *_subscriptionTokensByTripID;
    os_unfair_lock_s _sharingIdentityLock;
    NSUInteger _permissions;
    MSPSharedTripSharingIdentity *_sharingIdentity;
    NSObject<OS_dispatch_group> *_checkinDispatchGroup;
    id *_userDisabledDefaultListener;
    id *_serverDisabledDefaultListener;
    MSPMapsPaths *_mapsPaths;
    BOOL _confirmedMapsIsInstalled;
}


@property (readonly, nonatomic) BOOL canReceiveTrips;
@property (readonly, nonatomic) BOOL canShareTrip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *receivedTrips;
@property (readonly, nonatomic) NSArray *receivers;
@property (readonly, nonatomic) MSPSharedTripSharingIdentity *sharingIdentity;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isMapsInstalled;
-(BOOL)isSharingWithContact:(id)arg0 ;
-(id)_addSubscriptionTokenForTripID:(id)arg0 ;
-(id)_insertOrUpdateTrip:(id)arg0 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_subscriptionTokensForTripID:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)init;
-(void)_blockSharedTrip:(id)arg0 ;
-(void)_checkEnabledState;
-(void)_checkin;
-(void)_checkinWithCompletion:(id)arg0 ;
-(void)_fetchActiveHandlesWithCompletion:(id)arg0 ;
-(void)_fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id)arg0 ;
-(void)_fetchSharedTripsWithCompletion:(id)arg0 ;
-(void)_fetchSharingIdentityWithCompletion:(id)arg0 ;
-(void)_handleCheckinWithSharingIdentity:(id)arg0 activeRecipients:(id)arg1 receivedTrips:(id)arg2 permissions:(NSUInteger)arg3 ;
-(void)_openConnectionIfNeeded;
-(void)_performBlockAfterInitialSync:(id)arg0 ;
-(void)_performBlockWhenCheckinCompleted:(id)arg0 ;
-(void)_purgeToken:(id)arg0 forTripID:(id)arg1 ;
-(void)_reportUserConfirmationOfSharingIdentity:(id)arg0 completion:(id)arg1 ;
-(void)_resetCheckinIdentityAndPermissions;
-(void)_startSharingTripWithContacts:(id)arg0 completion:(id)arg1 ;
-(void)_startSharingTripWithMessagesContacts:(id)arg0 completion:(id)arg1 ;
-(void)_startSharingTripWithMessagesGroup:(id)arg0 completion:(id)arg1 ;
-(void)_startSharingWithContact:(id)arg0 completion:(id)arg1 ;
-(void)_stopAllSharingWithCompletion:(id)arg0 ;
-(void)_stopSharingTrip;
-(void)_stopSharingTripWithContacts:(id)arg0 ;
-(void)_stopSharingTripWithMessagesGroup:(id)arg0 ;
-(void)_stopSharingWithContact:(id)arg0 completion:(id)arg1 ;
-(void)_subscribeToSharedTripUpdatesWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_validateCurrentConfigurationWithCompletion:(id)arg0 ;
-(void)addReceivingObserver:(id)arg0 ;
-(void)addSendingObserver:(id)arg0 ;
-(void)blockSharedTrip:(id)arg0 ;
-(void)blockSharedTripWithIdentifier:(id)arg0 ;
-(void)checkin;
-(void)checkinWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)destinationDidUpdateForSharedTrip:(id)arg0 ;
-(void)destinationReachedDidUpdateForSharedTrip:(id)arg0 ;
-(void)etaDidUpdateForSharedTrip:(id)arg0 ;
-(void)fetchActiveHandlesWithCompletion:(id)arg0 ;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id)arg0 ;
-(void)fetchSharedTripsWithCompletion:(id)arg0 ;
-(void)fetchSharingIdentityWithCompletion:(id)arg0 ;
-(void)performBlockAfterInitialSync:(id)arg0 ;
-(void)purgeToken:(id)arg0 forTripID:(id)arg1 ;
-(void)refreshReceivedTripsWithCompletion:(id)arg0 ;
-(void)refreshSharingIdentityWithCompletion:(id)arg0 ;
-(void)removeReceivingObserver:(id)arg0 ;
-(void)removeSendingObserver:(id)arg0 ;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg0 completion:(id)arg1 ;
-(void)routeDidUpdateForSharedTrip:(id)arg0 ;
-(void)sharedTripContactController:(id)arg0 didUpdateActiveContactsValues:(id)arg1 ;
-(void)sharedTripDidBecomeAvailable:(id)arg0 ;
-(void)sharedTripDidBecomeUnavailable:(id)arg0 ;
-(void)sharedTripDidClose:(id)arg0 ;
-(void)sharedTripDidUpdateRecipients:(id)arg0 ;
-(void)sharedTripInvalidatedWithError:(id)arg0 ;
-(void)sharingIdentityDidChange:(id)arg0 ;
-(void)startSharingTripWithContacts:(id)arg0 completion:(id)arg1 ;
-(void)startSharingTripWithMessagesContacts:(id)arg0 completion:(id)arg1 ;
-(void)startSharingTripWithMessagesGroup:(id)arg0 completion:(id)arg1 ;
-(void)startSharingWithContact:(id)arg0 completion:(id)arg1 ;
-(void)stopAllSharingWithCompletion:(id)arg0 ;
-(void)stopSharingTrip;
-(void)stopSharingTripWithContacts:(id)arg0 ;
-(void)stopSharingTripWithMessagesGroup:(id)arg0 ;
-(void)stopSharingWithContact:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif