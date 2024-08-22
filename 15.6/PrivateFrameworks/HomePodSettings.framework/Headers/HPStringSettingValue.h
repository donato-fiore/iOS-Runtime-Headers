// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSTRINGSETTINGVALUE_H
#define HPSTRINGSETTINGVALUE_H

@class NSString;
@protocol NSSecureCoding;


#import "HPSettingValue.h"

@interface HPStringSettingValue : HPSettingValue <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 settingStringValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif