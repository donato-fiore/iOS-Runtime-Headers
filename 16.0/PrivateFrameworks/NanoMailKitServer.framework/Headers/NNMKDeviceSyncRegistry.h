// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKDEVICESYNCREGISTRY_H
#define NNMKDEVICESYNCREGISTRY_H

@class NSDate, NSString, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>

#import "NNMKSQLiteConnection.h"

@interface NNMKDeviceSyncRegistry : NSObject

@property (nonatomic) NSUInteger currentDatabaseSchemaVersion; // ivar: _currentDatabaseSchemaVersion
@property (retain, nonatomic) NNMKSQLiteConnection *database; // ivar: _database
@property (nonatomic) CGFloat deviceScreenScale; // ivar: _deviceScreenScale
@property (nonatomic) CGFloat deviceScreenWidth; // ivar: _deviceScreenWidth
@property (retain, nonatomic) NSDate *disconnectedSince; // ivar: _disconnectedSince
@property (nonatomic) NSUInteger fullSyncVersion; // ivar: _fullSyncVersion
@property (nonatomic) BOOL isMessagesSyncSuspendedByConnectivity; // ivar: _isMessagesSyncSuspendedByConnectivity
@property (nonatomic) BOOL organizeByThread; // ivar: _organizeByThread
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSMutableDictionary *pendingComposedMessages; // ivar: _pendingComposedMessages
@property (nonatomic) BOOL protectedContentChannelSupported; // ivar: _protectedContentChannelSupported
@property (readonly, nonatomic) BOOL recreatedFromScratch; // ivar: _recreatedFromScratch
@property (nonatomic) NSNumber *supportsWebKit; // ivar: _supportsWebKit


-(BOOL)containsSyncedMessageForMessageWithId:(id)arg0 ;
-(BOOL)hasMailboxSyncedActive;
-(NSInteger)progressForComposedMessageWithId:(id)arg0 ;
-(NSUInteger)accountSourceTypeForAccountId:(id)arg0 ;
-(NSUInteger)accountSourceTypeForMailboxId:(id)arg0 ;
-(NSUInteger)accountSourceTypeForMessageId:(id)arg0 ;
-(NSUInteger)syncVersionForMailboxId:(id)arg0 ;
-(NSUInteger)syncedMessagesCount;
-(NSUInteger)syncedMessagesCountForMailboxId:(id)arg0 ;
-(id)_attachmentDirectory;
-(id)_idsIdentifiersForObjectId:(id)arg0 type:(id)arg1 ;
-(id)_mailboxFromCurrentRowInStatement:(struct sqlite3_stmt *)arg0 ;
-(id)_selectMailboxesWhere:(id)arg0 blockForBinding:(id)arg1 ;
-(id)_selectSyncedAccountsWhere:(id)arg0 blockForBinding:(id)arg1 ;
-(id)_selectSyncedMessagesIdsWhere:(id)arg0 count:(NSUInteger)arg1 blockForBinding:(id)arg2 ;
-(id)_selectSyncedMessagesWhere:(id)arg0 blockForBinding:(id)arg1 ;
-(id)_ungroupGroupedValue:(id)arg0 ;
-(id)_urlForAttachmentsWithComposedMessageId:(id)arg0 ;
-(id)accountIdForUsername:(id)arg0 ;
-(id)activeMailboxes;
-(id)allSyncedAccountsKeyedByAccountId;
-(id)attachmentsForComposedMessageId:(id)arg0 ;
-(id)attachmentsFromURL:(id)arg0 ;
-(id)datesForIDSIdentifiersScheduledToBeResent;
-(id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(NSUInteger)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)mailboxIdForDeletedMessageId:(id)arg0 ;
-(id)mailboxWithId:(id)arg0 ;
-(id)mailboxes;
-(id)mailboxesForAccountId:(id)arg0 ;
-(id)messageIdForSanitizedMessageId:(id)arg0 ;
-(id)objectIdsForIDSIdentifierNotYetAckd:(id)arg0 type:(*id)arg1 resendInterval:(*NSUInteger)arg2 ;
-(id)objectIdsForType:(id)arg0 ;
-(id)oldestDateReceivedForMailboxId:(id)arg0 ;
-(id)pendingComposedMessageIds;
-(id)pendingComposedMessageWithId:(id)arg0 ;
-(id)syncEnabledMailboxes;
-(id)syncedAccountForAccountWithId:(id)arg0 ;
-(id)syncedAccountIdsResendRequested;
-(id)syncedMessageForMessageWithId:(id)arg0 ;
-(id)syncedMessageIdsContentRequestedByUser;
-(id)syncedMessageIdsResendRequested;
-(id)syncedMessagesForConversationWithId:(id)arg0 ;
-(id)syncedMessagesKeyedByMessageIdAfterDateReceived:(id)arg0 mailboxId:(id)arg1 ;
-(id)typeForIDSIdentifierNotYetAckd:(id)arg0 ;
-(void)_deleteAllObjectsFromTable:(id)arg0 ;
-(void)_deleteAllObjectsFromTable:(id)arg0 mailboxId:(id)arg1 ;
-(void)_insureTransactionFor:(id)arg0 ;
-(void)_loadAllControlValues;
-(void)_removeAllPendingAttachments;
-(void)_removeAttachmentsForComposedMessageId:(id)arg0 ;
-(void)_removeControlValueForKey:(id)arg0 ;
-(void)_setControlValueForKey:(id)arg0 withBlockForBinding:(id)arg1 ;
-(void)addObjectIds:(id)arg0 type:(id)arg1 resendInterval:(NSUInteger)arg2 forIDSIdentifierNotYetAckd:(id)arg3 ;
-(void)addOrUpdateMailbox:(id)arg0 ;
-(void)addOrUpdateSyncedAccount:(id)arg0 ;
-(void)addOrUpdateSyncedMessage:(id)arg0 ;
-(void)beginUpdates;
-(void)cleanUpForFullSyncWithMailbox:(id)arg0 ;
-(void)cleanUpForInitialSync;
-(void)deleteAllMailboxes;
-(void)deleteMailboxWithId:(id)arg0 ;
-(void)deleteMailboxWithId:(id)arg0 startTransaction:(BOOL)arg1 ;
-(void)deleteObjectId:(id)arg0 fromIDSIdentifiersNotYetAckdOfType:(id)arg1 ;
-(void)endUpdates;
-(void)incrementSyncVersionForMailboxId:(id)arg0 ;
-(void)insertDeletedMessageId:(id)arg0 mailboxId:(id)arg1 ;
-(void)markIDSIdentifierAsAckd:(id)arg0 ;
-(void)prepareIDSIdentifiersForResendForErrorCode:(NSInteger)arg0 ;
-(void)removePendingComposedMessages;
-(void)removeProgressForComposedMessageWithId:(id)arg0 ;
-(void)removeSyncedAccountForAccountWithId:(id)arg0 ;
-(void)removeSyncedMessageForMessageWithId:(id)arg0 ;
-(void)removeSyncedMessagesBeforeDateReceived:(id)arg0 mailbox:(id)arg1 ;
-(void)rescheduleIDSIdentifier:(id)arg0 resendInterval:(NSUInteger)arg1 withDateToResend:(id)arg2 errorCode:(NSInteger)arg3 ;
-(void)resetSyncRequestedFromMailboxes;
-(void)saveAttachmentsForComposedMessageId:(id)arg0 temporaryURL:(id)arg1 ;
-(void)setProgress:(NSInteger)arg0 forComposedMessageWithId:(id)arg1 ;
-(void)storePendingComposedMessage:(id)arg0 ;
-(void)updateSourceType:(NSUInteger)arg0 forAccountId:(id)arg1 ;
-(void)updateSyncActiveForMailbox:(id)arg0 ;
-(void)updateSyncEnabledForMailbox:(id)arg0 ;
-(void)updateSyncRequestedForMailbox:(id)arg0 ;
-(void)updateSyncVersion:(NSUInteger)arg0 forMailboxId:(id)arg1 ;


@end


#endif