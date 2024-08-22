// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKUSERDOMAINCONCEPTNAMEDQUANTITY_H
#define HKUSERDOMAINCONCEPTNAMEDQUANTITY_H

@class NSString;


#import "HKUserDomainConceptProperty.h"
#import "HKQuantity.h"

@interface HKUserDomainConceptNamedQuantity : HKUserDomainConceptProperty {
    os_unfair_lock_s _lock;
    HKQuantity *_lock_quantity;
}


@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) HKQuantity *quantity;
@property (readonly, copy, nonatomic) NSString *unitString; // ivar: _unitString
@property (readonly, nonatomic) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)nullPropertyWithType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 quantity:(id)arg1 type:(NSInteger)arg2 ;
-(id)initWithName:(id)arg0 value:(CGFloat)arg1 unitString:(id)arg2 type:(NSInteger)arg3 version:(NSInteger)arg4 timestamp:(CGFloat)arg5 deleted:(BOOL)arg6 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 timestamp:(CGFloat)arg2 deleted:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif