// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSPASSCODECONTROLLER_H
#define DSPASSCODECONTROLLER_H

@class NSLayoutConstraint, NSString, BFFPasscodeView;
@protocol BFFPasscodeInputViewDelegate, DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSPasscodeController : DSOBWelcomeController <BFFPasscodeInputViewDelegate, DSController>



@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint; // ivar: _contentHeightConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isNumeric) BOOL numeric; // ivar: _numeric
@property (nonatomic) NSUInteger numericLength; // ivar: _numericLength
@property (retain, nonatomic) NSString *passcodeNew; // ivar: _passcodeNew
@property (retain, nonatomic) NSString *passcodeOld; // ivar: _passcodeOld
@property (nonatomic) NSInteger passcodeState; // ivar: _passcodeState
@property (retain, nonatomic) BFFPasscodeView *passcodeView; // ivar: _passcodeView
@property (readonly) Class superclass;


+(BOOL)isPasscodeSet;
-(BOOL)shouldShow;
-(BOOL)usesSimplePasscodeEntry;
-(BOOL)validatePIN:(id)arg0 ;
-(id)_createAndShowAnimatedNavBarSpinner;
-(id)init;
-(id)passcodeInputView;
-(id)passcodeOptionAlertController;
-(void)_animatePasscodeViewTransition;
-(void)_applyPasscode;
-(void)_commitPasscodeEntryTypeChange;
-(void)_setupFirstEntry;
-(void)_showPasscodeOptionsSheet;
-(void)_showWeakWarningAlert;
-(void)_transitionToPasscodePaneWithState:(NSInteger)arg0 animationType:(NSUInteger)arg1 ;
-(void)acceptWeakPasscode:(BOOL)arg0 ;
-(void)configurePasscodeTypeUsingAnimations:(BOOL)arg0 ;
-(void)handleCurrentPasscodeEntry:(id)arg0 ;
-(void)handleNewPasscodeEntry:(id)arg0 ;
-(void)handlePasscodeConfirmationEntry:(id)arg0 ;
-(void)handlePasscodeDoesNotMeetConstraints:(id)arg0 ;
-(void)nextButtonTapped;
-(void)passcodeInput:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)passcodeInput:(id)arg0 tappedFooterButton:(id)arg1 ;
-(void)reset;
-(void)userEnteredPasscode:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif