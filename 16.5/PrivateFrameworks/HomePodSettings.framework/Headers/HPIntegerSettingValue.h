// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPINTEGERSETTINGVALUE_H
#define HPINTEGERSETTINGVALUE_H

@class NSNumber;
@protocol NSSecureCoding;


#import "HPSettingValue.h"

@interface HPIntegerSettingValue : HPSettingValue <NSSecureCoding>



@property (readonly, nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) float floatValue; // ivar: _floatValue
@property (readonly, nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (retain, nonatomic) NSNumber *numberValue; // ivar: _numberValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 numberValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif