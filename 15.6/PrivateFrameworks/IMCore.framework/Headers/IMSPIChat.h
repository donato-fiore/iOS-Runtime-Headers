// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSPICHAT_H
#define IMSPICHAT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface IMSPIChat : NSObject

@property (retain) NSString *chatIdentifier; // ivar: _chatIdentifier
@property (retain) NSString *displayName; // ivar: _displayName
@property (retain) NSString *guid; // ivar: _guid
@property (retain) NSArray *handles; // ivar: _handles
@property (readonly) BOOL isBlackholed; // ivar: _isBlackholed
@property BOOL isGroup; // ivar: _isGroup
@property (retain) NSString *serviceName; // ivar: _serviceName


+(void)enumerateAllChatsWithBlock:(id)arg0 ;
-(id)description;
-(id)initWithChatRecord:(struct _IMDChatRecordStruct *)arg0 ;
-(void)enumerateAllAttachmentsWithBlock:(id)arg0 ;
-(void)enumerateAllMessagesWithBlock:(id)arg0 ;


@end


#endif