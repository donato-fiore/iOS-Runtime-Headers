// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDDATABASESERVER_H
#define IMDDATABASESERVER_H

@protocol IMDRemoteDatabaseProtocol;


#import "IMDDatabaseLegacyXPCBridge.h"

@interface IMDDatabaseServer : IMDDatabaseLegacyXPCBridge

@property (readonly, nonatomic) NSObject<IMDRemoteDatabaseProtocol> *database;


+(id)sharedServer;
-(void)_asyncPersistenceBlock:(id)arg0 ;
-(void)_authorizeOutgoingSandboxedResource:(id)arg0 connection:(id)arg1 ;
-(void)_respondWithAttachmentRecords:(id)arg0 responseMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)_respondWithChatRecords:(id)arg0 responseMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)_respondWithMessageRecords:(id)arg0 responseMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)_syncPersistenceBlock:(id)arg0 ;
-(void)handleDeleteAttachmentsDirectWithPredicate_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDAttachmentRecordCopyFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopyChatsFilteredUsingPredicate_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopyChatsSortedByLastMessageDateAndFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopyChatsWithAtLeastHandlesOnServiceWithStyle_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopyChatsWithHandlesOnServiceWithDisplayNameGroupIDStyle_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopyChatsWithIdentifier_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopyChatsWithPinningIdentifier_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopyGroupPhotoPaths_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordCopySortedChatsFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordLoadRecoverableMessages_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordMoveMessagesToRecoverableMessage_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordPermanentlyDeleteRecoverableMessagesInChatsWithGUIDs_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordRecoverMessages_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDChatRecordResolveInconsistentGUID_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDCoreSpotlightDeleteAttachment_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDKVIntegerForKey_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordClearUnsyncedRemovedRecoverableMessages_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordCopyLastMessageForChatWithRowID_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordCopyMessageWithGUIDExcludingRecoverableMessages_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordCopySortedMessagesForChatGUIDFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordDeleteJunkMessagesOlderThanDays_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordDeleteRecoverableMessagesOlderThanDays_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordLoadRecoverableMessagesPendingCloudKitDelete_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordLoadRecoverableMessagesPendingCloudKitUpdate_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordMoveToRecoverableMessage_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordStoreRecoverableMessagePartBody_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordUpdateAttachmentSyndicationRanges_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordUpdateMessagesSyndicationRanges_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDMessageRecordUpdateRecoverableMessageSyncState_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleIMDNotificationsPostSharePlayNotification_IPCActionWithXPCConnection:(id)arg0 requestMessage:(id)arg1 responseMessage:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif