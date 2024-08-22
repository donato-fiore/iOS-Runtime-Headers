// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUI5GSASWITCHSPECIFIER_H
#define PSUI5GSASWITCHSPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext, PSListController, PSConfirmationSpecifier, CTNRStatus, NSString;


#import "PSUICoreTelephonyCarrierBundleCache.h"

@interface PSUI5GSASwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSConfirmationSpecifier *_enableSAAlert;
    CTNRStatus *_nrStatus;
    NSString *_instance;
}




-(id)getLogger;
-(id)groupFooterText;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 carrierBundleCache:(id)arg2 ;
-(id)is5GSAEnabled;
-(void)checkNRStatusAndDisableIfNeeded;
-(void)disable5GSA;
-(void)enable5GSA;
-(void)refreshSpecifiersInHostController;
-(void)set5GSAEnabled:(BOOL)arg0 ;
-(void)set5GSASwitch:(id)arg0 specifier:(id)arg1 ;
-(void)setUp5GSAAlertSpecifierIfNeeded;
-(void)show5GStandaloneExperimentalAlert;


@end


#endif