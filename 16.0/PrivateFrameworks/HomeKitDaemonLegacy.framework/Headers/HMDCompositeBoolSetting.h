// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOMPOSITEBOOLSETTING_H
#define HMDCOMPOSITEBOOLSETTING_H

@protocol HMDCompositeSettingsBoolValueProviding;


#import "HMDCompositeSetting.h"

@interface HMDCompositeBoolSetting : HMDCompositeSetting <HMDCompositeSettingsBoolValueProviding>



@property (readonly) BOOL boolValue; // ivar: _boolValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualValue:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithValue:(BOOL)arg0 readVersion:(id)arg1 writeVersion:(id)arg2 ;


@end


#endif