// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRALERTCONTROLLER_H
#define _TVRALERTCONTROLLER_H

@class UIViewController, NSString, UIView, TVRCKeyboardAttributes;
@protocol _TVRAlertViewDelegate, _TVRKeyboardViewDelegate, UIViewControllerTransitioningDelegate, _TVRAlertControllerDelegate;


#import "_TVRAlertView.h"
#import "_TVRKeyboardView.h"

@interface _TVRAlertController : UIViewController <_TVRAlertViewDelegate, _TVRKeyboardViewDelegate, UIViewControllerTransitioningDelegate>



@property (retain, nonatomic) _TVRAlertView *alertView; // ivar: _alertView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVRAlertControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) TVRCKeyboardAttributes *keyboardAttributes; // ivar: _keyboardAttributes
@property (retain, nonatomic) _TVRKeyboardView *keyboardView; // ivar: _keyboardView
@property (nonatomic) CGRect previousKeyboardFrame; // ivar: _previousKeyboardFrame
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_contentViewBasedOnType;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initForTextPasswordType:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardAttributes:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithTitle:(id)arg0 PINEntryAttributes:(id)arg1 ;
-(id)initWithTitle:(id)arg0 keyboardAttributes:(id)arg1 ;
-(id)initWithTitle:(id)arg0 passcodeSize:(NSInteger)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_cancel;
-(void)_keyboardChanged:(id)arg0 ;
-(void)_layoutForKeyboardFrame:(struct CGRect )arg0 ;
-(void)_observeKeyboardNotifications;
-(void)alertView:(id)arg0 didUpdateText:(id)arg1 ;
-(void)alertViewDidCancel:(id)arg0 ;
-(void)enableDictationButton:(BOOL)arg0 ;
-(void)keyboardView:(id)arg0 didUpdateText:(id)arg1 ;
-(void)keyboardView:(id)arg0 generatedTextInputPayload:(id)arg1 ;
-(void)keyboardViewDidCancel:(id)arg0 ;
-(void)keyboardViewDidHitReturnKey:(id)arg0 ;
-(void)keyboardViewPressedDictationButton:(id)arg0 ;
-(void)keyboardViewReleasedDictationButton:(id)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif