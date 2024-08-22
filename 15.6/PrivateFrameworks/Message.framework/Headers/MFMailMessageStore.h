// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILMESSAGESTORE_H
#define MFMAILMESSAGESTORE_H

@class MFMessageStore;


#import "MFMailboxUid.h"
#import "MailAccount.h"

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
}




+(BOOL)createEmptyStoreForPath:(id)arg0 ;
+(BOOL)createEmptyStoreIfNeededForPath:(id)arg0 ;
+(BOOL)storeAtPathIsWritable:(id)arg0 ;
+(Class)classForMimePart;
+(Class)headersClass;
-(BOOL)_updateFlagForMessage:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(BOOL)allowsAppend;
-(BOOL)canCompact;
-(BOOL)canFetchMessageIDs;
-(BOOL)canFetchSearchResults;
-(BOOL)hasMessageForAccount:(id)arg0 ;
-(BOOL)hasMoreFetchableMessages;
-(BOOL)isOpened;
-(BOOL)shouldArchive;
-(BOOL)shouldDeleteInPlace;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg0 ;
-(BOOL)shouldGrowFetchWindow;
-(NSInteger)fetchMessagesWithMessageIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchMessagesWithRemoteIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchMobileSynchronously:(NSUInteger)arg0 ;
-(NSInteger)fetchMobileSynchronously:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)allNonDeletedCountIncludingServerSearch:(BOOL)arg0 andThreadSearch:(BOOL)arg1 ;
-(NSUInteger)fetchWindow;
-(NSUInteger)fetchWindowCap;
-(NSUInteger)growFetchWindow;
-(NSUInteger)nonDeletedCountIncludingServerSearch:(BOOL)arg0 andThreadSearch:(BOOL)arg1 ;
-(NSUInteger)serverMessageCount;
-(NSUInteger)serverNonDeletedCount;
-(NSUInteger)serverUnreadCount;
-(NSUInteger)serverUnreadOnlyOnServerCount;
-(NSUInteger)totalCount;
-(NSUInteger)unreadCount;
-(NSUInteger)unreadCountMatchingCriterion:(id)arg0 ;
-(id)_fetchHeaderDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)_setOrGetBody:(id)arg0 forMessage:(id)arg1 updateFlags:(BOOL)arg2 ;
-(id)account;
-(id)copyMessagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)copyOfAllMessages;
-(id)copyOfAllMessagesWithOptions:(unsigned int)arg0 ;
-(id)description;
-(id)headerDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)initWithMailboxUid:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg0 ;
-(id)loadMeetingExternalIDForMessage:(id)arg0 ;
-(id)loadMeetingMetadataForMessage:(id)arg0 ;
-(id)mailboxUid;
-(id)messageForMessageID:(id)arg0 options:(unsigned int)arg1 ;
-(id)messageForRemoteID:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 inMailbox:(id)arg1 ;
-(id)messageIdRollCall:(id)arg0 ;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg0 ;
-(id)setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)setFlagsLocallyFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(id)storeData:(id)arg0 forMimePart:(id)arg1 isComplete:(BOOL)arg2 ;
-(id)storeSearchResultMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 offset:(id)arg2 error:(*id)arg3 ;
-(id)storeSearchResultMatchingSearchText:(id)arg0 criterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(*id)arg4 ;
-(id)uniqueRemoteIDsForMessages:(id)arg0 ;
-(int)archiveDestination;
-(void)_flushAllMessageData;
-(void)allMessageFlagsDidChange:(id)arg0 ;
-(void)close;
-(void)deleteMessages:(id)arg0 moveToTrash:(BOOL)arg1 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)doCompact;
-(void)invalidateFetchWindow;
-(void)messageFlagsDidChange:(id)arg0 flags:(id)arg1 ;
-(void)messagesWereAdded:(id)arg0 ;
-(void)messagesWereAdded:(id)arg0 earliestReceivedDate:(id)arg1 ;
-(void)messagesWereCompacted:(id)arg0 ;
-(void)messagesWereDeleted:(id)arg0 ;
-(void)messagesWillBeCompacted:(id)arg0 ;
-(void)openSynchronously;
-(void)purgeMessagesBeyondLimit:(NSUInteger)arg0 keepingMessage:(id)arg1 ;
-(void)setFlag:(id)arg0 state:(BOOL)arg1 forMessages:(id)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg0 ;
-(void)setLibrary:(id)arg0 ;
-(void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 forMessage:(id)arg3 ;
-(void)updateServerUnreadCountClosingConnection:(BOOL)arg0 ;


@end


#endif