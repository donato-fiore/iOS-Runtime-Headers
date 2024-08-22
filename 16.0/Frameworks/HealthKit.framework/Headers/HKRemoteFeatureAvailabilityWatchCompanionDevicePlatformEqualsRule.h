// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKREMOTEFEATUREAVAILABILITYWATCHCOMPANIONDEVICEPLATFORMEQUALSRULE_H
#define HKREMOTEFEATUREAVAILABILITYWATCHCOMPANIONDEVICEPLATFORMEQUALSRULE_H

@class NSString;
@protocol HKRemoteFeatureAvailabilityRule;


#import "HKRemoteFeatureAvailabilityBaseRule.h"

@interface HKRemoteFeatureAvailabilityWatchCompanionDevicePlatformEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *devicePlatform; // ivar: _devicePlatform
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg0 ;


@end


#endif