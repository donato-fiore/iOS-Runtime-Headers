// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPASSISTANTDELEGATEPROXY_H
#define PKPAYMENTSETUPASSISTANTDELEGATEPROXY_H

@class PKPaymentProvisioningController, NSString;
@protocol PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupAssistantDelegateProxy : NSObject <PKPaymentSetupViewControllerDelegate>

 {
    PKPaymentProvisioningController *_provisoningController;
    id<PKPaymentSetupViewControllerDelegate> *_externalDelegate;
    BOOL _didTerminateSetupFlow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 provisoningController:(id)arg1 ;
-(void)_setExternalDelegate:(id)arg0 ;
-(void)viewController:(id)arg0 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(id)arg3 ;
-(void)viewController:(id)arg0 didExitPasscodeUpgradeWithShouldContinue:(BOOL)arg1 error:(id)arg2 ;
-(void)viewController:(id)arg0 didShowProvisioningError:(id)arg1 ;
-(void)viewController:(id)arg0 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 completion:(id)arg2 ;
-(void)viewController:(id)arg0 requestPasscodeUpgradeWithCompletion:(id)arg1 ;
-(void)viewControllerDidBeginSetupFlow:(id)arg0 ;
-(void)viewControllerDidFailToChangePasscodeComplex:(id)arg0 ;
-(void)viewControllerDidFinishChangingPasscodeComplex:(id)arg0 ;
-(void)viewControllerDidShowEligibilityIssue:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif