// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOMPOSITESETTINGSTRINGVALUE_H
#define HMDCOMPOSITESETTINGSTRINGVALUE_H

@class NSString;
@protocol HMDCompositeSettingsStringValueProviding;


#import "HMDCompositeSettingValue.h"

@interface HMDCompositeSettingStringValue : HMDCompositeSettingValue <HMDCompositeSettingsStringValueProviding>



@property (readonly, copy) NSString *stringValue; // ivar: _stringValue


-(BOOL)isEqualValue:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithValue:(id)arg0 ;


@end


#endif