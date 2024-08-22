// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGVERSIONVALUE_H
#define HMDCOMPOSITESETTINGVERSIONVALUE_H

@class HMFVersion;
@protocol HMDCompositeSettingsVersionValueProviding;


#import "HMDCompositeSettingValue.h"

@interface HMDCompositeSettingVersionValue : HMDCompositeSettingValue <HMDCompositeSettingsVersionValueProviding>



@property (readonly) NSInteger type; // ivar: _type
@property (readonly, copy) HMFVersion *version; // ivar: _version


-(id)attributeDescriptions;
-(id)initWithVersion:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif