// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUI5GSASWITCHSPECIFIER_H
#define PSUI5GSASWITCHSPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext, PSListController, CTNRStatus, NSString;


#import "PSUICoreTelephonyCarrierBundleCache.h"

@interface PSUI5GSASwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    CTNRStatus *_nrStatus;
    NSString *_instance;
}




-(BOOL)shouldAddCoverageExtensionFooterText;
-(BOOL)shouldAddDefaultOffCarrierFooterText;
-(id)getLogger;
-(id)groupFooterText;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 carrierBundleCache:(id)arg2 ;
-(id)is5GSAEnabled;
-(void)checkNRStatusAndDisableIfNeeded;
-(void)refreshSpecifiersInHostController;
-(void)set5GSAEnabled:(BOOL)arg0 ;
-(void)set5GSASwitch:(id)arg0 specifier:(id)arg1 ;


@end


#endif