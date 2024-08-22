// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCLOUDMANAGER_H
#define HMDCLOUDMANAGER_H

@class HMFObject, HMFMessageDispatcher, CKContainer, NSMutableArray, CKDatabase, NSString, NSData;
@protocol HMBCloudPushObserver, HMFLogging, OS_os_log, OS_dispatch_queue, OS_dispatch_source, HMDCloudManagerDataSource, HMDCloudManagerDelegate, HMMLogEventSubmitting;


#import "HMDCloudCache.h"
#import "HMDCloudDataSyncStateFilter.h"
#import "HMDCloudHomeManagerZone.h"
#import "HMDCloudLegacyZone.h"
#import "HMDCloudMetadataZone.h"
#import "HMDSyncOperationManager.h"

@interface HMDCloudManager : HMFObject <HMBCloudPushObserver, HMFLogging>

 {
    NSObject<OS_os_log> *_logger;
}


@property (nonatomic) BOOL accountActive; // ivar: _accountActive
@property (copy, nonatomic) id *accountActiveUpdateHandler; // ivar: _accountActiveUpdateHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // ivar: _clientCallbackQueue
@property (retain, nonatomic) HMDCloudCache *cloudCache; // ivar: _cloudCache
@property (copy, nonatomic) id *cloudDataDeletedNotificationHandler; // ivar: _cloudDataDeletedNotificationHandler
@property (retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // ivar: _cloudDataSyncStateFilter
@property (nonatomic) BOOL cloudHomeDataRecordExists; // ivar: _cloudHomeDataRecordExists
@property (copy, nonatomic) id *cloudMetadataDeletedNotificationHandler; // ivar: _cloudMetadataDeletedNotificationHandler
@property (retain, nonatomic) HMFMessageDispatcher *configSyncDispatcher; // ivar: _configSyncDispatcher
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (copy, nonatomic) id *controllerKeyAvailableNotificationHandler; // ivar: _controllerKeyAvailableNotificationHandler
@property (retain, nonatomic) NSObject<OS_dispatch_source> *controllerKeyPollTimer; // ivar: _controllerKeyPollTimer
@property (retain, nonatomic) NSMutableArray *currentBackoffTimerValuesInMinutes; // ivar: _currentBackoffTimerValuesInMinutes
@property (copy, nonatomic) id *dataDecryptionFailedHandler; // ivar: _dataDecryptionFailedHandler
@property (readonly, weak) NSObject<HMDCloudManagerDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (readonly, weak) NSObject<HMDCloudManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (nonatomic, getter=isFirstDBQueryRun) BOOL firstDBQueryRun; // ivar: _firstDBQueryRun
@property (nonatomic, getter=isFirstV3FetchRun) BOOL firstV3FetchRun; // ivar: _firstV3FetchRun
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property (nonatomic) BOOL keychainSyncEnabled; // ivar: _keychainSyncEnabled
@property (readonly, nonatomic) HMDCloudLegacyZone *legacyZone;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, nonatomic) HMDCloudMetadataZone *metadataZone;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer; // ivar: _pollTimer
@property (retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // ivar: _retryTimer
@property (readonly, nonatomic) NSData *serverTokenData;
@property (readonly) Class superclass;
@property (weak, nonatomic) HMDSyncOperationManager *syncManager; // ivar: _syncManager
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer; // ivar: _watchdogControllerKeyPollTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_processFetchedTransaction:(id)arg0 ;
-(BOOL)_validFetchRetryCKErrorCode:(NSInteger)arg0 ;
-(id)_changeTokenFromData:(id)arg0 ;
-(id)initWithMessageDispatcher:(id)arg0 cloudDataSyncStateFilter:(id)arg1 cloudCache:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4 syncManager:(id)arg5 callbackQueue:(id)arg6 container:(id)arg7 logEventSubmitter:(id)arg8 workQueue:(id)arg9 ;
-(id)initWithMessageDispatcher:(id)arg0 cloudDataSyncStateFilter:(id)arg1 cloudCache:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4 syncManager:(id)arg5 logEventSubmitter:(id)arg6 callbackQueue:(id)arg7 ;
-(void)__addCKDatabaseOperation:(id)arg0 ;
-(void)__deleteRecordWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)__deleteRecordZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)__deleteRecordZonesWithIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)__fetchAllRecordZonesWithCompletionHandler:(id)arg0 ;
-(void)__fetchRecordZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)__fetchSubscriptionWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)__saveRecordZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)__saveSubscription:(id)arg0 completionHandler:(id)arg1 ;
-(void)_accountIsActive;
-(void)_addHomeZoneName:(id)arg0 owner:(id)arg1 ;
-(void)_auditProxSetupNotification:(id)arg0 ;
-(void)_checkZoneAndUploadTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_createZoneAndFetchChanges:(id)arg0 ;
-(void)_createZoneAndUploadTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchAndVerifyZoneRootRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchDatabaseZoneChangesCompletion:(id)arg0 ;
// -(void)_fetchLegacyTransaction:(id)arg0 forceFetch:(BOOL)arg1 accountCompletionHandler:(id)arg2 dataCompletionHandler:(unk)arg3  ;
-(void)_fetchTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_forceCleanCloud:(BOOL)arg0 fetchTransaction:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleAccountStatus:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_handleControllerKeyAvailable;
-(void)_handleKeychainSyncStateChanged:(BOOL)arg0 ;
// -(void)_processFetchCompletedWithError:(id)arg0 serverToken:(id)arg1 fetchTransaction:(id)arg2 migrationOptions:(NSUInteger)arg3 completionHandler:(id)arg4 moreRecordsComing:(unk)arg5 emptyRecord:(BOOL)arg6  ;
-(void)_registerForProxSetupNotifications;
-(void)_removeAllHomeZonesCompletionHandler:(id)arg0 ;
-(void)_removeHomeZoneName:(id)arg0 ;
-(void)_removeZonesTransactions:(id)arg0 completionHandler:(id)arg1 ;
-(void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_resetCloudServerTokenData;
-(void)_resetCloudZonesIgnoreHomeManager:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_resetHomeDataRecordState;
-(void)_scheduleZoneFetch:(id)arg0 ;
-(void)_setupSubscriptionForZone:(id)arg0 ;
-(void)_startControllerKeyPollTimer;
-(void)_startControllerKeyPollTimerWithBackoff;
-(void)_startControllerKeyPollTimerWithValue:(NSInteger)arg0 ;
-(void)_startFetchPollTimer;
-(void)_startFetchRetryTimer;
-(void)_startWatchdogControllerKeyPollTimer;
-(void)_stopControllerKeyPollTimer;
-(void)_stopFetchPollTimer;
-(void)_stopFetchRetryTimer;
-(void)_stopWatchdogControllerKeyPollTimer;
-(void)_updateServerTokenStatusOnCloudFilter;
-(void)_uploadLegacyTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_uploadTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_verifyAndRemoveAllHomeZonesCompletionHandler:(id)arg0 ;
-(void)_verifyAndRemoveZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)_verifyZoneHasBeenDeletedTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_verifyZonesExist:(id)arg0 zoneIndex:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)addHomeZoneName:(id)arg0 owner:(id)arg1 ;
-(void)cacheDatabaseServerToken;
-(void)dealloc;
-(void)fetchCurrentAccountStateWithCompletionHandler:(id)arg0 ;
-(void)fetchDatabaseZoneChanges;
// -(void)fetchLegacyTransaction:(id)arg0 forceFetch:(BOOL)arg1 accountCompletionHandler:(id)arg2 dataCompletionHandler:(unk)arg3  ;
-(void)fetchTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleKeychainStateChangedNotification:(id)arg0 ;
-(void)handler:(id)arg0 didReceiveCKNotification:(id)arg1 ;
-(void)handler:(id)arg0 didReceivePushForTopic:(id)arg1 ;
-(void)initializeServerTokenStatusOnCloudFilter;
-(void)registerForPushNotifications;
-(void)removeHomeZoneName:(id)arg0 ;
-(void)removeZonesTransactions:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)resetCloudServerTokenData:(id)arg0 ;
-(void)setCloudDataDeletedNotificationBlock:(id)arg0 ;
-(void)setCloudMetadataDeletedNotificationBlock:(id)arg0 ;
-(void)setControllerKeyAvailableNotificationBlock:(id)arg0 ;
-(void)setDataAvailableFromCloudCompletionBlock:(id)arg0 ;
-(void)setDataDecryptionFailedCompletionBlock:(id)arg0 ;
-(void)updateAccountStatusChanged:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateCloudDataSyncFilterState:(BOOL)arg0 ;
-(void)updateServerTokenStatusOnCloudFilter;
-(void)uploadLegacyTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)uploadTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)verifyAndRemoveZone:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif