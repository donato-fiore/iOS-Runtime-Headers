// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFREGAPPLEIDSPLASHVIEWCONTROLLER_H
#define CNFREGAPPLEIDSPLASHVIEWCONTROLLER_H

@class PSAppleIDSplashViewController;


#import "CNFRegController.h"

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController

@property (retain) CNFRegController *regController; // ivar: _regController
@property NSInteger serviceType; // ivar: _serviceType
@property BOOL showBusyUIOnAppearance; // ivar: _showBusyUIOnAppearance


+(BOOL)shouldShowSplashViewForService:(id)arg0 inProgressRegisteringNonPhoneAccount:(*id)arg1 ;
+(id)_inProgressRegisteringNonPhoneAccountForService:(id)arg0 ;
-(id)_iCloudUserName;
-(id)_imService;
-(id)serviceDescription;
-(id)serviceFooter;
-(id)serviceIcon;
-(id)serviceName;
-(void)_applicationDidResume:(id)arg0 ;
-(void)_cnfSignInWithUsername:(id)arg0 password:(id)arg1 ;
-(void)_completeIfAccountIsAlreadyRegistered;
-(void)_handleRegistarResults:(BOOL)arg0 alertController:(id)arg1 ;
-(void)_showSettingsController;
-(void)continueRegisteringAccount:(id)arg0 ;
-(void)dealloc;
-(void)handleAuthCompletionWithResults:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBeginAuthWithContext:(id)arg0 ;


@end


#endif