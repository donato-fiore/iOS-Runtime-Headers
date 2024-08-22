// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMOUTGOINGMESSAGE_H
#define EMOUTGOINGMESSAGE_H

@class NSString, NSData;
@protocol EMOutgoingMessageBuilder, NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>

#import "EMMessageObjectID.h"

@interface EMOutgoingMessage : NSObject <EMOutgoingMessageBuilder, NSSecureCoding, EFPubliclyDescribable>



@property (nonatomic) NSInteger action; // ivar: _action
@property (nonatomic) NSInteger conversationNotificationLevel; // ivar: _conversationNotificationLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *messageData; // ivar: _messageData
@property (retain, nonatomic) EMMessageObjectID *originalMessageID; // ivar: _originalMessageID
@property (nonatomic) BOOL shouldEncrypt; // ivar: _shouldEncrypt
@property (nonatomic) BOOL shouldSign; // ivar: _shouldSign
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif