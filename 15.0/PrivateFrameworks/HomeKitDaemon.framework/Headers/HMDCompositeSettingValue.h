// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGVALUE_H
#define HMDCOMPOSITESETTINGVALUE_H

@class HMFObject;
@protocol HMDCompositeSettingIsEqualValueImplementing;



@interface HMDCompositeSettingValue : HMFObject <HMDCompositeSettingIsEqualValueImplementing>





+(id)compositeSettingValueFromImmutableSettingsValue:(id)arg0 ;
-(BOOL)isEqualValue:(id)arg0 ;
-(id)init;


@end


#endif