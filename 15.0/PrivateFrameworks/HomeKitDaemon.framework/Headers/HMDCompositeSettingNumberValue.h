// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGNUMBERVALUE_H
#define HMDCOMPOSITESETTINGNUMBERVALUE_H

@class NSNumber;
@protocol HMDCompositeSettingsNumberValueProviding;


#import "HMDCompositeSettingValue.h"

@interface HMDCompositeSettingNumberValue : HMDCompositeSettingValue <HMDCompositeSettingsNumberValueProviding>



@property (readonly, copy) NSNumber *numberValue; // ivar: _numberValue


-(BOOL)isEqualValue:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithValue:(id)arg0 ;


@end


#endif