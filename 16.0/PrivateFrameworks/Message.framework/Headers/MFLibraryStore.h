// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFLIBRARYSTORE_H
#define MFLIBRARYSTORE_H

@class MFMessageStore, NSString, NSDate;
@protocol MFMailMessageStore;


#import "MFMailboxUid.h"
#import "MailAccount.h"
#import "MFMailMessageLibrary.h"
#import "MFMessageCriterion.h"

@interface MFLibraryStore : MFMessageStore <MFMailMessageStore>

 {
    NSUInteger _state;
    ? _flags;
    MFMailboxUid *_mailbox;
    MailAccount *_account;
    NSUInteger _deletedMessagesSize;
    NSUInteger _deletedMessageCount;
    NSUInteger _generationNumber;
    MFMailMessageLibrary *_library;
    MFMessageCriterion *_criterion;
    NSUInteger _fetchWindow;
    NSUInteger _lastFetchCount;
}


@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) MailAccount *account;
@property (retain, nonatomic) NSDate *earliestReceivedDate; // ivar: _earliestReceivedDate
@property (retain, nonatomic) MFMailMessageLibrary *library;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (readonly, nonatomic) MFMailboxUid *mailboxUid;


+(Class)classForMimePart;
+(Class)headersClass;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)storeWithMailbox:(id)arg0 ;
+(unsigned int)defaultLoadOptions;
-(BOOL)_fetchDataForMimePart:(id)arg0 range:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 consumer:(id)arg3 ;
-(BOOL)allowsAppend;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)canCompact;
-(BOOL)canFetchMessageIDs;
-(BOOL)canFetchSearchResults;
-(BOOL)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(*BOOL)arg5 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg0 ;
-(BOOL)hasMessageForAccount:(id)arg0 ;
-(BOOL)hasMoreFetchableMessages;
-(BOOL)isOpened;
-(BOOL)shouldArchive;
-(BOOL)shouldCancel;
-(BOOL)shouldDeleteInPlace;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg0 ;
-(BOOL)shouldGrowFetchWindow;
-(NSInteger)fetchMessagesWithMessageIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchMobileSynchronously:(NSUInteger)arg0 ;
-(NSInteger)fetchMobileSynchronously:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)_calculateFetchWindowWithAdditionalMultiple:(BOOL)arg0 ;
-(NSUInteger)_fetchWindowMinimum;
-(NSUInteger)_fetchWindowMultiple;
-(NSUInteger)allNonDeletedCountIncludingServerSearch:(BOOL)arg0 andThreadSearch:(BOOL)arg1 ;
-(NSUInteger)fetchWindow;
-(NSUInteger)fetchWindowCap;
-(NSUInteger)growFetchWindow;
-(NSUInteger)serverMessageCount;
-(NSUInteger)serverUnreadOnlyOnServerCount;
-(NSUInteger)totalCount;
-(NSUInteger)unreadCount;
-(id)_cachedBodyDataContainerForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedBodyForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedHeaderDataForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_copyDataFromMimePart:(id)arg0 threshold:(unsigned int)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 partial:(*BOOL)arg3 ;
-(id)_fetchFullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 didDownload:(*BOOL)arg3 ;
-(id)_fetchHeaderDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)_memberMessagesWithCompactionNotification:(id)arg0 ;
-(id)_setOrGetBody:(id)arg0 forMessage:(id)arg1 updateFlags:(BOOL)arg2 ;
-(id)bodyDataForMessage:(id)arg0 isComplete:(*BOOL)arg1 isPartial:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)copyMessagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)copyOfAllMessages;
-(id)copyOfAllMessagesWithOptions:(unsigned int)arg0 ;
-(id)copyOfMessagesInRange:(struct _NSRange )arg0 options:(unsigned int)arg1 ;
-(id)copyOfMessagesInRange:(struct _NSRange )arg0 options:(unsigned int)arg1 generation:(*NSUInteger)arg2 ;
-(id)criterion;
-(id)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)dataPathForMessage:(id)arg0 part:(id)arg1 ;
-(id)dateOfOldestNonIndexedNonSearchResultMessage;
-(id)description;
-(id)filterMessagesByMembership:(id)arg0 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 usePartDatas:(BOOL)arg4 didDownload:(*BOOL)arg5 ;
-(id)headerDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)initWithCriterion:(id)arg0 mailbox:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)initWithMailbox:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg0 ;
-(id)loadMeetingExternalIDForMessage:(id)arg0 ;
-(id)loadMeetingMetadataForMessage:(id)arg0 ;
-(id)messageForMessageID:(id)arg0 options:(unsigned int)arg1 ;
-(id)messageForRemoteID:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 inMailbox:(id)arg1 ;
-(id)messageIdRollCall:(id)arg0 ;
-(id)newObjectCache;
-(id)serverSearchResults;
-(id)setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)setFlagsLocallyFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(id)storeData:(id)arg0 forMimePart:(id)arg1 isComplete:(BOOL)arg2 ;
-(id)storeSearchResultMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 offset:(id)arg2 error:(*id)arg3 ;
-(id)storeSearchResultMatchingSearchText:(id)arg0 criterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(*id)arg4 ;
-(int)archiveDestination;
-(void)_addInvocationToQueue:(id)arg0 ;
-(void)_flushAllMessageData;
-(void)_handleFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)_queueMessageFlagsChanged:(id)arg0 ;
-(void)_queueMessagesAdded:(id)arg0 ;
-(void)_queueMessagesWereCompacted:(id)arg0 ;
-(void)_queueMessagesWillBeCompacted:(id)arg0 ;
-(void)_setNeedsAutosave;
-(void)addCountsForMessages:(id)arg0 shouldUpdateUnreadCount:(BOOL)arg1 ;
-(void)allMessageFlagsDidChange:(id)arg0 ;
-(void)close;
-(void)compactMessages:(id)arg0 ;
-(void)dealloc;
-(void)deleteMessages:(id)arg0 moveToTrash:(BOOL)arg1 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)doCompact;
-(void)handleMessageFlagsChanged:(id)arg0 ;
-(void)handleMessagesAdded:(id)arg0 earliestReceivedDate:(id)arg1 ;
-(void)handleMessagesCompacted:(id)arg0 ;
-(void)handleMessagesWillBeCompacted:(id)arg0 ;
-(void)invalidateFetchWindow;
-(void)messageFlagsDidChange:(id)arg0 flags:(id)arg1 ;
-(void)messagesWereAdded:(id)arg0 ;
-(void)messagesWereAdded:(id)arg0 earliestReceivedDate:(id)arg1 ;
-(void)messagesWereCompacted:(id)arg0 ;
-(void)messagesWereDeleted:(id)arg0 ;
-(void)messagesWillBeCompacted:(id)arg0 ;
-(void)openSynchronously;
-(void)purgeMessages:(id)arg0 ;
-(void)purgeMessagesBeyondLimit:(NSUInteger)arg0 ;
-(void)setFlag:(id)arg0 state:(BOOL)arg1 forMessages:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 forMessage:(id)arg3 ;
-(void)updateMetadata;
-(void)updateServerUnreadCountClosingConnection:(BOOL)arg0 ;
-(void)willFetchMessages;


@end


#endif