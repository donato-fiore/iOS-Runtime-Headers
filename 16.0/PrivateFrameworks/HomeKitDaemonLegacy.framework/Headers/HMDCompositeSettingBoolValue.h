// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOMPOSITESETTINGBOOLVALUE_H
#define HMDCOMPOSITESETTINGBOOLVALUE_H

@protocol HMDCompositeSettingsBoolValueProviding;


#import "HMDCompositeSettingValue.h"

@interface HMDCompositeSettingBoolValue : HMDCompositeSettingValue <HMDCompositeSettingsBoolValueProviding>



@property (readonly) BOOL boolValue; // ivar: _boolValue


-(BOOL)isEqualValue:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithValue:(BOOL)arg0 ;


@end


#endif