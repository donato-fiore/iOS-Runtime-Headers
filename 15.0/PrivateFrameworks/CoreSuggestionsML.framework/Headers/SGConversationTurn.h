// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGCONVERSATIONTURN_H
#define SGCONVERSATIONTURN_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying, SGConversationTurnProtocol;

#import <Foundation/Foundation.h>


@interface SGConversationTurn : NSObject <NSSecureCoding, NSCopying, SGConversationTurnProtocol>



@property (readonly, nonatomic) NSString *senderID; // ivar: _senderID
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationTurn:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 senderID:(id)arg1 timestamp:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif