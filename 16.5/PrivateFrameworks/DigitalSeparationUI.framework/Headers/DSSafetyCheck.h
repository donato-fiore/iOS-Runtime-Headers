// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSAFETYCHECK_H
#define DSSAFETYCHECK_H


#import <Foundation/Foundation.h>


@interface DSSafetyCheck : NSObject



+(BOOL)isManagedAccount;
+(BOOL)shouldShowHSA2Upgrade;
+(id)safetyCheckViewController;
+(void)authForSafetyCheckWithPresentingViewController:(id)arg0 safetyCheckController:(id)arg1 ;
+(void)isChildOrTeenAccountWithCompletion:(id)arg0 ;
+(void)showChildAccountFlowWithPresentingViewController:(id)arg0 ;
+(void)showHSA2UpgradeWithPresentingViewController:(id)arg0 safetyCheckController:(id)arg1 ;
+(void)showManagedAccountAlertWithPresentingViewController:(id)arg0 ;
+(void)showlearnMoreForPresentingViewController:(id)arg0 withURL:(id)arg1 ;
+(void)startEmergencyResetWithPresentingViewController:(id)arg0 ;
+(void)startManageSharingWithPresentingViewController:(id)arg0 ;
+(void)startSafetyCheckWithPresentingViewController:(id)arg0 safetyCheckController:(id)arg1 ;


@end


#endif