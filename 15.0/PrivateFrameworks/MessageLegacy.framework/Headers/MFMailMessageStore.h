// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILMESSAGESTORE_H
#define MFMAILMESSAGESTORE_H

@class MFMessageStore;


#import "MFMailboxUid.h"
#import "MailAccount.h"
#import "MFActivityMonitor.h"

@interface MFMailMessageStore : MFMessageStore {
    NSUInteger _state;
    ? _flags;
    MFMailboxUid *_mailboxUid;
    MailAccount *_account;
    NSUInteger _deletedMessagesSize;
    NSUInteger _deletedMessageCount;
    NSUInteger _unreadMessageCount;
    NSUInteger _generationNumber;
    NSUInteger _lastFetchCount;
    MFActivityMonitor *_openMonitor;
}




+(BOOL)createEmptyStoreForPath:(id)arg0 ;
+(BOOL)createEmptyStoreIfNeededForPath:(id)arg0 ;
+(BOOL)storeAtPathIsWritable:(id)arg0 ;
+(Class)classForMimePart;
+(Class)headersClass;
+(id)copyMessages:(id)arg0 toMailbox:(id)arg1 markAsRead:(BOOL)arg2 deleteOriginals:(BOOL)arg3 isDeletion:(BOOL)arg4 ;
-(BOOL)_shouldChangeComponentMessageFlags;
-(BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg0 ;
-(BOOL)_updateFlagForMessage:(id)arg0 key:(id)arg1 value:(BOOL)arg2 ;
-(BOOL)allowsAppend;
-(BOOL)canCompact;
-(BOOL)canFetchMessageIDs;
-(BOOL)canFetchSearchResults;
-(BOOL)hasCachedDataForMimePart:(id)arg0 ;
-(BOOL)hasMessageForAccount:(id)arg0 ;
-(BOOL)hasMoreFetchableMessages;
-(BOOL)isDrafts;
-(BOOL)isOpened;
-(BOOL)isReadOnly;
-(BOOL)setPreferredEncoding:(unsigned int)arg0 forMessage:(id)arg1 ;
-(BOOL)shouldArchive;
-(BOOL)shouldDeleteInPlace;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg0 ;
-(BOOL)shouldGrowFetchWindow;
-(BOOL)shouldSetSummaryForMessage:(id)arg0 ;
-(BOOL)supportsArchiving;
-(NSInteger)fetchMessagesMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 ;
-(NSInteger)fetchMessagesWithMessageIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchMessagesWithRemoteIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchMobileSynchronously:(NSUInteger)arg0 ;
-(NSInteger)fetchMobileSynchronously:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)allNonDeletedCountIncludingServerSearch:(BOOL)arg0 andThreadSearch:(BOOL)arg1 ;
-(NSUInteger)appendMessages:(id)arg0 unsuccessfulOnes:(id)arg1 ;
-(NSUInteger)appendMessages:(id)arg0 unsuccessfulOnes:(id)arg1 newMessageIDs:(id)arg2 ;
-(NSUInteger)appendMessages:(id)arg0 unsuccessfulOnes:(id)arg1 newMessageIDs:(id)arg2 newMessages:(id)arg3 ;
-(NSUInteger)appendMessages:(id)arg0 unsuccessfulOnes:(id)arg1 newMessageIDs:(id)arg2 newMessages:(id)arg3 flagsToSet:(id)arg4 ;
-(NSUInteger)fetchWindow;
-(NSUInteger)fetchWindowCap;
-(NSUInteger)growFetchWindow;
-(NSUInteger)indexOfMessage:(id)arg0 ;
-(NSUInteger)nonDeletedCountIncludingServerSearch:(BOOL)arg0 andThreadSearch:(BOOL)arg1 ;
-(NSUInteger)serverMessageCount;
-(NSUInteger)serverNonDeletedCount;
-(NSUInteger)serverUnreadCount;
-(NSUInteger)serverUnreadOnlyOnServerCount;
-(NSUInteger)totalCount;
-(NSUInteger)unreadCount;
-(NSUInteger)unreadCountMatchingCriterion:(id)arg0 ;
-(id)_defaultRouterDestination;
-(id)_fetchHeaderDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)_setOrGetBody:(id)arg0 forMessage:(id)arg1 updateFlags:(BOOL)arg2 ;
-(id)account;
-(id)copyMessagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesMatchingText:(id)arg0 ;
-(id)copyMessagesMatchingText:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)copyOfAllMessages;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg0 limit:(unsigned int)arg1 ;
-(id)copyOfAllMessagesWithOptions:(unsigned int)arg0 ;
-(id)copyOfMessagesInRange:(struct _NSRange )arg0 ;
-(id)description;
-(id)displayName;
-(id)finishRoutingMessages:(id)arg0 routed:(id)arg1 ;
-(id)headerDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)initWithMailboxUid:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)lastViewedMessageDate;
-(id)lastViewedMessageWithOptions:(unsigned int)arg0 ;
-(id)loadMeetingDataForMessage:(id)arg0 ;
-(id)loadMeetingExternalIDForMessage:(id)arg0 ;
-(id)loadMeetingMetadataForMessage:(id)arg0 ;
-(id)mailboxUid;
-(id)messageForMessageID:(id)arg0 options:(unsigned int)arg1 ;
-(id)messageForRemoteID:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 inMailbox:(id)arg1 ;
-(id)messageIdRollCall:(id)arg0 ;
-(id)mutableCopyOfAllMessages;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg0 ;
-(id)setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)setFlagsLocallyFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)status;
-(id)storeData:(id)arg0 forMimePart:(id)arg1 isComplete:(BOOL)arg2 ;
-(id)storePathRelativeToAccount;
-(id)storeSearchResultMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 offset:(id)arg2 error:(*id)arg3 ;
-(id)storeSearchResultMatchingSearchText:(id)arg0 criterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(*id)arg4 ;
-(id)uniqueRemoteIDsForMessages:(id)arg0 ;
-(id)willSetFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(int)archiveDestination;
-(void)_flushAllMessageData;
-(void)_rebuildTableOfContentsSynchronously;
-(void)_setFlagsForMessages:(id)arg0 ;
-(void)allMessageFlagsDidChange:(id)arg0 ;
-(void)cancelOpen;
-(void)close;
-(void)dealloc;
-(void)deleteMessages:(id)arg0 moveToTrash:(BOOL)arg1 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)deletedCount:(*NSUInteger)arg0 andSize:(*NSUInteger)arg1 ;
-(void)didOpen;
-(void)doCompact;
-(void)invalidateFetchWindow;
-(void)messageFlagsDidChange:(id)arg0 flags:(id)arg1 ;
-(void)messagesWereAdded:(id)arg0 ;
-(void)messagesWereAdded:(id)arg0 earliestReceivedDate:(id)arg1 ;
-(void)messagesWereCompacted:(id)arg0 ;
-(void)messagesWereDeleted:(id)arg0 ;
-(void)messagesWillBeCompacted:(id)arg0 ;
-(void)openAsynchronously;
-(void)openSynchronously;
-(void)purgeMessagesBeyondLimit:(NSUInteger)arg0 keepingMessage:(id)arg1 ;
-(void)setFlag:(id)arg0 state:(BOOL)arg1 forMessages:(id)arg2 ;
-(void)setFlagForAllMessages:(id)arg0 state:(BOOL)arg1 ;
-(void)setFlagsCancelled:(id)arg0 forMessages:(id)arg1 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg0 ;
-(void)setLibrary:(id)arg0 ;
-(void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 forMessage:(id)arg3 ;
-(void)structureDidChange;
-(void)undeleteMessages:(id)arg0 ;
-(void)updateMessages:(id)arg0 updateNumberOfAttachments:(BOOL)arg1 ;
-(void)updateServerUnreadCountClosingConnection:(BOOL)arg0 ;
-(void)writeUpdatedMessageDataToDisk;


@end


#endif