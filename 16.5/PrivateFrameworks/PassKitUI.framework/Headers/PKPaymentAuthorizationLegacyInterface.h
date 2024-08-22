// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONLEGACYINTERFACE_H
#define PKPAYMENTAUTHORIZATIONLEGACYINTERFACE_H

@class NSString;
@protocol PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, SBSHardwareButtonEventConsuming, PKPaymentAuthorizationInterface, BSInvalidatable, PKPaymentAuthorizationServiceProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationContext.h"
#import "PKPaymentAuthorizationInterfaceConfiguration.h"
#import "PKPaymentAuthorizationServiceNavigationController.h"
#import "PKPaymentAuthorizationServiceCompactNavigationContainerController.h"

@interface PKPaymentAuthorizationLegacyInterface : NSObject <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, SBSHardwareButtonEventConsuming, PKPaymentAuthorizationInterface>

 {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
    PKPaymentAuthorizationServiceNavigationController *_navigationController;
    id<BSInvalidatable> *_lockButtonObserver;
}


@property (nonatomic) NSInteger coachingState; // ivar: _coachingState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentAuthorizationServiceCompactNavigationContainerController *primaryViewController; // ivar: _primaryViewController
@property (readonly, nonatomic) NSObject<PKPaymentAuthorizationServiceProtocol> *serviceDelegate; // ivar: _serviceDelegate
@property (readonly) Class superclass;


-(BOOL)shouldBlockHardwareCancels;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(void)_startObservingLockButtonPresses;
-(void)_stopObservingLockButtonPresses;
-(void)_updatePearlViews;
-(void)_updatePhysicalButtonViews;
-(void)authorizationViewControllerDidChangeCoachingState:(id)arg0 ;
-(void)authorizationViewControllerDidChangePhysicalButtonState:(id)arg0 ;
-(void)authorizationViewControllerDidRequestPaymentSetup;
-(void)compactNavigationContainerControllerReceivedExternalTap:(id)arg0 ;
-(void)consumeDoublePressUpForButtonKind:(NSInteger)arg0 ;
-(void)consumeSinglePressUpForButtonKind:(NSInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)willAppear;


@end


#endif