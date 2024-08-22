// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGELIBRARY_H
#define MFMESSAGELIBRARY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MFAttachmentLibraryDataProvider.h"

@interface MFMessageLibrary : NSObject {
    NSString *_path;
    MFAttachmentLibraryDataProvider *_attachmentDataProvider;
}




-(BOOL)canProvideMinimumRemoteID;
-(BOOL)hasCompleteDataForMimePart:(id)arg0 ;
-(BOOL)isBusy;
-(BOOL)isMessageContentsLocallyAvailable:(id)arg0 ;
-(BOOL)libraryExists;
-(BOOL)renameMailboxes:(id)arg0 to:(id)arg1 ;
-(BOOL)shouldCancel;
-(NSInteger)createLibraryIDForAccount:(id)arg0 ;
-(NSInteger)libraryIDForAccount:(id)arg0 ;
-(NSInteger)statusCountDeltaForMailbox:(id)arg0 ;
-(NSUInteger)mostRecentStatusCountForMailbox:(id)arg0 ;
-(NSUInteger)serverUnreadOnlyOnServerCountForMailbox:(id)arg0 ;
-(id)UIDsToDeleteInMailbox:(id)arg0 ;
-(id)accountForMessage:(id)arg0 ;
-(id)addMessages:(id)arg0 withMailbox:(id)arg1 fetchBodies:(BOOL)arg2 newMessagesByOldMessage:(id)arg3 ;
-(id)addMessages:(id)arg0 withMailbox:(id)arg1 fetchBodies:(BOOL)arg2 newMessagesByOldMessage:(id)arg3 remoteIDs:(id)arg4 setFlags:(NSUInteger)arg5 clearFlags:(NSUInteger)arg6 messageFlagsForMessages:(id)arg7 copyFiles:(BOOL)arg8 addPOPUIDs:(BOOL)arg9 dataSectionsByMessage:(id)arg10 ;
-(id)allUIDsInMailbox:(id)arg0 ;
-(id)bodyDataForMessage:(id)arg0 ;
-(id)bodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 ;
-(id)bodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 inRemoteMailbox:(id)arg2 ;
-(id)dataConsumerForMessage:(id)arg0 ;
-(id)dataConsumerForMessage:(id)arg0 isPartial:(BOOL)arg1 ;
-(id)dataConsumerForMessage:(id)arg0 part:(id)arg1 ;
-(id)dataConsumerForMessage:(id)arg0 part:(id)arg1 incomplete:(BOOL)arg2 ;
-(id)dataForMimePart:(id)arg0 isComplete:(*BOOL)arg1 ;
-(id)dataPathForMessage:(id)arg0 ;
-(id)dataPathForMessage:(id)arg0 part:(id)arg1 ;
-(id)dataProvider;
-(id)dateOfNewestNonSearchResultMessageInMailbox:(id)arg0 ;
-(id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg0 ;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg0 ;
-(id)deletedUIDsInMailbox:(id)arg0 ;
-(id)duplicateMessages:(id)arg0 newRemoteIDs:(id)arg1 forMailbox:(id)arg2 setFlags:(NSUInteger)arg3 clearFlags:(NSUInteger)arg4 messageFlagsForMessages:(id)arg5 createNewCacheFiles:(BOOL)arg6 ;
-(id)filterContiguousMessages:(id)arg0 forCriterion:(id)arg1 options:(unsigned int)arg2 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg0 ;
-(id)getDetailsForMessages:(NSUInteger)arg0 absoluteBottom:(NSUInteger)arg1 topOfDesiredRange:(NSUInteger)arg2 range:(struct _NSRange *)arg3 fromMailbox:(id)arg4 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange )arg0 fromMailbox:(id)arg1 ;
-(id)headerDataForMessage:(id)arg0 ;
-(id)hiddenPOPUIDsInMailbox:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)loadMeetingDataForMessage:(id)arg0 ;
-(id)loadMeetingExternalIDForMessage:(id)arg0 ;
-(id)loadMeetingMetadataForMessage:(id)arg0 ;
-(id)mailboxUidForMessage:(id)arg0 ;
-(id)messageWithLibraryID:(unsigned int)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)messageWithMessageID:(id)arg0 inMailbox:(id)arg1 ;
-(id)messageWithMessageID:(id)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)messageWithRemoteID:(id)arg0 inRemoteMailbox:(id)arg1 ;
-(id)messagesForMailbox:(id)arg0 olderThanNumberOfDays:(int)arg1 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 range:(struct _NSRange )arg2 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 range:(struct _NSRange )arg2 success:(*BOOL)arg3 ;
-(id)messagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 success:(*BOOL)arg2 ;
-(id)messagesNeedingSyncConfirmationForMailbox:(id)arg0 ;
-(id)messagesWithMessageIDHeader:(id)arg0 ;
-(id)messagesWithSummariesForMailbox:(id)arg0 fromRowID:(unsigned int)arg1 limit:(unsigned int)arg2 ;
-(id)messagesWithSummariesForMailbox:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg0 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg0 fromRowID:(unsigned int)arg1 limit:(unsigned int)arg2 ;
-(id)metadataForMessage:(id)arg0 ofClass:(Class)arg1 key:(id)arg2 ;
-(id)offlineCacheOperationsForAccount:(NSInteger)arg0 lastTemporaryID:(*unsigned int)arg1 ;
-(id)oldestMessageInMailbox:(id)arg0 ;
-(id)orderedBatchOfMessagesEndingAtRowId:(unsigned int)arg0 limit:(unsigned int)arg1 success:(*BOOL)arg2 ;
-(id)remoteStoreForMessage:(id)arg0 ;
-(id)sequenceIdentifierForMailbox:(id)arg0 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg0 inMailbox:(id)arg1 ;
-(id)serverSearchResultMessagesForMailbox:(id)arg0 ;
-(id)setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)storedIntegerPropertyWithName:(id)arg0 ;
-(id)urlForMailboxID:(unsigned int)arg0 ;
-(unsigned int)allNonDeleteCountForMailbox:(id)arg0 includeServerSearchResults:(BOOL)arg1 includeThreadSearchResults:(BOOL)arg2 ;
-(unsigned int)attachmentCountForMailboxes:(id)arg0 ;
-(unsigned int)deletedCountForMailbox:(id)arg0 ;
-(unsigned int)mailboxIDForURLString:(id)arg0 ;
-(unsigned int)maximumRemoteIDForMailbox:(id)arg0 ;
-(unsigned int)minimumRemoteIDForMailbox:(id)arg0 ;
-(unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg0 ;
-(unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg0 includeServerSearchResults:(BOOL)arg1 includeThreadSearchResults:(BOOL)arg2 ;
-(unsigned int)nonDeletedCountForMailbox:(id)arg0 ;
-(unsigned int)nonDeletedCountForMailbox:(id)arg0 includeServerSearchResults:(BOOL)arg1 includeThreadSearchResults:(BOOL)arg2 ;
-(unsigned int)totalCountForMailbox:(id)arg0 ;
-(unsigned int)unreadCountForAggregatedMailboxes:(id)arg0 ;
-(unsigned int)unreadCountForAggregatedMailboxes:(id)arg0 matchingCriterion:(id)arg1 ;
-(unsigned int)unreadCountForMailbox:(id)arg0 ;
-(unsigned int)unreadCountForMailbox:(id)arg0 matchingCriterion:(id)arg1 ;
-(void)adjustLastSyncStatusCountBy:(NSInteger)arg0 forMailbox:(id)arg1 ;
-(void)appendOfflineCacheOperation:(id)arg0 forAccount:(NSInteger)arg1 lastTemporaryID:(unsigned int)arg2 ;
-(void)appendOfflineCacheReplayData:(id)arg0 forAccountID:(NSInteger)arg1 ;
-(void)closeDatabaseConnections;
-(void)commit;
-(void)compactMailbox:(id)arg0 ;
-(void)compactMessages:(id)arg0 ;
-(void)compactMessages:(id)arg0 permanently:(BOOL)arg1 ;
-(void)consumeOfflineCacheReplayDataForAccount:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)dealloc;
-(void)deleteAccount:(id)arg0 ;
-(void)deleteDataForMessage:(id)arg0 ;
-(void)deleteMailboxes:(id)arg0 account:(id)arg1 ;
-(void)deleteOfflineCacheDataForAccount:(NSInteger)arg0 ;
-(void)deletePOPUID:(id)arg0 inMailbox:(id)arg1 ;
-(void)flagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)invalidateAccount:(id)arg0 ;
-(void)lockDBForWriting;
-(void)markOfflineCacheOperationAsComplete:(id)arg0 ;
-(void)postFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)postOldFlags:(NSUInteger)arg0 newFlags:(NSUInteger)arg1 forMessage:(id)arg2 ;
-(void)removeAllMessagesFromMailbox:(id)arg0 removeMailbox:(BOOL)arg1 andNotify:(BOOL)arg2 ;
-(void)sendMessagesMatchingCriterion:(id)arg0 to:(id)arg1 options:(unsigned int)arg2 ;
-(void)sendMessagesMatchingCriterion:(id)arg0 to:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange )arg3 ;
-(void)setData:(id)arg0 forMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(void)setFlags:(NSUInteger)arg0 forMessage:(id)arg1 ;
-(void)setFlagsForMessages:(id)arg0 ;
-(void)setFlagsForMessages:(id)arg0 mask:(NSUInteger)arg1 ;
-(void)setFlagsFromDictionary:(id)arg0 forMessagesInMailboxURLString:(id)arg1 ;
-(void)setLastSyncAndMostRecentStatusCount:(NSUInteger)arg0 forMailbox:(id)arg1 ;
-(void)setMessage:(id)arg0 isPartial:(BOOL)arg1 ;
-(void)setMostRecentStatusCount:(NSUInteger)arg0 forMailbox:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 forMessage:(id)arg3 ;
-(void)setSequenceIdentifier:(id)arg0 forMailbox:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg0 forMessageWithLibraryID:(unsigned int)arg1 ;
-(void)setSequenceIdentifier:(id)arg0 forMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setServerUnreadOnlyOnServerCount:(NSUInteger)arg0 forMailbox:(id)arg1 ;
-(void)setStoredIntegerPropertyWithName:(id)arg0 value:(id)arg1 ;
-(void)setSummary:(id)arg0 forMessage:(id)arg1 ;
-(void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg0 externalConversationID:(NSInteger)arg1 ;
-(void)updateFlagsForMessagesInPlace:(id)arg0 success:(*BOOL)arg1 ;
-(void)updateMessage:(id)arg0 withMetadata:(id)arg1 ;
-(void)updateThreadingInfoForMessage:(id)arg0 fromHeaders:(id)arg1 ;


@end


#endif