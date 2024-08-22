// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIVOICEANDDATASPECIFIER_H
#define PSUIVOICEANDDATASPECIFIER_H

@class PSSpecifier, PSListController, CTXPCServiceSubscriptionContext, CTServiceDescriptor, CoreTelephonyClient, PSSimStatusCache, NSArray;


#import "PSUICoreTelephonyCallCache.h"
#import "PSUICoreTelephonyRegistrationCache.h"
#import "PSUICoreTelephonyCarrierBundleCache.h"
#import "PSUIDeviceWiFiState.h"

@interface PSUIVoiceAndDataSpecifier : PSSpecifier {
    PSListController *_hostController;
    PSSpecifier *_mobileDataGroup;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_drillDownController;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyRegistrationCache *_regCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSimStatusCache *_simStatusCache;
    PSUIDeviceWiFiState *_deviceWifiState;
    NSArray *_supportedDataRates;
    BOOL _3GOverrideTo4G;
    BOOL _LTEOverrideTo4G;
    BOOL _showLegacyRAT;
}




-(BOOL)shouldOverrideRATModeForCBKey:(id)arg0 ;
-(BOOL)shouldShowCallEndWarningForTargetRATMode:(int)arg0 currentRATMode:(int)arg1 ;
-(id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)arg0 currentRATMode:(int)arg1 ;
-(id)getLocalizedStringFromRATMode:(int)arg0 ;
-(id)getLocalizedStringsFromDataRate:(NSInteger)arg0 ;
-(id)getLogger;
-(id)getRATMode;
-(id)getRATModesFromDataRate:(NSInteger)arg0 ;
-(id)getSmartDataModeState;
-(id)initWithHostController:(id)arg0 subscriptionContext:(id)arg1 groupSpecifierToUpdateFooterFor:(id)arg2 ;
-(id)initWithHostController:(id)arg0 subscriptionContext:(id)arg1 groupSpecifierToUpdateFooterFor:(id)arg2 serviceDescriptor:(id)arg3 coreTelephonyClient:(id)arg4 callCache:(id)arg5 registrationCache:(id)arg6 carrierBundleCache:(id)arg7 simStatusCache:(id)arg8 deviceWifiState:(id)arg9 ;
-(id)localizedRATModeStringForPrefix:(id)arg0 targetMode:(int)arg1 ;
-(id)localizedWarningStringForKey:(id)arg0 andRATMode:(int)arg1 ;
-(id)suffixStringFromRATMode:(int)arg0 ;
-(int)warningRATModeForTargetMode:(int)arg0 currentMode:(int)arg1 ;
-(void)acceptedRATSelectionDuringCall:(id)arg0 ;
-(void)canceledRATSelectionDuringCall;
-(void)handleMaxDataRateChanged;
-(void)populateSpecifiers:(id)arg0 values:(id)arg1 ;
-(void)setMaxDataRateForRATMode:(int)arg0 ;
-(void)setRATMode:(id)arg0 specifier:(id)arg1 ;
-(void)setSmartDataModeState:(int)arg0 ;
-(void)setUpInternalState;
-(void)setUpRATSpecifers;
-(void)showCallMayEndWarningForTargetRATMode:(int)arg0 currentRATMode:(int)arg1 ;
-(void)startObservingNotifications;


@end


#endif