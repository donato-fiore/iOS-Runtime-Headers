// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIVOICEANDDATASPECIFIER_H
#define PSUIVOICEANDDATASPECIFIER_H

@class PSSpecifier, PSListController, CTXPCServiceSubscriptionContext, CTServiceDescriptor, CoreTelephonyClient, NSArray, PSConfirmationSpecifier, Logger;


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
    PSUIDeviceWiFiState *_deviceWifiState;
    NSArray *_supportedDataRates;
    BOOL _3GOverrideTo4G;
    BOOL _LTEOverrideTo4G;
    PSConfirmationSpecifier *_warningFor5G;
    BOOL _showLegacyRAT;
    Logger *_logger;
}




-(BOOL)shouldOverrideRATModeForCBKey:(id)arg0 ;
-(BOOL)shouldShow5GUnsupportedWarningForTargetRATMode:(int)arg0 currentRATMode:(int)arg1 ;
-(BOOL)shouldShowCallEndWarningForTargetRATMode:(int)arg0 currentRATMode:(int)arg1 ;
-(id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)arg0 currentRATMode:(int)arg1 ;
-(id)getLocalizedStringFromRATMode:(int)arg0 ;
-(id)getLocalizedStringsFromDataRate:(NSInteger)arg0 ;
-(id)getLogger;
-(id)getRATMode;
-(id)getRATModesFromDataRate:(NSInteger)arg0 ;
-(id)getSmartDataModeState;
-(id)initWithName:(id)arg0 identifier:(id)arg1 hostController:(id)arg2 subscriptionContext:(id)arg3 groupSpecifierToUpdateFooterFor:(id)arg4 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 hostController:(id)arg2 subscriptionContext:(id)arg3 groupSpecifierToUpdateFooterFor:(id)arg4 serviceDescriptor:(id)arg5 coreTelephonyClient:(id)arg6 callCache:(id)arg7 registrationCache:(id)arg8 carrierBundleCache:(id)arg9 deviceWifiState:(id)arg10 ;
-(id)localizedRATModeStringForPrefix:(id)arg0 targetMode:(int)arg1 ;
-(id)localizedWarningStringForKey:(id)arg0 andRATMode:(int)arg1 ;
-(id)suffixStringFromRATMode:(int)arg0 ;
-(int)warningRATModeForTargetMode:(int)arg0 currentMode:(int)arg1 ;
-(void)accepted5GWarning:(id)arg0 ;
-(void)acceptedRATSelectionDuringCall:(id)arg0 ;
-(void)canceledRATSelectionDuringCall;
-(void)handleMaxDataRateChanged;
-(void)populateSpecifiers:(id)arg0 values:(id)arg1 ;
-(void)rejected5GWarning;
-(void)setMaxDataRateForRATMode:(int)arg0 ;
-(void)setRATMode:(id)arg0 specifier:(id)arg1 ;
-(void)setSmartDataModeState:(int)arg0 ;
-(void)setUp5GWarningSpecifier:(id)arg0 ;
-(void)setUpInternalState;
-(void)setUpRATSpecifers;
-(void)show5GUnsupportedWarning:(id)arg0 ;
-(void)showCallMayEndWarningForTargetRATMode:(int)arg0 currentRATMode:(int)arg1 ;
-(void)startObservingNotifications;
-(void)update5GWarningSpecifierTargetRATModeWithUserInput:(id)arg0 ;


@end


#endif