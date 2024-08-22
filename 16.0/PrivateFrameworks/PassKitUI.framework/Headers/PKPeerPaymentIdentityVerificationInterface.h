// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONINTERFACE_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONINTERFACE_H

@class NSString, UIViewController;
@protocol PKPaymentSetupViewControllerDelegate, PKPaymentAuthorizationInterface, PKPeerPaymentIdentityVerificationInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationContext.h"
#import "PKPaymentAuthorizationInterfaceConfiguration.h"

@interface PKPeerPaymentIdentityVerificationInterface : NSObject <PKPaymentSetupViewControllerDelegate, PKPaymentAuthorizationInterface>

 {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPeerPaymentIdentityVerificationInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *primaryViewController; // ivar: _primaryViewController
@property (readonly) Class superclass;


+(void)interfaceWithContext:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(id)createPrimaryViewControllerWithVerificationResponse:(id)arg0 ;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 verificationResponse:(id)arg2 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif