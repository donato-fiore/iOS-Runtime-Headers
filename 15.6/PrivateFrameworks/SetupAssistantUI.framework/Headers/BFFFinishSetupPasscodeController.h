// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFFINISHSETUPPASSCODECONTROLLER_H
#define BFFFINISHSETUPPASSCODECONTROLLER_H

@protocol BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling;

#import <Foundation/Foundation.h>

#import "BFFFinishSetupPasscodeController.h"
#import "BFFPasscodeViewController.h"

@interface BFFFinishSetupPasscodeController : NSObject <BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling>

 {
    BFFFinishSetupPasscodeController *_selfReference;
    BFFPasscodeViewController *_passcodeViewController;
}


@property (copy, nonatomic) id *completion; // ivar: _completion


+(id)finishSetupPasscodeController;
-(id)viewControllerWithCompletion:(id)arg0 ;
-(void)_completeWithPasscode:(id)arg0 result:(NSUInteger)arg1 ;
-(void)_userDidTapCancelButton:(id)arg0 ;
-(void)passcodeViewController:(id)arg0 didFinishWithPasscodeCreation:(id)arg1 ;


@end


#endif