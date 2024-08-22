// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNMESSAGECONVERSATION_H
#define LNMESSAGECONVERSATION_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNMessageConversation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, copy, nonatomic) NSString *messageConversationIdentifier; // ivar: _messageConversationIdentifier
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageConversationIdentifier:(id)arg0 groupName:(id)arg1 recipients:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif