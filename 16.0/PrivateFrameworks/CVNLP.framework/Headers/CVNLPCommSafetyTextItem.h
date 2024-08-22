// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPCOMMSAFETYTEXTITEM_H
#define CVNLPCOMMSAFETYTEXTITEM_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVNLPCommSafetyTextItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationIdentifier:(id)arg0 date:(id)arg1 direction:(NSInteger)arg2 text:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif