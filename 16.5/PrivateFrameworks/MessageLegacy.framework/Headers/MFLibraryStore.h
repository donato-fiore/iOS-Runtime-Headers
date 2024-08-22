// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFLIBRARYSTORE_H
#define MFLIBRARYSTORE_H

@class NSDate;


#import "MFMailMessageStore.h"
#import "MFMessageLibrary.h"
#import "MFMessageCriterion.h"

@interface MFLibraryStore : MFMailMessageStore {
    MFMessageLibrary *_library;
    MFMessageCriterion *_criterion;
    NSUInteger _serverMessageCount;
    NSUInteger _fetchWindow;
}


@property (retain, nonatomic) NSDate *earliestReceivedDate; // ivar: _earliestReceivedDate


+(BOOL)createEmptyStoreForPath:(id)arg0 ;
+(BOOL)storeAtPathIsWritable:(id)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)storeWithCriterion:(id)arg0 ;
+(id)storeWithMailbox:(id)arg0 ;
+(unsigned int)defaultLoadOptions;
-(BOOL)_fetchDataForMimePart:(id)arg0 range:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 consumer:(id)arg3 ;
-(BOOL)allowsAppend;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)canCompact;
-(BOOL)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(*BOOL)arg5 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg0 ;
-(BOOL)hasMessageForAccount:(id)arg0 ;
-(BOOL)shouldCancel;
-(BOOL)shouldGrowFetchWindow;
-(NSUInteger)_calculateFetchWindowWithAdditionalMultiple:(BOOL)arg0 ;
-(NSUInteger)_fetchWindowMinimum;
-(NSUInteger)_fetchWindowMultiple;
-(NSUInteger)allNonDeletedCountIncludingServerSearch:(BOOL)arg0 andThreadSearch:(BOOL)arg1 ;
-(NSUInteger)appendMessages:(id)arg0 unsuccessfulOnes:(id)arg1 newMessageIDs:(id)arg2 newMessages:(id)arg3 flagsToSet:(id)arg4 ;
-(NSUInteger)fetchWindow;
-(NSUInteger)fetchWindowCap;
-(NSUInteger)growFetchWindow;
-(NSUInteger)indexOfMessage:(id)arg0 ;
-(NSUInteger)nonDeletedCountIncludingServerSearch:(BOOL)arg0 andThreadSearch:(BOOL)arg1 ;
-(NSUInteger)serverUnreadOnlyOnServerCount;
-(NSUInteger)totalCount;
-(NSUInteger)unreadCount;
-(NSUInteger)unreadCountMatchingCriterion:(id)arg0 ;
-(id)URLString;
-(id)_cachedBodyDataContainerForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedBodyForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedHeaderDataForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_copyDataFromMimePart:(id)arg0 threshold:(unsigned int)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 partial:(*BOOL)arg3 ;
-(id)_fetchFullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 didDownload:(*BOOL)arg3 ;
-(id)_fetchHeaderDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)_memberMessagesWithCompactionNotification:(id)arg0 ;
-(id)bodyDataForMessage:(id)arg0 isComplete:(*BOOL)arg1 isPartial:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)copyMessagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesMatchingText:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 ;
-(id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1 inMailbox:(id)arg2 ;
-(id)copyOfAllMessages;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg0 limit:(unsigned int)arg1 ;
-(id)copyOfAllMessagesWithOptions:(unsigned int)arg0 ;
-(id)copyOfMessagesInRange:(struct _NSRange )arg0 options:(unsigned int)arg1 ;
-(id)copyOfMessagesInRange:(struct _NSRange )arg0 options:(unsigned int)arg1 generation:(*NSUInteger)arg2 ;
-(id)criterion;
-(id)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)dataPathForMessage:(id)arg0 part:(id)arg1 ;
-(id)dateOfNewestNonSearchResultMessage;
-(id)dateOfOldestNonIndexedNonSearchResultMessage;
-(id)filterMessagesByMembership:(id)arg0 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 usePartDatas:(BOOL)arg4 didDownload:(*BOOL)arg5 ;
-(id)initWithCriterion:(id)arg0 ;
-(id)initWithCriterion:(id)arg0 mailbox:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)initWithMailbox:(id)arg0 ;
-(id)initWithMailboxUid:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)library;
-(id)mailbox;
-(id)messageForMessageID:(id)arg0 options:(unsigned int)arg1 ;
-(id)messageWithLibraryID:(unsigned int)arg0 options:(unsigned int)arg1 ;
-(id)mutableCopyOfAllMessages;
-(id)newObjectCache;
-(id)serverSearchResults;
-(id)setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)setFlagsLocallyFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)storeData:(id)arg0 forMimePart:(id)arg1 isComplete:(BOOL)arg2 ;
-(void)_addInvocationToQueue:(id)arg0 ;
-(void)_handleFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)_queueMessageFlagsChanged:(id)arg0 ;
-(void)_queueMessagesAdded:(id)arg0 ;
-(void)_queueMessagesWereCompacted:(id)arg0 ;
-(void)_queueMessagesWillBeCompacted:(id)arg0 ;
-(void)_setNeedsAutosave;
-(void)addCountsForMessages:(id)arg0 shouldUpdateUnreadCount:(BOOL)arg1 ;
-(void)compactMessages:(id)arg0 ;
-(void)dealloc;
-(void)deleteBodyDataForMessage:(id)arg0 ;
-(void)deleteMessages:(id)arg0 moveToTrash:(BOOL)arg1 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)doCompact;
-(void)handleMessageFlagsChanged:(id)arg0 ;
-(void)handleMessagesAdded:(id)arg0 earliestReceivedDate:(id)arg1 ;
-(void)handleMessagesCompacted:(id)arg0 ;
-(void)handleMessagesWillBeCompacted:(id)arg0 ;
-(void)invalidateFetchWindow;
-(void)messagesWereAdded:(id)arg0 earliestReceivedDate:(id)arg1 ;
-(void)openSynchronously;
-(void)purgeMessages:(id)arg0 ;
-(void)purgeMessagesBeyondLimit:(NSUInteger)arg0 keepingMessage:(id)arg1 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg0 ;
-(void)setLibrary:(id)arg0 ;
-(void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 forMessage:(id)arg3 ;
-(void)updateMetadata;
-(void)updateUserInfoToLatestValues;
-(void)willFetchMessages;
-(void)writeUpdatedMessageDataToDisk;


@end


#endif