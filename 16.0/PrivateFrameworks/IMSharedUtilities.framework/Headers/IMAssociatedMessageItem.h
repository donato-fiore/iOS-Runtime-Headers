// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMASSOCIATEDMESSAGEITEM_H
#define IMASSOCIATEDMESSAGEITEM_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMMessageItem.h"
#import "IMTapback.h"

@interface IMAssociatedMessageItem : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (retain, nonatomic) NSString *associatedMessageGUID; // ivar: _associatedMessageGUID
@property (nonatomic) _NSRange associatedMessageRange; // ivar: _associatedMessageRange
@property (nonatomic) NSInteger associatedMessageType; // ivar: _associatedMessageType
@property (retain, nonatomic) NSArray *consumedSessionPayloads; // ivar: _consumedSessionPayloads
@property (retain, nonatomic) IMTapback *tapback; // ivar: _tapback


+(BOOL)supportsSecureCoding;
-(BOOL)isAssociatedMessageItem;
-(BOOL)isBreadcrumb;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFirstMessageCandidate;
-(BOOL)isLastMessageCandidate;
-(BOOL)isMessageAcknowledgment;
-(BOOL)isMessageEdit;
-(BOOL)isSticker;
-(id)copyDictionaryRepresentation;
-(id)copyForBackwardsCompatibility;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 hint:(id)arg1 ;
-(id)initWithMessageItem:(id)arg0 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 body:(id)arg2 attributes:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 associatedMessageGUID:(id)arg8 associatedMessageType:(NSInteger)arg9 associatedMessageRange:(struct _NSRange )arg10 messageSummaryInfo:(id)arg11 threadIdentifier:(id)arg12 ;
-(id)initWithSenderInfo:(id)arg0 time:(id)arg1 timeRead:(id)arg2 timeDelivered:(id)arg3 timePlayed:(id)arg4 subject:(id)arg5 body:(id)arg6 bodyData:(id)arg7 attributes:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(NSUInteger)arg10 guid:(id)arg11 messageID:(NSInteger)arg12 account:(id)arg13 accountID:(id)arg14 service:(id)arg15 handle:(id)arg16 roomName:(id)arg17 unformattedID:(id)arg18 countryCode:(id)arg19 expireState:(NSInteger)arg20 balloonBundleID:(id)arg21 payloadData:(id)arg22 expressiveSendStyleID:(id)arg23 timeExpressiveSendPlayed:(id)arg24 errorType:(unsigned int)arg25 associatedMessageGUID:(id)arg26 associatedMessageType:(NSInteger)arg27 associatedMessageRange:(struct _NSRange )arg28 bizIntent:(id)arg29 locale:(id)arg30 messageSummaryInfo:(id)arg31 partCount:(NSUInteger)arg32 threadIdentifier:(id)arg33 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif