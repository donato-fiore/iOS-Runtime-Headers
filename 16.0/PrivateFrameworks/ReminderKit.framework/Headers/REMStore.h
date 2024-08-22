// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMSTORE_H
#define REMSTORE_H

@protocol REMChangeTrackingProvider, REMClientConnectionsInteractable, REMDaemonController;

#import <Foundation/Foundation.h>

#import "_REMInProgressSaveRequestsContainer.h"
#import "REMStore.h"
#import "REMStoreContainerToken.h"

@interface REMStore : NSObject <REMChangeTrackingProvider, REMClientConnectionsInteractable>



@property (nonatomic) BOOL assertOnMainThreadFetches; // ivar: _assertOnMainThreadFetches
@property (retain, nonatomic) NSObject<REMDaemonController> *daemonController; // ivar: _daemonController
@property (readonly, nonatomic) _REMInProgressSaveRequestsContainer *l_inProgressSaveRequestsContainer; // ivar: _l_inProgressSaveRequestsContainer
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) REMStore *nonUserInteractiveStore; // ivar: _nonUserInteractiveStore
@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken; // ivar: _storeContainerToken


+(BOOL)_shouldNotifyReminddOfInteractionWithPeople;
+(BOOL)dataaccessDaemonStopSyncingReminders;
+(BOOL)destroyIsolatedStoreContainerWithToken:(id)arg0 error:(*id)arg1 ;
+(BOOL)isEventKitSyncEnabledForReminderKit;
+(BOOL)notificationsEnabled;
+(BOOL)siriShouldRouteIntentsToNewRemindersApp;
+(id)createIsolatedStoreContainerWithError:(*id)arg0 ;
+(id)storeDidChangeNotificationName;
+(void)initialize;
+(void)notifyOfInteractionWithPeople:(id)arg0 ;
-(BOOL)_isUserInteractiveStore;
-(BOOL)containsCustomSmartListForTipKitWithError:(*id)arg0 ;
-(BOOL)containsHashtagsForTipKitWithError:(*id)arg0 ;
-(BOOL)containsListWithCustomBadgeForTipKitWithError:(*id)arg0 ;
-(BOOL)everConnectedToCar;
-(BOOL)hasActiveCloudKitAccountForTipKitWithError:(*id)arg0 ;
-(BOOL)saveSaveRequest:(id)arg0 accountChangeItems:(id)arg1 listChangeItems:(id)arg2 smartListChangeItems:(id)arg3 templateChangeItems:(id)arg4 reminderChangeItems:(id)arg5 author:(id)arg6 replicaManagerProvider:(id)arg7 error:(*id)arg8 ;
-(NSUInteger)completedRemindersCountForTipKitWithError:(*id)arg0 ;
-(NSUInteger)countForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)storeGeneration;
-(id)MCIsManagedAccountWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)_withInProgressSaveRequestContainer:(id)arg0 ;
-(id)_xpcSyncStorePerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)compressedDistributedEvaluationDataWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)createShareForListWithID:(id)arg0 appIconData:(id)arg1 error:(*id)arg2 ;
-(id)debugDescription;
-(id)debugFetchPhantomListsWithError:(*id)arg0 ;
-(id)description;
-(id)executeFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)fetchAccountWithExternalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchAccountWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchAccountsForDumpingWithError:(*id)arg0 ;
-(id)fetchAccountsIncludingInactive:(BOOL)arg0 error:(*id)arg1 ;
-(id)fetchAccountsWithError:(*id)arg0 ;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)fetchAccountsWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchActiveCloudKitAccountObjectIDsWithFetchOption:(NSInteger)arg0 error:(*id)arg1 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchAllRemindersWithExternalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchAssignmentsWithObjectIDs:(id)arg0 includeConcealedObjects:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg0 to:(id)arg1 withListIDs:(id)arg2 error:(*id)arg3 ;
-(id)fetchCustomSmartListWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchCustomSmartListsWithError:(*id)arg0 ;
-(id)fetchDefaultAccountWithError:(*id)arg0 ;
-(id)fetchDefaultListRequiringCloudKitAccountWithAccountID:(id)arg0 error:(*id)arg1 ;
-(id)fetchDefaultListRequiringCloudKitWithError:(*id)arg0 ;
-(id)fetchDefaultListWithError:(*id)arg0 ;
-(id)fetchEligibleDefaultListsWithError:(*id)arg0 ;
-(id)fetchHashtagsWithObjectIDs:(id)arg0 includeConcealedObjects:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg0 to:(id)arg1 withListIDs:(id)arg2 error:(*id)arg3 ;
-(id)fetchListIncludingConcealedWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListRepresentationOfTemplateWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsForEventKitBridgingWithError:(*id)arg0 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchPrimaryActiveCloudKitAccountREMObjectIDWithError:(*id)arg0 ;
-(id)fetchPrimaryActiveCloudKitAccountWithError:(*id)arg0 ;
-(id)fetchReminderIncludingConcealedWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchReminderWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersMatchingPredicateDescriptor:(id)arg0 sortDescriptors:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)fetchRemindersMatchingTitle:(id)arg0 dueAfter:(id)arg1 dueBefore:(id)arg2 isCompleted:(id)arg3 hasLocation:(id)arg4 location:(id)arg5 error:(*id)arg6 ;
-(id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchRemindersWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersWithParentReminderIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchReplicaManagerForAccountID:(id)arg0 error:(*id)arg1 ;
-(id)fetchReplicaManagersForAccountID:(id)arg0 bundleID:(id)arg1 error:(*id)arg2 ;
-(id)fetchResultByExecutingFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)fetchShareForListWithID:(id)arg0 error:(*id)arg1 ;
-(id)fetchSiriFoundInAppsListWithError:(*id)arg0 ;
-(id)fetchTemplateWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initUserInteractive:(BOOL)arg0 ;
-(id)initWithDaemonController:(id)arg0 ;
-(id)initWithDaemonController:(id)arg0 storeContainerToken:(id)arg1 ;
-(id)initWithStoreContainerToken:(id)arg0 ;
-(id)optimisticallyMaterializeReminderChangeItem:(id)arg0 ;
-(id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg0 ;
-(id)provideChangeTrackingForAccountID:(id)arg0 clientName:(id)arg1 ;
-(id)provideChangeTrackingForAccountID:(id)arg0 clientName:(id)arg1 transactionAuthorKeysToExclude:(id)arg2 ;
-(id)refreshAccount:(id)arg0 ;
-(id)refreshList:(id)arg0 ;
-(id)refreshReminder:(id)arg0 ;
-(id)repairPhantomObjectsWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)replicaManagerProviderForCalDAVSync;
-(id)resultFromPerformingInvocation:(id)arg0 error:(*id)arg1 ;
-(id)resultFromPerformingSwiftInvocation:(id)arg0 parametersData:(id)arg1 storages:(id)arg2 error:(*id)arg3 ;
-(id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)test_immediatelyCreateOrUpdatePublicLinkOfTemplateWithTemplateObjectID:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)test_immediatelyRevokePublicLinkOfTemplateWithTemplateObjectID:(id)arg0 error:(*id)arg1 ;
-(void)_addChangeItemChangedKeys:(id)arg0 objectID:(id)arg1 toChangedKeysMap:(id)arg2 ;
-(void)_enumerateAllListsIncludingGroups:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)_incrementStoreGeneration;
-(void)_respondToCalDAVSharedList:(id)arg0 withResponse:(NSInteger)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_saveAccountChangeItems:(id)arg0 listChangeItems:(id)arg1 smartListChangeItems:(id)arg2 templateChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 synchronously:(BOOL)arg7 syncToCloudKit:(BOOL)arg8 performer:(id)arg9 completion:(id)arg10 ;
-(void)_triggerSyncWithReason:(id)arg0 forcingCloudKitReload:(BOOL)arg1 discretionary:(BOOL)arg2 bypassThrottler:(BOOL)arg3 completion:(id)arg4 ;
-(void)acceptCalDAVSharedList:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)acceptShareWithMetadata:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)addCKShareObserverIfNeededForAccountID:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)anchoredBubbleCloudOverridesWithCompletion:(id)arg0 ;
-(void)enumerateAllGroupsAndListsWithBlock:(id)arg0 ;
-(void)enumerateAllListsWithBlock:(id)arg0 ;
-(void)enumerateAllRemindersWithBlock:(id)arg0 ;
-(void)invalidate;
-(void)notifyOfInteractionWithPeople:(id)arg0 force:(BOOL)arg1 completion:(id)arg2 ;
-(void)nukeDatabase;
-(void)rejectCalDAVSharedList:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)removeOrphanedAccountsWithCompletion:(id)arg0 ;
-(void)requestToDeleteLocalDataWithCompletion:(id)arg0 ;
-(void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestToUpdateClientConnectionsAsynchronously:(BOOL)arg0 shouldKeepAlive:(BOOL)arg1 completion:(id)arg2 ;
-(void)saveSaveRequest:(id)arg0 accountChangeItems:(id)arg1 listChangeItems:(id)arg2 smartListChangeItems:(id)arg3 templateChangeItems:(id)arg4 reminderChangeItems:(id)arg5 author:(id)arg6 replicaManagerProvider:(id)arg7 queue:(id)arg8 completion:(id)arg9 ;
-(void)stopShare:(id)arg0 accountID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)test_handleIncompleteTemplateOperationQueueItemsImmediately;
-(void)test_refreshHashtagLabelsImmediately;
-(void)test_setupForManualHashtagLabelRefreshing;
-(void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg0 ;
-(void)triggerThrottledSyncWithReason:(id)arg0 discretionary:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateAccountWithAccountID:(id)arg0 completion:(id)arg1 ;
-(void)updateAccountWithAccountID:(id)arg0 restartDA:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateAccountsAndSync:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateShare:(id)arg0 accountID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;


@end


#endif