// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONONBOARDINGINTERFACE_H
#define PKPAYMENTAUTHORIZATIONONBOARDINGINTERFACE_H

@class PKAppleCardWelcomeExperiment, NSString, PKPaymentProvisioningController, NSError;
@protocol PKLoadingViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentAuthorizationInterface, PKPaymentAuthorizationOnboardingInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationContext.h"
#import "PKPaymentAuthorizationInterfaceConfiguration.h"
#import "PKNavigationController.h"

@interface PKPaymentAuthorizationOnboardingInterface : NSObject <PKLoadingViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentAuthorizationInterface>

 {
    NSInteger _onboardingContext;
    PKPaymentAuthorizationContext *_authorizationContext;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
    NSUInteger _feature;
    PKAppleCardWelcomeExperiment *_applyWelcomeCardExperiment;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationOnboardingInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKNavigationController *primaryViewController; // ivar: _primaryViewController
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (retain, nonatomic) NSError *setupError; // ivar: _setupError
@property (readonly) Class superclass;


-(id)_createBindRequestForFeatureApplication:(id)arg0 ;
-(id)_createPrimaryViewController;
-(id)_setupErrorUserInfoWithBindToken:(id)arg0 ;
-(id)applyWelcomeCardExperiment;
-(id)initWithOnboardingContext:(NSInteger)arg0 authorizationContext:(id)arg1 configuration:(id)arg2 ;
-(void)_bindFeatureApplication:(id)arg0 completion:(id)arg1 ;
-(void)_getAugmentedProduct:(id)arg0 ;
-(void)_getProduct:(id)arg0 ;
-(void)_loadFeatureOnboardingViewControllerForProduct:(id)arg0 completion:(id)arg1 ;
-(void)loadingViewControllerDidCancel:(id)arg0 ;
-(void)viewController:(id)arg0 canProceedWithInstallment:(BOOL)arg1 featureApplication:(id)arg2 completion:(id)arg3 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)willAppear;


@end


#endif