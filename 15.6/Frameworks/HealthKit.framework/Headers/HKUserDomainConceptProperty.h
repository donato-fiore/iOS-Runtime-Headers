// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUSERDOMAINCONCEPTPROPERTY_H
#define HKUSERDOMAINCONCEPTPROPERTY_H

@class NSUUID, NSData, NSDate, NSNumber, NSString;
@protocol NSCopying, NSSecureCoding, NSCopying><NSSecureCoding><NSObject;

#import <Foundation/Foundation.h>


@interface HKUserDomainConceptProperty : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *UUIDValue;
@property (readonly, copy, nonatomic) NSData *dataValue;
@property (readonly, copy, nonatomic) NSDate *dateValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSObject<NSCopying><NSSecureCoding><NSObject> *value; // ivar: _value
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)nullPropertyWithType:(NSInteger)arg0 version:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 UUIDValue:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 boolValue:(BOOL)arg2 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 dataValue:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 dateValue:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 doubleValue:(CGFloat)arg2 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 integerValue:(NSInteger)arg2 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 stringValue:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 timestamp:(CGFloat)arg2 valueType:(NSInteger)arg3 value:(id)arg4 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif