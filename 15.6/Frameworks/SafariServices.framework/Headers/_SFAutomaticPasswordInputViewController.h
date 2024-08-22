// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFAUTOMATICPASSWORDINPUTVIEWCONTROLLER_H
#define _SFAUTOMATICPASSWORDINPUTVIEWCONTROLLER_H

@class UIInputViewController, NSString, NSLayoutConstraint;
@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing;


#import "SFAutomaticPasswordInputView.h"

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing>

 {
    SFAutomaticPasswordInputView *_inputView;
    NSString *_password;
    CGSize _portraitKeyboardSize;
    CGSize _landscapeKeyboardSize;
    NSLayoutConstraint *_heightConstraint;
    NSInteger _currentInterfaceOrientation;
    NSInteger _keyboardType;
    BOOL _logGeneratedPasswordAcceptedImplicitly;
    NSString *_autoFillContextProtocolObjectUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)inputViewControllerWithAutoFillContext:(id)arg0 passwordRules:(id)arg1 completion:(id)arg2 ;
-(BOOL)_inputViewControllerShouldDirectlyInsertPassword;
-(id)initWithPassword:(id)arg0 keyboardType:(NSInteger)arg1 ;
-(struct CGSize )_currentKeyboardSize;
-(struct CGSize )intrinsicContentSizeForInputView:(id)arg0 ;
-(void)_dismissKeyboard:(id)arg0 ;
-(void)_postButtonPressedNotificationForButton:(NSInteger)arg0 ;
-(void)_updateKeyboardHeight;
-(void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
-(void)dismissKeyboardPreservingFirstResponderIfNecessary;
-(void)inputViewControllerDidSelectUseCustomPassword:(id)arg0 ;
-(void)inputViewControllerDidSelectUseStrongPassword:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif