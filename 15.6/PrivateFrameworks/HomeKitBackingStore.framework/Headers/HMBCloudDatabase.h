// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBCLOUDDATABASE_H
#define HMBCLOUDDATABASE_H

@class HMFObject, CKContainer, CKContainerID, NSOperationQueue, NSString, NAFuture, CKDatabase, NSSet, HMFUnfairLock, NSMutableDictionary;
@protocol HMBCloudPushObserver, HMFLogging, HMBCloudDatabaseDataSource, HMBCloudDatabaseDelegate;


#import "HMBCloudDatabaseConfiguration.h"
#import "HMBCloudCredentialsAvailabilityListener.h"
#import "HMBLocalDatabase.h"
#import "HMBCloudDatabaseStateModel.h"
#import "HMBLocalZone.h"

@interface HMBCloudDatabase : HMFObject <HMBCloudPushObserver, HMFLogging>



@property (copy, nonatomic) id *cloudZoneFactory; // ivar: _cloudZoneFactory
@property (readonly, copy, nonatomic) HMBCloudDatabaseConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) HMBCloudCredentialsAvailabilityListener *credentialsAvailabilityListener; // ivar: _credentialsAvailabilityListener
@property (readonly, nonatomic) NSObject<HMBCloudDatabaseDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSOperationQueue *databaseFetchOperationQueue; // ivar: _databaseFetchOperationQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMBCloudDatabaseDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *initialCloudSyncFuture; // ivar: _initialCloudSyncFuture
@property (readonly, nonatomic) NSOperationQueue *invitationOperationQueue; // ivar: _invitationOperationQueue
@property (readonly, nonatomic) HMBLocalDatabase *localDatabase; // ivar: _localDatabase
@property (readonly, nonatomic) CKDatabase *privateDatabase; // ivar: _privateDatabase
@property (retain, nonatomic) HMBCloudDatabaseStateModel *privateDatabaseState; // ivar: _privateDatabaseState
@property (readonly, nonatomic) NSSet *privateZoneIDs;
@property (readonly, nonatomic) HMFUnfairLock *propertyLock; // ivar: _propertyLock
@property (readonly, nonatomic) CKDatabase *publicDatabase; // ivar: _publicDatabase
@property (retain, nonatomic) HMBCloudDatabaseStateModel *publicDatabaseState; // ivar: _publicDatabaseState
@property (readonly, nonatomic) NSSet *publicZoneIDs;
@property (readonly, nonatomic) CKDatabase *sharedDatabase; // ivar: _sharedDatabase
@property (retain, nonatomic) HMBCloudDatabaseStateModel *sharedDatabaseState; // ivar: _sharedDatabaseState
@property (readonly, nonatomic) NSSet *sharedZoneIDs;
@property (readonly, nonatomic) HMBLocalZone *stateZone; // ivar: _stateZone
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *zoneStateByZoneID; // ivar: _zoneStateByZoneID


+(id)extantDatabases;
+(id)extantDatabasesLock;
+(id)logCategory;
-(BOOL)_retryCloudKitOperationAfterError:(id)arg0 retryBlock:(id)arg1 ;
-(BOOL)retryCloudKitOperation:(id)arg0 afterError:(id)arg1 retryBlock:(id)arg2 ;
-(id)_acceptInvitation:(id)arg0 ;
-(id)_zonesWithScope:(NSInteger)arg0 ;
-(id)acceptInvitation:(id)arg0 ;
-(id)acceptInvitationWithShareMetadata:(id)arg0 ;
-(id)attributeDescriptions;
-(id)createPrivateZoneWithID:(id)arg0 ;
-(id)databaseStateForDatabaseScope:(NSInteger)arg0 ;
-(id)fetchCurrentUserRecordForDatabase:(id)arg0 ;
-(id)fetchParticipantWithLookupInfo:(id)arg0 ;
-(id)fetchShareMetadataForInvitation:(id)arg0 ;
-(id)fetchSubscriptionsOn:(id)arg0 ;
-(id)fetchZones:(BOOL)arg0 ;
-(id)fetchZonesOn:(id)arg0 ;
-(id)initWithLocalDatabase:(id)arg0 configuration:(id)arg1 ;
-(id)initWithLocalDatabase:(id)arg0 stateZone:(id)arg1 container:(id)arg2 configuration:(id)arg3 databaseStateModelsByScope:(id)arg4 zoneStateModels:(id)arg5 credentialsAvailabilityListener:(id)arg6 dataSource:(id)arg7 ;
-(id)logIdentifier;
-(id)openExistingPrivateZoneWithID:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)openExistingSharedZoneWithID:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)openOrCreatePrivateZoneWithID:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)operationConfigurationWithProcessingOptions:(id)arg0 ;
-(id)peformCodeOperationWithServiceName:(id)arg0 functionName:(id)arg1 request:(id)arg2 responseClass:(Class)arg3 ;
-(id)performAdministrativeFetchForAllDatabases:(BOOL)arg0 ;
-(id)performAdministrativeFetchForDatabaseScope:(NSInteger)arg0 withForce:(BOOL)arg1 ;
-(id)performCloudPullForScope:(NSInteger)arg0 ;
-(id)performInitialCloudSync;
-(id)pushSubscriptionsForDatabase:(id)arg0 subscriptionsToSave:(id)arg1 subscriptionIDsToRemove:(id)arg2 ;
-(id)registerPrivateSubscription:(id)arg0 ;
-(id)registerPrivateSubscriptionForExternalRecordType:(id)arg0 ;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg0 ;
-(id)registerSubscription:(id)arg0 forZoneWithID:(id)arg1 ;
-(id)registerSubscriptionForExternalRecordType:(id)arg0 databaseState:(id)arg1 ;
-(id)removePrivateZoneWithID:(id)arg0 ;
-(id)removeZoneWithID:(id)arg0 ;
-(id)serverChangeTokenForZoneWithID:(id)arg0 ;
-(id)shutdown;
-(id)subscriptionIDForCloudID:(id)arg0 recordType:(id)arg1 ;
-(id)subscriptionIDForZoneID:(id)arg0 recordType:(id)arg1 ;
-(id)subscriptionsForZoneWithID:(id)arg0 ;
-(id)unregisterPrivateSubscriptionForExternalRecordType:(id)arg0 ;
-(id)unregisterPrivateSubscriptionForSubscriptionID:(id)arg0 ;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg0 ;
-(id)unregisterSharedSubscriptionForSubscriptionID:(id)arg0 ;
-(id)unregisterSubscription:(id)arg0 forZoneWithID:(id)arg1 ;
-(id)waitForManateeAvailability;
-(void)_performInitialCloudSync;
-(void)addContainerOperation:(id)arg0 ;
-(void)addDatabaseOperation:(id)arg0 forScope:(NSInteger)arg1 ;
-(void)deallocForZoneWithID:(id)arg0 ;
-(void)handleCreatedZoneIDs:(id)arg0 ;
-(void)handleRemovedZoneIDs:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)handleUpdatedZonesIDs:(id)arg0 ;
-(void)handler:(id)arg0 didReceiveCKNotification:(id)arg1 ;
-(void)handler:(id)arg0 didReceiveMessageWithUserInfo:(id)arg1 ;
-(void)notifyDelegateOfError:(id)arg0 forOperation:(id)arg1 ;
-(void)removeStateForZoneID:(id)arg0 ;
-(void)retryStartupBlock:(id)arg0 ;
-(void)updateNeedsZoneDeletion:(BOOL)arg0 forZoneWithID:(id)arg1 ;
-(void)updateRebuildStatus:(id)arg0 forZoneWithID:(id)arg1 ;
-(void)updateServerChangeToken:(id)arg0 forDatabaseWithScope:(NSInteger)arg1 ;
-(void)updateServerChangeToken:(id)arg0 forZoneWithID:(id)arg1 ;


@end


#endif