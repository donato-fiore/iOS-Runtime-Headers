// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFFINISHSETUPBIOMETRICANDPASSCODECONTROLLER_H
#define BFFFINISHSETUPBIOMETRICANDPASSCODECONTROLLER_H

@class NSString;
@protocol UIPopoverPresentationControllerDelegate, BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling, BYCapabilities;

#import <Foundation/Foundation.h>


@interface BFFFinishSetupBiometricAndPasscodeController : NSObject <UIPopoverPresentationControllerDelegate, BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling>

 {
    NSString *_flowSkipIdentifier;
}


@property (retain, nonatomic) NSObject<BYCapabilities> *capabilities; // ivar: _capabilities
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode
@property (readonly) Class superclass;


-(BOOL)passcodeViewControllerAllowSkip:(id)arg0 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(id)createViewControllerWithPasscode:(id)arg0 completion:(id)arg1 ;
-(id)initWithFlowSkipIdentifier:(id)arg0 ;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg0 ;
-(id)preconditionViewControllerWithCompletion:(id)arg0 ;
-(id)viewControllerWithCompletion:(id)arg0 ;
-(void)_userDidTapPasscodeCancelButton:(id)arg0 ;
-(void)passcodeViewController:(id)arg0 didFinishWithPasscodeCreation:(id)arg1 ;


@end


#endif