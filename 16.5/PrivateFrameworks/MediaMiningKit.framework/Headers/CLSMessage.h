// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMESSAGE_H
#define CLSMESSAGE_H

@class NSString, NSDate, NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface CLSMessage : NSObject

@property (readonly, nonatomic) NSString *associatedMessageGUID; // ivar: _associatedMessageGUID
@property (readonly, nonatomic) _NSRange associatedMessageRange; // ivar: _associatedMessageRange
@property (readonly, nonatomic) NSInteger associatedMessageType; // ivar: _associatedMessageType
@property (readonly, nonatomic) NSString *balloonBundleID; // ivar: _balloonBundleID
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *destinationCallerID; // ivar: _destinationCallerID
@property (readonly, nonatomic) NSInteger expireState; // ivar: _expireState
@property (readonly, nonatomic) NSString *expressiveSendStyleID; // ivar: _expressiveSendStyleID
@property (readonly, nonatomic) NSString *fzAccount; // ivar: _fzAccount
@property (readonly, nonatomic) NSString *fzAccountGUID; // ivar: _fzAccountGUID
@property (readonly, nonatomic) NSData *fzAttributedBody; // ivar: _fzAttributedBody
@property (readonly, nonatomic) NSString *fzBody; // ivar: _fzBody
@property (readonly, nonatomic) NSInteger fzDate; // ivar: _fzDate
@property (readonly, nonatomic) NSInteger fzDateDelivered; // ivar: _fzDateDelivered
@property (readonly, nonatomic) NSInteger fzDatePlayed; // ivar: _fzDatePlayed
@property (readonly, nonatomic) NSInteger fzDateRead; // ivar: _fzDateRead
@property (readonly, nonatomic) NSInteger fzError; // ivar: _fzError
@property (readonly, nonatomic) NSNumber *fzFlags; // ivar: _fzFlags
@property (readonly, nonatomic) NSString *fzGuid; // ivar: _fzGuid
@property (readonly, nonatomic) NSString *fzService; // ivar: _fzService
@property (readonly, nonatomic) NSString *fzSubject; // ivar: _fzSubject
@property (readonly, nonatomic) NSInteger fzType; // ivar: _fzType
@property (readonly, nonatomic) NSInteger groupActionType; // ivar: _groupActionType
@property (readonly, nonatomic) NSString *groupTitle; // ivar: _groupTitle
@property (readonly, nonatomic) NSInteger handleID; // ivar: _handleID
@property (readonly, nonatomic) BOOL hasAttachments; // ivar: _hasAttachments
@property (readonly, nonatomic) NSInteger messageActionType; // ivar: _messageActionType
@property (readonly, nonatomic) *_IMDMessageRecordStruct messageRecord; // ivar: _messageRecord
@property (readonly, nonatomic) NSData *messageSummaryInfo; // ivar: _messageSummaryInfo
@property (readonly, nonatomic) NSInteger otherHandleID; // ivar: _otherHandleID
@property (readonly, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (readonly, nonatomic) NSString *recipientHandle; // ivar: _recipientHandle
@property (readonly, nonatomic) NSInteger replaceID; // ivar: _replaceID
@property (readonly, nonatomic) NSString *roomnames; // ivar: _roomnames
@property (readonly, nonatomic) NSInteger rowID; // ivar: _rowID
@property (readonly, nonatomic) NSInteger shareDirection; // ivar: _shareDirection
@property (readonly, nonatomic) NSInteger shareStatus; // ivar: _shareStatus
@property (readonly, nonatomic) NSInteger timeExpressiveSendPlayed; // ivar: _timeExpressiveSendPlayed
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(void)enumerateAllMessagesWithBlock:(id)arg0 ;
-(BOOL)fromMe;
-(BOOL)isMessage;
-(id)attachments;
-(id)debugDescription;
-(id)initWithMessageRecord:(struct _IMDMessageRecordStruct *)arg0 ;


@end


#endif