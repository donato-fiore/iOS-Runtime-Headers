// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFAUTOMATICPASSWORDINPUTVIEWCONTROLLER_H
#define _SFAUTOMATICPASSWORDINPUTVIEWCONTROLLER_H

@class UIInputViewController, NSString, NSLayoutConstraint;
@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing, _SFAutoFillContextProviding;


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


@property (weak, nonatomic) NSObject<_SFAutoFillContextProviding> *autoFillContextProvider; // ivar: _autoFillContextProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_inputViewControllerWithAutoFillContext:(id)arg0 passwordRules:(id)arg1 overrideApplicationIdentifier:(id)arg2 completion:(id)arg3 ;
+(void)inputViewControllerWithAutoFillContext:(id)arg0 passwordRules:(id)arg1 completion:(id)arg2 ;
+(void)inputViewControllerWithAutoFillContext:(id)arg0 passwordRules:(id)arg1 overrideApplicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(BOOL)_inputViewControllerShouldDirectlyInsertPassword;
-(id)initWithPassword:(id)arg0 keyboardType:(NSInteger)arg1 ;
-(id)inputViewControllerOtherOptionsMenu:(id)arg0 ;
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