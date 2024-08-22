// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMSAMPLEATTRIBUTE_H
#define MXMSAMPLEATTRIBUTE_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXMSampleAttribute : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSNumber *numericValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
+(id)attributeWithName:(id)arg0 ;
+(id)attributeWithName:(id)arg0 numericValue:(id)arg1 ;
+(id)attributeWithName:(id)arg0 stringValue:(id)arg1 ;
+(id)attributeWithName:(id)arg0 valueType:(NSInteger)arg1 ;
+(id)attributeWithName:(id)arg0 valueType:(NSInteger)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(BOOL)isEqualToAttribute:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttributeName:(id)arg0 ;
-(id)initWithAttributeName:(id)arg0 numericValue:(id)arg1 ;
-(id)initWithAttributeName:(id)arg0 stringValue:(id)arg1 ;
-(id)initWithAttributeName:(id)arg0 valueType:(NSInteger)arg1 ;
-(id)initWithAttributeName:(id)arg0 valueType:(NSInteger)arg1 value:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif