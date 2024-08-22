// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDCONTEXT_H
#define ICCLOUDCONTEXT_H

@class NSMutableDictionary, NSDictionary, NSString, NSMutableSet, NSOperationQueue, ICSelectorDelayer, NSTimer;
@protocol ICStateHandlerProvider, ICCloudAnalyticsDelegate, ICCloudContextDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICCloudContext : NSObject <ICStateHandlerProvider>



@property (nonatomic) NSInteger accountStatus;
@property (retain, nonatomic) NSMutableDictionary *accountZoneIDsFetchingChanges; // ivar: _accountZoneIDsFetchingChanges
@property (retain, nonatomic) NSMutableDictionary *accountZoneIDsNeedingFetchChanges; // ivar: _accountZoneIDsNeedingFetchChanges
@property (retain, nonatomic) NSMutableDictionary *accountZoneIDsNeedingToBeSaved; // ivar: _accountZoneIDsNeedingToBeSaved
@property (weak, nonatomic) NSObject<ICCloudAnalyticsDelegate> *cloudAnalyticsDelegate; // ivar: _cloudAnalyticsDelegate
@property (weak, nonatomic) NSObject<ICCloudContextDelegate> *cloudContextDelegate; // ivar: _cloudContextDelegate
@property (readonly, nonatomic) NSDictionary *cloudObjectClassesByRecordType;
@property (retain, nonatomic) NSDictionary *containersByAccountID; // ivar: _containersByAccountID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containersCreationQueue; // ivar: _containersCreationQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddObservers; // ivar: _didAddObservers
@property (nonatomic) BOOL didCheckForLongLivedOperations; // ivar: _didCheckForLongLivedOperations
@property (nonatomic) BOOL disableAutomaticallyRetryNetworkFailures; // ivar: _disableAutomaticallyRetryNetworkFailures
@property (nonatomic) BOOL disableRetryTimer; // ivar: _disableRetryTimer
@property (getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (getter=isDisabledInternal) BOOL disabledInternal; // ivar: _disabledInternal
@property (nonatomic) NSUInteger discretionaryNetworkBehavior; // ivar: _discretionaryNetworkBehavior
@property (nonatomic) BOOL enableLongLivedOperations; // ivar: _enableLongLivedOperations
@property (readonly, nonatomic) BOOL fetchOperationsPending; // ivar: _fetchOperationsPending
@property (nonatomic, getter=isFetchingEnabled) BOOL fetchingEnabled; // ivar: _fetchingEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsToProcessAllObjects; // ivar: _needsToProcessAllObjects
@property BOOL needsToUpdateSubscriptions; // ivar: _needsToUpdateSubscriptions
@property (retain, nonatomic) NSMutableSet *objectIDsToProcess; // ivar: _objectIDsToProcess
@property (retain, nonatomic) NSMutableSet *objectIDsToRetry; // ivar: _objectIDsToRetry
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (retain) ICSelectorDelayer *processingSelectorDelayer; // ivar: _processingSelectorDelayer
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (retain, nonatomic) NSMutableDictionary *retryCountsByOperationType; // ivar: _retryCountsByOperationType
@property (retain) NSTimer *retryTimer; // ivar: _retryTimer
@property (retain) NSMutableSet *subscribedSubscriptionIDs; // ivar: _subscribedSubscriptionIDs
@property (readonly) Class superclass;
@property (nonatomic) BOOL syncDisabledByServer; // ivar: _syncDisabledByServer
@property (nonatomic) BOOL syncOnlyIfReachable; // ivar: _syncOnlyIfReachable


+(BOOL)haveZoneIDsInAccountZoneIDs:(id)arg0 ;
+(BOOL)isZoneConfigurations:(id)arg0 subsetOfZoneConfigurations:(id)arg1 ;
+(BOOL)shouldIgnoreErrorForBackoffTimer:(id)arg0 ;
+(id)allZoneIDsInAccountZoneIDs:(id)arg0 ;
+(id)deduplicatedRecordsForCloudObjects:(id)arg0 ;
+(id)errorCodesToIgnoreForBackoffTimer;
+(id)errorForDisabledCloudSyncing;
+(id)errorForWaitingForRetryTimer;
+(id)errorFromErrors:(id)arg0 ;
+(id)errorFromOperations:(id)arg0 ;
+(id)errorsFromError:(id)arg0 ;
+(id)metadataZoneID;
+(id)newNotesContainer;
+(id)newNotesContainerForAccountID:(id)arg0 ;
+(id)notesZoneID;
+(id)objectsByAccount:(id)arg0 ;
+(id)objectsByDatabaseScope:(id)arg0 ;
+(id)sharedContext;
+(id)sortedRecords:(id)arg0 ;
+(id)userRecordNameForContainer:(id)arg0 ;
+(id)zoneIDsFromZoneInfos:(id)arg0 ;
+(id)zoneInfosFromZoneIDs:(id)arg0 ;
+(void)batchRecordsToSave:(id)arg0 delete:(id)arg1 maxRecordCountPerBatch:(NSUInteger)arg2 maxRecordSizePerBatch:(NSUInteger)arg3 withBlock:(id)arg4 ;
+(void)deleteAllServerChangeTokens;
+(void)registerStateHandler;
-(BOOL)canRetryImmediatelyAfterError:(id)arg0 ;
-(BOOL)hasPendingOperations;
-(BOOL)isFetchingAllRecordZones;
-(BOOL)isInForeground;
-(BOOL)isInternetReachable;
-(BOOL)isReadyToSync;
-(BOOL)partialError:(id)arg0 containsErrorCode:(NSInteger)arg1 ;
-(CGFloat)timeIntervalToRetryAfterFromError:(id)arg0 ;
-(id)allCloudObjectIDsInContext:(id)arg0 ;
-(id)allZoneIDs;
-(id)containerForAccountID:(id)arg0 ;
-(id)existingCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(id)existingCloudObjectForRecordID:(id)arg0 recordType:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)existingCloudObjectForRecordID:(id)arg0 recordType:(id)arg1 accountID:(id)arg2 context:(id)arg3 excludingRecordTypes:(id)arg4 ;
-(id)existingCloudObjectForUserSpecificRecordID:(id)arg0 createPlaceholderIfNecessary:(BOOL)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)init;
-(id)invernessClientForAccountID:(id)arg0 ;
-(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(id)newOperationToFetchRecordZoneChangesWithZoneConfigurations:(id)arg0 database:(id)arg1 ;
-(id)newPlaceholderObjectForRecordID:(id)arg0 recordType:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)operationToFetchDatabaseChangesForDatabase:(id)arg0 completionHandler:(id)arg1 ;
-(id)operationToFetchRecordIDs:(id)arg0 database:(id)arg1 qualityOfService:(NSInteger)arg2 ;
-(id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg0 database:(id)arg1 ;
-(id)operationToModifyRecordsToSave:(id)arg0 delete:(id)arg1 rootRecordIDsByShareID:(id)arg2 database:(id)arg3 ;
-(id)operationToSaveZonesForZoneIDs:(id)arg0 accountID:(id)arg1 ;
-(id)operationToSaveZonesIfNecessaryForAccountID:(id)arg0 ;
-(id)operationsToFetchRecordIDs:(id)arg0 database:(id)arg1 qualityOfService:(NSInteger)arg2 ;
-(id)operationsToFetchRecordIDs:(id)arg0 qualityOfService:(NSInteger)arg1 operationGroupName:(id)arg2 accountID:(id)arg3 ;
-(id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg0 accountID:(id)arg1 ;
-(id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg0 delete:(id)arg1 deleteShares:(id)arg2 saveUserSpecificRecords:(id)arg3 operationGroupName:(id)arg4 addDependencies:(BOOL)arg5 accountID:(id)arg6 ;
-(id)operationsToModifyRecordsToSave:(id)arg0 delete:(id)arg1 rootRecordIDsByShareID:(id)arg2 database:(id)arg3 ;
-(id)readinessLoggingDescription;
-(id)serverChangeTokenForChangedZonesInDatabase:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(id)serverChangeTokenForRecordZoneID:(id)arg0 databaseScope:(NSInteger)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)subscriptionForDatabase:(id)arg0 ;
-(void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg0 delete:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 waitForDependencies:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)_injestFetchedRecord:(id)arg0 forAccountID:(id)arg1 forceMerge:(BOOL)arg2 context:(id)arg3 ;
-(void)_processCloudObjects:(id)arg0 operationQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_syncWithReason:(id)arg0 uploadUnsyncedChanges:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)addCallbackBlocksToModifyRecordsOperation:(id)arg0 rootRecordIDsByShareID:(id)arg1 ;
-(void)addDependenciesForModifyRecordsOperation:(id)arg0 ;
-(void)addFetchOperationsForRecordIDs:(id)arg0 accountID:(id)arg1 qualityOfService:(NSInteger)arg2 operationGroupName:(id)arg3 completionHandler:(id)arg4 ;
-(void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg0 delete:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 waitForDependencies:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)addOperationToProcessObjectsWithCompletionHandler:(id)arg0 ;
-(void)addOperationsToFetchRecordZoneChangesForAccountZoneIDs:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancelEverythingWithCompletionHandler:(id)arg0 ;
-(void)checkForLongLivedOperations;
-(void)clearContainers;
-(void)clearPendingActivity;
-(void)clearRetryCountForOperationType:(id)arg0 ;
-(void)clearSubscribedSubscriptionIDs;
-(void)clearZoneFetchState;
-(void)cloudKitAccountChanged:(id)arg0 ;
-(void)contextDidSave:(id)arg0 ;
-(void)dealloc;
-(void)deleteRecordZonesWithZoneIDs:(id)arg0 accountID:(id)arg1 markZonesAsUserPurged:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(void)deleteServerChangeTokenForRecordZoneID:(id)arg0 databaseScope:(NSInteger)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(void)deleteSharesForObjects:(id)arg0 accountID:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteSharesForObjects:(id)arg0 completionHandler:(id)arg1 ;
-(void)didFetchShare:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(void)disableCloudSyncingIfCurrentVersionNotSuppported;
-(void)enumerateAllCloudObjectsInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)fetchCloudObjects:(id)arg0 accountID:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchDatabaseChangesForDatabases:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchDatabaseChangesOperation:(id)arg0 changeTokenUpdated:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
// -(void)fetchDatabaseChangesOperation:(id)arg0 finishedWithServerChangeToken:(id)arg1 accountID:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 context:(unk)arg5  ;
-(void)fetchDatabaseChangesOperation:(id)arg0 recordZoneWithIDChanged:(id)arg1 accountID:(id)arg2 ;
-(void)fetchDatabaseChangesOperation:(id)arg0 recordZoneWithIDWasDeleted:(id)arg1 accountID:(id)arg2 ;
-(void)fetchDatabaseChangesWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchOperation:(id)arg0 didCompleteWithRecordsByRecordID:(id)arg1 error:(id)arg2 ;
-(void)fetchOperation:(id)arg0 fetchedRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(void)fetchOperation:(id)arg0 progressWithRecordID:(id)arg1 progress:(CGFloat)arg2 ;
-(void)fetchRecordIDs:(id)arg0 accountID:(id)arg1 operationGroupName:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchRecordZoneChangesForAccountZoneIDs:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchRecordZoneChangesForZoneIDs:(id)arg0 accountID:(id)arg1 reason:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchRecordZoneChangesOperation:(id)arg0 completedFetchForZoneID:(id)arg1 serverChangeToken:(id)arg2 error:(id)arg3 context:(id)arg4 ;
-(void)fetchRecordZoneChangesOperation:(id)arg0 recordChanged:(id)arg1 context:(id)arg2 ;
-(void)fetchRecordZoneChangesOperation:(id)arg0 recordWasDeletedWithRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3 ;
-(void)fetchRecordZoneChangesOperation:(id)arg0 zoneID:(id)arg1 accountID:(id)arg2 changeTokenUpdated:(id)arg3 context:(id)arg4 ;
-(void)fetchRecordZoneChangesOperationDidComplete:(id)arg0 error:(id)arg1 ;
-(void)fetchRecordZoneChangesWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSubscriptionsForDatabase:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchUserRecordWithAccountID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchUserRecordWithContainer:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishOperationsForRecordID:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleCloudKitNotification:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleDatabaseNotification:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleGenericPartialFailuresForError:(id)arg0 operation:(id)arg1 ;
-(void)handleRemoteNotificationWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)incrementOrClearRetryCountForOperationType:(id)arg0 error:(id)arg1 ;
-(void)incrementRetryCountForOperationType:(id)arg0 ;
-(void)informCloudAnalyticsDelegateForOperationDidEnd:(id)arg0 recordsByRecordID:(id)arg1 operationError:(id)arg2 ;
-(void)injestFetchedRecord:(id)arg0 forAccountID:(id)arg1 forceMerge:(BOOL)arg2 context:(id)arg3 ;
-(void)loadZoneFetchState;
-(void)modifyRecordsOperation:(id)arg0 didCompleteWithSavedRecords:(id)arg1 deletedRecordIDs:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4 ;
-(void)modifyRecordsOperation:(id)arg0 perDeleteRecordIDCompletion:(id)arg1 rootRecordIDsByShareID:(id)arg2 error:(id)arg3 ;
-(void)modifyRecordsOperation:(id)arg0 perSaveRecordCompletion:(id)arg1 error:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseCloudSyncWhileSynchronouslyPerformingBlock:(id)arg0 ;
-(void)printOperationQueue;
-(void)processAllCloudObjectsWithCompletionHandler:(id)arg0 ;
-(void)processObjectIDs:(id)arg0 operationQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)processPendingCloudObjects;
-(void)processPendingCloudObjectsWithCompletionHandler:(id)arg0 ;
-(void)pushCloudObjects:(id)arg0 operationGroupName:(id)arg1 completionHandler:(id)arg2 ;
-(void)reachabilityChanged:(id)arg0 ;
-(void)receivedZoneNotFound:(id)arg0 operation:(id)arg1 context:(id)arg2 ;
-(void)recursiveCancelDependentOperations:(id)arg0 ;
-(void)resetZoneForCloudAccount:(id)arg0 withReason:(id)arg1 ;
-(void)retryOperationsIfNecessary;
-(void)saveServerChangeToken:(id)arg0 forChangedZonesInDatabase:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(void)saveServerChangeToken:(id)arg0 forRecordZoneID:(id)arg1 databaseScope:(NSInteger)arg2 accountID:(id)arg3 context:(id)arg4 ;
-(void)saveSubscriptionsForDatabase:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveZoneFetchState;
-(void)startRetryTimerIfNecessaryWithError:(id)arg0 ;
-(void)syncWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)syncWithReason:(id)arg0 uploadUnsyncedChanges:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateAccountStatusWithCompletionHandler:(id)arg0 ;
-(void)updateCloudContextState;
-(void)updateConfiguration;
-(void)updateSelectorDelayers;
-(void)updateSubscriptionsWithCompletionHandler:(id)arg0 ;
-(void)validateAccountZoneIDsNeedingFetchChanges;


@end


#endif