// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLABELEDVALUE_H
#define PPLABELEDVALUE_H

@class NSString;
@protocol NSSecureCoding, NSCopying, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPLabeledValue : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)labeledValueWithLabel:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabeledValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif