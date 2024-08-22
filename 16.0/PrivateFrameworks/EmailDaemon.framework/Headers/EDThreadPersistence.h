// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDTHREADPERSISTENCE_H
#define EDTHREADPERSISTENCE_H

@class NSMutableSet, NSMutableArray, EMBlockedSenderManager, NSString, EFDebouncer;
@protocol EDDatabaseChangeHookResponder, EDAccountChangeHookResponder, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EDProtectedDataReconciliationHookResponder, EDSenderBucketChangeHookResponder, EDThreadScopeManagerDataSource, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EFLoggable, EFScheduler, EMVIPManager;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDPersistenceHookRegistry.h"
#import "EDMessagePersistence.h"
#import "EDThreadScopeManager.h"

@interface EDThreadPersistence : NSObject <EDDatabaseChangeHookResponder, EDAccountChangeHookResponder, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EDProtectedDataReconciliationHookResponder, EDSenderBucketChangeHookResponder, EDThreadScopeManagerDataSource, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EFLoggable>

 {
    NSMutableSet *_threadObjectIDsToRecompute;
    os_unfair_lock_s _threadRecomputationLock;
    NSMutableArray *_migratingThreadScopes;
    os_unfair_lock_s _migratingThreadScopesLock;
}


@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // ivar: _blockedSenderManager
@property (readonly, nonatomic) NSObject<EFScheduler> *consistencyCheckScheduler; // ivar: _consistencyCheckScheduler
@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;
@property (retain, nonatomic) EFDebouncer *threadRecomputationDebouncer; // ivar: _threadRecomputationDebouncer
@property (retain, nonatomic) NSObject<EFScheduler> *threadRecomputationScheduler; // ivar: _threadRecomputationScheduler
@property (readonly, nonatomic) EDThreadScopeManager *threadScopeManager; // ivar: _threadScopeManager
@property (readonly, nonatomic) NSObject<EMVIPManager> *vipManager; // ivar: _vipManager


+(id)log;
+(id)signpostLog;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
+(id)threadMailboxesTableSchema;
+(id)threadRecipientsTableSchema;
+(id)threadScopesTableSchema;
+(id)threadSendersTableSchema;
+(id)threadsTableSchema;
-(BOOL)_addThreadScopeToDatabase:(id)arg0 needsUpdate:(BOOL)arg1 lastViewedDate:(id)arg2 updateThreadScopeManager:(BOOL)arg3 ;
-(BOOL)_addThreadScopeToDatabase:(id)arg0 withMailboxDatabaseID:(NSInteger)arg1 filterPredicate:(NSInteger)arg2 needsUpdate:(BOOL)arg3 lastViewedDate:(id)arg4 updateThreadScopeManager:(BOOL)arg5 connection:(id)arg6 ;
-(BOOL)_addThreadScopeToDatabaseWithMailboxType:(id)arg0 filterPredicate:(NSInteger)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 connection:(id)arg4 ;
-(BOOL)_deleteMailboxesFromWrappedMessages:(id)arg0 fromThreadWithDatabaseID:(id)arg1 messageThreadExpression:(id)arg2 ;
-(BOOL)_deleteRecipientsOfType:(NSUInteger)arg0 fromThreadWithDatabaseID:(id)arg1 messageThreadExpression:(id)arg2 ;
-(BOOL)_deleteSendersFromThreadWithDatabaseID:(id)arg0 messageThreadExpression:(id)arg1 ;
-(BOOL)_enumerateThreadObjectIDsForThreadScope:(id)arg0 filterClause:(id)arg1 sortDescriptors:(id)arg2 batchBlock:(id)arg3 ;
-(BOOL)_isThreadScopePrecomputed:(id)arg0 shouldMigrate:(*BOOL)arg1 ;
-(BOOL)_messagesAreJournaledForThreadWithObjectID:(id)arg0 ;
-(BOOL)_recalculateNewestReadMessageForThreadObjectID:(id)arg0 threadScopeDatabaseID:(NSInteger)arg1 ;
-(BOOL)_updateNewestReadMessageWithWrappedMessage:(id)arg0 threadExpression:(id)arg1 ;
-(BOOL)addThreadScopeToDatabase:(id)arg0 needsUpdate:(BOOL)arg1 lastViewedDate:(id)arg2 ;
-(BOOL)addThreads:(id)arg0 ;
-(BOOL)beginMigratingThreadScope:(id)arg0 ;
-(BOOL)deleteThreadsWithObjectIDs:(id)arg0 ;
-(BOOL)endMigratingThreadScope:(id)arg0 ;
-(BOOL)setPriorityForDisplayMessageSenderForThreadObjectID:(id)arg0 ;
-(BOOL)threadScopeManager:(id)arg0 evictThreadScopesWithDatabaseIDs:(id)arg1 completionBlock:(id)arg2 ;
-(BOOL)threadScopeManager:(id)arg0 isValidMailboxObjectID:(id)arg1 ;
-(BOOL)threadScopeManager:(id)arg0 mailboxScopeExists:(id)arg1 ;
-(NSInteger)_databaseIDForThreadObjectID:(id)arg0 ;
-(NSUInteger)persistenceStateForThreadScope:(id)arg0 ;
-(id)_addedMailboxObjectIDsForActivatedAccount:(id)arg0 ;
-(id)_addressesFromMessageAddressesStatement:(id)arg0 ;
-(id)_addressesFromSelectStatement:(id)arg0 additionalRowHandling:(id)arg1 ;
-(id)_columnForSortDescriptor:(id)arg0 ;
-(id)_comparisonExpressionForSortDescriptors:(id)arg0 conversationID:(NSInteger)arg1 threadExpression:(id)arg2 threadScopeDatabaseID:(NSInteger)arg3 connection:(id)arg4 ;
-(id)_countMessagesForExpression:(id)arg0 ;
-(id)_deleteWrappedMessages:(id)arg0 fromThreadWithObjectID:(id)arg1 threadScopeDatabaseID:(NSInteger)arg2 generationWindow:(id)arg3 ;
-(id)_expressionForThreadScope:(id)arg0 ;
-(id)_filteredPersistedMessagesForPersistedMessages:(id)arg0 ;
-(id)_flagColorsFromRow:(id)arg0 ;
-(id)_inactiveMailboxDatabaseIDsForMailboxScope:(id)arg0 forThreadScopeDatabaseID:(id)arg1 ;
-(id)_mailboxDatabaseIDsForWrappedMessages:(id)arg0 ;
-(id)_mailboxScopeForThreadScope:(id)arg0 andFilterPredicate:(*NSInteger)arg1 ;
-(id)_mailboxesForThreadDatabaseID:(id)arg0 ;
-(id)_messageActiveFollowUpExpressionForSentMailboxObjectIDs:(id)arg0 ;
-(id)_messageFilterExpressionForFilterPredicate:(id)arg0 ;
-(id)_messageMailboxesExpressionForMailboxObjectIDs:(id)arg0 ;
-(id)_messageMailboxesExpressionForMailboxScope:(id)arg0 ;
-(id)_messageMailboxesExpressionForMailboxType:(NSInteger)arg0 ;
-(id)_messageThreadExpressionForThreadObjectID:(id)arg0 ;
-(id)_messageThreadExpressionForThreadScope:(id)arg0 conversationExpression:(id)arg1 ;
-(id)_messageThreadExpressionForThreadScope:(id)arg0 objectIDs:(id)arg1 ;
-(id)_nonJournaledSubjectForThreadWithObjectID:(id)arg0 connection:(id)arg1 ;
-(id)_persistedMessagesByPossibleThreadScopeForPersistedMessages:(id)arg0 ;
-(id)_persistedMessagesForMailboxScope:(id)arg0 messageExpression:(id)arg1 ;
-(id)_persistenceIsChangingFlags:(id)arg0 wrappedMessages:(id)arg1 threadObjectID:(id)arg2 threadScopeDatabaseID:(NSInteger)arg3 ;
-(id)_recalculateDisplayMessageForThreadObjectID:(id)arg0 threadScopeDatabaseID:(NSInteger)arg1 ;
-(id)_recipientAddressesExpressionForRecipientType:(NSUInteger)arg0 messages:(id)arg1 ;
-(id)_recipientsOfType:(NSUInteger)arg0 forThreadDatabaseID:(id)arg1 ;
-(id)_recipientsOfType:(NSUInteger)arg0 fromMessagesForThreadObjectID:(id)arg1 ;
-(id)_senderAddressesExpressionForMessages:(id)arg0 ;
-(id)_sendersForThreadDatabaseID:(id)arg0 senderBucket:(*NSInteger)arg1 ;
-(id)_sendersFromMessagesForThreadObjectID:(id)arg0 ;
-(id)_statementForOldestThreadInMailbox:(id)arg0 threadScope:(id)arg1 createMailboxDatabaseIDIfNecessary:(BOOL)arg2 ;
-(id)_threadDatabaseIDExpressionForThreadScopeDatabaseID:(NSInteger)arg0 conversation:(NSInteger)arg1 ;
-(id)_threadExpressionForThreadScopeDatabaseID:(NSInteger)arg0 conversation:(NSInteger)arg1 ;
-(id)_threadForWrappedMessages:(id)arg0 objectID:(id)arg1 ;
-(id)_threadQueryForThreadScope:(id)arg0 ;
-(id)_threadScopedToResetForActivatedAccount:(id)arg0 ;
-(id)_updateBasicPropertiesAfterDeleteForThreadObjectID:(id)arg0 threadScopeDatabaseID:(NSInteger)arg1 ;
-(id)_updateThreadForDeleteWithObjectID:(id)arg0 threadScopeDatabaseID:(NSInteger)arg1 generationWindow:(id)arg2 ;
-(id)_upsertForThreadsWithThreadScopeDatabaseID:(NSInteger)arg0 conversation:(NSInteger)arg1 ;
-(id)_wrappedMessageForPersistedMessages:(id)arg0 threadScope:(id)arg1 messageFilter:(id)arg2 ;
-(id)_wrappedMessagesByThreadScopeForPersistedMessages:(id)arg0 messageFilter:(id)arg1 ;
-(id)changeForThreadWithObjectID:(id)arg0 changedKeyPaths:(id)arg1 ;
-(id)initWithMessagePersistence:(id)arg0 database:(id)arg1 hookRegistry:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4 ;
-(id)nextExistingThreadObjectIDForThreadObjectID:(id)arg0 forSortDescriptors:(id)arg1 excluding:(id)arg2 ;
-(id)oldestThreadObjectIDForMailbox:(id)arg0 threadScope:(id)arg1 ;
-(id)resetThreadScopesForDeactivatedAccount:(id)arg0 ;
-(id)statisticsForThreadScopesWithDatabaseIDs:(id)arg0 ;
-(id)threadForObjectID:(id)arg0 originatingQuery:(id)arg1 error:(*id)arg2 ;
-(id)threadObjectIDsByNextExistingForThreadObjectIDs:(id)arg0 forSortDescriptors:(id)arg1 excluding:(id)arg2 ;
-(id)threadScopeMatcherForActivatedAccount:(SEL)arg0 ;
-(id)threadScopesByDatabaseID;
-(void)_addKeyPathsForBasicPropertiesChangeToKeyPaths:(id)arg0 ;
-(void)_addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg0 ;
-(void)_addOrderByToThreadSelect:(id)arg0 forSortDescriptors:(id)arg1 ;
-(void)_addPersistedMessages:(id)arg0 journaled:(BOOL)arg1 generationWindow:(id)arg2 ;
-(void)_enumerateThreadScopesUsingBlock:(id)arg0 ;
-(void)_getIndividualMailboxScopes:(*id)arg0 unifiedMailboxThreadScopes:(*id)arg1 forAccount:(id)arg2 ;
-(void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg0 block:(id)arg1 ;
// -(void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg0 messageFilter:(id)arg1 writeBlock:(unk)arg2  ;
-(void)_persistenceIsChangingFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)_persistenceIsDeletingMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)_recomputeThreads;
-(void)_reportSenderBucketChangeForThreadsWithSenderAddresses:(id)arg0 generation:(NSInteger)arg1 ;
-(void)_resetThreadScope:(id)arg0 withDatabaseID:(id)arg1 ;
-(void)_scheduleRecomputationForThread:(id)arg0 reason:(id)arg1 ;
-(void)_writeThreadedMessages:(id)arg0 withChangedKeyPaths:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidAddAddresses:(id)arg0 toSender:(id)arg1 generation:(NSInteger)arg2 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidChangeFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidChangeGlobalMessageID:(NSInteger)arg0 orConversationID:(NSInteger)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeReadLaterDate:(id)arg0 messages:(id)arg1 changeIsRemote:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeSenderBucketForSender:(id)arg0 generation:(NSInteger)arg1 ;
-(void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidDeleteMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidRemoveAddresses:(id)arg0 fromSender:(id)arg1 generation:(NSInteger)arg2 ;
-(void)persistenceDidUpdateDisplayDateForMessages:(id)arg0 changeIsRemote:(BOOL)arg1 generation:(NSInteger)arg2 ;
-(void)persistenceDidUpdateFollowUpForMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidUpdateProperties:(id)arg0 message:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsAddingMailboxWithDatabaseID:(NSInteger)arg0 objectID:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsAddingMessages:(id)arg0 journaled:(BOOL)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsChangingConversationID:(NSInteger)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsChangingFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsDeletingAllMessagesInMailboxWithURL:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceIsDeletingMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceIsInitializingDatabaseWithConnection:(id)arg0 ;
-(void)persistenceIsUpdatingDisplayDateForMessage:(id)arg0 fromDate:(id)arg1 generation:(NSInteger)arg2 ;
-(void)resetThreadScopedForActivatedAccount:(id)arg0 ;
-(void)resetThreadScopesForMailboxScope:(id)arg0 ;
-(void)setNeedsUpdateForThreadScope:(id)arg0 ;
-(void)test_tearDown;
-(void)threadObjectIDsForThreadScope:(id)arg0 sortDescriptors:(id)arg1 initialBatchSize:(NSUInteger)arg2 journaledObjectIDs:(id)arg3 batchBlock:(id)arg4 ;
-(void)threadScopeManager:(id)arg0 gatherStatisticsForThreadScopesWithDatabaseIDs:(id)arg1 block:(id)arg2 ;
-(void)threadScopeManager:(id)arg0 populateThreadScopesWithBlock:(id)arg1 ;
-(void)updateLastViewedDateForThreadScope:(id)arg0 ;
-(void)verifyConsistencyOfThreadScope:(id)arg0 ;


@end


#endif