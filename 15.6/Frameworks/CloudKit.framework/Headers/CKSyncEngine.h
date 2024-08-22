// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSYNCENGINE_H
#define CKSYNCENGINE_H

@class NSString, NSOperationQueue;
@protocol CKPropertiesDescription, OS_dispatch_queue, CKSyncEngineDataSource, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "CKDatabase.h"
#import "CKSyncEngineMetadata.h"
#import "CKNotificationListener.h"

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


@property (nonatomic) BOOL allowMetadataCallbackDeferral; // ivar: _allowMetadataCallbackDeferral
@property (nonatomic, getter=isAutomaticSyncingEnabled) BOOL automaticSyncingEnabled; // ivar: _automaticSyncingEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, weak, nonatomic) NSObject<CKSyncEngineDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSString *databaseSubscriptionIDOverride; // ivar: _databaseSubscriptionIDOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastKnownAccountStatus; // ivar: _lastKnownAccountStatus
@property (nonatomic) NSUInteger maxMergeableValueCountPerMaintenanceBatch; // ivar: _maxMergeableValueCountPerMaintenanceBatch
@property (nonatomic) NSUInteger maxRecordCountPerBatch; // ivar: _maxRecordCountPerBatch
@property (nonatomic) NSUInteger maxZoneCountPerBatch; // ivar: _maxZoneCountPerBatch
@property (retain, nonatomic) CKSyncEngineMetadata *metadata; // ivar: _metadata
@property (nonatomic) BOOL needsToReloadAccount; // ivar: _needsToReloadAccount
@property (retain, nonatomic) CKNotificationListener *notificationListener; // ivar: _notificationListener
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) BOOL skipRetryOnOperationError; // ivar: _skipRetryOnOperationError
@property (readonly) Class superclass;
@property (nonatomic) BOOL useOpportunisticPushTopic;
@property (nonatomic, getter=isWaitingForHSA2) BOOL waitingForHSA2; // ivar: _waitingForHSA2
@property (nonatomic, getter=isWaitingForIdentityUpdate) BOOL waitingForIdentityUpdate; // ivar: _waitingForIdentityUpdate
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // ivar: _xpcActivityCriteriaOverrides


+(BOOL)fastErrorRetry;
+(BOOL)shouldDeferAfterError:(id)arg0 ;
+(id)earliestStartDateAfterError:(id)arg0 ;
+(id)saveSubscriptionActivityIdentifierInDatabase:(id)arg0 ignoringSystemConditions:(BOOL)arg1 ;
+(id)syncActivityIdentifierInDatabase:(id)arg0 ignoringSystemConditions:(BOOL)arg1 ;
+(void)setFastErrorRetry:(BOOL)arg0 ;
+(void)unregisterActivitiesWithDatabase:(id)arg0 ignoringSystemConditions:(BOOL)arg1 ;
-(BOOL)_isFetchChangesErrorAdopterVisible:(id)arg0 ;
-(BOOL)hasPendingModifications;
-(BOOL)hasSchedulerActivityWithIdentifier:(id)arg0 ;
-(BOOL)needsToFetchChangesForZoneIDs:(id)arg0 ;
-(NSUInteger)numberOfModifyPendingRecordsOperations;
-(id)_adopterVisibleFetchChangesErrorForZoneID:(id)arg0 error:(id)arg1 ;
-(id)databaseSubscriptionWithID:(id)arg0 ;
-(id)defaultDatabaseSubscription;
-(id)defaultDatabaseSubscriptionID;
-(id)existingOperationToFetchChangesForZoneIDs:(id)arg0 includingExecutingOperations:(BOOL)arg1 ;
-(id)existingOperationToModifyRecordBatchesForZoneIDs:(id)arg0 includingExecutingOperations:(BOOL)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 dataSource:(id)arg1 metadata:(id)arg2 ;
-(id)initWithDatabase:(id)arg0 dataSource:(id)arg1 metadata:(id)arg2 machServiceName:(id)arg3 ;
-(id)initWithDatabase:(id)arg0 dataSource:(id)arg1 metadata:(id)arg2 machServiceName:(id)arg3 priority:(NSInteger)arg4 ;
-(id)initWithDatabase:(id)arg0 dataSource:(id)arg1 metadata:(id)arg2 machServiceName:(id)arg3 priority:(NSInteger)arg4 xpcActivityCriteriaOverrides:(id)arg5 ;
-(id)mergeableValueMaintenanceActivityIdentifier;
-(id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)arg0 ;
-(id)redactedDescription;
-(id)saveSubscriptionActivityIdentifier;
-(id)syncActivityIdentifier;
-(id)userRequestedBackupActivityIdentifier;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)_fetchChangesForZoneIDs:(id)arg0 ifNecessary:(BOOL)arg1 operationGroup:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateDataSourceForFailedToFetchChangesForRecordZoneID:(id)arg0 error:(id)arg1 ;
-(void)accountChangedNotification:(id)arg0 ;
-(void)addRecordIDsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)addRecordZonesToSave:(id)arg0 recordZoneIDsToDelete:(id)arg1 ;
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
-(void)performSyncActivity:(id)arg0 completionHandler:(id)arg1 ;
-(void)relatedApplicationBundleIdentifiersForZoneIDs:(id)arg0 recordIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveSubscriptionIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)setNeedsToFetchChanges;
-(void)submitActivityIfNecessaryWithIdentifier:(id)arg0 earliestStartDate:(id)arg1 priority:(NSInteger)arg2 userRequestedBackupTask:(BOOL)arg3 relatedApplicationBundleIdentifiers:(id)arg4 ;
-(void)unregisterActivities;


@end


#endif