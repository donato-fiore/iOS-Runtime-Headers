// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCONCEPTATTRIBUTE_H
#define HKCONCEPTATTRIBUTE_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying, NSCopying><NSSecureCoding><NSObject;

#import <Foundation/Foundation.h>


@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger longLongValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSObject<NSCopying><NSSecureCoding><NSObject> *value; // ivar: _value
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
+(id)attributeWithIdentifier:(NSInteger)arg0 type:(NSInteger)arg1 boolValue:(BOOL)arg2 ;
+(id)attributeWithIdentifier:(NSInteger)arg0 type:(NSInteger)arg1 numberValue:(id)arg2 ;
+(id)attributeWithIdentifier:(NSInteger)arg0 type:(NSInteger)arg1 stringValue:(id)arg2 ;
+(id)attributeWithIdentifier:(NSInteger)arg0 type:(NSInteger)arg1 valueType:(NSInteger)arg2 value:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 type:(NSInteger)arg1 valueType:(NSInteger)arg2 value:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif