// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIVONRSWITCHSPECIFIER_H
#define PSUIVONRSWITCHSPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext, PSListController, PSConfirmationSpecifier, NSString;


#import "PSUICoreTelephonyCallCache.h"
#import "PSUICoreTelephonyCapabilitiesCache.h"
#import "PSUICoreTelephonyCarrierBundleCache.h"

@interface PSUIVoNRSwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSConfirmationSpecifier *_phoneCallWillEndWarning;
    PSConfirmationSpecifier *_vonrUnoptimizedWarning;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSpecifier *_parentSpecifier;
    NSString *_instance;
}




-(BOOL)shouldEnableVoNRSwitchCell;
-(BOOL)shouldShowCallWillEndWarning;
-(BOOL)shouldShowVoNRUnoptimizedWarning;
-(BOOL)showDisableVoNRWarningsIfNeeded;
-(BOOL)showEnableVoNRWarningsIfNeeded;
-(BOOL)showWarningsIfNeededForEnableState:(BOOL)arg0 ;
-(id)getLogger;
-(id)getVoNREnabled;
-(id)groupFooterText;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 callCache:(id)arg2 capabilitiesCache:(id)arg3 carrierBundleCache:(id)arg4 ;
-(void)reloadSelfInListController;
-(void)setUpPhoneCallWillEndWarningSpecifier;
-(void)setUpVoNRUnoptimizedSpecifierIfNeeded;
-(void)setVoNREnabled:(BOOL)arg0 ;
-(void)setVoNREnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setVoNROff;
-(void)setVoNROn;
-(void)showPhoneCallWillEndWarning;
-(void)showVoNRUnoptimizedWarning;


@end


#endif