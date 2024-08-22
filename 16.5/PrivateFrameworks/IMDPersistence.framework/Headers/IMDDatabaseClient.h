// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDDATABASECLIENT_H
#define IMDDATABASECLIENT_H

@class NSString;
@protocol IMDRemoteDatabaseProtocol;


#import "IMDDatabaseLegacyXPCBridge.h"

@interface IMDDatabaseClient : IMDDatabaseLegacyXPCBridge <IMDRemoteDatabaseProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)chatRecordsFilteredByPredicate:(id)arg0 ;
-(id)chatRecordsWithHandles:(id)arg0 serviceName:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4 ;
-(id)chatRecordsWithIdentifier:(id)arg0 ;
-(id)loadRecoverableMessagesMetadataGroupedByChatGUID;
-(id)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(NSInteger)arg0 ;
-(id)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(NSInteger)arg0 ;
-(void)_sendAsyncXPCMessage:(id)arg0 action:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(void)_sendSyncXPCMessage:(id)arg0 action:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(void)clearRecoverableMessageTombStones;
-(void)coreSpotlightDeleteAttachmentGUIDs:(id)arg0 ;
-(void)deleteAttachmentsDirectWithPredicate:(id)arg0 ;
-(void)deleteJunkMessagesOlderThanDays:(NSInteger)arg0 ;
-(void)deleteRecoverableMessagesOlderThanDays:(NSInteger)arg0 ;
-(void)fetchAttachmentRecordsFilteredUsingPredicate:(id)arg0 limit:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchChatRecordsFilteredUsingPredicate:(id)arg0 sortedUsingDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchChatRecordsFilteredUsingPredicate:(id)arg0 sortedUsingLastMessageDateAscending:(BOOL)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchChatRecordsFilteredUsingPredicate:(id)arg0 sortedUsingLastMessageDateAscending:(BOOL)arg1 olderThan:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)fetchChatRecordsWithAtLeastHandles:(id)arg0 serviceName:(id)arg1 style:(unsigned char)arg2 completionHandler:(id)arg3 ;
-(void)fetchChatRecordsWithPinningIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDataForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchGroupPhotoPathsForChatsWithGroupIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchInteger64ForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchLastMessageRecordForChatRecordWithRowID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchMessageRecordWithGUID:(id)arg0 excludeRecoverableMessages:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchMessageRecordsForChatRecordWithGUID:(id)arg0 filteredUsingPredicate:(id)arg1 sortedUsingDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)moveMessageRecordsToRecoveryForChatRecordsWithGUIDs:(id)arg0 deleteDate:(id)arg1 ;
-(void)moveMessageRecordsToRecoveryForMessageGUIDs:(id)arg0 deleteDate:(id)arg1 ;
-(void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)postSharePlayNotificationForChatGUID:(id)arg0 faceTimeConversationUUID:(id)arg1 handleIdentifier:(id)arg2 localizedApplicationName:(id)arg3 ;
-(void)recoverMessageRecordsForChatRecordsWithGUIDs:(id)arg0 ;
-(void)resolveInconsistentGUIDForChatRecordWithGUID:(id)arg0 newGUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)storeData:(id)arg0 forKey:(id)arg1 ;
-(void)storeRecoverableMessagePartWithBody:(id)arg0 forMessageWithGUID:(id)arg1 deleteDate:(id)arg2 ;
-(void)updateAttachmentSyndicationRanges:(id)arg0 shouldHideFromSyndication:(BOOL)arg1 ;
-(void)updateMessageSyndicationRanges:(id)arg0 shouldHideFromSyndication:(BOOL)arg1 ;
-(void)updateRecoverableMessageSyncState:(NSInteger)arg0 forMessageRowID:(NSInteger)arg1 onPartIndex:(NSInteger)arg2 ;


@end


#endif