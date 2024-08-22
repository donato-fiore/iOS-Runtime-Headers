// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDMESSAGERECORD_H
#define IMDMESSAGERECORD_H

@class NSString, NSArray, NSData, NSAttributedString, NSDate;
@protocol IMDBridgedRecord;


#import "IMDRecord.h"
#import "IMDChatRecord.h"
#import "IMDHandleRecord.h"

@interface IMDMessageRecord : IMDRecord <IMDBridgedRecord>



@property (readonly, nonatomic, getter=isAssociatedMessage) BOOL associatedMessage;
@property (readonly, copy, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) NSInteger associatedMessageType;
@property (readonly, nonatomic) NSArray *attachmentRecords;
@property (readonly, copy, nonatomic) NSData *attributedBodyData;
@property (readonly, copy, nonatomic) NSAttributedString *attributedBodyText;
@property (readonly, nonatomic) IMDChatRecord *chatRecord;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDate *dateDelivered;
@property (readonly, nonatomic) NSDate *dateEdited;
@property (readonly, nonatomic) NSDate *dateRead;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, nonatomic) IMDHandleRecord *handleRecord;
@property (readonly, nonatomic) NSInteger itemType;
@property (readonly, nonatomic) NSInteger rawDate;
@property (readonly, nonatomic) NSInteger rawDateDelivered;
@property (readonly, nonatomic) NSInteger rawDateRead;
@property (readonly, nonatomic, getter=isReply) BOOL reply;
@property (readonly, nonatomic) NSInteger rowID;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *threadOriginatorGUID;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)keyPathsToColumns;
-(NSUInteger)_cfTypeID;
-(id)init;
-(id)initWithItemType:(NSInteger)arg0 text:(id)arg1 date:(NSInteger)arg2 dateRead:(NSInteger)arg3 dateDelivered:(NSInteger)arg4 datePlayed:(NSInteger)arg5 error:(NSInteger)arg6 type:(NSInteger)arg7 replaceID:(NSInteger)arg8 flags:(id)arg9 guid:(id)arg10 attributedBody:(id)arg11 service:(id)arg12 account:(id)arg13 accountGUID:(id)arg14 subject:(id)arg15 handleID:(id)arg16 countryCode:(id)arg17 unformattedID:(id)arg18 otherHandleID:(id)arg19 groupTitle:(id)arg20 groupActionType:(NSInteger)arg21 shareStatus:(NSInteger)arg22 shareDirection:(NSInteger)arg23 expireState:(NSInteger)arg24 messageActionType:(NSInteger)arg25 associatedMessageGUID:(id)arg26 associatedMessageType:(NSInteger)arg27 associatedMessageRange:(struct _NSRange )arg28 balloonBundleID:(id)arg29 payloadData:(id)arg30 expressiveSendStyleID:(id)arg31 timeExpressiveSendPlayed:(NSInteger)arg32 messageSummaryInfo:(id)arg33 cloudKitSyncState:(NSInteger)arg34 cloudKitRecordID:(id)arg35 cloudKitServerChangeTokenBlob:(id)arg36 cloudKitRecordChangeTag:(id)arg37 dataDetectorsInfo:(id)arg38 destinationCallerID:(id)arg39 replyToGUID:(id)arg40 sortID:(NSInteger)arg41 threadOriginatorGUID:(id)arg42 threadOriginatorPart:(id)arg43 syndicationRanges:(id)arg44 syncedSyndicationRanges:(id)arg45 partCount:(NSInteger)arg46 dateEdited:(NSInteger)arg47 ;
-(int)_propertyIDForProperty:(NSInteger)arg0 ;
-(struct ? )_propertyDescriptorForProperty:(NSInteger)arg0 ;
-(struct _IMDMessageRecordStruct *)cfMessageRecord;
-(struct __CFArray *)_localCache;


@end


#endif