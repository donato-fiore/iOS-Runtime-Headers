// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFFEATUREAVAILABILITY_H
#define _SFFEATUREAVAILABILITY_H

@class WBSFeatureAvailability;



@interface _SFFeatureAvailability : WBSFeatureAvailability



+(BOOL)_shouldShowChineseFeatures;
+(BOOL)_shouldShowRussianFeatures;
+(BOOL)isTabBarAvailableForScreenSize:(struct CGSize )arg0 ;
+(BOOL)supportsCVV;


@end


#endif