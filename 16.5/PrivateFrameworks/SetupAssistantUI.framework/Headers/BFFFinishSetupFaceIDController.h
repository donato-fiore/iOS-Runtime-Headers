// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFFINISHSETUPFACEIDCONTROLLER_H
#define BFFFINISHSETUPFACEIDCONTROLLER_H



#import "BFFFinishSetupBiometricAndPasscodeController.h"
#import "BFFFinishSetupFaceIDViewController.h"

@interface BFFFinishSetupFaceIDController : BFFFinishSetupBiometricAndPasscodeController {
    BFFFinishSetupFaceIDViewController *_viewController;
}




+(id)finishSetupFaceIDController;
-(id)createViewControllerWithPasscode:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(void)performExtendedInitializationWithCompletion:(id)arg0 ;


@end


#endif