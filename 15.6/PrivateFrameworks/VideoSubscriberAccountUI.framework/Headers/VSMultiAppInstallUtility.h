// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSMULTIAPPINSTALLUTILITY_H
#define VSMULTIAPPINSTALLUTILITY_H


#import <Foundation/Foundation.h>


@interface VSMultiAppInstallUtility : NSObject



+(id)getDecidedNonChannelAppsForProvider:(id)arg0 account:(id)arg1 device:(id)arg2 ;
+(void)determineMultiAppEnabledForProvider:(id)arg0 completion:(id)arg1 ;
+(void)determineMultiAppEnabledForProvider:(id)arg0 withAccount:(id)arg1 completion:(id)arg2 ;
+(void)filterBundleIDsByPendingConsent:(id)arg0 completionHandler:(id)arg1 ;
+(void)getPendingConsentBundleIDsFromSelectedAppDescriptions:(id)arg0 completionHandler:(id)arg1 ;
+(void)isShowMultiAppInstallForCaseAlwaysRequirePasswordEnabled:(id)arg0 ;


@end


#endif