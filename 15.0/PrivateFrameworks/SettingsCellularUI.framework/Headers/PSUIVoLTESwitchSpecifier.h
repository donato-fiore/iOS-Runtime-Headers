// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIVOLTESWITCHSPECIFIER_H
#define PSUIVOLTESWITCHSPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext, PSListController, PSConfirmationSpecifier, Logger;


#import "PSUICoreTelephonyCallCache.h"
#import "PSUICoreTelephonyCapabilitiesCache.h"
#import "PSUICoreTelephonyCarrierBundleCache.h"

@interface PSUIVoLTESwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSConfirmationSpecifier *_unsupportedCarrierWarning;
    PSConfirmationSpecifier *_phoneCallWillEndWarning;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSpecifier *_parentSpecifier;
    Logger *_logger;
}




-(BOOL)isVoLTEProvisioning;
-(BOOL)shouldEnableVoLTESwitchCell;
-(BOOL)shouldShowCallCarrierAlert;
-(BOOL)shouldShowCallWillEndWarning;
-(BOOL)shouldShowVoLTECanCauseIssuesWarning;
-(BOOL)showDisableVoLTEWarningsIfNeeded;
-(BOOL)showEnableVoLTEWarningsIfNeeded;
-(BOOL)showWarningsIfNeededForEnableState:(BOOL)arg0 ;
-(id)createCallCarrierAlertForContext:(id)arg0 ;
-(id)getLogger;
-(id)getVoLTEEnabled;
-(id)groupFooterText;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 callCache:(id)arg2 capabilitiesCache:(id)arg3 carrierBundleCache:(id)arg4 ;
-(void)addSpinnerIfNeededToCell:(id)arg0 ;
-(void)reloadSelfInListController;
-(void)setUpPhoneCallWillEndWarningSpecifier;
-(void)setUpVoLTEWarningSpecifier;
-(void)setVoLTEEnabled:(BOOL)arg0 ;
-(void)setVoLTEEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setVoLTEOff;
-(void)setVoLTEOn;
-(void)showCallCarrierAlert;
-(void)showPhoneCallWillEndWarning;
-(void)showVoLTECanCauseIssuesWarning;


@end


#endif