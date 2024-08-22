// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBPASSCODEVIEWCONTROLLER_H
#define OBPASSCODEVIEWCONTROLLER_H

@class NSLayoutConstraint, NSString;
@protocol OBPasscodeInputViewDelegate, OBPasscodeViewControllerDelegate;


#import "OBWelcomeController.h"
#import "OBPasscodeInputView.h"

@interface OBPasscodeViewController : OBWelcomeController <OBPasscodeInputViewDelegate>



@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<OBPasscodeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBPasscodeInputView *passcodeInputView; // ivar: _passcodeInputView
@property (nonatomic) BOOL requiresCompletion; // ivar: _requiresCompletion
@property (readonly) Class superclass;


-(CGFloat)_verticalPaddingForInputView;
-(void)_completionTapped:(id)arg0 ;
-(void)_updateCompletionButtonEnabledStateForPasscode:(id)arg0 ;
-(void)clearPasscodeEntry;
-(void)configureForPasscodeEntry:(NSUInteger)arg0 length:(NSInteger)arg1 ;
-(void)loadView;
-(void)passcodeInput:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)passcodeInput:(id)arg0 willChangeContents:(id)arg1 ;
-(void)shakePasscodeEntry;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif