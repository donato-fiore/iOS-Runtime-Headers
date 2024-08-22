// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEUISERVICELAUNCHUSERINFO_H
#define HUHOMEUISERVICELAUNCHUSERINFO_H


#import <Foundation/Foundation.h>


@interface HUHomeUIServiceLaunchUserInfo : NSObject



+(BOOL)isInSetupContext:(NSInteger)arg0 ;
+(NSInteger)launchReasonFromUserInfo:(id)arg0 ;
+(id)userInfoForLockAccessFirmwareUpgradeSetupInHome:(id)arg0 ;
+(id)userInfoForLockAccessPinCodeSetupInHome:(id)arg0 ;
+(id)userInfoForLockAccessWalletKeySetupInHome:(id)arg0 ;
+(id)userInfoForResumeAccessorySetupInHome:(id)arg0 accessoryUUIDs:(id)arg1 ;
+(id)userInfoForSafetyAndSecurityInHome:(id)arg0 ;
+(id)userInfoForSiriEndpointInHome:(id)arg0 ;
+(id)userInfoForUpgradeOfferResults:(id)arg0 ;


@end


#endif