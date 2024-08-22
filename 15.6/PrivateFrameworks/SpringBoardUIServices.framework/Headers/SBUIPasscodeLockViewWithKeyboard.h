// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIPASSCODELOCKVIEWWITHKEYBOARD_H
#define SBUIPASSCODELOCKVIEWWITHKEYBOARD_H

@class UIView, UIControl, NSString, UILabel;
@protocol SBUIPasscodeEntryFieldDelegate;


#import "SBUIPasscodeLockViewBase.h"
#import "SBPasscodeKeyboardAnimator.h"
#import "SBUIAlphanumericPasscodeEntryField.h"

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate>

 {
    SBPasscodeKeyboardAnimator *_keyboardAnimator;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    UIControl *_emergencyCallButton;
    BOOL _usesLightStyle;
    BOOL _isResigningResponderStatus;
    BOOL _keyboardVisible;
    CGFloat _keyboardHeightOffset;
    BOOL _keyboardTracksLockView;
    UIView *_keyboardTrackingView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *statusField; // ivar: _statusField
@property (retain, nonatomic) UILabel *statusSubtitleView; // ivar: _statusSubtitleView
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)passcodeEntryField:(id)arg0 shouldInsertText:(id)arg1 ;
-(BOOL)passcodeEntryFieldShouldShowSystemKeyboard:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(CGFloat)_keyboardToEntryFieldOffset;
-(CGFloat)_largeTextEmergencyButtonMaxWidth;
-(CGFloat)_statusFieldHeightWithWidth:(CGFloat)arg0 ;
-(CGFloat)_statusTitleWidth;
-(id)_alphanumericPasscodeEntryField;
-(id)_newStatusField;
-(id)_newStatusSubtitleView;
-(id)_statusTitleView;
-(id)_viewForKeyboardTracking;
-(id)initWithLightStyle:(BOOL)arg0 ;
-(id)passcode;
-(struct CGRect )_keyboardFrameForInterfaceOrientation:(NSInteger)arg0 ;
-(void)_acceptOrCancelReturnKeyPress;
-(void)_hardwareReturnKeyPressed:(id)arg0 ;
-(void)_keyboardDidHideNotification:(id)arg0 ;
-(void)_keyboardDidRequestDismissalNotification:(id)arg0 ;
-(void)_keyboardWillChangeFrameNotification:(id)arg0 ;
-(void)_keyboardWillShowNotification:(id)arg0 ;
-(void)_layoutForMinimizationState:(BOOL)arg0 ;
-(void)_layoutStatusView;
-(void)_luminanceBoostDidChange;
-(void)_notifyDelegatePasscodeCancelled;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegateThatEmergencyCallButtonWasPressed;
-(void)_setKeyboardTracksLockView:(BOOL)arg0 ;
-(void)_toggleForEmergencyCall;
-(void)_toggleForStatusField;
-(void)_updateFont;
-(void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)arg0 ;
-(void)becomeActiveWithAnimationSettings:(id)arg0 ;
-(void)beginTransitionToState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didEndTransitionToState:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg0 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg0 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg0 ;
-(void)resignActiveWithAnimationSettings:(id)arg0 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg0 ;
-(void)setShowsStatusField:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForTransitionToPasscodeView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateStatusText:(id)arg0 subtitle:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif