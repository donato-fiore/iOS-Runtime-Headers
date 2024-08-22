// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDMESSAGESTORE_H
#define IMDMESSAGESTORE_H

@class NSNumber, NSTimer, NSString;

#import <Foundation/Foundation.h>


@interface IMDMessageStore : NSObject {
    NSNumber *_cachedUnreadMessageCount;
    NSNumber *_cachedLastFailedMessageDate;
    BOOL _suppressedUpdates;
    BOOL _pendingDBUpdatePost;
    NSTimer *_suppressedUpdatesTimer;
}


@property (retain) NSString *modificationStamp; // ivar: _modificationStamp


+(BOOL)_updateCacheForMessageGUID:(id)arg0 fromMessage:(id)arg1 toMessage:(id)arg2 updateLastMessage:(BOOL)arg3 calculateUnreadCount:(BOOL)arg4 ;
+(id)_missingMessageReadReceiptCache;
+(id)sharedInstance;
+(void)_displayDatabaseFullAlert;
+(void)databaseFull;
+(void)databaseNoLongerFull;
-(BOOL)_hasMessagesWithGUIDs:(id)arg0 ;
-(BOOL)_isValidPhoneNumber:(id)arg0 forCountryCode:(id)arg1 ;
-(BOOL)_itemClassShouldUpdateTransferForItem:(id)arg0 ;
-(BOOL)_shouldUseBadgeUtilities;
-(BOOL)canStoreItem:(id)arg0 onService:(id)arg1 ;
-(BOOL)canStoreMessage:(id)arg0 onService:(id)arg1 ;
-(BOOL)hasStoredMessageWithGUID:(id)arg0 ;
-(BOOL)isAttachmentReferencedByMessage:(id)arg0 ;
-(BOOL)isSuppressDatabaseUpdates;
-(BOOL)popReadReceiptForMissingGUID:(id)arg0 ;
-(BOOL)updateSyndicatedMessageWithMessageItem:(id)arg0 newRange:(id)arg1 ;
-(NSInteger)lastFailedMessageDate;
-(NSInteger)lastSyncedMessageRowID;
-(NSInteger)unreadMessagesCount;
-(id)_chatRegistrySharedInstance;
-(id)_chatsForMessageGUID:(id)arg0 enableVerboseLogging:(BOOL)arg1 ;
-(id)_chatsForMessageIdentifier:(NSInteger)arg0 ;
-(id)_cleanupPhoneNumber:(id)arg0 ;
-(id)_fileTransferCenter;
-(id)_itemsWithAssociatedGUID:(id)arg0 shouldLoadAttachments:(BOOL)arg1 ;
-(id)_itemsWithGUIDs:(id)arg0 ;
-(id)_messagesPendingUpdateT1ToCloudKitWithLimit:(NSInteger)arg0 attemptCount:(NSUInteger)arg1 ;
-(id)_messagesPendingUpdateT2ToCloudKitWithLimit:(NSInteger)arg0 attemptCount:(NSUInteger)arg1 ;
-(id)_messagesThatNeedSyncWithCloudKitWithLimit:(NSInteger)arg0 attemptCount:(NSUInteger)arg1 ;
-(id)_messagesWithHandles:(id)arg0 onServices:(id)arg1 messageGUID:(id)arg2 threadIdentifier:(id)arg3 limit:(NSUInteger)arg4 onlyMessages:(BOOL)arg5 ;
-(id)_messagesWithHandlesBeforeAndAfterGUID:(id)arg0 handles:(id)arg1 onServices:(id)arg2 numberOfMessagesBefore:(NSUInteger)arg3 numberOfMessagesAfter:(NSUInteger)arg4 threadIdentifier:(id)arg5 hasMessagesBefore:(*BOOL)arg6 hasMessagesAfter:(*BOOL)arg7 ;
-(id)_messagesWithRoomNames:(id)arg0 onServices:(id)arg1 messageGUID:(id)arg2 threadIdentifier:(id)arg3 limit:(NSUInteger)arg4 onlyMessages:(BOOL)arg5 ;
-(id)_unreadMessagesWithHandles:(id)arg0 onServices:(id)arg1 limit:(NSUInteger)arg2 fallbackGUID:(id)arg3 ;
-(id)_unreadMessagesWithRoomNames:(id)arg0 onServices:(id)arg1 limit:(NSUInteger)arg2 fallbackGUID:(id)arg3 ;
-(id)attachmentsWithHandles:(id)arg0 onServices:(id)arg1 ;
-(id)attachmentsWithRoomNames:(id)arg0 onServices:(id)arg1 ;
-(id)chatForMessage:(id)arg0 ;
-(id)chatForMessageGUID:(id)arg0 ;
-(id)chatForMessageGUID:(id)arg0 enableVerboseLogging:(BOOL)arg1 ;
-(id)chatForMessageIdentifier:(NSInteger)arg0 ;
-(id)chatsForMessage:(id)arg0 ;
-(id)chatsForMessageGUID:(id)arg0 ;
-(id)cleanUnformattedPhoneNumber:(id)arg0 countryCode:(id)arg1 ;
-(id)copyMessagesThatNeedToBeDeletedInCloudKitWithLimit:(NSUInteger)arg0 ;
-(id)deleteMessageGUIDs:(id)arg0 ;
-(id)deleteMessageGUIDs:(id)arg0 inChat:(id)arg1 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg0 style:(unsigned char)arg1 onServices:(id)arg2 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg0 style:(unsigned char)arg1 onServices:(id)arg2 completion:(id)arg3 ;
-(id)deleteMessagesWithReplaceMessageID:(int)arg0 fromHandle:(id)arg1 onService:(id)arg2 ;
-(id)existingMessageSimilarToMessage:(id)arg0 skipServices:(id)arg1 skipGUIDs:(id)arg2 withinTimeInterval:(CGFloat)arg3 participants:(id)arg4 ;
-(id)frequentRepliesForForChatIdentifiers:(id)arg0 onServices:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)init;
-(id)itemWithGUID:(id)arg0 ;
-(id)lastMessageForChatWithRowID:(NSInteger)arg0 ;
-(id)lastMessageWithHandles:(id)arg0 onServices:(id)arg1 ;
-(id)lastMessageWithRoomNames:(id)arg0 onServices:(id)arg1 ;
-(id)markMessagesAsReadWithChatGUIDs:(id)arg0 upToGUID:(id)arg1 readDate:(id)arg2 fromMe:(BOOL)arg3 ;
-(id)markMessagesAsReadWithIdentifiers:(id)arg0 onServices:(id)arg1 chatStyle:(unsigned char)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(id)messageActionItemsForOriginalMessageGUID:(id)arg0 ;
-(id)messageWithGUID:(id)arg0 ;
-(id)messageWithGUID:(id)arg0 registerAttachments:(BOOL)arg1 ;
-(id)messageWithReplaceMessageID:(int)arg0 fromHandle:(id)arg1 onService:(id)arg2 ;
-(id)messagesPendingUpdateT1ToCloudKitWithLimit:(NSInteger)arg0 ;
-(id)messagesPendingUpdateT2ToCloudKitWithLimit:(NSInteger)arg0 ;
-(id)messagesThatNeedSyncWithCloudKitWithLimit:(NSInteger)arg0 ;
-(id)messagesWithAssociatedGUID:(id)arg0 ;
-(id)messagesWithAssociatedGUID:(id)arg0 shouldLoadAttachments:(BOOL)arg1 ;
-(id)messagesWithGUIDs:(id)arg0 ;
-(id)messagesWithHandles:(id)arg0 onServices:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)messagesWithHandles:(id)arg0 onServices:(id)arg1 messageGUID:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)messagesWithHandles:(id)arg0 onServices:(id)arg1 messageGUID:(id)arg2 numberOfMessagesBefore:(NSUInteger)arg3 numberOfMessagesAfter:(NSUInteger)arg4 threadIdentifier:(id)arg5 hasMessagesBefore:(*BOOL)arg6 hasMessagesAfter:(*BOOL)arg7 ;
-(id)messagesWithHandles:(id)arg0 onServices:(id)arg1 messageGUID:(id)arg2 threadIdentifier:(id)arg3 limit:(NSUInteger)arg4 ;
-(id)messagesWithReplyToGUID:(id)arg0 ;
-(id)messagesWithRoomNames:(id)arg0 onServices:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)messagesWithRoomNames:(id)arg0 onServices:(id)arg1 messageGUID:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)messagesWithRoomNames:(id)arg0 onServices:(id)arg1 messageGUID:(id)arg2 threadIdentifier:(id)arg3 limit:(NSUInteger)arg4 ;
-(id)notificationContext;
-(id)replaceMessageAcknowledgmentsWithNewMessageAcknowledgment:(id)arg0 associatedMessageGUID:(id)arg1 sender:(id)arg2 ;
-(id)storeItem:(id)arg0 forceReplace:(BOOL)arg1 ;
-(id)storeMessage:(id)arg0 forceReplace:(BOOL)arg1 modifyError:(BOOL)arg2 modifyFlags:(BOOL)arg3 flagMask:(NSUInteger)arg4 ;
-(id)storeMessage:(id)arg0 forceReplace:(BOOL)arg1 modifyError:(BOOL)arg2 modifyFlags:(BOOL)arg3 flagMask:(NSUInteger)arg4 updateMessageCache:(BOOL)arg5 calculateUnreadCount:(BOOL)arg6 ;
-(id)storeMessage:(id)arg0 forceReplace:(BOOL)arg1 modifyError:(BOOL)arg2 modifyFlags:(BOOL)arg3 flagMask:(NSUInteger)arg4 updateMessageCache:(BOOL)arg5 calculateUnreadCount:(BOOL)arg6 reindexMessage:(BOOL)arg7 ;
-(id)unreadMessagesWithHandles:(id)arg0 onServices:(id)arg1 limit:(NSUInteger)arg2 fallbackGUID:(id)arg3 ;
-(id)unreadMessagesWithRoomNames:(id)arg0 onServices:(id)arg1 limit:(NSUInteger)arg2 fallbackGUID:(id)arg3 ;
-(id)updateSyndicatedMessageWithMessageGUID:(id)arg0 newRange:(id)arg1 ;
-(id)updateSyndicatedMessageWithSyndicationMessageAction:(id)arg0 ;
-(struct _IMDHandleRecordStruct *)_copyHandle:(id)arg0 onService:(id)arg1 ;
-(void)__postDBUpdate;
-(void)_deleteMessagesWithGUIDs:(id)arg0 chatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 batchNumber:(NSUInteger)arg4 completion:(id)arg5 ;
// -(void)_performBlock:(id)arg0 afterDelay:(unk)arg1  ;
-(void)_postDBUpdate;
-(void)_storeAttachmentsForMessage:(id)arg0 ;
-(void)_suppressDBUpdateTimerFired;
-(void)_updateModificationDate;
-(void)addMissingMessageReadReceipt:(id)arg0 ;
-(void)cleanseAttachments;
-(void)clearMessagesTombStoneTable;
-(void)databaseChatSpamUpdated:(id)arg0 ;
-(void)dealloc;
-(void)deleteMessagesFromTombStoneTableWithRecordIDs:(id)arg0 ;
-(void)loadConsumedSessionPayloadsForItems:(id)arg0 ;
-(void)markAllMessagesAsNeedingCloudKitSync;
-(void)markMessageAsCleanWithROWID:(NSInteger)arg0 ;
-(void)markMessageAsDeduplicated:(id)arg0 ;
-(void)markMessageAsIgnoreButNeedingSyncWithROWID:(NSInteger)arg0 ;
-(void)markMessageGUIDUnread:(id)arg0 ;
-(void)performInitialHousekeeping;
-(void)postCountChanges;
-(void)postUrgentNotificationsForMessageGUIDs:(id)arg0 ;
-(void)rebuildLastFailedMessageDate;
-(void)rebuildUnreadMessageCount;
-(void)registerTransfersWithGUIDs:(id)arg0 forMessageGUID:(id)arg1 ;
-(void)resolveUnformattedRepresentationsForHandles:(id)arg0 onService:(id)arg1 message:(id)arg2 completionBlock:(id)arg3 ;
-(void)retractPostedNotificationsForMessageGUIDs:(id)arg0 ;
-(void)setSuppressDatabaseUpdates:(BOOL)arg0 ;
-(void)updateFileTransfer:(id)arg0 ;
-(void)updateStamp;
-(void)updateUnformattedID:(id)arg0 forBuddyID:(id)arg1 onService:(id)arg2 ;


@end


#endif