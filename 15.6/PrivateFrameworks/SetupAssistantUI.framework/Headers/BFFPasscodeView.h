// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFPASSCODEVIEW_H
#define BFFPASSCODEVIEW_H

@class UIViewController;


#import "BFFTitleView.h"
#import "BFFPasscodeInputView.h"

@interface BFFPasscodeView : BFFTitleView {
    BFFPasscodeInputView *_passcodeInputView;
}


@property (nonatomic) CGRect currentKeyboardFrame; // ivar: _currentKeyboardFrame
@property (weak, nonatomic) UIViewController *passcodeViewController; // ivar: _passcodeViewController


-(BOOL)alwaysBounceVertical;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)passcodeInputView;
-(void)animateTransitionToPasscodeInput:(id)arg0 animation:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)keyboardWillShow:(id)arg0 ;
-(void)layoutSubviews;
-(void)transitionToPasscodeInput:(id)arg0 delegate:(id)arg1 ;


@end


#endif