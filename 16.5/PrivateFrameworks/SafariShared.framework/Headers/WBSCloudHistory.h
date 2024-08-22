// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDHISTORY_H
#define WBSCLOUDHISTORY_H

@class NSData, WBSCloudKitThrottler, NSMutableDictionary, NSMutableArray, NSString;
@protocol WBSCloudHistoryServiceProtocol, WBSCloudKitThrottlerDataStore, OS_dispatch_queue, WBSHistoryServiceDatabaseProtocol, WBSCloudHistoryDataStore, WBSCloudKitContainerManateeObserving;

#import <Foundation/Foundation.h>

#import "WBSCloudHistoryConfiguration.h"
#import "WBSOneShotTimer.h"
#import "WBSCloudHistoryPushAgentProxy.h"

@interface WBSCloudHistory : NSObject <WBSCloudHistoryServiceProtocol, WBSCloudKitThrottlerDataStore>

 {
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    id<WBSHistoryServiceDatabaseProtocol> *_database;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    NSData *_longLivedSaveOperationData;
    NSUInteger _syncCircleSize;
    BOOL _cloudHistoryEnabled;
    BOOL _saveChangesWhenHistoryLoads;
    BOOL _fetchChangesWhenHistoryLoads;
    unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> _saveOperationSuddenTerminationDisabler;
    unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> _fetchOperationSuddenTerminationDisabler;
    unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> _replayLongLivedSaveOperationSuddenTerminationDisabler;
    BOOL _replayLongLivedSaveOperationHasBeenPerformed;
    WBSCloudHistoryConfiguration *_configuration;
    id<WBSCloudHistoryDataStore> *_store;
    WBSCloudKitThrottler *_saveChangesThrottler;
    WBSCloudKitThrottler *_fetchChangesThrottler;
    WBSCloudKitThrottler *_syncCircleSizeRetrievalThrottler;
    WBSOneShotTimer *_serverBackoffTimer;
    BOOL _saveChangesWhenBackoffTimerFires;
    BOOL _fetchChangesWhenBackoffTimerFires;
    WBSCloudHistoryPushAgentProxy *_pushAgent;
    WBSOneShotTimer *_pushNotificationFetchTimer;
    NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
    id *_fetchCompletionHandler;
    id *_saveCompletionHandler;
    id<WBSCloudKitContainerManateeObserving> *_containerManateeObserver;
    NSMutableArray *_storeDeterminationCompletionBlocks;
    NSInteger _currentManateeState;
    BOOL _manateeStateNeedsUpdate;
    BOOL _isWaitingForPCSIdentityUpdate;
    BOOL _determiningStoreType;
}


@property (nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfDevicesInSyncCircle; // ivar: _numberOfDevicesInSyncCircle
@property (nonatomic) BOOL removedHistoryItemsArePendingSave; // ivar: _removedHistoryItemsArePendingSave
@property (readonly) Class superclass;


-(CGFloat)_backoffTimeIntervalFromError:(id)arg0 ;
-(NSInteger)_estimatedPriorityForPotentialSaveAttempt;
-(NSInteger)_priorityForSaveWithVisits:(id)arg0 tombstones:(id)arg1 bypassingThrottler:(BOOL)arg2 ;
-(NSInteger)_resultFromError:(id)arg0 ;
-(NSUInteger)_cachedNumberOfDevicesInSyncCircle;
-(id)_currentFetchChangesThrottlerPolicyString;
-(id)_currentSaveChangesThrottlerPolicyString;
-(id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
-(id)_manateeErrorCode:(id)arg0 ;
-(id)dateOfNextPermittedSaveChangesAttempt;
-(id)initWithDatabase:(id)arg0 configuration:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 configuration:(id)arg1 completionBlock:(id)arg2 ;
-(id)recordOfPastOperationsForThrottler:(id)arg0 ;
-(void)_backOffWithInterval:(CGFloat)arg0 ;
-(void)_callAndResetFetchCompletionHandlerWithError:(id)arg0 ;
-(void)_callAndResetSaveCompletionHandlerWithError:(id)arg0 ;
-(void)_cloudHistoryConfigurationChanged:(id)arg0 ;
-(void)_deleteAllCloudHistoryAndSaveAgain;
-(void)_determineCloudHistoryStoreWithCompletion:(id)arg0 ;
-(void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg0 withPriority:(NSInteger)arg1 ;
-(void)_fetchChangesInResponseToPushNotification:(id)arg0 ;
-(void)_fetchChangesWhenHistoryLoads;
-(void)_getServerChangeTokenDataWithCompletion:(id)arg0 ;
-(void)_handleManateeErrorIfNeeded:(id)arg0 ;
-(void)_initializePushNotificationSupport;
-(void)_pcsIdentitiesChangedNotification:(id)arg0 ;
-(void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(id)arg0 ;
-(void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg0 databaseGeneration:(NSInteger)arg1 ;
-(void)_persistedLongLivedSaveOperationID:(*id)arg0 databaseGeneration:(*NSInteger)arg1 ;
-(void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)arg0 ;
-(void)_processPendingPushNotifications;
-(void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
-(void)_pushNotificationReceived:(id)arg0 ;
-(void)_pushNotificationsAreInitializedWithCompletionHandler:(id)arg0 ;
-(void)_registerFetchCompletionHandler:(id)arg0 ;
-(void)_registerForHistoryWasLoadedNotificationIfNecessary;
-(void)_registerSaveCompletionHandler:(id)arg0 ;
-(void)_removePersistedLongLivedSaveOperationDictionary;
-(void)_replayPersistedLongLivedSaveOperationIfNecessary;
-(void)_resetCloudHistoryDataWithCompletionHandler:(id)arg0 ;
-(void)_resetForAccountChangeWithCompletionHandler:(id)arg0 ;
-(void)_saveChangesWhenHistoryLoads;
// -(void)_saveVisits:(id)arg0 tombstones:(id)arg1 toCloudHistoryBypassingThrottler:(BOOL)arg2 longLivedOperationPersistenceCompletion:(id)arg3 withCallback:(unk)arg4  ;
-(void)_serverBackoffTimerFired:(id)arg0 ;
-(void)_setCachedNumberOfDevicesInSyncCircle:(NSUInteger)arg0 ;
-(void)_setPushNotificationAreInitialized:(BOOL)arg0 ;
-(void)_setServerChangeToken:(id)arg0 ;
-(void)_transitionCloudHistoryStoreToManateeState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_updateDeviceCountInResponseToPushNotification;
-(void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_updateThrottlerPolicies;
-(void)dealloc;
-(void)fetchAndMergeChanges;
-(void)fetchAndMergeChangesBypassingThrottler;
-(void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id)arg0 ;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(CGFloat)arg0 completion:(id)arg1 ;
-(void)resetForAccountChange;
-(void)resetForAccountChangeWithCompletionHandler:(id)arg0 ;
-(void)saveChangesBypassingThrottler:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)saveChangesToCloudHistoryStore;
-(void)saveChangesToCloudHistoryStoreBypassingThrottler;
-(void)setRecordOfPastOperations:(id)arg0 forThrottler:(id)arg1 ;
-(void)updateConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif