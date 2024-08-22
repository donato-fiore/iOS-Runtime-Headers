// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONPAYMENTUIINTERFACE_H
#define PKPAYMENTAUTHORIZATIONPAYMENTUIINTERFACE_H

@class NSString, UIViewController;
@protocol SBSHardwareButtonEventConsuming, PKPaymentAuthorizationInterface, BSInvalidatable, PKPaymentAuthorizationServiceProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationContext.h"
#import "PKPaymentAuthorizationInterfaceConfiguration.h"

@interface PKPaymentAuthorizationPaymentUIInterface : NSObject <SBSHardwareButtonEventConsuming, PKPaymentAuthorizationInterface>

 {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
    id *_paymentUIInterface;
    id<BSInvalidatable> *_lockButtonObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *primaryViewController; // ivar: _primaryViewController
@property (readonly, nonatomic) NSObject<PKPaymentAuthorizationServiceProtocol> *serviceDelegate; // ivar: _serviceDelegate
@property (readonly) Class superclass;


-(id)createPaymentUIInterfaceConfigurationWithBundle:(id)arg0 context:(id)arg1 configuration:(id)arg2 ;
-(id)createPaymentUIInterfaceWithContext:(id)arg0 configuration:(id)arg1 ;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 ;
-(void)_startObservingLockButtonPresses;
-(void)_stopObservingLockButtonPresses;
-(void)consumeDoublePressUpForButtonKind:(NSInteger)arg0 ;
-(void)consumeSinglePressUpForButtonKind:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didAppear;
-(void)initializePrimaryViewController;
-(void)invalidate;
-(void)willAppear;


@end


#endif