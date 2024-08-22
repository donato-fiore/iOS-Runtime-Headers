// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDDATABASE_H
#define IMDDATABASE_H

@class NSString;
@protocol IMDKeyValueQueries, IMDDatabaseQueries, IMDHandleQueries, IMDMessageQueries, IMDAttachmentQueries, IMDNotificationQueries, IMDChatQueries;

#import <Foundation/Foundation.h>


@interface IMDDatabase : NSObject <IMDKeyValueQueries, IMDDatabaseQueries, IMDHandleQueries, IMDMessageQueries, IMDAttachmentQueries, IMDNotificationQueries, IMDChatQueries>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)isServerProcess;
+(id)sharedDatabase;
-(BOOL)_deleteChatIfEmptyWithGUID:(id)arg0 lastMessageDate:(id)arg1 operation:(struct IMDSqlOperation *)arg2 ;
-(BOOL)_updateSyndicatedMessageItem:(id)arg0 newMessageItem:(id)arg1 newSyndicationRange:(id)arg2 ;
-(NSInteger)_countMessagesExcludingGroupPhotosInChatWithGUID:(id)arg0 isRecoverable:(BOOL)arg1 operation:(struct IMDSqlOperation *)arg2 ;
-(id)_chatGUIDsForChatsWithRecoverableMessagesOlderThanDate:(id)arg0 operation:(struct IMDSqlOperation *)arg1 ;
-(id)_copyAttachmentRecordsFromCoreSDBResults:(id)arg0 ;
-(id)_copyChatRecordsFromCoreSDBResults:(id)arg0 ;
-(id)_copyMessageRecordsFromCoreSDBResults:(id)arg0 ;
-(id)_loadAttributedBodyTextForMessageWithGUID:(id)arg0 ;
-(id)_loadRecoverableMessagePartsMetadataForChatGUID:(id)arg0 ;
-(id)_mostRecentRecoverableMessageDateForChatWithGUID:(id)arg0 operation:(struct IMDSqlOperation *)arg1 ;
-(id)_permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)arg0 beforeDate:(id)arg1 ;
-(id)_restoredAttributedBodyForMessageGUID:(id)arg0 withRecoveredAttributedParts:(id)arg1 ;
-(id)chatRecordsFilteredByPredicate:(id)arg0 ;
-(id)chatRecordsWithHandles:(id)arg0 serviceName:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4 ;
-(id)chatRecordsWithIdentifier:(id)arg0 ;
-(id)loadRecoverableMessagesMetadataGroupedByChatGUID;
-(id)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(NSUInteger)arg0 ;
-(id)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(NSUInteger)arg0 ;
-(void)_deleteTransfersInMessagePartsForChatGUID:(id)arg0 ;
-(void)_fetchChatRecordsWithHandles:(id)arg0 allowSubsetMatching:(BOOL)arg1 serviceName:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5 completionHandler:(id)arg6 ;
-(void)_recoverMessagePartsForChatRecordsWithGUIDs:(id)arg0 operation:(struct IMDSqlOperation )arg1 ;
-(void)_removeFromRecoverableMessagePartForMessageGUID:(id)arg0 operation:(struct IMDSqlOperation )arg1 ;
-(void)_updateMessageItemSyndicationRanges:(id)arg0 messagePartDescriptor:(id)arg1 shouldHideFromSyndication:(BOOL)arg2 ;
-(void)_updateMessageRecordForGUID:(id)arg0 withAttributedBody:(id)arg1 operation:(struct IMDSqlOperation )arg2 ;
-(void)clearRecoverableMessageTombStones;
-(void)coreSpotlightDeleteAttachmentGUIDs:(id)arg0 ;
-(void)deleteAttachmentsDirectWithPredicate:(id)arg0 ;
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
-(void)storeData:(id)arg0 forKey:(id)arg1 ;
-(void)storeRecoverableMessagePartWithBody:(id)arg0 forMessageWithGUID:(id)arg1 deleteDate:(id)arg2 ;
-(void)updateAttachmentSyndicationRanges:(id)arg0 shouldHideFromSyndication:(BOOL)arg1 ;
-(void)updateMessageSyndicationRanges:(id)arg0 shouldHideFromSyndication:(BOOL)arg1 ;
-(void)updateRecoverableMessageSyncState:(NSInteger)arg0 forMessageRowID:(NSInteger)arg1 onPartIndex:(NSInteger)arg2 ;


@end


#endif