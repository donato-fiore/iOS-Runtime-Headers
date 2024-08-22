// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMAILMESSAGEKEY_H
#define SGMAILMESSAGEKEY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *messageId; // ivar: _messageId
@property (readonly, nonatomic) NSString *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMailMessageKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 messageId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif