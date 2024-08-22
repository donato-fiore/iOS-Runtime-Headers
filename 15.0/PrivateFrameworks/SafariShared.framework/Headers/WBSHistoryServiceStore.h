// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYSERVICESTORE_H
#define WBSHISTORYSERVICESTORE_H

@class NSURL, NSMutableDictionary, NSDate, NSMutableSet, NSString;
@protocol WBSHistoryConnectionProxyDelegate, WBSHistoryStore, WBSHistoryServiceDatabaseDelegate, WBSHistoryConnectionProxy, OS_dispatch_queue, WBSHistoryServiceDatabaseProtocol, OS_dispatch_source, WBSHistoryStoreDelegate;

#import <Foundation/Foundation.h>

#import "WBSHistoryObjectCache.h"
#import "WBSPeriodicActivityScheduler.h"
#import "WBSHistoryCrypto.h"

@interface WBSHistoryServiceStore : NSObject <WBSHistoryConnectionProxyDelegate, WBSHistoryStore, WBSHistoryServiceDatabaseDelegate>

 {
    Class _historyItemClass;
    NSUInteger _itemCountLimit;
    atomic<WBSHistoryServiceStoreState> _state;
    id<WBSHistoryConnectionProxy> *_connection;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSURL *_databaseURL;
    id<WBSHistoryServiceDatabaseProtocol> *_database;
    WBSHistoryObjectCache *_cache;
    NSInteger _nextTemporaryDatabaseID;
    NSInteger _lastTemporaryDatabaseID;
    id *_loadCompletionBlock;
    NSMutableDictionary *_clientVersions;
    NSInteger _currentGeneration;
    NSInteger _lastSyncedGeneration;
    BOOL _commitGenerationValuesOnNextWrite;
    NSDate *_lastMaintenanceDate;
    BOOL _writeLastMaintenanceDateOnNextWrite;
    WBSPeriodicActivityScheduler *_maintenanceScheduler;
    NSObject<OS_dispatch_source> *_sendDeltaToServiceTimer;
    unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    NSMutableSet *_pendingAddsOrUpdates;
}


@property (readonly, nonatomic) WBSHistoryCrypto *crypto; // ivar: _crypto
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSHistoryStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat historyAgeLimit; // ivar: _historyAgeLimit
@property (readonly, nonatomic) BOOL isUsingInMemoryDatabase;
@property (readonly) Class superclass;


