// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCONCRETECORESPOTLIGHTINDEXER_H
#define SPCONCRETECORESPOTLIGHTINDEXER_H

@class NSMutableSet, NSMapTable, NSString, NSMutableArray;
@protocol OS_os_transaction, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SPCoreSpotlightIndexer.h"

@interface SPConcreteCoreSpotlightIndexer : NSObject {
    uint8_t _maintenanceOperations;
    *int _cancelPtr;
    BOOL _suspended;
    BOOL _softSuspended;
    BOOL _scheduledStringsCleanup;
    NSMutableSet *_reindexAllDelegateBundleIDs;
    CGFloat _lastPreheat;
    CGFloat _lastTTLPass;
    NSUInteger _createCount;
}


@property (readonly, nonatomic) NSMapTable *checkedInClients; // ivar: _checkedInClients
@property (retain, nonatomic) NSString *dataclass; // ivar: _dataclass
@property NSUInteger dirtyTimeout; // ivar: _dirtyTimeout
@property (retain, nonatomic) NSObject<OS_os_transaction> *dirtyTransaction; // ivar: _dirtyTransaction
@property (nonatomic) BOOL finishedDrainingJournal; // ivar: _finishedDrainingJournal
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // ivar: _firstUnlockQueue
@property (readonly, nonatomic) CGFloat idleStartTime; // ivar: _idleStartTime
@property (nonatomic) *__SI index; // ivar: _index
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *indexIdleTimer; // ivar: _indexIdleTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // ivar: _indexQueue
@property (readonly, nonatomic) NSMutableSet *knownClients; // ivar: _knownClients
@property (retain, nonatomic) NSMutableArray *outstandingMaintenance; // ivar: _outstandingMaintenance
@property (weak, nonatomic) SPCoreSpotlightIndexer *owner; // ivar: _owner
@property (nonatomic) *__SIResultQueue resultQueue; // ivar: _resultQueue


