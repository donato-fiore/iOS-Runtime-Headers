// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSEARCHABLEINDEX_H
#define EDSEARCHABLEINDEX_H

@class NSString, EFCancelationToken, EFStoppableScheduler<EFAssertableScheduler>, NSMutableSet, NSMutableArray, EFStoppableScheduler<EFSuspendableScheduler><EFAssertableScheduler>, EFStoppableScheduler, EFLazyCache, NSDate, EMCoreAnalyticsCollector, EFFuture, EFObservable, CSSearchableIndex;
@protocol CSSearchableIndexDelegate, EDSearchableIndexVerifierDataSource, EFLoggable, EFSignpostable, EDSearchableIndexSchedulable, EMSearchableIndexInterface, EFCancelable, OS_os_activity, EDSearchableIndexDataSource, EDSearchableIndexReasonProvider, EDSearchableIndexSchedulableDelegate;

#import <Foundation/Foundation.h>

#import "_EMSearchableIndexPendingRemovals.h"

@interface EDSearchableIndex : NSObject <CSSearchableIndexDelegate, EDSearchableIndexVerifierDataSource, EFLoggable, EFSignpostable, EDSearchableIndexSchedulable, EMSearchableIndexInterface>

 {
    NSString *_indexName;
    EFCancelationToken *_cancelationToken;
    id<EFCancelable> *_stateCancelable;
    EFStoppableScheduler<EFAssertableScheduler> *_stateTransitionScheduler;
    id<EFCancelable> *_coalescingTimer;
    NSInteger _resumeCount;
    NSInteger _transaction;
    NSUInteger _throttledIndexingBatchSize;
    NSUInteger _throttledDataSourceBatchSize;
    NSUInteger _currentMaximumBatchSize;
    NSObject<OS_os_activity> *_batchIndexingActivity;
    NSMutableSet *_removedIdentifiers;
    NSMutableArray *_preparingItems;
    NSMutableArray *_pendingItems;
    NSMutableArray *_preprocessingItems;
    NSMutableArray *_processingItems;
    NSMutableSet *_pendingDomainRemovals;
    _EMSearchableIndexPendingRemovals *_pendingIdentifierRemovals;
    EFStoppableScheduler<EFSuspendableScheduler><EFAssertableScheduler> *_indexingScheduler;
    EFStoppableScheduler *_dataSourceScheduler;
    EFStoppableScheduler *_addIndexItemsScheduler;
    EFStoppableScheduler *_preprocessingScheduler;
    os_unfair_lock_s _mainThreadAccessibleIvarLock;
    EFStoppableScheduler *_indexingBatchScheduler;
    EFLazyCache *_searchResultsCache;
    BOOL _isActive;
    BOOL _needsRefresh;
    BOOL _needsVerification;
    BOOL _coalesceTimerFired;
    BOOL _scheduledProcessing;
    BOOL _scheduledRefresh;
    BOOL _scheduledVerification;
    BOOL _indexImmediately;
    uint8_t _countOfBlocksAffectingDataSourceAndIndex;
    NSDate *_lastReindexRadarPrompt;
}


@property (readonly, getter=isActive) BOOL active;
@property (readonly, nonatomic) EMCoreAnalyticsCollector *analyticsCollector; // ivar: _analyticsCollector
@property (readonly, nonatomic) BOOL canIndexAttachments;
@property (nonatomic) BOOL clientStateFetched; // ivar: _clientStateFetched
@property (nonatomic) CGFloat coalescingDelaySeconds; // ivar: _coalescingDelaySeconds
@property (readonly, copy, nonatomic) NSString *copyDiagnosticInformation;
@property (weak, nonatomic) NSObject<EDSearchableIndexDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic, getter=isDataSourceIndexingPermitted) BOOL dataSourceIndexingPermitted; // ivar: _dataSourceIndexingPermitted
@property (nonatomic) CGFloat dataSourceUpdateTimeLimit; // ivar: _dataSourceUpdateTimeLimit
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) EFFuture *delayDataSourceAssignmentFuture; // ivar: _delayDataSourceAssignmentFuture
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableSpotlightVerification; // ivar: _enableSpotlightVerification
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *indexName;
@property (readonly, nonatomic) NSUInteger pendingIndexItemsCount;
@property (readonly, getter=isPerformingBlockAffectingDataSourceAndIndex) BOOL performingBlockAffectingDataSourceAndIndex;
@property (getter=isPersistenceAvailable) BOOL persistenceAvailable; // ivar: _persistenceAvailable
@property (readonly, nonatomic, getter=isPluggedIn) BOOL pluggedIn;
@property (readonly, nonatomic) EFObservable *powerObservable;
@property (weak, nonatomic) NSObject<EDSearchableIndexReasonProvider> *reasonProvider; // ivar: _reasonProvider
@property (readonly) NSInteger resumeCount;
@property (weak, nonatomic) NSObject<EDSearchableIndexSchedulableDelegate> *schedulableDelegate; // ivar: _schedulableDelegate
@property (retain, nonatomic) CSSearchableIndex *searchIndex; // ivar: _searchIndex
@property (copy, nonatomic) NSString *searchableIndexBundleID; // ivar: _searchableIndexBundleID
@property (readonly, nonatomic) BOOL shouldCancelSearchQuery;
@property (readonly) NSUInteger signpostID;
@property (nonatomic) BOOL skipIndexExclusionCheck; // ivar: _skipIndexExclusionCheck
@property (readonly) Class superclass;
@property (readonly, getter=_transaction) NSInteger transaction;


+(BOOL)isIncrementalIndexingType:(NSInteger)arg0 ;
+(BOOL)isValidTransaction:(NSInteger)arg0 ;
+(id)_localClientState;
+(id)_localClientStateURL;
+(id)_reindexReasonString:(NSInteger)arg0 ;
+(id)log;
+(id)signpostLog;
+(id)userHandle;
+(void)_saveLocalClientState:(id)arg0 ;
-(BOOL)_preprocessItemIfNecessary:(id)arg0 fromRefresh:(BOOL)arg1 ;
-(BOOL)_processIndexingBatch:(id)arg0 clientState:(id)arg1 itemsNotIndexed:(id)arg2 ;
-(BOOL)_queueContentsAllowsRefresh;
-(CGFloat)_throttleRequestedSize:(*NSUInteger)arg0 targetTime:(CGFloat)arg1 action:(id)arg2 ;
-(NSInteger)_nextTransaction;
-(NSUInteger)_countOfItemsInPendingQueues;
-(id)_consumeBatchOfSize:(NSUInteger)arg0 ;
-(id)_eventDataForTransitionState:(id)arg0 ;
-(id)_identifiersForItems:(id)arg0 ;
-(id)_identifiersStringForItems:(id)arg0 maxLength:(NSUInteger)arg1 ;
-(id)_pendingIdentifiers;
-(id)_processDomainRemovals:(id)arg0 ;
-(id)bundleIDForSearchableIndexVerifier:(id)arg0 ;
-(id)currentReasons;
-(id)dataSamplesForSearchableIndexVerifier:(id)arg0 searchableIndex:(id)arg1 count:(NSUInteger)arg2 lastVerifiedMessageID:(NSInteger)arg3 ;
-(id)exclusionReasons;
-(id)indexedEmptySubjectIdentifers;
-(id)initWithName:(id)arg0 dataSource:(id)arg1 reasonProvider:(id)arg2 ;
-(id)issueDiagnosticsRequestForMessageRowId:(id)arg0 ;
-(id)knownTransactionIDsForSearchableIndexVerifier:(id)arg0 ;
-(id)messageIDsMatchingQuery:(id)arg0 ;
-(id)purgeReasons;
-(id)searchableIndexForSearchableIndexVerifier:(id)arg0 ;
-(id)searchableItemSnippetDataMatchingCriterion:(id)arg0 ;
-(void)_clearOrphanedSearchableMessagesFromDatabase;
-(void)_coalescingTimerFired;
-(void)_collectAnalyticsForReindexReason:(NSInteger)arg0 ;
-(void)_collectAnalyticsForReindexReason:(NSInteger)arg0 withInfo:(id)arg1 ;
-(void)_dataSourceAssignTransaction:(NSInteger)arg0 forIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)_dataSourceAssignTransaction:(NSInteger)arg0 updates:(id)arg1 completion:(id)arg2 ;
-(void)_dataSourceInvalidateItemsGreaterThanTransaction:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_dataSourcePrepareToIndexItems:(id)arg0 fromRefresh:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_dataSourceRequestNeededUpdatesExcludingIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)_dataSourceScheduleWork:(id)arg0 ;
-(void)_dataSourceVerifyRepresentativeSampleWithCompletion:(id)arg0 ;
-(void)_doIndexItems:(id)arg0 fromRefresh:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)_fetchLastClientState;
-(void)_getDomainRemovals:(*id)arg0 identifierRemovals:(*id)arg1 ;
-(void)_handleFailingTransactionIDs:(id)arg0 ;
-(void)_indexItems:(id)arg0 fromRefresh:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)_invalidateCache;
-(void)_invalidateItemsInTransactions:(id)arg0 ;
-(void)_logSignpostForIndexingBatchAssignedDomainRemovalCount:(NSUInteger)arg0 ;
-(void)_logSignpostForIndexingBatchAssignedUpdatesWithItemsIndexedCount:(NSUInteger)arg0 ;
-(void)_logSignpostForIndexingBatchCompletedWithItemsIndexedCount:(id)arg0 ;
-(void)_logSignpostForIndexingBatchStartWithPendingItemsCount:(id)arg0 ;
-(void)_noteNeedsLastClientStateFetch;
-(void)_powerStateChanged;
-(void)_processIdentifierRemovals:(id)arg0 ;
-(void)_processRefreshRequestWithCompletion:(id)arg0 ;
-(void)_processSpotlightVerificationWithCompletion:(id)arg0 ;
-(void)_promptToFileRadarAboutReindexing:(id)arg0 ;
-(void)_queueConsumeBudgetElapsedPeriod:(CGFloat)arg0 ;
-(void)_queueConsumeBudgetItemCount:(NSUInteger)arg0 ;
-(void)_queueRefresh;
-(void)_queueTransitionActive:(BOOL)arg0 fromRefresh:(BOOL)arg1 ;
-(void)_registerDistantFutureSpotlightVerification;
-(void)_registerStateCaptureHandler;
-(void)_resume;
-(void)_resumeIndexingScheduler;
-(void)_scheduleDataSourceRefresh;
-(void)_scheduleProcessPendingItemsFromRefresh:(BOOL)arg0 ;
-(void)_scheduleSpotlightVerification;
-(void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(id)arg0 ;
-(void)_sendAnalyticsForReindexReason:(NSInteger)arg0 ;
-(void)_startCoalescingTimer;
-(void)_stopCoalescingTimer;
-(void)_storeLastKnownReindexReason:(NSInteger)arg0 withInfo:(id)arg1 ;
-(void)_suspend;
-(void)_suspendIndexingScheduler;
-(void)_transitionWithBudgetTimeUsed:(CGFloat)arg0 ;
-(void)_verifySpotlightIndex;
-(void)addSearchQueryCancelable:(id)arg0 ;
-(void)applicationWillResume;
-(void)applicationWillSuspend;
-(void)attachmentBecameAvailable:(id)arg0 ;
-(void)beginUpdatesAffectingDataSourceAndIndex;
-(void)dealloc;
-(void)endUpdatesAffectingDataSourceAndIndex;
-(void)indexAttachmentsForMessageWithIdentifier:(id)arg0 immediately:(BOOL)arg1 ;
-(void)indexItems:(id)arg0 ;
-(void)indexItems:(id)arg0 fromRefresh:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)indexItems:(id)arg0 immediately:(BOOL)arg1 ;
-(void)indexMessages:(id)arg0 includeBody:(BOOL)arg1 indexingType:(NSInteger)arg2 ;
-(void)indexRichLinksForMessageWithIdentifier:(id)arg0 immediately:(BOOL)arg1 ;
-(void)logPowerEventWithIdentifier:(id)arg0 eventData:(id)arg1 ;
-(void)markMessagesAsPrinted:(id)arg0 ;
-(void)performBlockAffectingDataSourceAndIndex:(id)arg0 ;
-(void)refresh;
-(void)reindexAllItemsWithOptions:(NSUInteger)arg0 acknowledgementHandler:(id)arg1 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg0 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg0 acknowledgementHandler:(id)arg1 ;
-(void)removeAllItems;
-(void)removeAllItemsWithAcknowledgementHandler:(id)arg0 ;
-(void)removeItemsForDomainIdentifier:(id)arg0 ;
-(void)removeItemsWithIdentifiers:(id)arg0 ;
-(void)removeItemsWithIdentifiers:(id)arg0 reasons:(id)arg1 fromRefresh:(BOOL)arg2 ;
-(void)removeMessages:(id)arg0 ;
-(void)removeSearchQueryCancelable:(id)arg0 ;
-(void)resume;
-(void)richLinkBecameAvailable:(id)arg0 ;
-(void)scheduleRecurringActivity;
-(void)searchableIndex:(id)arg0 reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg1 ;
-(void)searchableIndex:(id)arg0 reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)setForeground:(BOOL)arg0 ;
-(void)suspend;
-(void)test_tearDown;


@end


#endif