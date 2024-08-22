// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILMESSAGELIBRARY_H
#define MFMAILMESSAGELIBRARY_H

@class NSString, NSMutableDictionary, NSMutableSet, MFLibrarySearchableIndex, NSCache, EDPersistenceHookRegistry, EDPersistence, EDMessageQueryParser, EDSearchableIndexScheduler;
@protocol EDMessageChangeHookResponder, EFSignpostable, EFContentProtectionObserver, OS_dispatch_queue, EFSQLValueExpressable, EFScheduler, EFCancelable;

#import <Foundation/Foundation.h>

#import "MFAttachmentLibraryDataProvider.h"
#import "MFWeakObjectCache.h"
#import "MFFileCompressionQueue.h"
#import "MFMessageAttachmentMigrator.h"
#import "MFMessageBodyMigrator.h"
#import "MFPersistenceDatabase_iOS.h"
#import "MFMessageChangeManager_iOS.h"

@interface MFMailMessageLibrary : NSObject <EDMessageChangeHookResponder, EFSignpostable, EFContentProtectionObserver>

 {
    NSString *_path;
    MFAttachmentLibraryDataProvider *_attachmentDataProvider;
    MFWeakObjectCache *_libraryMessageCache;
    NSMutableDictionary *_mailboxCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_statsQueue;
    NSString *_activeAccountClause;
    NSString *_nonLocalAccountClause;
    id<EFSQLValueExpressable> *_enabledAccountMailboxesExpression;
    int _protectedDataAvailability;
    NSObject<OS_dispatch_queue> *_keyBagQueue;
    NSObject<OS_dispatch_queue> *_conversationCalculationQueue;
    NSMutableSet *_messagesToThreadAtUnlock;
    MFFileCompressionQueue *_compressionQueue;
    MFLibrarySearchableIndex *_searchableIndex;
    os_unfair_lock_s _searchableIndexLock;
    uint8_t _suspendedUnderLock;
    os_unfair_lock_s _mailboxLock;
    os_unfair_lock_s _addedMessagesMapLock;
    NSCache *_mailboxURLsToMailboxIDs;
    NSCache *_optionsToQueries;
}


@property (readonly, nonatomic) BOOL allowedToAccessProtectedData; // ivar: _allowedToAccessProtectedData
@property (retain) MFMessageAttachmentMigrator *attachmentMigrator; // ivar: _attachmentMigrator
@property (retain) MFMessageBodyMigrator *bodyMigrator; // ivar: _bodyMigrator
@property (retain, nonatomic) NSMutableDictionary *currentAddedMessagesMap; // ivar: _currentAddedMessagesMap
@property (readonly) MFPersistenceDatabase_iOS *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<EFScheduler> *fileRemovalAfterCompactionScheduler; // ivar: _fileRemovalAfterCompactionScheduler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) MFMessageChangeManager_iOS *messageChangeManager;
@property (readonly, nonatomic) NSUInteger pendingIndexItemsCount;
@property (readonly) EDPersistence *persistence; // ivar: _persistence
@property (readonly, nonatomic) NSUInteger protectedDataAvailability;
@property (retain, nonatomic) EDMessageQueryParser *queryParser; // ivar: _queryParser
@property (retain, nonatomic) EDSearchableIndexScheduler *searchableIndexScheduler; // ivar: _searchableIndexScheduler
@property (readonly) NSUInteger signpostID;
@property (readonly, nonatomic) NSObject<EFCancelable> *stateCaptureCancelable; // ivar: _stateCaptureCancelable
@property (readonly) Class superclass;


