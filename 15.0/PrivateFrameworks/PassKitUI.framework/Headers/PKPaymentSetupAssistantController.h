// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPASSISTANTCONTROLLER_H
#define PKPAYMENTSETUPASSISTANTCONTROLLER_H


#import <Foundation/Foundation.h>

#import "PKSetupAssistantContext.h"

@interface PKPaymentSetupAssistantController : NSObject {
    NSUInteger _setupAssistant;
    PKSetupAssistantContext *_setupAssistantContext;
}




+(id)requiredPaymentSetupFileURLs;
-(BOOL)_setupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
-(BOOL)setupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
-(id)_bridgeContextDefaultLocalCredential;
-(id)_peerPaymentCredential;
-(id)_provisioningControllerWithWebService:(id)arg0 ;
-(id)initWithSetupAssistant:(NSUInteger)arg0 setupAssistantContext:(id)arg1 ;
-(void)_bridgeStartingViewControllerForPaymentSetupContext:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_phoneStartingViewControllerForPaymentSetupContext:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_preflightPaymentSetupProvisioningController:(id)arg0 completion:(id)arg1 ;
-(void)_setupAssistantViewControllerWithCompletion:(id)arg0 ;
-(void)_shouldRunAppleCashFlow:(*BOOL)arg0 shouldRunPaymentSetupFlow:(*BOOL)arg1 pairingFamilyMember:(id)arg2 pairingPeerPaymentAccount:(id)arg3 parentFamilyMember:(id)arg4 parentPeerPaymentAccount:(id)arg5 ;
-(void)setupAssistantViewControllerWithCompletion:(id)arg0 ;
-(void)setupFlowWithCompletion:(id)arg0 ;


@end


#endif