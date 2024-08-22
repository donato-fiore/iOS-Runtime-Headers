// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYSERVICEDATABASE_H
#define WBSHISTORYSERVICEDATABASE_H

@class WBSSQLiteDatabase, NSDictionary, WBSSQLiteStatementCache, NSMapTable, NSMutableSet, NSMutableArray, NSURL, NSString;
@protocol WBSSQLiteDatabaseDelegate, WBSHistoryServiceDatabaseProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryCrypto.h"
#import "WBSHistoryTagDatabaseController.h"
#import "WBSHistoryServiceURLCompletion.h"

@interface WBSHistoryServiceDatabase : NSObject <WBSSQLiteDatabaseDelegate, WBSHistoryServiceDatabaseProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _currentRangeForTemporaryID;
    WBSHistoryCrypto *_crypto;
    WBSSQLiteDatabase *_database;
    NSDictionary *_databaseOptions;
    WBSSQLiteStatementCache *_statements;
    NSMapTable *_delegates;
    NSMapTable *_listeners;
    NSMutableSet *_registeredListeners;
    LatestVisitInformationMap _latestVisitMap;
    BOOL _hasComputedLatestVisit;
    unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> _temporaryIDToItem;
    unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> _visitForTemporaryID;
    NSMutableArray *_pendingVisits;
    atomic<bool> _integrityCheckPending;
    NSURL *_clearHistoryInProgressFileURL;
    id *_pendingVisitsTimeout;
    WBSHistoryTagDatabaseController *_tagController;
}


@property (readonly, copy, nonatomic) NSString *databaseID; // ivar: _databaseID
@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBSHistoryServiceURLCompletion *urlCompletion; // ivar: _urlCompletion