+(BOOL)canUsePersistence;
+(id)defaultInstance;
+(id)defaultPath;
+(id)log;
+(id)propertyMapper;
+(id)signpostLog;
+(void)_renameLibraryAtPath:(id)arg0 ;
+(void)removeLibraryOnNextLaunch;
+(void)test_setDefaultInstance:(id)arg0 ;
-(BOOL)_addAddressesFromRecipientsForMessages:(id)arg0 toSet:(id)arg1 connection:(id)arg2 ;
-(BOOL)_addRecipients:(id)arg0 toMessageWithDatabaseID:(NSInteger)arg1 cache:(id)arg2 connection:(id)arg3 ;
-(BOOL)_canAccessProtectedData;
-(BOOL)_canSelectMessagesWithOptions:(unsigned int)arg0 connection:(id)arg1 ;
-(BOOL)_deleteMessages:(id)arg0 andCleanUpAddresses:(id)arg1 subjects:(id)arg2 summaries:(id)arg3 connection:(id)arg4 ;
-(BOOL)_deleteMessages:(id)arg0 connection:(id)arg1 ;
-(BOOL)_deleteRows:(id)arg0 fromTable:(id)arg1 connection:(id)arg2 ;
-(BOOL)_insertThreadReferences:(id)arg0 toMessageWithLibraryID:(NSInteger)arg1 usingDatabaseConnection:(id)arg2 ;
-(BOOL)_setMessageData:(id)arg0 libraryID:(NSInteger)arg1 part:(id)arg2 partial:(BOOL)arg3 complete:(BOOL)arg4 connection:(id)arg5 ;
-(BOOL)_setSummary:(id)arg0 forMessageWithRowID:(NSInteger)arg1 connection:(id)arg2 ;
-(BOOL)_shouldLogDatabaseStats;
-(BOOL)_shouldStoreRemoteContentForMessage:(id)arg0 ;
-(BOOL)_storeRemoteContentLinksCachedOnMessage:(id)arg0 linksToVerify:(*id)arg1 ;
-(BOOL)_writeEmlxFile:(id)arg0 withBodyData:(id)arg1 protectionClass:(int)arg2 ;
-(BOOL)areMessageContentsLocallyAvailable:(id)arg0 fullContentsAvailble:(*BOOL)arg1 ;
-(BOOL)cleanupProtectedTables;
-(BOOL)hasCompleteDataForMimePart:(id)arg0 ;
-(BOOL)isProtectedDataAvailable:(id)arg0 ;
-(BOOL)messageDataExistsInDatabaseForMessageLibraryID:(NSInteger)arg0 part:(id)arg1 length:(*NSUInteger)arg2 ;
-(BOOL)migrate;
-(BOOL)renameMailboxes:(id)arg0 to:(id)arg1 ;
-(BOOL)shouldCancel;
-(NSInteger)_conversationIdForMessageIds:(id)arg0 ;
-(NSInteger)_findOrCreateDatabaseIDForAddress:(id)arg0 comment:(id)arg1 cache:(id)arg2 connection:(id)arg3 ;
-(NSInteger)_findOrCreateDatabaseIDForGlobalData:(NSInteger)arg0 cache:(id)arg1 connection:(id)arg2 ;
-(NSInteger)_findOrCreateDatabaseIDForSubject:(id)arg0 cache:(id)arg1 connection:(id)arg2 ;
-(NSInteger)_findOrCreateDatabaseIDForSummary:(id)arg0 cache:(id)arg1 connection:(id)arg2 ;
-(NSInteger)_findOrCreateDatabaseIDForValue:(id)arg0 inTable:(id)arg1 column:(id)arg2 cache:(id)arg3 connection:(id)arg4 created:(*BOOL)arg5 ;
-(NSInteger)_int64ForQuery:(id)arg0 connection:(id)arg1 textArgument:(id)arg2 ;
-(NSInteger)_libraryIDForOldestKnownMessageInMailbox:(id)arg0 ;
-(NSInteger)_maxRowIDInSet:(id)arg0 ;
-(NSInteger)addReferenceForContext:(id)arg0 usingDatabaseConnection:(id)arg1 generationWindow:(id)arg2 mergeHandler:(id)arg3 ;
-(NSInteger)countDistinctMessagesMatchingCriterion:(id)arg0 ;
-(NSInteger)deleteAttachmentsForMessage:(id)arg0 inMailboxFileURL:(id)arg1 ;
-(NSInteger)loadMoreMessagesForThreadContainingMessage:(id)arg0 hasNoMoreMessages:(*BOOL)arg1 ;
-(NSInteger)mailboxIDForURLString:(id)arg0 ;
-(NSInteger)mailboxIDForURLString:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(NSInteger)statusCountDeltaForMailbox:(id)arg0 ;
-(NSUInteger)countMessagesMatchingCriterion:(id)arg0 ;
-(NSUInteger)flagsForConversationId:(NSInteger)arg0 ;
-(NSUInteger)indexedCountForMailbox:(id)arg0 limit:(NSUInteger)arg1 ;
-(NSUInteger)mostRecentStatusCountForMailbox:(id)arg0 ;
-(NSUInteger)serverUnreadOnlyOnServerCountForMailbox:(id)arg0 ;
-(id)UIDsToDeleteInMailbox:(id)arg0 ;
-(id)_activeAccountsClause;
-(id)_addThreadingInfoWithContext:(id)arg0 usingDatabaseConnection:(id)arg1 ;
-(id)_collectStatistics;
-(id)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg0 ;
-(id)_equalToMailboxIDsFromCriterion:(id)arg0 ;
-(id)_existingValuesForColumn:(id)arg0 table:(id)arg1 fromValues:(id)arg2 connection:(id)arg3 ;
-(id)_firstDateForQuery:(id)arg0 inMailbox:(id)arg1 ;
-(id)_getReferencesForHashesWithOwners:(id)arg0 ;
-(id)_indexSetOfMessagesDeleted;
-(id)_keyForOptions:(unsigned int)arg0 protectedDataAvailable:(BOOL)arg1 mailboxAvailable:(BOOL)arg2 mailboxCached:(BOOL)arg3 ;
-(id)_libraryMessageCache;
-(id)_libraryMessageWithLibraryID:(NSInteger)arg0 wasCached:(*BOOL)arg1 ;
-(id)_mailboxesClauseForAccounts:(id)arg0 ;
-(id)_messageForRow:(id)arg0 options:(unsigned int)arg1 timestamp:(NSUInteger)arg2 connection:(id)arg3 isProtectedDataAvailable:(BOOL)arg4 ;
-(id)_messagesForMailbox:(id)arg0 olderThanNumberOfDays:(int)arg1 limit:(NSUInteger)arg2 ;
-(id)_nonLocalAccountsClause;
-(id)_queryForMailboxesIDsFromMailboxes:(id)arg0 ;
-(id)_recipientsForMessageWithDatabaseID:(NSInteger)arg0 connection:(id)arg1 ;
-(id)_recipientsForMessagesWithDatabaseIDs:(id)arg0 includeTo:(BOOL)arg1 includeCC:(BOOL)arg2 includeBCC:(BOOL)arg3 ;
-(id)_selectClauseForOptions:(unsigned int)arg0 protectedDataAvailable:(BOOL)arg1 ;
-(id)_selectExpressionForMessageWithAvailableTables:(unsigned int)arg0 ;
-(id)_stringsForIndexSet:(id)arg0 ;
-(id)accountForMessage:(id)arg0 ;
-(id)addMessages:(id)arg0 withMailbox:(id)arg1 newMessagesByOldMessage:(id)arg2 remoteIDs:(id)arg3 setFlags:(NSUInteger)arg4 addPOPUIDs:(BOOL)arg5 dataSectionsByMessage:(id)arg6 generationWindow:(id)arg7 ;
-(id)allUIDsInMailbox:(id)arg0 ;
-(id)bodyDataAtPath:(id)arg0 headerData:(*id)arg1 ;
-(id)bodyDataForMessage:(id)arg0 ;
-(id)bodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 ;
-(id)bodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 ;
-(id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(NSInteger)arg0 messageIDHash:(NSInteger)arg1 ;
-(id)copyMessageInfosForMailbox:(id)arg0 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 inRemoteMailbox:(id)arg2 ;
-(id)dataConsumerForMessage:(id)arg0 ;
-(id)dataConsumerForMessage:(id)arg0 isPartial:(BOOL)arg1 ;
-(id)dataConsumerForMessage:(id)arg0 part:(id)arg1 ;
-(id)dataConsumerForMessage:(id)arg0 part:(id)arg1 incomplete:(BOOL)arg2 ;
-(id)dataForMimePart:(id)arg0 isComplete:(*BOOL)arg1 ;
-(id)dataPathForMessage:(id)arg0 ;
-(id)dataPathForMessage:(id)arg0 part:(id)arg1 ;
-(id)dataPathForMessage:(id)arg0 type:(int)arg1 ;
-(id)dataProvider;
-(id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg0 ;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg0 ;
-(id)duplicateMessages:(id)arg0 newRemoteIDs:(id)arg1 forMailbox:(id)arg2 setFlags:(NSUInteger)arg3 clearFlags:(NSUInteger)arg4 messageFlagsForMessages:(id)arg5 createNewCacheFiles:(BOOL)arg6 ;
-(id)duplicateMessages:(id)arg0 newRemoteIDs:(id)arg1 forMailbox:(id)arg2 setFlags:(NSUInteger)arg3 createNewCacheFiles:(BOOL)arg4 ;
-(id)enabledAccountMailboxesExpression;
-(id)fileAttributesForMessage:(id)arg0 ;
-(id)filterContiguousMessages:(id)arg0 forCriterion:(id)arg1 options:(unsigned int)arg2 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 ;
-(id)groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg0 variable:(id)arg1 ;
-(id)groupedMessagesCountForCriterion:(id)arg0 groupBy:(NSUInteger)arg1 ;
-(id)headerDataAtPath:(id)arg0 ;
-(id)headerDataForMessage:(id)arg0 ;
-(id)hiddenPOPUIDsInMailbox:(id)arg0 ;
-(id)indexableMessagesWhere:(id)arg0 sortedBy:(id)arg1 limit:(NSInteger)arg2 options:(unsigned int)arg3 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 inMemoryIdentifier:(id)arg1 userAgent:(id)arg2 ;
-(id)loadData:(id)arg0 forMessage:(id)arg1 usingBlock:(id)arg2 ;
-(id)loadMeetingDataForMessage:(id)arg0 ;
-(id)loadMeetingExternalIDForMessage:(id)arg0 ;
-(id)loadMeetingMetadataForMessage:(id)arg0 ;
-(id)mailboxURLForMessage:(id)arg0 ;
-(id)mailboxURLsForIDs:(id)arg0 ;
-(id)mailboxUidForMessage:(id)arg0 ;
-(id)messageBasePathForAccount:(id)arg0 ;
-(id)messageWithLibraryID:(NSInteger)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)messageWithLibraryID:(NSInteger)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 temporarilyUnavailable:(*BOOL)arg3 ;
-(id)messageWithMessageID:(id)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)messageWithRemoteID:(id)arg0 inRemoteMailbox:(id)arg1 ;
-(id)messagesForMailbox:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)messagesForMailbox:(id)arg0 olderThanNumberOfDays:(int)arg1 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 range:(struct _NSRange )arg2 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 range:(struct _NSRange )arg2 success:(*BOOL)arg3 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 success:(*BOOL)arg2 ;
-(id)messagesWithMessageIDHeader:(id)arg0 ;
-(id)messagesWithSummariesForMailbox:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)orderedBatchOfMessagesEndingAtRowId:(NSInteger)arg0 limit:(unsigned int)arg1 success:(*BOOL)arg2 ;
-(id)queryForCriterion:(id)arg0 connection:(id)arg1 options:(unsigned int)arg2 ;
-(id)queryForCriterion:(id)arg0 connection:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned int)arg3 ;
-(id)queryForCriterion:(id)arg0 connection:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned int)arg3 isSubquery:(BOOL)arg4 ;
-(id)queryForCriterion:(id)arg0 connection:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned int)arg3 isSubquery:(BOOL)arg4 range:(struct _NSRange )arg5 ;
-(id)queryForCriterion:(id)arg0 connection:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange )arg3 ;
-(id)referencesFromHeaders:(id)arg0 ;
-(id)remoteStoreForMessage:(id)arg0 ;
-(id)searchableIndex;
-(id)sequenceIdentifierForMailbox:(id)arg0 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg0 inMailbox:(id)arg1 ;
-(id)serverSearchResultMessagesForMailbox:(id)arg0 ;
-(id)setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)sqlQueryWithConversionLogForQuery:(id)arg0 ;
-(id)storedIntegerPropertyWithName:(id)arg0 ;
-(id)stringForQuery:(id)arg0 ;
-(id)stringForQuery:(id)arg0 monitor:(id)arg1 ;
-(id)stringFromAllMailboxIndexStatus;
-(id)stringFromAllMailboxUnreadCount;
-(id)updateFlagsForMessages:(id)arg0 changes:(id)arg1 transformer:(id)arg2 ;
-(id)urlForMailboxID:(NSInteger)arg0 ;
-(int)_integerForQuery:(id)arg0 withTextArgument:(id)arg1 ;
-(unsigned int)_attachmentCountForAggregatedMailboxes:(id)arg0 ;
-(unsigned int)_computeUnreadCountForMailboxes:(id)arg0 ;
-(unsigned int)_flaggedCountForAggregatedMailboxes:(id)arg0 ;
-(unsigned int)_includesMeCountForAggregatedMailboxes:(id)arg0 ;
-(unsigned int)allNonDeleteCountForMailbox:(id)arg0 includeServerSearchResults:(BOOL)arg1 includeThreadSearchResults:(BOOL)arg2 ;
-(unsigned int)attachmentCountForMailbox:(id)arg0 ;
-(unsigned int)attachmentCountForMailboxes:(id)arg0 ;
-(unsigned int)countOfRelatedMessagesMatchingCriterion:(id)arg0 forConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailboxCriterion:(id)arg2 ;
-(unsigned int)flaggedCountForMailbox:(id)arg0 ;
-(unsigned int)includesMeCountForMailbox:(id)arg0 ;
-(unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg0 ;
-(unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg0 includeServerSearchResults:(BOOL)arg1 includeThreadSearchResults:(BOOL)arg2 ;
-(unsigned int)nonDeletedCountForMailbox:(id)arg0 ;
-(unsigned int)nonDeletedCountForMailbox:(id)arg0 includeServerSearchResults:(BOOL)arg1 includeThreadSearchResults:(BOOL)arg2 ;
-(unsigned int)totalCountForMailbox:(id)arg0 ;
-(unsigned int)unreadCountForAggregatedMailboxes:(id)arg0 ;
-(unsigned int)unreadCountForAggregatedMailboxes:(id)arg0 matchingCriterion:(id)arg1 ;
-(unsigned int)unreadCountForMailbox:(id)arg0 ;
-(unsigned int)unreadCountForMailbox:(id)arg0 matchingCriterion:(id)arg1 ;
-(void)_addMessageToThreadAtUnlock:(NSInteger)arg0 ;
-(void)_cancelPendingJournalReconciliation;
-(void)_iterateStatement:(id)arg0 connection:(id)arg1 withProgressMonitor:(id)arg2 andRowHandler:(*unk)arg3 context:(struct ? *)arg4 ;
-(void)_logStatistics;
-(void)_notifyDidCompact:(BOOL)arg0 messages:(id)arg1 mailboxes:(id)arg2 ;
-(void)_removeDataFilesForGlobalID:(NSInteger)arg0 ;
-(void)_removeGlobalDataForMessagesIfNecessary:(id)arg0 connection:(id)arg1 ;
-(void)_removeSearchableItemsWithLibraryIDs:(id)arg0 ;
-(void)_scheduleIncrementalVacuum;
-(void)_scheduleJournalReconciliation;
-(void)_schedulePeriodicStatisticsLogging;
-(void)_sendMessagesForStatement:(id)arg0 connection:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 timestamp:(NSUInteger)arg4 ;
-(void)_setSuspendedUnderLock:(BOOL)arg0 ;
-(void)_storeRemoteContentLinksFromData:(id)arg0 forMimePart:(id)arg1 linksToVerify:(id)arg2 ;
-(void)_storeRemoteContentLinksFromFullData:(id)arg0 forMessage:(id)arg1 linksToVerify:(id)arg2 ;
-(void)_storeRemoteContentLinksFromHeaderData:(id)arg0 bodyData:(id)arg1 forMessage:(id)arg2 linksToVerify:(id)arg3 ;
-(void)addPostMigrationStep:(id)arg0 ;
-(void)attachmentMigrationFinished;
-(void)bodyMigrationFinished;
-(void)clearServerSearchFlagsForMessagesWithLibraryIDs:(id)arg0 ;
-(void)closeDatabaseConnections;
-(void)compactMailbox:(id)arg0 ;
-(void)compactMessages:(id)arg0 ;
-(void)compactMessages:(id)arg0 permanently:(BOOL)arg1 ;
-(void)contentProtectionStateChanged:(int)arg0 previousState:(int)arg1 ;
-(void)dealloc;
-(void)deleteAccount:(id)arg0 ;
-(void)deleteMailboxes:(id)arg0 account:(id)arg1 ;
-(void)deletePOPUID:(id)arg0 inMailbox:(id)arg1 ;
-(void)didFinishPersistenceDidAddMessages:(id)arg0 ;
-(void)fileURLForAttachmentPersistentID:(id)arg0 messageID:(id)arg1 result:(id)arg2 ;
-(void)handleFailedMigration;
-(void)increaseProtectionOnFileForMessage:(id)arg0 ;
-(void)invalidateAccount:(id)arg0 ;
-(void)invalidateAndWait;
-(void)iterateMessagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 handler:(id)arg2 ;
-(void)iterateMessagesMatchingCriterion:(id)arg0 withResultHandler:(id)arg1 options:(unsigned int)arg2 withMonitor:(id)arg3 ;
-(void)iterateMessagesMatchingQuery:(id)arg0 withResultHandler:(id)arg1 options:(unsigned int)arg2 withMonitor:(id)arg3 ;
-(void)iterateStatement:(struct sqlite3_stmt *)arg0 connection:(id)arg1 withProgressMonitor:(id)arg2 andRowHandler:(*unk)arg3 context:(*void)arg4 ;
-(void)journalReconciliationFailed;
-(void)journalWasReconciled;
-(void)notifyNewDataAvailableForMessages:(id)arg0 ;
-(void)performIncrementalVacuumForSchema:(id)arg0 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)postFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)postOldFlags:(NSUInteger)arg0 newFlags:(NSUInteger)arg1 forMessage:(id)arg2 ;
-(void)rebuildActiveAccountMailboxesExpression:(id)arg0 ;
-(void)rebuildActiveAccountsClauseWithActiveAccounts:(id)arg0 inactiveAccounts:(id)arg1 ;
-(void)rebuildActiveAccountsClausesAndExpressionsWithAccounts:(id)arg0 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg0 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg0 acknowledgementHandler:(id)arg1 ;
-(void)reloadMailboxCacheIfNecessaryWithConnection:(id)arg0 ;
-(void)reloadMailboxCacheWithConnection:(id)arg0 ;
-(void)removeAllMessagesFromMailbox:(id)arg0 removeMailbox:(BOOL)arg1 andNotify:(BOOL)arg2 ;
-(void)removeSearchableItemsForAccount:(id)arg0 ;
-(void)removeSearchableItemsForAccount:(id)arg0 mailboxID:(NSInteger)arg1 ;
-(void)removeSearchableItemsForMailbox:(id)arg0 ;
-(void)removeSearchableItemsForMessages:(id)arg0 ;
-(void)renameOrRemoveDatabaseIfNeeded;
-(void)scheduleRecurringActivity;
-(void)sendMessagesMatchingCriterion:(id)arg0 to:(id)arg1 options:(unsigned int)arg2 ;
-(void)sendMessagesMatchingCriterion:(id)arg0 to:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned int)arg3 ;
-(void)sendMessagesMatchingCriterion:(id)arg0 to:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned int)arg3 range:(struct _NSRange )arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg0 to:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned int)arg3 range:(struct _NSRange )arg4 success:(*BOOL)arg5 ;
-(void)sendMessagesMatchingCriterion:(id)arg0 to:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange )arg3 ;
-(void)setConversationInfo:(NSInteger)arg0 syncKey:(id)arg1 flags:(NSUInteger)arg2 ;
-(void)setData:(id)arg0 forMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(void)setData:(id)arg0 forMessageToAppend:(id)arg1 ;
-(void)setFlags:(NSUInteger)arg0 forConversationId:(NSInteger)arg1 ;
-(void)setFlags:(NSUInteger)arg0 forMessage:(id)arg1 ;
-(void)setFlagsFromDictionary:(id)arg0 forMessagesInMailboxURLString:(id)arg1 ;
-(void)setLastSyncAndMostRecentStatusCount:(NSInteger)arg0 forMailbox:(id)arg1 ;
-(void)setMessage:(id)arg0 isPartial:(BOOL)arg1 ;
-(void)setMostRecentStatusCount:(NSUInteger)arg0 forMailbox:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 forMessage:(id)arg3 ;
-(void)setSequenceIdentifier:(id)arg0 forMailbox:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg0 forMessageWithLibraryID:(NSInteger)arg1 ;
-(void)setSequenceIdentifier:(id)arg0 forMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setServerUnreadOnlyOnServerCount:(NSUInteger)arg0 forMailbox:(id)arg1 ;
-(void)setStoredIntegerPropertyWithName:(id)arg0 value:(id)arg1 ;
-(void)setSummary:(id)arg0 forMessage:(id)arg1 ;
-(void)start;
-(void)storeRemoteContentLinksFromData:(id)arg0 forMessage:(id)arg1 mimePart:(id)arg2 ;
-(void)storeRemoteContentLinksFromFullData:(id)arg0 forMessage:(id)arg1 ;
-(void)storeRemoteContentLinksFromHeaderData:(id)arg0 bodyData:(id)arg1 forMessage:(id)arg2 ;
-(void)test_tearDown;
-(void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg0 externalConversationID:(NSInteger)arg1 ;
-(void)updateFlagsForMessagesInPlace:(id)arg0 success:(*BOOL)arg1 ;
-(void)updateThreadingInfoForMessage:(id)arg0 fromHeaders:(id)arg1 ;
-(void)willStartPersistenceDidAddMessages:(id)arg0 ;


@end


#endif