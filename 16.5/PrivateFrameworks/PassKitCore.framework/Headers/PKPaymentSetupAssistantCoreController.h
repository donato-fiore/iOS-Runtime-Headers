// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPASSISTANTCORECONTROLLER_H
#define PKPAYMENTSETUPASSISTANTCORECONTROLLER_H

@protocol PKPaymentSetupAssistantContextProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentProvisioningController.h"

@interface PKPaymentSetupAssistantCoreController : NSObject {
    id<PKPaymentSetupAssistantContextProtocol> *_setupAssistantContext;
}


@property (readonly, nonatomic) NSUInteger preflightState; // ivar: _preflightState
@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController


+(id)requiredPaymentSetupFileURLs;
-(BOOL)_bridgeNeedsToRun:(*NSUInteger)arg0 ;
-(BOOL)_macNeedsToRun:(*NSUInteger)arg0 ;
-(BOOL)_phoneNeedsToRun:(*NSUInteger)arg0 ;
-(BOOL)_setupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
-(NSUInteger)_specialCaseSEPassCountInPassLibrary:(id)arg0 ;
-(id)_bridgeContextDefaultLocalCredential;
-(id)_defaultWebService;
-(id)_peerPaymentCredential;
-(id)_provisioningContextWithProvisioningController:(id)arg0 setupAssistantCredentials:(id)arg1 maximumSelectable:(NSUInteger)arg2 ;
-(id)_provisioningControllerWithWebService:(id)arg0 ;
-(id)_setupAssistantCredentialForPaymentCredential:(id)arg0 ;
-(id)_setupAssistantCredentialForPaymentPass:(id)arg0 ;
-(id)description;
-(id)initWithSetupAssistantContext:(id)arg0 ;
-(void)_expressCardRemovalProvisioningContext:(id)arg0 ;
-(void)_expressSetupProvisioningContext:(id)arg0 ;
-(void)_extendedSetupAssistantNeedsToRunWithCompletion:(id)arg0 ;
-(void)_preflightPaymentSetupProvisioningController:(id)arg0 completion:(id)arg1 ;
-(void)_shouldRunAppleCashFlow:(*BOOL)arg0 shouldRunPaymentSetupFlow:(*BOOL)arg1 pairingFamilyMember:(id)arg2 pairingPeerPaymentAccount:(id)arg3 parentFamilyMember:(id)arg4 parentPeerPaymentAccount:(id)arg5 ;


@end


#endif