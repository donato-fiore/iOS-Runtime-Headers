// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTINPUTPASSWORDRULES_H
#define UITEXTINPUTPASSWORDRULES_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UITextInputPasswordRules : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *passwordRulesDescriptor; // ivar: _passwordRulesDescriptor


+(BOOL)supportsSecureCoding;
+(id)passwordRulesWithDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initPasswordRulesWithDescriptor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif