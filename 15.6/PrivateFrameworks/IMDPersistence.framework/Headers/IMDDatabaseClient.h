// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)chatRecordsWithHandles:(id)arg0 serviceName:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(NSInteger)arg4 ;
-(id)chatRecordsWithIdentifier:(id)arg0 ;
-(void)_sendAsyncXPCMessage:(id)arg0 action:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(void)_sendSyncXPCMessage:(id)arg0 action:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(void)coreSpotlightDeleteAttachmentGUIDs:(id)arg0 ;
-(void)deleteAttachmentsDirectWithPredicate:(id)arg0 ;
-(void)fetchChatRecordsFilteredUsingPredicate:(id)arg0 sortedUsingDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchChatRecordsFilteredUsingPredicate:(id)arg0 sortedUsingLastMessageDateAscending:(BOOL)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchChatRecordsFilteredUsingPredicate:(id)arg0 sortedUsingLastMessageDateAscending:(BOOL)arg1 olderThan:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)fetchChatRecordsWithAtLeastHandles:(id)arg0 serviceName:(id)arg1 style:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchDataForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchGroupPhotoPathsForChatsWithGroupIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchInteger64ForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchLastMessageRecordForChatRecordWithRowID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchMessageRecordsForChatRecordWithGUID:(id)arg0 filteredUsingPredicate:(id)arg1 sortedUsingDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)storeData:(id)arg0 forKey:(id)arg1 ;
-(void)updateAttachmentSyndicationRanges:(id)arg0 shouldHideFromSyndication:(BOOL)arg1 ;


@end


#endif