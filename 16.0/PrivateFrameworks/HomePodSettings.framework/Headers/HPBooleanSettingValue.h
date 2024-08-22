// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPBOOLEANSETTINGVALUE_H
#define HPBOOLEANSETTINGVALUE_H

@protocol NSSecureCoding;


#import "HPSettingValue.h"

@interface HPBooleanSettingValue : HPSettingValue <NSSecureCoding>



@property (readonly, nonatomic) BOOL booleanValue; // ivar: _booleanValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 boolValue:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif