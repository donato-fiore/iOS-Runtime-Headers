// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIVOICEANDDATADRILLDOWNCONTROLLER_H
#define PSUIVOICEANDDATADRILLDOWNCONTROLLER_H

@class PSListItemsController, CTXPCServiceSubscriptionContext, CoreTelephonyClient, CTServiceDescriptor, Logger, NSString;
@protocol CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate;


#import "PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory.h"

@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate>

 {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory *_switchFactory;
    int _currentRATMode;
    CoreTelephonyClient *_ctClient;
    CTServiceDescriptor *_serviceDescriptor;
    Logger *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldEnable5GRATModeSpecifiers;
-(BOOL)shouldShow5GSASwitch:(id)arg0 ;
-(BOOL)shouldShowFooterTextWithVoiceExplanation;
-(BOOL)shouldShowVoLTESwitch;
-(id)getLogger;
-(id)getSwitchSpecifiers;
-(id)identifierForRATMode:(int)arg0 ;
-(id)init;
-(id)initWithCTClient:(id)arg0 switchFactory:(id)arg1 ;
-(id)specifiers;
-(int)RATModeForSpecifier:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)configure5GRATModeSpecifiersEnabledState;
-(void)configureSpecifiers;
-(void)context:(id)arg0 capabilitiesChanged:(id)arg1 ;
-(void)handleMaxDataRateChanged;
-(void)listItemSelected:(id)arg0 ;
-(void)nrDisableStatusChanged:(id)arg0 status:(id)arg1 ;
-(void)prepareSpecifiers:(id)arg0 ;
-(void)reloadSpecifier:(id)arg0 ;
-(void)set5GRATModeSpecifierEnabledState:(id)arg0 ;
-(void)setRATGroupFooterText;
-(void)setSpecifier:(id)arg0 ;
-(void)setUpRATModeSpecifierIdentifiers:(id)arg0 ;
-(void)startObservingNotifications;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateCurrentRATModeFromSpecifier:(id)arg0 ;


@end


#endif