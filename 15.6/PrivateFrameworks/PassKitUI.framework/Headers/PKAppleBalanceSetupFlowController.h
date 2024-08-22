// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLEBALANCESETUPFLOWCONTROLLER_H
#define PKAPPLEBALANCESETUPFLOWCONTROLLER_H

@class PKAppleBalanceCredential, PKPaymentProvisioningController;
@protocol PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKAppleBalanceSetupFlowController : NSObject

@property (readonly, nonatomic) PKAppleBalanceCredential *credential; // ivar: _credential
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly, nonatomic) NSInteger setupContext; // ivar: _setupContext
@property (readonly, weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate


-(id)_configuredCredentialProvisioningController;
-(id)_viewControllerForState:(NSInteger)arg0 ;
-(id)firstViewController;
-(id)initWithProvisioningController:(id)arg0 product:(id)arg1 setupContext:(NSInteger)arg2 setupDelegate:(id)arg3 ;
-(void)_requestProvisioningEligibility:(id)arg0 ;
-(void)nextViewControllerFromState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)requestEligibility:(id)arg0 ;


@end


#endif