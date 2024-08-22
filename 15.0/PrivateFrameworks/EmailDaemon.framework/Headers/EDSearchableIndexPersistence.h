// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDSEARCHABLEINDEXPERSISTENCE_H
#define EDSEARCHABLEINDEXPERSISTENCE_H

@class NSString;
@protocol EFLoggable, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EDSearchableIndexDataSource, EDSearchableIndexHookResponder;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"

@interface EDSearchableIndexPersistence : NSObject <EFLoggable, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EDSearchableIndexDataSource>

 {
    os_unfair_lock_s _lastProcessedAttachmentIDLock;
}


@property (readonly, nonatomic) NSString *additionalFilterClause;
@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<EDSearchableIndexHookResponder> *hookResponder; // ivar: _hookResponder
@property NSInteger lastProcessedAttachmentID; // ivar: _lastProcessedAttachmentID
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;


+(id)log;
+(id)searchableAttachmentsTableSchema;
+(id)searchableMessageTombstonesTableSchema;
+(id)searchableMessagesTableName;
+(id)searchableMessagesTableSchema;
+(id)signpostLog;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(BOOL)_canPerformIncrementalIndexForIdentifier:(id)arg0 indexingType:(NSInteger)arg1 ;
-(NSInteger)indexingTypeForSearchableIndex:(id)arg0 item:(id)arg1 ;
-(id)_assignIndexedAttachmentItems:(id)arg0 transaction:(NSInteger)arg1 connection:(id)arg2 ;
-(id)_assignIndexedItems:(id)arg0 connection:(id)arg1 query:(id)arg2 indexedBindingsGenerator:(id)arg3 ;
-(id)_assignIndexedItems:(id)arg0 transaction:(NSInteger)arg1 connection:(id)arg2 ;
-(id)_attachmentDataForItemsRequiringIndexingExcludingIdentifiers:(id)arg0 limit:(NSUInteger)arg1 cancelationToken:(id)arg2 connection:(id)arg3 ;
-(id)_attachmentDataForMessageWithIdentifier:(id)arg0 connection:(id)arg1 ;
-(id)_attachmentItemsFromAttachmentData:(id)arg0 limit:(NSUInteger)arg1 cancelationToken:(id)arg2 ;
-(id)_identifiersForAttachmentsInTransactions:(id)arg0 usingConnection:(id)arg1 ;
-(id)_identifiersForAttachmentsWithQuery:(id)arg0 usingConnection:(id)arg1 ;
-(id)_identifiersForDeletedAttachmentsUsingConnection:(id)arg0 ;
-(id)_identifiersForDeletedMessagesUsingConnection:(id)arg0 ;
-(id)_identifiersForRemovedItemsUsingConnection:(id)arg0 ;
-(id)_identifiersForTombstonesOfType:(NSInteger)arg0 connection:(id)arg1 ;
-(id)_messageIDTransactionIDDictionaryToVerifyUsingConnection:(id)arg0 count:(NSUInteger)arg1 lastVerifiedMessageID:(NSInteger)arg2 ;
-(id)_messagesRequiringIndexingForType:(NSInteger)arg0 excludingIdentifiers:(id)arg1 limit:(NSInteger)arg2 ;
-(id)_searchableIndexMessageIndexingTypes;
-(id)childIdentifiersToRemoveFromSearchableIndex:(id)arg0 whenRemovingParentIdentifiers:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 hookResponder:(id)arg1 ;
-(id)messagesWhere:(id)arg0 sortedBy:(id)arg1 limit:(NSInteger)arg2 ;
-(id)searchableIndex:(id)arg0 assignTransaction:(NSInteger)arg1 updates:(id)arg2 ;
-(id)searchableIndex:(id)arg0 attachmentItemsForMessageWithIdentifier:(id)arg1 ;
-(id)searchableIndex:(id)arg0 invalidateItemsInTransactions:(id)arg1 ;
-(id)searchableIndexItemsFromMessages:(id)arg0 type:(NSInteger)arg1 ;
-(id)updatesForSearchableIndex:(id)arg0 excludingIdentifiers:(id)arg1 count:(NSUInteger)arg2 cancelationToken:(id)arg3 ;
-(id)verificationDataSamplesForSearchableIndex:(id)arg0 count:(NSUInteger)arg1 lastVerifiedMessageID:(NSInteger)arg2 ;
-(id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg0 ;
-(void)_addTombstonesForIdentifiers:(id)arg0 type:(NSInteger)arg1 connection:(id)arg2 ;
-(void)_assignTombstonesForIdentifiers:(id)arg0 type:(NSInteger)arg1 transaction:(NSInteger)arg2 connection:(id)arg3 ;
-(void)_purgeSpotlightTombstonesBeforeTransaction:(NSInteger)arg0 connection:(id)arg1 ;
-(void)_removeIndexedIdentifiers:(id)arg0 connection:(id)arg1 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg0 attachmentPersistentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(NSInteger)arg4 result:(id)arg5 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg0 messagePersistentID:(id)arg1 name:(id)arg2 mailboxID:(NSInteger)arg3 result:(id)arg4 ;
-(void)clearOrphanedSearchableMessagesFromDatabase;
-(void)searchableIndex:(id)arg0 assignIndexingType:(NSInteger)arg1 forIdentifiers:(id)arg2 ;
-(void)searchableIndex:(id)arg0 invalidateItemsGreaterThanTransaction:(NSInteger)arg1 ;
-(void)searchableIndex:(id)arg0 prepareToIndexAttachmentsForMessageWithIdentifier:(id)arg1 ;
-(void)searchableIndex:(id)arg0 willRemoveIdentifiers:(id)arg1 type:(NSInteger)arg2 ;


@end


#endif