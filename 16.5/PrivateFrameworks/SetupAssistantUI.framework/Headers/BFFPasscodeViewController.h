// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFPASSCODEVIEWCONTROLLER_H
#define BFFPASSCODEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol BFFPasscodeCreationDelegate, BFFPasscodeInputViewDelegate, BFFPasscodeViewControllerDelegate;


#import "BFFPasscodeCreationManager.h"

@interface BFFPasscodeViewController : UIViewController <BFFPasscodeCreationDelegate, BFFPasscodeInputViewDelegate>

 {
    BOOL _footerButtonIsSkip;
    BOOL _showingSpinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<BFFPasscodeViewControllerDelegate> *passcodeCreationDelegate; // ivar: _passcodeCreationDelegate
@property (retain, nonatomic) BFFPasscodeCreationManager *passcodeManager; // ivar: _passcodeManager
@property (readonly) Class superclass;


+(BOOL)allowSkip;
-(BOOL)_allowSkip;
-(id)_firstEntryInstructions;
-(id)_passcodeInputViewForState:(NSUInteger)arg0 ;
-(id)instructionsForState:(NSUInteger)arg0 ;
-(id)passcodeInputView;
-(id)passcodeOptionAlertController;
-(id)titleForState:(NSUInteger)arg0 ;
-(void)_animatedPasscodeViewTransitionToState:(NSUInteger)arg0 animation:(NSUInteger)arg1 ;
-(void)_commitPasscodeEntryTypeChange;
-(void)_finishedWithPasscode:(id)arg0 ;
-(void)_setupFirstEntry;
-(void)_showPasscodeOptionsSheet;
-(void)_showSkipPasscodeAlert;
-(void)_showWeakWarningAlert;
-(void)_updateNextButton;
-(void)_updateNextButtonForPasscode:(id)arg0 ;
-(void)clear;
-(void)configurePasscodeTypeUsingAnimations:(BOOL)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)nextButtonPressed;
-(void)passcodeInput:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)passcodeInput:(id)arg0 tappedFooterButton:(id)arg1 ;
-(void)passcodeInput:(id)arg0 willChangeContents:(id)arg1 ;
-(void)passcodeManager:(id)arg0 didSetPasscodeWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)passcodeManager:(id)arg0 didTransitionFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)passcodeManagerWillSetPasscode:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif