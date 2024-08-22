// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFFINISHSETUPTOUCHIDCONTROLLER_H
#define BFFFINISHSETUPTOUCHIDCONTROLLER_H



#import "BFFFinishSetupBiometricAndPasscodeController.h"

@interface BFFFinishSetupTouchIDController : BFFFinishSetupBiometricAndPasscodeController



+(id)finishSetupTouchIDController;
-(id)createViewControllerWithPasscode:(id)arg0 completion:(id)arg1 ;
-(id)init;


@end


#endif