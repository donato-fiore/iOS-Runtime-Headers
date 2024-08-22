// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SETTINGSCELLULARUTILS_H
#define SETTINGSCELLULARUTILS_H


#import <Foundation/Foundation.h>


@interface SettingsCellularUtils : NSObject



+(BOOL)isUIDualSIM;
+(BOOL)isUISingleSIM;
+(BOOL)shouldShowPendingTransferPlanOnPad;
+(BOOL)supportsWiFiCalling:(id)arg0 ;
+(id)formattedPhoneNumber:(id)arg0 ;
+(id)singleSIMUIServiceDescriptor;
+(id)singleSIMUISubscriptionContext;


@end


#endif