-(BOOL)_ensureItemHasID:(id)arg0 ;
-(BOOL)_ensureVisitHasID:(id)arg0 ;
-(BOOL)_shouldEmitLegacyTombstones;
-(BOOL)shouldEmitLegacyTombstones;
-(CGFloat)_ageLimitSinceReferenceDate;
-(NSInteger)_generateTemporaryDatabaseID;
-(id)_connectOptions;
-(id)_fetchGroupedVisitsOnDatabaseQueue:(NSUInteger)arg0 predicate:(id)arg1 enumerationBlock:(id)arg2 ;
-(id)_fetchVisitsOnDatabaseQueue:(NSUInteger)arg0 predicate:(id)arg1 error:(*id)arg2 ;
-(id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(NSUInteger)arg0 ;
-(id)_loadOnDatabaseQueue:(NSUInteger)arg0 readHandle:(id)arg1 ;
-(id)allVisitsForItemsOnDatabaseQueue:(id)arg0 ;
-(id)initWithURL:(id)arg0 itemCountLimit:(NSUInteger)arg1 historyAgeLimit:(CGFloat)arg2 historyItemClass:(Class)arg3 ;
-(id)initWithURL:(id)arg0 itemCountLimit:(NSUInteger)arg1 historyAgeLimit:(CGFloat)arg2 historyItemClass:(Class)arg3 connectionProxy:(id)arg4 ;
-(id)lastSeenDateForCloudClientVersion:(NSUInteger)arg0 ;
-(void)_addOrUpdateItemsOnDatabaseQueue:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)_connectWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)_convertTombstoneWithGenerationToSecureFormat:(NSInteger)arg0 ;
-(void)_createTagsForIdentifiers:(id)arg0 withTitles:(id)arg1 type:(NSUInteger)arg2 level:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)_databaseFetchWithOptions:(NSUInteger)arg0 predicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)_enumerateVisitsGroupedByItem:(id)arg0 enumerationBlock:(id)arg1 ;
-(void)_evaluateWithOptionsOnDatabaseQueue:(NSUInteger)arg0 predicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)_expireOldVisits;
-(void)_fetchHistoryItemsForTopics:(id)arg0 fromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)_fetchTags:(NSUInteger)arg0 fromStartDate:(id)arg1 toEndDate:(id)arg2 withIdentifiers:(id)arg3 limit:(NSUInteger)arg4 minimumItemCount:(NSUInteger)arg5 sortOrder:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(void)_fetchWithOptions:(NSUInteger)arg0 predicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)_fetchWithOptionsOnDatabaseQueue:(NSUInteger)arg0 predicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)_incrementCurrentGeneration;
-(void)_load;
-(void)_performMaintenance:(id)arg0 ;
-(void)_processPendingWrites;
-(void)_processPendingWrites:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_recomputeDerivedVisitCountScores;
-(void)_scheduleImmediateDeltaToService;
-(void)_scheduleMaintenance;
-(void)_scheduleSendDeltaToService;
-(void)_setLastSyncedGeneration:(NSUInteger)arg0 ;
-(void)_setMetadataValue:(id)arg0 forKey:(id)arg1 group:(id)arg2 ;
-(void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(NSInteger)arg0 convertTombstonesToSecureFormat:(BOOL)arg1 ;
-(void)_updateGenerationForVisits:(id)arg0 ;
-(void)_waitForDatabase:(id)arg0 ;
-(void)addAutocompleteTrigger:(id)arg0 forItem:(id)arg1 ;
-(void)addOrUpdateItemsOnDatabaseQueue:(id)arg0 ;
-(void)assignHistoryItem:(id)arg0 toTopicTags:(id)arg1 completionHandler:(id)arg2 ;
-(void)checkIfLocalVisitExistsInAnyOfItems:(id)arg0 withCompletion:(id)arg1 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)clearHistoryWithCompletionHandler:(id)arg0 ;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)computeFrequentlyVisitedSites:(NSUInteger)arg0 minimalVisitCountScore:(NSUInteger)arg1 disallowList:(id)arg2 allowList:(id)arg3 options:(NSUInteger)arg4 currentTime:(CGFloat)arg5 completionHandler:(id)arg6 ;
-(void)connectionProxyConnectionWasInterrupted:(id)arg0 ;
-(void)dealloc;
-(void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg0 ignoringVisits:(id)arg1 enumerationBlock:(id)arg2 ;
-(void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg0 items:(id)arg1 enumerationBlock:(id)arg2 ;
-(void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg0 items:(id)arg1 enumerationBlock:(id)arg2 ;
-(void)fetchTopicsFromStartDate:(id)arg0 toEndDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchTopicsFromStartDate:(id)arg0 toEndDate:(id)arg1 limit:(NSUInteger)arg2 minimumItemCount:(NSUInteger)arg3 sortOrder:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)getAllTombstonesWithCompletion:(id)arg0 ;
-(void)getAutocompleteTriggersForItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg0 beforeDate:(id)arg1 onlyFromThisDevice:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getServerChangeTokenDataWithCompletion:(id)arg0 ;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(CGFloat)arg0 completion:(id)arg1 ;
-(void)getVisitsCreatedAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)itemWasReplaced:(id)arg0 byItem:(id)arg1 ;
-(void)itemsWereAdded:(id)arg0 byUserInitiatedAction:(BOOL)arg1 ;
-(void)itemsWereModified:(id)arg0 byUserInitiatedAction:(BOOL)arg1 ;
-(void)performMaintenance:(id)arg0 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg0 ;
-(void)releaseCloudHistory:(id)arg0 ;
-(void)removePastHistoryVisitsForItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)replayAndAddTombstones:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportPermanentIDsForItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportPermanentIDsForVisits:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportSevereError:(id)arg0 completionHandler:(id)arg1 ;
// -(void)searchForUserTypedString:(id)arg0 options:(NSUInteger)arg1 currentTime:(CGFloat)arg2 enumerationBlock:(id)arg3 completionHandler:(unk)arg4  ;
-(void)setLastSeenDate:(id)arg0 forCloudClientVersion:(NSUInteger)arg1 ;
-(void)setServerChangeTokenData:(id)arg0 ;
-(void)setTitle:(id)arg0 ofTag:(id)arg1 completionHandler:(id)arg2 ;
-(void)startLoading;
-(void)tagsWithIdentifiers:(id)arg0 type:(NSUInteger)arg1 level:(NSInteger)arg2 creatingIfNecessary:(BOOL)arg3 withTitles:(id)arg4 completionHandler:(id)arg5 ;
-(void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(NSInteger)arg0 completion:(id)arg1 ;
-(void)vacuumHistoryWithCompletionHandler:(id)arg0 ;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg0 populateAssociatedVisits:(BOOL)arg1 completion:(id)arg2 ;
-(void)visitTitleWasUpdated:(id)arg0 ;
-(void)visitsWereAdded:(id)arg0 ;
-(void)visitsWereModified:(id)arg0 ;
-(void)waitForLoadingToComplete;


@end


#endif