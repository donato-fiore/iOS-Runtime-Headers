// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLMESSAGESMIGRATOR_H
#define WLMESSAGESMIGRATOR_H

@class NSString, WLFeaturePayload;
@protocol WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>

#import "WLSQLController.h"

@interface WLMessagesMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>

 {
    *sqlite3 _database;
    NSString *_accountGuid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WLSQLController *sqlController; // ivar: _sqlController
@property (readonly) Class superclass;


+(id)_attachmentPersistentPathForGuid:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 ;
+(id)contentType;
-(BOOL)_beginTransaction;
-(BOOL)_commitTransaction;
-(BOOL)_insertChatHandleJoinRowWithChatID:(NSInteger)arg0 handleID:(NSInteger)arg1 duplicateMightExist:(BOOL)arg2 ;
-(BOOL)_insertChatMessageJoinRowWithChatID:(NSInteger)arg0 messageID:(NSInteger)arg1 ;
-(BOOL)_insertMessage:(id)arg0 ;
-(BOOL)_insertMessageAttachmentJoinRowWithMessageID:(NSInteger)arg0 attachmentID:(NSInteger)arg1 ;
-(BOOL)_messageIsFromMeWithMessage:(id)arg0 ;
-(BOOL)_openDatabase;
-(BOOL)_performSimpleQuery:(id)arg0 ;
-(BOOL)_rollbackTransaction;
-(BOOL)accountBased;
-(BOOL)isValidTableName:(id)arg0 ;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(NSInteger)_chatIDForHandleIDs:(id)arg0 groupRoomName:(id)arg1 groupID:(id)arg2 message:(id)arg3 ;
-(NSInteger)_chatStateWithMessage:(id)arg0 ;
-(NSInteger)_chatStyleWithMessage:(id)arg0 ;
-(NSInteger)_handleIDFromNonGroupMessageHandleIDs:(id)arg0 ;
-(NSInteger)_insertMessageRowWithMessage:(id)arg0 handleIDs:(id)arg1 groupRoomName:(id)arg2 ;
-(NSInteger)_insertRowWithAttachment:(id)arg0 filePath:(id)arg1 forMessage:(id)arg2 ;
-(NSInteger)_messageDateDeliveredWithMessage:(id)arg0 ;
-(NSInteger)_messageDateReadWithMessage:(id)arg0 ;
-(NSInteger)_messageDateWithMessage:(id)arg0 ;
-(NSInteger)_messageErrorWithMessage:(id)arg0 ;
-(NSInteger)_messageVersionWithMessage:(id)arg0 ;
-(NSInteger)_senderHandleIDFromReceviedGroupMessageHandleIDs:(id)arg0 ;
-(id)_chatAccountIDWithMessage:(id)arg0 ;
-(id)_chatAccountLoginWithMessage:(id)arg0 ;
-(id)_chatDisplayNameWithMessage:(id)arg0 ;
-(id)_chatGUIDWithGroupRoomName:(id)arg0 ;
-(id)_chatGUIDWithNonGroupMessage:(id)arg0 ;
-(id)_chatGroupIDWithNonGroupMessage:(id)arg0 ;
-(id)_chatIdentifierWithNonGroupMessage:(id)arg0 ;
-(id)_chatLastAddressedHandleWithMessage:(id)arg0 ;
-(id)_chatPropertiesDataWithMessage:(id)arg0 ;
-(id)_chatServiceWithMessage:(id)arg0 ;
-(id)_databaseFilename;
-(id)_handleIDsForMessage:(id)arg0 ;
-(id)_messageAccountGUIDWithMessage:(id)arg0 ;
-(id)_messageAccountWithMessage:(id)arg0 ;
-(id)_messageAttributedBodyDataWithMessage:(id)arg0 ;
-(id)_messageGroupTitleWithMessage:(id)arg0 ;
-(id)_messageServiceCenterWithMessage:(id)arg0 ;
-(id)_messageServiceWithMessage:(id)arg0 ;
-(id)_messageSubjectWithMessage:(id)arg0 ;
-(id)_otherPartyAddressWithNonGroupMessage:(id)arg0 ;
-(id)_ourAddressWithMessage:(id)arg0 ;
-(id)_serviceStringWithMessage:(id)arg0 ;
-(id)_sortedHandleIDs:(id)arg0 ;
-(id)_uncanonicalizedIDWithMessage:(id)arg0 ;
-(id)_uniqueHandleStringsWithMessage:(id)arg0 ;
-(id)contentType;
-(id)dataType;
-(id)importDidEnd;
-(id)importWillBegin;
-(id)initWithSQLController:(id)arg0 ;
-(void)_closeDatabase;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)deleteData;
-(void)deleteFromTable:(id)arg0 ;
-(void)enable;
-(void)estimateItemSizeForSummary:(id)arg0 account:(id)arg1 ;
-(void)importRecordData:(id)arg0 summary:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)performPreImportPhaseForSummary:(id)arg0 data:(id)arg1 ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif