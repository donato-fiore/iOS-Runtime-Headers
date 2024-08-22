// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIVOLTESWITCHSPECIFIER_H
#define PSUIVOLTESWITCHSPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext, PSListController, PSConfirmationSpecifier, PSSimStatusCache;


#import "PSUICoreTelephonyCallCache.h"
#import "PSUICoreTelephonyCapabilitiesCache.h"
#import "PSUICoreTelephonyCarrierBundleCache.h"

@interface PSUIVoLTESwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSConfirmationSpecifier *_phoneCallWillEndWarning;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSimStatusCache *_simStatusCache;
    PSSpecifier *_parentSpecifier;
}




-(BOOL)isVoLTEProvisioning;
-(BOOL)shouldEnableVoLTESwitchCell;
-(BOOL)shouldShowCallCarrierAlert;
-(BOOL)shouldShowCallWillEndWarning;
-(BOOL)shouldShowVoLTEUnsupportedWarning;
-(BOOL)showDisableVoLTEWarningsIfNeeded;
-(BOOL)showEnableVoLTEWarningsIfNeeded;
-(BOOL)showWarningsIfNeededForEnableState:(BOOL)arg0 ;
-(id)createCallCarrierAlertForContext:(id)arg0 ;
-(id)getLogger;
-(id)getVoLTEEnabled;
-(id)groupFooterText;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 callCache:(id)arg2 capabilitiesCache:(id)arg3 carrierBundleCache:(id)arg4 simStatusCache:(id)arg5 ;
-(void)addSpinnerIfNeededToCell:(id)arg0 ;
-(void)reloadSelfInListController;
-(void)setUpPhoneCallWillEndWarningSpecifier;
-(void)setVoLTEEnabled:(BOOL)arg0 ;
-(void)setVoLTEEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setVoLTEOff;
-(void)showCallCarrierAlert;
-(void)showPhoneCallWillEndWarning;


@end


#endif