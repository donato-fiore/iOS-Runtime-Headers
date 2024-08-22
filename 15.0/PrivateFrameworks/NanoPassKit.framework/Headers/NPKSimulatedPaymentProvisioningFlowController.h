// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKSIMULATEDPAYMENTPROVISIONINGFLOWCONTROLLER_H
#define NPKSIMULATEDPAYMENTPROVISIONINGFLOWCONTROLLER_H



#import "NPKPaymentProvisioningFlowController.h"

@interface NPKSimulatedPaymentProvisioningFlowController : NPKPaymentProvisioningFlowController



+(id)_broadwayCredential;
+(id)_easyProvisioningCredentials;
+(id)_passWithDescription:(id)arg0 credentialType:(NSInteger)arg1 ;
-(void)_performEligibility:(id)arg0 ;
-(void)_performProvision:(id)arg0 ;
-(void)_performTerms:(id)arg0 ;
-(void)_requestRequirements:(id)arg0 ;
-(void)_startProvisioningForCredential:(id)arg0 requestContext:(id)arg1 ;
-(void)acknowledgeWelcome:(id)arg0 ;
-(void)chooseFlowForPickerItem:(id)arg0 requestContext:(id)arg1 ;
-(void)handleManualEntryFields:(id)arg0 credential:(id)arg1 requestContext:(id)arg2 ;
-(void)startProvisioningFlow:(id)arg0 ;


@end


#endif