-(BOOL)_addAutocompleteTrigger:(id)arg0 forURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)_commitPendingItems:(id)arg0 ;
-(BOOL)_commitPendingVisits:(id)arg0 ;
-(BOOL)_prepareDatabase:(*id)arg0 ;
-(BOOL)_reopenDatabase:(*id)arg0 ;
-(BOOL)_shouldEmitLegacyTombstones;
-(BOOL)isOpen;
-(CGFloat)_oldestLatestVisit;
-(NSInteger)_currentGeneration;
-(NSInteger)_lastSyncedGeneration;
-(NSInteger)_permanentIDsForItemIfAvailable:(NSInteger)arg0 ;
-(NSInteger)_permanentIDsForVisitIfAvailable:(NSInteger)arg0 ;
-(NSInteger)_writeEventToDatabase:(id)arg0 listeners:(id)arg1 error:(*id)arg2 ;
-(NSInteger)allocateTemporaryIDRange:(*NSInteger)arg0 ;
-(NSUInteger)_countOfItems;
-(NSUInteger)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg0 error:(*id)arg1 ;
-(id)_addOrModifyObjects:(id)arg0 ;
-(id)_clearAllHistoryInsertingTombstoneUpToDate:(id)arg0 ;
-(id)_clearHistoryItems:(id)arg0 afterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(NSUInteger)arg3 ;
-(id)_clearHistoryVisitsAddedAfterDate:(id)arg0 beforeDate:(id)arg1 tombstoneMode:(NSUInteger)arg2 ;
-(id)_collectDeletedHighLevelDomainsForPlan:(*void)arg0 ;
-(id)_collectDeletedHighLevelDomainsFromDeletedHostnamesForPlan:(*void)arg0 ;
-(id)_collectDeletedHostnamesForPlan:(*void)arg0 ;
-(id)_collectDeletedURLsForPlan:(*void)arg0 ;
-(id)_convertTombstoneWithGenerationToSecureFormat:(NSInteger)arg0 lastSyncedGeneration:(NSInteger)arg1 ;
-(id)_dateForMetadataKey:(id)arg0 error:(*id)arg1 ;
-(id)_deleteOldestItems:(NSUInteger)arg0 forPlan:(*void)arg1 ;
-(id)_ensureLatestVisitsAreComputed;
-(id)_executePlan:(*void)arg0 outDeletedItemCount:(*NSUInteger)arg1 outDeletedVisitCount:(*NSUInteger)arg2 ;
-(id)_expireOldVisits:(CGFloat)arg0 ;
-(id)_fetchEventsForListener:(id)arg0 error:(*id)arg1 ;
-(id)_fetchListenerNamesFromDatabase:(*id)arg0 ;
-(id)_fetchObjectToTagMappingsWithOptions:(NSUInteger)arg0 predicate:(id)arg1 writeDescriptor:(int)arg2 ;
-(id)_fetchTagsWithOptions:(NSUInteger)arg0 predicate:(id)arg1 writeDescriptor:(int)arg2 ;
-(id)_fetchTombstonesWithOptions:(NSUInteger)arg0 predicate:(id)arg1 writeDescriptor:(int)arg2 ;
-(id)_fetchVisitsWithOptions:(NSUInteger)arg0 predicate:(id)arg1 writeDescriptor:(int)arg2 ;
-(id)_findAllRelatedVisits:(*void)arg0 forPlan:(*void)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 ;
-(id)_findAllRelatedVisitsToItems:(*void)arg0 forPlan:(*void)arg1 ;
-(id)_findItemIDsForPendingVisitsWithError:(*id)arg0 ;
-(id)_findObsoleteItemsForPlan:(*void)arg0 ;
-(id)_generateDisposedVisitsForPlan:(*void)arg0 ;
-(id)_generateItemsDictionary:(*void)arg0 ;
-(id)_generateUpdatedLastVisit:(*void)arg0 ;
-(id)_generateVisitsDictionary:(*void)arg0 ;
-(id)_insertItem:(id)arg0 ;
-(id)_insertTombstone:(id)arg0 ;
-(id)_insertTombstonesForURLs:(id)arg0 afterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(NSUInteger)arg3 ;
-(id)_insertVisit:(id)arg0 ;
-(id)_lastSeenDateForCloudClientVersion:(NSUInteger)arg0 ;
-(id)_markEventsAsReceivedByListener:(id)arg0 eventIDs:(id)arg1 ;
-(id)_metadataForKey:(id)arg0 error:(*id)arg1 ;
-(id)_preparePlan:(*void)arg0 ageLimit:(CGFloat)arg1 itemCountLimit:(NSUInteger)arg2 ;
-(id)_preparePlan:(*void)arg0 itemsToDelete:(*void)arg1 visitsToDelete:(*void)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 ;
-(id)_recomputeItemScores:(*void)arg0 ;
-(id)_recomputeVisitScores:(*void)arg0 ;
-(id)_setMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(id)_updateByAddingOrModifyObjects:(id)arg0 updateCurrentGeneration:(id)arg1 updateLastSyncGeneration:(id)arg2 updateLastMaintenance:(id)arg3 ;
-(id)_updateItem:(id)arg0 ;
-(id)_updateListenerRegistration:(id)arg0 lastSeen:(CGFloat)arg1 ;
-(id)_updateVisit:(id)arg0 ;
-(id)_updateVisitRedirectRelationships:(id)arg0 ;
-(id)init;
-(id)initWithID:(id)arg0 url:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> )_recomputeLatestVisitsForItems:(*void)arg0 error:(*id)arg1 ;
-(void)_checkpointWriteAheadLog;
-(void)_clearWBSHistorySQLiteStoreClearHistoryKeys;
-(void)_closeTagController;
-(void)_commitPendingUpdates;
-(void)_dispatchEvent:(id)arg0 listenersToIgnore:(id)arg1 persistForDelayedDispatching:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_ensureDatabaseIsSynced;
-(void)_finishedClearingHistory;
-(void)_notifyDelegatesOfItemIDs;
-(void)_notifyDelegatesOfVisitIDs;
-(void)_notifyExecutionOfPlan:(*void)arg0 ;
-(void)_queuePendingUpdates;
-(void)_registerHistoryTagFrecencyScoringFunction;
-(void)_removeLegacyHistoryDatabaseIfNeeded;
-(void)_startingClearHistoryOperationForStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)_updateItem:(NSInteger)arg0 visitCountScore:(NSInteger)arg1 dailyVisitCounts:(id)arg2 weeklyVisitCounts:(id)arg3 shouldRecomputeDerivedVisitCounts:(BOOL)arg4 ;
-(void)_updateVisitWithIdentifier:(id)arg0 removeAttributes:(NSUInteger)arg1 addAttributes:(NSUInteger)arg2 pendingVisit:(id)arg3 ;
-(void)addAutocompleteTrigger:(id)arg0 forURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)addDelegate:(id)arg0 listenerName:(id)arg1 forConnection:(id)arg2 ;
-(void)assignHistoryItemWithID:(NSInteger)arg0 toTopicTagsWithIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearHistoryItems:(id)arg0 afterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg0 beforeDate:(id)arg1 tombstoneMode:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)close;
-(void)computeFrequentlyVisitedSites:(NSUInteger)arg0 minimalVisitCountScore:(NSUInteger)arg1 disallowList:(id)arg2 allowList:(id)arg3 options:(NSUInteger)arg4 currentTime:(CGFloat)arg5 completionHandler:(id)arg6 ;
-(void)convertTombstoneWithGenerationToSecureFormat:(NSInteger)arg0 lastSyncedGeneration:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)createTagsForIdentifiers:(id)arg0 withTitles:(id)arg1 type:(NSUInteger)arg2 level:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)database:(id)arg0 hadSevereError:(id)arg1 ;
-(void)deletionPlanForAgeLimit:(CGFloat)arg0 itemCountLimit:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)deletionPlanForItemsToDelete:(id)arg0 visitsToDelete:(id)arg1 completionHandler:(id)arg2 ;
-(void)dispatchEvent:(id)arg0 listenersToIgnore:(id)arg1 persistForDelayedDispatching:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)ensureLatestVisitsAreComputed:(id)arg0 ;
-(void)expireOldVisits:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)fetchAllTombstonesWithCompletionHandler:(id)arg0 ;
-(void)fetchAutocompleteTriggersForURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCloudClientVersionTable:(id)arg0 ;
-(void)fetchDatabaseURL:(id)arg0 ;
-(void)fetchDomainExpansions:(id)arg0 ;
-(void)fetchEventsForListener:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchMetadataForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchWithOptions:(NSUInteger)arg0 predicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg0 beforeDate:(id)arg1 onlyFromThisDevice:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getItemCountBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)lastSeenDateForCloudClientVersion:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)markEventsAsReceivedByListener:(id)arg0 eventIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)performMaintenanceWithAgeLimit:(CGFloat)arg0 itemCountLimit:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)recomputeItemScoresWithCompletionHandler:(id)arg0 ;
-(void)recordVisitWithIdentifier:(id)arg0 sourceVisit:(id)arg1 title:(id)arg2 wasHTTPNonGet:(BOOL)arg3 loadSuccessful:(BOOL)arg4 origin:(NSInteger)arg5 attributes:(NSUInteger)arg6 completionHandler:(id)arg7 ;
-(void)replayAndAddTombstones:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetCloudHistoryDataWithCompletionHandler:(id)arg0 ;
-(void)searchForUserTypedString:(id)arg0 options:(NSUInteger)arg1 currentTime:(CGFloat)arg2 writeHandle:(id)arg3 completionHandler:(id)arg4 ;
-(void)setLastSeenDate:(id)arg0 forCloudClientVersion:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTitle:(id)arg0 ofTagWithID:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateDatabaseAfterSuccessfulSyncWithGeneration:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateVisitWithIdentifier:(id)arg0 removeAttributes:(NSUInteger)arg1 addAttributes:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)updateVisitWithIdentifier:(id)arg0 title:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateWithType:(NSUInteger)arg0 addOrModifyObjects:(id)arg1 updateCurrentGeneration:(id)arg2 updateLastSyncGeneration:(id)arg3 updateLastMaintenance:(id)arg4 completionHandler:(id)arg5 ;
-(void)vacuumHistoryWithCompletionHandler:(id)arg0 ;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg0 completionHandler:(id)arg1 ;
-(void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)warmUp;


@end


#endif