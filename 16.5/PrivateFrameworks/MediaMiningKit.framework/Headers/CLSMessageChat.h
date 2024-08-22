// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMESSAGECHAT_H
#define CLSMESSAGECHAT_H

@class NSString, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface CLSMessageChat : NSObject

@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSString *accountLogin; // ivar: _accountLogin
@property (readonly, nonatomic) NSString *chatIdentifier; // ivar: _chatIdentifier
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *engramID; // ivar: _engramID
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) NSInteger hasHadSuccessfulQuery; // ivar: _hasHadSuccessfulQuery
@property (readonly, nonatomic) NSInteger isArchived; // ivar: _isArchived
@property (readonly, nonatomic) NSInteger isFiltered; // ivar: _isFiltered
@property (readonly, nonatomic) NSString *lastAddressedLocalHandle; // ivar: _lastAddressedLocalHandle
@property (readonly, nonatomic) NSInteger lastReadMessageTimeStamp; // ivar: _lastReadMessageTimeStamp
@property (readonly, nonatomic) NSString *originalGroupID; // ivar: _originalGroupID
@property (readonly, nonatomic) NSArray *persons; // ivar: _persons
@property (readonly, nonatomic) NSData *properties; // ivar: _properties
@property (readonly, nonatomic) NSArray *recipientHandles; // ivar: _recipientHandles
@property (readonly, nonatomic) NSString *roomname; // ivar: _roomname
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger style; // ivar: _style


// +(void)enumerateAllChatsWithBlock:(id)arg0 progressBlock:(unk)arg1  ;
-(id)allMessageGUIDs;
-(id)debugDescription;
-(id)initWithChatRecord:(struct _IMDChatRecordStruct *)arg0 ;
// -(void)enumerateAllAssetIdentifiersWithBlock:(id)arg0 historyLimit:(unk)arg1 assetsMapping:(CGFloat)arg2  ;
-(void)enumerateAllAttachmentsWithBlock:(id)arg0 ;
-(void)enumerateAllMessagesWithBlock:(id)arg0 ;


@end


#endif