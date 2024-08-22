// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDMESSAGEPERSISTENCE_H
#define EDMESSAGEPERSISTENCE_H

@class NSNumber, NSString;
@protocol EFLoggable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDMailboxPersistence.h"
#import "EDMessageTransformer.h"
#import "EDMessagePersistenceStatistics.h"

@interface EDMessagePersistence : NSObject <EFLoggable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter>



@property (retain, nonatomic) NSNumber *cachedMetadataEstimatedRowCount; // ivar: _cachedMetadataEstimatedRowCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedMetadataIsolation; // ivar: _cachedMetadataIsolation
@property (nonatomic) int cachedMetadataUpdatesSinceLastCheck; // ivar: _cachedMetadataUpdatesSinceLastCheck
@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (retain, nonatomic) EDMessageTransformer *messageTransformer; // ivar: _messageTransformer
@property (readonly, nonatomic) EDMessagePersistenceStatistics *persistenceStatistics; // ivar: _persistenceStatistics
@property (readonly) Class superclass;


+(id)_cachedMetadataTableSchema;
+(id)_messageReferencesTableSchema;
+(id)addressesTableName;
+(id)addressesTableSchema;
+(id)bitExpressionForAttachments;
+(id)bitExpressionForConversationFlag:(NSUInteger)arg0 ;
+(id)log;
+(id)messageGlobalDataTableName;
+(id)messageGlobalDataTableSchema;
+(id)messagesTableName;
+(id)objectPropertyMapperForSchema:(id)arg0 protectedSchema:(id)arg1 ;
+(id)partialMessagesTableSchemaAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
+(id)protectedMessageDataTableSchema;
+(id)protectedTablesAndForeignKeysToResolve:(*id)arg0 ;
+(id)recipientsTableSchemaAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
+(id)subjectsTableSchema;
+(id)summariesTableSchema;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
// -(BOOL)compressDirectory:(id)arg0 shouldCancel:(id)arg1 error:(unk)arg2  ;
-(BOOL)compressFile:(id)arg0 error:(*id)arg1 ;
-(NSInteger)countOfMessagesMatchingQuery:(id)arg0 ;
-(NSInteger)countOfMessagesWithGlobalMessageID:(NSInteger)arg0 matchingQuery:(id)arg1 ;
-(NSInteger)globalIDForMessageIDHeader:(id)arg0 ;
-(NSInteger)globalIDForMessageWithDatabaseID:(NSInteger)arg0 mailboxScope:(*id)arg1 ;
-(id)_cachedMetadataJSONForKey:(id)arg0 globalMessageID:(NSInteger)arg1 ;
-(id)_databaseIDsDictionaryForGlobalMessageIDs:(id)arg0 mailboxScope:(id)arg1 ;
-(id)_groupMessageObjectIDsByMailboxScope:(id)arg0 ;
-(id)_threadQueryForThreadObjectID:(id)arg0 ;
-(id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)arg0 ;
-(id)cachedMetadataJSONForKey:(id)arg0 messageID:(id)arg1 ;
-(id)collectStatistics;
-(id)databaseIDsDictionaryForMessageObjectIDs:(id)arg0 ;
-(id)enabledAccountMailboxesExpression;
-(id)groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg0 variable:(id)arg1 ;
-(id)initWithMailboxPersistence:(id)arg0 database:(id)arg1 userProfileProvider:(id)arg2 blockedSenderManager:(id)arg3 vipReader:(id)arg4 ;
-(id)messageObjectIDCriterionExpressionForPredicateValue:(id)arg0 ;
-(id)messageObjectIDForURL:(id)arg0 ;
-(id)messagesForMessageObjectIDs:(id)arg0 missedMessageObjectIDs:(*id)arg1 ;
-(id)messagesForPersistedMessages:(id)arg0 mailboxScope:(id)arg1 ;
-(id)messagesMatchingQuery:(id)arg0 ;
-(id)messagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 ;
-(id)messagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 cancelationToken:(id)arg2 ;
-(id)persistedMessageForOutgoingMessage:(id)arg0 isDraft:(BOOL)arg1 ;
-(id)persistedMessageIDsForGlobalMessageIDs:(id)arg0 ;
-(id)persistedMessagesForDatabaseIDs:(id)arg0 requireProtectedData:(BOOL)arg1 temporarilyUnavailableDatabaseIDs:(*id)arg2 ;
-(id)persistedMessagesForMessageObjectIDs:(id)arg0 requireProtectedData:(BOOL)arg1 temporarilyUnavailableMessageObjectIDs:(*id)arg2 ;
-(id)persistedMessagesForObjectIDs:(id)arg0 requireProtectedData:(BOOL)arg1 ;
-(id)persistedMessagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 ;
-(id)queryWithExpandedMailboxesFromQuery:(id)arg0 ;
-(id)requestContentForMessageObjectID:(id)arg0 requestID:(NSUInteger)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id)arg4 ;
-(id)requestSummaryForMessageObjectID:(id)arg0 ;
-(id)validMailboxesForPrediction;
-(void)_checkCachedMetadataRowLimitWithConnection:(id)arg0 ;
-(void)_setCachedMetadataJSON:(id)arg0 forKey:(id)arg1 globalMessageID:(NSInteger)arg2 ;
-(void)collectStatisticsWithStatistics:(id)arg0 ;
-(void)iterateMessagesMatchingQuery:(id)arg0 batchSize:(NSInteger)arg1 firstBatchSize:(NSInteger)arg2 limit:(NSInteger)arg3 cancelationToken:(id)arg4 handler:(id)arg5 ;
-(void)iterateMessagesMatchingSmartSortQuery:(id)arg0 limit:(NSInteger)arg1 handler:(id)arg2 ;
-(void)iteratePersistedMessagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 cancelationToken:(id)arg2 handler:(id)arg3 ;
-(void)performDatabaseReadBlock:(id)arg0 ;
-(void)performDatabaseWorkInBlockWithHighPriority:(id)arg0 ;
-(void)reconcileJournalWithCompletionBlock:(id)arg0 ;
-(void)setCachedMetadataJSON:(id)arg0 forKey:(id)arg1 messageID:(id)arg2 ;


@end


#endif