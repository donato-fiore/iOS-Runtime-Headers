// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALONBOARDINGMANAGER_H
#define WDCLINICALONBOARDINGMANAGER_H

@class UINavigationController;

#import <Foundation/Foundation.h>

#import "WDClinicalOnboardingOAuthNavigationViewController.h"
#import "WDClinicalGatewayProxy.h"
#import "HRProfile.h"

@interface WDClinicalOnboardingManager : NSObject

@property (weak, nonatomic) UINavigationController *inFlightClinicalSharingLoginViewController; // ivar: _inFlightClinicalSharingLoginViewController
@property (weak, nonatomic) WDClinicalOnboardingOAuthNavigationViewController *inFlightLoginViewController; // ivar: _inFlightLoginViewController
@property (weak, nonatomic) UINavigationController *onboardingTileNavigationController; // ivar: _onboardingTileNavigationController
@property (retain, nonatomic) WDClinicalGatewayProxy *pendingOnboardingGateway; // ivar: _pendingOnboardingGateway
@property (weak, nonatomic) HRProfile *profile; // ivar: _profile


-(id)_deepLinkOnboardingViewControllerWithOptions:(NSUInteger)arg0 ;
-(id)gatewayProxyWithActivity:(id)arg0 ;
-(id)getPendingOnboardingGatewayAndClear;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)logPrefix;
-(void)_didDismissLoginViewController:(id)arg0 ;
-(void)_dismissInFlightLoginViewControllerIfExistsWithCompletion:(id)arg0 ;
-(void)_presentAccount:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_startLoginWithLoginViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_startOrReplaceLoginWithLoginViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)dealloc;
-(void)onboardWithActivity:(id)arg0 presentingViewController:(id)arg1 ;
-(void)registerInflightOnboardingViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif