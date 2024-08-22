// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKNEWDEVICEPASSCODEVIEWCONTROLLER_H
#define PKNEWDEVICEPASSCODEVIEWCONTROLLER_H

@class UIViewController, NSString, BFFPasscodeView;
@protocol BFFPasscodeInputViewDelegate, PKPaymentSetupPresentationProtocol, PKNewDevicePasscodeViewControllerDelegate;


#import "PKPasscodeUpgradeFlowController.h"

@interface PKNewDevicePasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate, PKPaymentSetupPresentationProtocol>

 {
    PKPasscodeUpgradeFlowController *_flowController;
    NSInteger _minimumPasscodeLength;
    NSUInteger _passcodeInputScreenType;
    NSUInteger _passcodeInputState;
    NSInteger _context;
    NSString *_currentPasscode;
    NSString *_newPasscode;
    NSString *_constraintFailedInstructions;
    BOOL _viewHasAppeared;
    BFFPasscodeView *_passcodeView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKNewDevicePasscodeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_passcodeInputScreenTypeForUnlockScreenType:(int)arg0 ;
-(NSUInteger)onPresentationRemoveViewControllersAfterMarker;
-(id)_instructionsForState:(NSUInteger)arg0 ;
-(id)_passcodeInputViewForPasscodeInputState:(NSUInteger)arg0 passcodeInputScreenType:(NSUInteger)arg1 ;
-(id)_passcodeOptionAlertController;
-(id)_titleForState:(NSUInteger)arg0 ;
-(id)initWithPasscodeUpgradeFlowController:(id)arg0 minimumPasscodeLength:(NSInteger)arg1 withCurrentPasscode:(id)arg2 ;
-(void)_applyPasscode;
-(void)_configureNavigationItemForPasscodeInputScreenType:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_handleTransitionFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)_nextButtonPressed;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_setPasscodeInputState:(NSUInteger)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_transitionToNextStateForPasscodeInput:(id)arg0 ;
-(void)_transitionToPasscodeInputScreenType:(NSUInteger)arg0 ;
-(void)_updateNextButton;
-(void)_updateNextButtonForPasscode:(id)arg0 ;
-(void)loadView;
-(void)passcodeInput:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)passcodeInput:(id)arg0 tappedFooterButton:(id)arg1 ;
-(void)passcodeInput:(id)arg0 willChangeContents:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif