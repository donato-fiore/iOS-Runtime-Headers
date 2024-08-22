// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMITEM_H
#define IMITEM_H

@class NSString, NSDate, NSData, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;

#import <Foundation/Foundation.h>


@interface IMItem : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (retain, nonatomic) NSString *account; // ivar: _account
@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) NSString *balloonBundleID; // ivar: _balloonBundleID
@property (retain, nonatomic) NSDate *clientSendTime; // ivar: _clientSendTime
@property (copy, nonatomic) NSString *cloudKitRecordChangeTag; // ivar: _cloudKitRecordChangeTag
@property (copy, nonatomic) NSString *cloudKitRecordID; // ivar: _cloudKitRecordID
@property (copy, nonatomic) NSData *cloudKitServerChangeTokenBlob; // ivar: _cloudKitServerChangeTokenBlob
@property (nonatomic) NSInteger cloudKitSyncState; // ivar: _cloudKitSyncState
@property (retain, nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *destinationCallerID; // ivar: _destinationCallerID
@property (retain, nonatomic) NSArray *fileTransferGUIDs; // ivar: _fileTransferGUIDs
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL isFirstMessageCandidate;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL isLastMessageCandidate;
@property (nonatomic, setter=_setMessageID:) NSInteger messageID; // ivar: _messageID
@property (copy, nonatomic) NSString *parentChatID; // ivar: _parentChatID
@property (retain, nonatomic) NSString *personCentric; // ivar: _personCentric
@property (retain, nonatomic) NSString *personCentricID;
@property (copy, nonatomic) NSString *replyToGUID; // ivar: _replyToGUID
@property (retain, nonatomic) NSString *roomName; // ivar: _roomName
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSDictionary *senderInfo; // ivar: _senderInfo
@property (retain, nonatomic) NSString *service; // ivar: _service
@property (nonatomic) NSUInteger sortID; // ivar: _sortID
@property (retain, nonatomic) NSDate *time; // ivar: _time
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSString *unformattedID; // ivar: _unformattedID


+(BOOL)supportsSecureCoding;
+(Class)classForIMItemType:(NSInteger)arg0 ;
+(Class)classForMessageItemDictionary:(id)arg0 ;
+(id)stringGUID;
-(BOOL)isAssociatedMessageItem;
-(BOOL)isBreadcrumb;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMessageAcknowledgment;
-(BOOL)isMessageEdit;
-(BOOL)isOlderThanItem:(id)arg0 ;
-(BOOL)isReply;
-(BOOL)isSticker;
-(BOOL)unsentIsFromMeItem;
-(NSInteger)associatedMessageType;
-(NSUInteger)hash;
-(id)associatedMessageGUID;
-(id)consumedSessionPayloads;
-(id)copyDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIMRemoteObjectSerializedDictionary:(id)arg0 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 guid:(id)arg2 type:(NSInteger)arg3 ;
-(id)initWithSenderInfo:(id)arg0 time:(id)arg1 guid:(id)arg2 messageID:(NSInteger)arg3 account:(id)arg4 accountID:(id)arg5 service:(id)arg6 handle:(id)arg7 roomName:(id)arg8 unformattedID:(id)arg9 countryCode:(id)arg10 type:(NSInteger)arg11 ;
-(id)pluginSessionGUID;
-(struct _NSRange )associatedMessageRange;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg0 ;


@end


#endif