+(BOOL)_spellingCorrectionConditional:(int)arg0 isSingleToken:(BOOL)arg1 isPreviousTokenCorrected:(BOOL)arg2 isLastToken:(BOOL)arg3 tokenLength:(NSUInteger)arg4 ;
+(BOOL)dumpCrashStates:(char *)arg0 toFile:(id)arg1 ;
+(id)_descriptionWithTokenRewrites:(id)arg0 ;
+(id)_indexDependentTokenRewritesWithMatchInfo:(id)arg0 topK:(id)arg1 setOfTokensToCorrect:(id)arg2 queryID:(NSInteger)arg3 ;
+(id)_indexIndependentTokenRewritesWithMatchInfo:(id)arg0 queryID:(NSInteger)arg1 setOfTokensToCorrect:(id)arg2 ;
+(id)_lastTokenWithQueryString:(id)arg0 tokenMatchInfo:(id)arg1 ;
+(id)_setOfTokensToCorrect:(id)arg0 tokenMatchInfo:(id)arg1 ;
+(id)_sharedSynonyms;
+(id)_stateInfoAttributeNameWithClientStateName:(id)arg0 ;
+(id)_stringWithRewriteType:(NSInteger)arg0 ;
+(id)_tokensMaxCountFromMatchInfo:(id)arg0 ;
+(id)fetchItemForURL:(id)arg0 ;
+(id)fetchParentsForItemID:(id)arg0 recursively:(BOOL)arg1 timeout:(NSUInteger)arg2 ;
+(void)initialize;
-(BOOL)_startInternalQueryWithIndex:(struct __SI *)arg0 query:(id)arg1 fetchAttributes:(id)arg2 forBundleIds:(id)arg3 maxCount:(NSUInteger)arg4 resultsHandler:(id)arg5 ;
// -(BOOL)_startInternalQueryWithIndex:(struct __SI *)arg0 query:(id)arg1 fetchAttributes:(id)arg2 forBundleIds:(id)arg3 maxCount:(NSUInteger)arg4 resultsHandler:(id)arg5 resultQueue:(unk)arg6  ;
// -(BOOL)_startInternalQueryWithIndex:(struct __SI *)arg0 query:(id)arg1 fetchAttributes:(id)arg2 forBundleIds:(id)arg3 maxCount:(NSUInteger)arg4 resultsHandler:(id)arg5 resultQueue:(unk)arg6 postFilter:(id)arg7  ;
-(BOOL)_startInternalQueryWithIndex:(struct __SI *)arg0 query:(id)arg1 fetchAttributes:(id)arg2 forBundleIds:(id)arg3 resultsHandler:(id)arg4 ;
-(BOOL)_startInternalQueryWithIndex:(struct __SI *)arg0 query:(id)arg1 fetchAttributes:(id)arg2 resultsHandler:(id)arg3 ;
-(BOOL)writeDiagnostic:(id)arg0 bundleID:(id)arg1 identifier:(id)arg2 ;
-(id)_cancelIdleTimer;
// -(id)_startQueryWithQueryTask:(id)arg0 eventHandler:(id)arg1 resultsHandler:(unk)arg2  ;
-(id)getPropertyForKey:(id)arg0 ;
-(id)initWithQueue:(id)arg0 protectionClass:(id)arg1 cancelPtr:(*int)arg2 ;
-(int)openIndex:(BOOL)arg0 ;
-(int)openIndex:(BOOL)arg0 shouldReindexAll:(BOOL)arg1 ;
-(void)_addNewClientWithBundleID:(id)arg0 ;
-(void)_appendRervseInfo:(id)arg0 dictionary:(id)arg1 key:(id)arg2 level:(NSUInteger)arg3 ;
-(void)_backgroundDeleteItems:(id)arg0 bundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_deleteSearchableItemsMatchingQuery:(id)arg0 forBundleIds:(id)arg1 completionHandler:(id)arg2 ;
-(void)_expireCorruptIndexFilesWithPath:(id)arg0 keepLatest:(BOOL)arg1 ;
-(void)_fetchAccumulatedStorageSizeForBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(void)_performXPCActivity:(id)arg0 name:(id)arg1 ;
-(void)_saveCorruptIndexWithPath:(id)arg0 ;
-(void)_scheduleStringsCleanupForBundleID:(id)arg0 ;
-(void)_setClientState:(id)arg0 clientStateName:(id)arg1 forBundleID:(id)arg2 completionHandler:(id)arg3 ;
-(void)addClients:(id)arg0 ;
-(void)addCompletedBundleIDs:(id)arg0 forIndexerTask:(id)arg1 ;
-(void)attributesForBundleId:(id)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg0 toState:(NSInteger)arg1 forBundleID:(id)arg2 ;
-(void)checkAdmission:(id)arg0 background:(BOOL)arg1 didBeginThrottle:(*BOOL)arg2 didEndThrottle:(*BOOL)arg3 live:(*BOOL)arg4 slow:(*BOOL)arg5 ;
-(void)checkInWithBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cleanupStringsWithActivity:(id)arg0 group:(id)arg1 shouldDefer:(*BOOL)arg2 flags:(int)arg3 ;
-(void)cleanupStringsWithCompletionHandler:(id)arg0 ;
-(void)clientDidCheckin:(id)arg0 service:(id)arg1 completionHandler:(id)arg2 ;
-(void)closeIndex;
-(void)commitUpdates:(id)arg0 ;
-(void)completeIndexingItemFor:(id)arg0 delegate:(id)arg1 didBeginThrottle:(BOOL)arg2 didEndThrottle:(BOOL)arg3 error:(id)arg4 live:(BOOL)arg5 queue:(id)arg6 slow:(BOOL)arg7 startTime:(CGFloat)arg8 completionHandler:(id)arg9 ;
-(void)coolDown:(id)arg0 ;
-(void)dealloc;
-(void)deleteActionsBeforeTime:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)deleteActionsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAllSearchableItemsForBundleID:(id)arg0 shouldGC:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)deleteAllUserActivities:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteItemsForEnumerator:(id)arg0 traceID:(NSInteger)arg1 bundleID:(id)arg2 completionHandler:(id)arg3 ;
-(void)deleteItemsForQuery:(id)arg0 bundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteSearchableItemsSinceDate:(id)arg0 forBundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 forBundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteSearchableItemsWithFileProviderDomains:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSearchableItemsWithPersonaIds:(id)arg0 completionHandler:(id)arg1 ;
-(void)dirty;
-(void)dirty:(BOOL)arg0 ;
-(void)dumpAllRankingDiagnosticInformationForQuery:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)ensureOpenIndexFiles:(id)arg0 ;
-(void)fetchAllCompletedBundleIDsForIndexerTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAttributes:(id)arg0 bundleID:(id)arg1 identifiers:(id)arg2 includeParents:(BOOL)arg3 completion:(id)arg4 ;
-(void)fetchAttributes:(id)arg0 bundleID:(id)arg1 identifiers:(id)arg2 includeParents:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)fetchLastClientStateForBundleID:(id)arg0 clientStateName:(id)arg1 completionHandler:(id)arg2 ;
-(void)fixupMessageAttachmentsWithCompletionHandler:(id)arg0 ;
-(void)fixupPathTimeouts;
-(void)indexDependentTokenRewritesWithQueryString:(id)arg0 context:(id)arg1 matchInfo:(id)arg2 setOfTokensToCorrect:(id)arg3 tokenRewritesHandler:(id)arg4 ;
-(void)indexFinishedDrainingJournal:(id)arg0 ;
-(void)indexFromBundle:(id)arg0 personaID:(id)arg1 options:(NSInteger)arg2 items:(id)arg3 itemsText:(id)arg4 clientState:(id)arg5 clientStateName:(id)arg6 deletes:(id)arg7 completionHandler:(id)arg8 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 clientStateName:(id)arg3 forBundleID:(id)arg4 options:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 forBundleID:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)issueConsistencyCheck;
-(void)issueDefrag:(id)arg0 ;
-(void)issueDumpForward:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)issueDumpReverse:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)issueDuplicateOidCheck;
-(void)issueMessagesFixup:(id)arg0 ;
-(void)issueRepair;
-(void)issueSplit;
-(void)mergeWithCompletionHandler:(id)arg0 ;
-(void)mergeWithGroup:(id)arg0 ;
-(void)performIndexerTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)performIndexerTask:(id)arg0 withIndexDelegatesAndCompletionHandler:(id)arg1 ;
-(void)performQueryForCountOfItemsInCategory:(id)arg0 completion:(id)arg1 ;
-(void)powerStateChanged;
-(void)preheat;
-(void)processImportForBundleID:(id)arg0 withURLs:(id)arg1 contentTypes:(id)arg2 sandboxExtensions:(id)arg3 andIdentifiers:(id)arg4 inGroup:(id)arg5 ;
-(void)readyIndex:(BOOL)arg0 ;
-(void)reindexAttributes:(id)arg0 ofItemsMatchingQuery:(id)arg1 indexAttrName:(id)arg2 withVersion:(NSUInteger)arg3 perItemCompletionAttribute:(id)arg4 force:(BOOL)arg5 postFilter:(id)arg6 ;
-(void)removeExpiredItemsForBundleId:(id)arg0 group:(id)arg1 ;
-(void)removeSandboxExtensions:(id)arg0 ;
-(void)requestRequiresImportWithoutSandboxExtension:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(void)restartAttachmentImport:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(void)resumeIndex;
-(void)revokeExpiredItems:(id)arg0 ;
// -(void)scheduleMaintenance:(id)arg0 description:(unk)arg1 forDarkWake:(id)arg2  ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 sync:(BOOL)arg2 ;
-(void)shrink:(NSUInteger)arg0 ;
// -(void)startQueryWithQueryTask:(id)arg0 startHandler:(id)arg1 eventHandler:(unk)arg2 resultsHandler:(id)arg3  ;
-(void)suspendIndexForDeviceLock:(id)arg0 ;
-(void)updateContainersAndScores:(BOOL)arg0 ;
-(void)updateEmailLocalParts:(BOOL)arg0 ;
-(void)updateGroups:(BOOL)arg0 ;
-(void)updateItems:(id)arg0 forBundleId:(id)arg1 ;
-(void)updateRankingDates:(BOOL)arg0 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg0 forBundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)zombifyAllContactItems:(id)arg0 ;


@end


#endif