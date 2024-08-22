// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STINTROPASSCODEVIEWCONTROLLER_H
#define STINTROPASSCODEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol BFFPasscodeInputViewDelegate;


#import "STIntroductionViewModel.h"

@interface STIntroPasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate>



@property (readonly, copy) NSString *altDSID; // ivar: _altDSID
@property (readonly) BOOL askForRecoveryAppleID; // ivar: _askForRecoveryAppleID
@property (readonly, getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud; // ivar: _childOrNotSignedIntoiCloud
@property (readonly, copy) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *initialPasscode; // ivar: _initialPasscode
@property (readonly) STIntroductionViewModel *model; // ivar: _model
@property (getter=isNumeric) BOOL numeric; // ivar: _numeric
@property NSUInteger numericLength; // ivar: _numericLength
@property NSInteger passcodeState; // ivar: _passcodeState
@property (readonly) Class superclass;


-(id)_passcodeView;
-(id)initWithIntroductionModel:(id)arg0 askForRecoveryAppleID:(BOOL)arg1 altDSID:(id)arg2 isChildOrNotSignedIntoiCloud:(BOOL)arg3 continueHandler:(id)arg4 ;
-(id)passcodeInputView;
-(void)_transitionToFirstPasscodePaneWithState:(NSInteger)arg0 ;
-(void)loadView;
-(void)nextButtonTapped;
-(void)passcodeInput:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)passcodeTypeChanged:(BOOL)arg0 ;
-(void)updatePasscodeType;
-(void)userEnteredPasscode:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif