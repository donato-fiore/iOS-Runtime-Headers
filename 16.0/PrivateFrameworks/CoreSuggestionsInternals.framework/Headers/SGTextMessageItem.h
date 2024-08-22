// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGTEXTMESSAGEITEM_H
#define SGTEXTMESSAGEITEM_H

@class NSArray, NSString, NSDate;
@protocol NSSecureCoding, SGConversationTurnProtocol;

#import <Foundation/Foundation.h>

#import "SGTextMessage.h"

@interface SGTextMessageItem : NSObject <NSSecureCoding, SGConversationTurnProtocol>



@property (readonly) NSArray *detectedData; // ivar: _detectedData
@property (retain) NSArray *features; // ivar: _features
@property (readonly) NSString *language; // ivar: _language
@property (readonly) SGTextMessage *message; // ivar: _message
@property (readonly, nonatomic) NSString *senderID; // ivar: _senderID
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToConversationTurn:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextMessage:(id)arg0 ;
-(id)initWithTextMessage:(id)arg0 detectedData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif