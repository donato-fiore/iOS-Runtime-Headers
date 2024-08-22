// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMESSAGEPERSISTENCE_H
#define EDMESSAGEPERSISTENCE_H

@class NSNumber, NSString;
@protocol EFLoggable, EFSignpostable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDPersistenceHookRegistry.h"
#import "EDMailboxPersistence.h"
#import "EDMessageTransformer.h"
#import "EDMessagePersistenceStatistics.h"

@interface EDMessagePersistence : NSObject <EFLoggable, EFSignpostable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter>



@property (retain, nonatomic) NSNumber *cachedMetadataEstimatedRowCount; // ivar: _cachedMetadataEstimatedRowCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedMetadataIsolation; // ivar: _cachedMetadataIsolation
@property (nonatomic) int cachedMetadataUpdatesSinceLastCheck; // ivar: _cachedMetadataUpdatesSinceLastCheck
@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, weak, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (retain, nonatomic) EDMessageTransformer *messageTransformer; // ivar: _messageTransformer
@property (readonly, nonatomic) EDMessagePersistenceStatistics *persistenceStatistics; // ivar: _persistenceStatistics
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;


+(NSInteger)_databaseIDFromSelect:(id)arg0 connection:(id)arg1 ;
+(NSInteger)databaseIDForEmailAddress:(id)arg0 connection:(id)arg1 ;
+(id)_addressesTableSchema;
+(id)_brandIndicatorsTableSchema;
+(id)_cachedMetadataTableSchema;
+(id)_messageReferencesTableSchema;
+(id)_protectedMessageDataTableSchema;
+(id)_subjectsTableSchema;
+(id)_summariesTableSchema;
+(id)addJoinsForAddressToSelectComponent:(id)arg0 withSourceAddressColumn:(id)arg1 ;
+(id)addressesTableName;
+(id)allDatabaseIDsForSimpleAddresses:(id)arg0 connection:(id)arg1 ;
+(id)bitExpressionForAttachments;
+(id)bitExpressionForConversationFlag:(NSUInteger)arg0 ;
+(id)log;
+(id)messageGlobalDataTableName;
+(id)messageGlobalDataTableSchema;
+(id)messagesDateReceivedColumnName;
+(id)messagesDisplayDateColumnName;
+(id)messagesTableName;
+(id)objectPropertyMapperForSchema:(id)arg0 protectedSchema:(id)arg1 ;
+(id)partialMessagesTableSchemaAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
+(id)protectedTablesAndForeignKeysToResolve:(*id)arg0 ;
+(id)recipientsTableSchemaAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
+(id)selectAddressesStatementWithResultColumns:(*id)arg0 ;
+(id)signpostLog;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
// -(BOOL)compressDirectory:(id)arg0 shouldCancel:(id)arg1 error:(unk)arg2  ;
-(BOOL)compressFile:(id)arg0 error:(*id)arg1 ;
-(NSInteger)addBrandIndicatorWithData:(id)arg0 ;
-(NSInteger)countOfMessageStatement:(id)arg0 ;
-(NSInteger)countOfMessagesMatchingQuery:(id)arg0 ;
-(NSInteger)countOfMessagesWithGlobalMessageID:(NSInteger)arg0 matchingQuery:(id)arg1 ;
-(NSInteger)globalIDForMessageIDHash:(id)arg0 ;
-(NSInteger)globalIDForMessageIDHeader:(id)arg0 ;
-(NSInteger)globalIDForMessageWithDatabaseID:(NSInteger)arg0 mailboxScope:(*id)arg1 ;
-(id)_cachedMetadataJSONForKey:(id)arg0 globalMessageID:(NSInteger)arg1 ;
-(id)_databaseIDsDictionaryForGlobalMessageIDs:(id)arg0 mailboxScope:(id)arg1 ;
-(id)_groupMessageObjectIDsByMailboxScope:(id)arg0 ;
-(id)_threadQueryForThreadObjectID:(id)arg0 ;
-(id)brandIndicatorForDatabaseID:(NSInteger)arg0 ;
-(id)brandIndicatorForURL:(id)arg0 ;
-(id)brandIndicatorsForURLs:(id)arg0 ;
-(id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)arg0 ;
-(id)cachedMetadataJSONForKey:(id)arg0 messageID:(id)arg1 ;
-(id)collectStatistics;
-(id)completeCachedMetadataJSONForGlobalMessageID:(NSInteger)arg0 ;
-(id)databaseIDsDictionaryForMessageObjectIDs:(id)arg0 ;
-(id)enabledAccountMailboxesExpression;
-(id)groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg0 variable:(id)arg1 ;
-(id)initWithMailboxPersistence:(id)arg0 database:(id)arg1 hookRegistry:(id)arg2 userProfileProvider:(id)arg3 blockedSenderManager:(id)arg4 vipReader:(id)arg5 ;
-(id)messageObjectIDCriterionExpressionForPredicateValue:(id)arg0 ;
-(id)messageObjectIDForURL:(id)arg0 ;
-(id)messageObjectIDsForSearchableItemIdentifiers:(id)arg0 ;
-(id)messagesForMessageObjectIDs:(id)arg0 missedMessageObjectIDs:(*id)arg1 ;
-(id)messagesForPersistedMessages:(id)arg0 mailboxScope:(id)arg1 ;
-(id)messagesMatchingQuery:(id)arg0 ;
-(id)messagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 ;
-(id)messagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 cancelationToken:(id)arg2 ;
-(id)persistedMessageForOutgoingMessage:(id)arg0 isDraft:(BOOL)arg1 ;
-(id)persistedMessageIDsForGlobalMessageIDs:(id)arg0 ;
-(id)persistedMessageIDsForMessagesWithFollowUpsForConversationIDs:(id)arg0 ;
-(id)persistedMessagesForDatabaseIDs:(id)arg0 requireProtectedData:(BOOL)arg1 temporarilyUnavailableDatabaseIDs:(*id)arg2 ;
-(id)persistedMessagesForMessageObjectIDs:(id)arg0 requireProtectedData:(BOOL)arg1 temporarilyUnavailableMessageObjectIDs:(*id)arg2 ;
-(id)persistedMessagesForObjectIDs:(id)arg0 requireProtectedData:(BOOL)arg1 ;
-(id)persistedMessagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 ;
-(id)queryWithExpandedMailboxesFromQuery:(id)arg0 ;
-(id)requestContentForMessageObjectID:(id)arg0 requestID:(NSUInteger)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id)arg4 ;
-(id)requestSummaryForMessageObjectID:(id)arg0 ;
-(id)retrieveFollowUpJsonStringForModelEvaluationForSuggestionsForMessages:(id)arg0 ;
-(id)sortableMessagesForPersistedMessages:(id)arg0 mailboxScope:(id)arg1 ;
-(id)sortableMessagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 ;
-(id)undownloadedBrandIndicatorsWithLimit:(NSUInteger)arg0 ;
-(id)validMailboxesForPrediction;
-(void)_checkCachedMetadataRowLimitWithConnection:(id)arg0 ;
-(void)_checkForFollowUpExpirationWithQuery:(id)arg0 ;
-(void)_setCachedMetadataJSON:(id)arg0 forKey:(id)arg1 globalMessageID:(NSInteger)arg2 ;
-(void)collectStatisticsWithStatistics:(id)arg0 ;
-(void)iterateMessagesMatchingQuery:(id)arg0 batchSize:(NSInteger)arg1 firstBatchSize:(NSInteger)arg2 limit:(NSInteger)arg3 cancelationToken:(id)arg4 handler:(id)arg5 ;
-(void)iterateMessagesMatchingSmartSortQuery:(id)arg0 limit:(NSInteger)arg1 handler:(id)arg2 ;
-(void)iteratePersistedMessagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 cancelationToken:(id)arg2 handler:(id)arg3 ;
-(void)performDatabaseReadBlock:(id)arg0 ;
-(void)performDatabaseWorkInBlockWithHighPriority:(id)arg0 ;
-(void)persistFollowUp:(id)arg0 forMessages:(id)arg1 ;
-(void)reconcileJournalWithCompletionBlock:(id)arg0 ;
-(void)removeBrandIndicatorForURL:(id)arg0 ;
-(void)setBrandIndicator:(id)arg0 forURL:(id)arg1 ;
-(void)setBrandIndicatorDatabaseID:(NSInteger)arg0 location:(id)arg1 forMessages:(id)arg2 ;
-(void)setCachedMetadataJSON:(id)arg0 forKey:(id)arg1 messageID:(id)arg2 ;
-(void)setContentProtectionForAttachmentFile:(id)arg0 ;
-(void)updateBeforeDisplayForMessagesMatchingQuery:(id)arg0 ;
-(void)updateBeforeDisplayForPersistedMessages:(id)arg0 ;
-(void)updateDisplayDateForPersistedMessage:(id)arg0 displayDate:(id)arg1 changeIsRemote:(BOOL)arg2 ;


@end


#endif