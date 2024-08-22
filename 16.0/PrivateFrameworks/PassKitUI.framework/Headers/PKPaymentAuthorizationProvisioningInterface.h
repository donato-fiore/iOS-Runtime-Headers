// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONPROVISIONINGINTERFACE_H
#define PKPAYMENTAUTHORIZATIONPROVISIONINGINTERFACE_H

@class NSString, UIViewController, PKPaymentProvisioningController;
@protocol PKPaymentSetupDelegate, PKPaymentAuthorizationInterface, PKPaymentAuthorizationProvisioningInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationContext.h"
#import "PKPaymentAuthorizationInterfaceConfiguration.h"

@interface PKPaymentAuthorizationProvisioningInterface : NSObject <PKPaymentSetupDelegate, PKPaymentAuthorizationInterface>

 {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationProvisioningInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *primaryViewController; // ivar: _primaryViewController
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly) Class superclass;


-(id)createPrimaryViewController;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg0 ;


@end


#endif