// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSYNCENGINE_H
#define CKSYNCENGINE_H

@class NSString, NSDate, NSOperationQueue, NSArray;
@protocol CKPropertiesDescription, OS_dispatch_queue, CKSyncEngineDataSource, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "CKDatabase.h"
#import "CKSyncEngineMetadata.h"
#import "CKNotificationListener.h"
#import "CKServerChangeToken.h"

@interface CKSyncEngine : NSObject <CKPropertiesDescription>

 {
    BOOL _ignoringSystemConditions;
    BOOL _useUniqueActivityIdentifiers;
    NSUInteger _lastNotifiedMetadataChangeCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_batchCreationQueue;
    NSUInteger _maxRecordBytesPerBatch;
    id *_updateMetadataBlock;
}


@property (readonly, nonatomic) BOOL allowFetchAndModifyConcurrently; // ivar: _allowFetchAndModifyConcurrently
@property (nonatomic) BOOL allowMetadataCallbackDeferral; // ivar: _allowMetadataCallbackDeferral
@property (retain, nonatomic) NSString *apsMachServiceName; // ivar: _apsMachServiceName
@property (getter=isAutomaticSyncingEnabled) BOOL automaticSyncingEnabled; // ivar: _automaticSyncingEnabled
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) BOOL continueModifyingPendingChangesAfterFailure; // ivar: _continueModifyingPendingChangesAfterFailure
@property (readonly, weak, nonatomic) NSObject<CKSyncEngineDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSString *databaseSubscriptionIDOverride; // ivar: _databaseSubscriptionIDOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *earliestStartDateForSchedulerActivities; // ivar: _earliestStartDateForSchedulerActivities
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastKnownAccountStatus; // ivar: _lastKnownAccountStatus
@property (readonly, nonatomic) NSUInteger maxRecordCountPerBatch; // ivar: _maxRecordCountPerBatch
@property NSUInteger maxZoneCountPerBatch; // ivar: _maxZoneCountPerBatch
@property (retain) CKSyncEngineMetadata *metadata; // ivar: _metadata
@property BOOL needsToReloadAccount; // ivar: _needsToReloadAccount
@property (retain) CKNotificationListener *notificationListener; // ivar: _notificationListener
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSArray *recordIDsToDelete;
@property (readonly, nonatomic) NSArray *recordIDsToSave;
@property (copy, nonatomic) CKServerChangeToken *serverChangeTokenForDatabase;
@property BOOL skipRetryOnOperationError; // ivar: _skipRetryOnOperationError
@property (readonly) Class superclass;
@property BOOL useEarliestStartDateForSchedulerActivitiesInPast; // ivar: _useEarliestStartDateForSchedulerActivitiesInPast
@property BOOL useOpportunisticPushTopic; // ivar: _useOpportunisticPushTopic
@property (nonatomic, getter=isWaitingForHSA2) BOOL waitingForHSA2; // ivar: _waitingForHSA2
@property (nonatomic, getter=isWaitingForIdentityUpdate) BOOL waitingForIdentityUpdate; // ivar: _waitingForIdentityUpdate
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // ivar: _xpcActivityCriteriaOverrides


+(BOOL)fastErrorRetry;
+(BOOL)shouldDeferAfterError:(id)arg0 ;
+(id)earliestStartDateAfterError:(id)arg0 ;
+(id)saveSubscriptionActivityIdentifierInDatabase:(id)arg0 ignoringSystemConditions:(BOOL)arg1 ;
+(id)syncActivityIdentifierInDatabase:(id)arg0 ignoringSystemConditions:(BOOL)arg1 ;
+(void)setFastErrorRetry:(BOOL)arg0 ;
+(void)unregisterActivitiesWithDatabase:(id)arg0 ignoringSystemConditions:(BOOL)arg1 ;
-(BOOL)_isFetchChangesErrorAdopterVisible:(id)arg0 ;
-(BOOL)_queue_lastSyncWasLongAgo;
-(BOOL)allowFetchAndModifyConcurrentlyForContainerID:(id)arg0 ;
-(BOOL)hasPendingModifications;
-(BOOL)hasSchedulerActivityWithIdentifier:(id)arg0 ;
-(BOOL)needsToFetchChangesForZoneIDs:(id)arg0 ;
-(NSUInteger)numberOfModifyPendingRecordsOperations;
-(id)_adopterVisibleFetchChangesErrorForZoneID:(id)arg0 error:(id)arg1 ;
-(id)databaseSubscriptionWithID:(id)arg0 ;
-(id)defaultDatabaseSubscription;
-(id)defaultDatabaseSubscriptionID;
-(id)existingOperationToFetchChangesForZoneIDs:(id)arg0 group:(id)arg1 includingExecutingOperations:(BOOL)arg2 ;
-(id)existingOperationToModifyPendingChangesForZoneIDs:(id)arg0 group:(id)arg1 includingExecutingOperations:(BOOL)arg2 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)nextBatchOfRecordsToModifyInZoneIDs:(id)arg0 ;
-(id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)arg0 ;
-(id)redactedDescription;
-(id)saveSubscriptionActivityIdentifier;
-(id)serverChangeTokenForRecordZoneID:(id)arg0 ;
-(id)syncActivityIdentifier;
-(id)userRequestedBackupActivityIdentifier;
-(id)zoneIDsToDeleteInZoneIDs:(id)arg0 ;
-(id)zoneIDsToSaveInZoneIDs:(id)arg0 ;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)_fetchChangesForZoneIDs:(id)arg0 ifNecessary:(BOOL)arg1 operationGroup:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateDataSourceForFailedToFetchChangesForRecordZoneID:(id)arg0 error:(id)arg1 ;
-(void)accountChangedNotification:(id)arg0 ;
-(void)addRecordIDsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)addRecordZonesToSave:(id)arg0 recordZoneIDsToDelete:(id)arg1 ;
-(void)cancelPendingOperationsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveDatabaseNotification:(id)arg0 ;
-(void)fetchChangesForZoneIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchChangesForZoneIDs:(id)arg0 group:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchChangesForZoneIDs:(id)arg0 group:(id)arg1 ifNecessary:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)fetchChangesWithCompletionHandler:(id)arg0 ;
-(void)identityUpdateNotification:(id)arg0 ;
-(void)modifyPendingChangesInZoneIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)modifyPendingChangesInZoneIDs:(id)arg0 group:(id)arg1 completionHandler:(id)arg2 ;
-(void)modifyPendingChangesWithCompletionHandler:(id)arg0 ;
-(void)networkAttributionBundleIDForZoneIDs:(id)arg0 recordIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)performSyncActivity:(id)arg0 completionHandler:(id)arg1 ;
-(void)relatedApplicationBundleIdentifiersForZoneIDs:(id)arg0 recordIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeRecordIDsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)removeRecordZonesToSave:(id)arg0 recordZoneIDsToDelete:(id)arg1 ;
-(void)saveSubscriptionIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)setHasPendingModifications;
-(void)setNeedsToFetchChanges;
-(void)setServerChangeToken:(id)arg0 forRecordZoneID:(id)arg1 ;
-(void)submitActivityIfNecessaryWithIdentifier:(id)arg0 earliestStartDate:(id)arg1 priority:(NSInteger)arg2 userRequestedBackupTask:(BOOL)arg3 relatedApplicationBundleIdentifiers:(id)arg4 ;
-(void)unregisterActivities;
-(void)updateMetadataAndNotifyDatasourceIfNecessaryForUserRecordID:(id)arg0 ;


@end


#endif