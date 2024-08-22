// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCLINICALONBOARDINGOAUTHNAVIGATIONVIEWCONTROLLER_H
#define WDCLINICALONBOARDINGOAUTHNAVIGATIONVIEWCONTROLLER_H

@class UINavigationController, HKClinicalAccount, HKClinicalProvider, SFSafariViewController;
@protocol HRClinicalSharingOnboardingDelegate, AccountSharingOnboardingDelegate;


#import "WDClinicalGatewayProxy.h"
#import "WDClinicalAccountOnboardingSession.h"
#import "HRProfile.h"

@interface WDClinicalOnboardingOAuthNavigationViewController : UINavigationController <HRClinicalSharingOnboardingDelegate>



@property (retain, nonatomic) WDClinicalGatewayProxy *gatewayProxyToTry; // ivar: _gatewayProxyToTry
@property (readonly, copy, nonatomic) HKClinicalAccount *onboardingAccount; // ivar: _onboardingAccount
@property (weak, nonatomic) NSObject<AccountSharingOnboardingDelegate> *onboardingDelegate; // ivar: _onboardingDelegate
@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession; // ivar: _onboardingSession
@property (nonatomic) BOOL onboardingSourceIsDeepLink; // ivar: _onboardingSourceIsDeepLink
@property (nonatomic) UINavigationController *onboardingTileNavigationViewController; // ivar: _onboardingTileNavigationViewController
@property (readonly, nonatomic) HRProfile *profile;
@property (retain, nonatomic) HKClinicalProvider *providerToPresent; // ivar: _providerToPresent
@property (readonly, nonatomic) SFSafariViewController *safariViewController; // ivar: _safariViewController
@property (nonatomic) BOOL showProviderNotFound; // ivar: _showProviderNotFound


-(NSUInteger)supportedInterfaceOrientations;
-(id)_createInitialRootViewController;
-(id)init;
-(id)initWithContext:(NSInteger)arg0 onboardingOptions:(NSUInteger)arg1 profile:(id)arg2 existingAccount:(id)arg3 ;
-(id)initWithSession:(id)arg0 existingAccount:(id)arg1 ;
-(void)_dismissViewController;
-(void)beginListeningToNotification;
-(void)completionNotificationHandler:(id)arg0 ;
-(void)createRootViewController;
-(void)didCompleteOnboardingFor:(id)arg0 ;
-(void)didLoginToAccount:(id)arg0 ;
-(void)dismissSafariViewControllerAnimatedWithCompletion:(id)arg0 ;
-(void)dismissWithAccount:(id)arg0 error:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentSafariViewController;
-(void)presentSafariViewController:(id)arg0 withGatewayUrl:(id)arg1 ;
-(void)stopListeningToNotification;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif