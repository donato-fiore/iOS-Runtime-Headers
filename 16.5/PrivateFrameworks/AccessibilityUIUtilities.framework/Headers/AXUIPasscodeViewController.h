// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUIPASSCODEVIEWCONTROLLER_H
#define AXUIPASSCODEVIEWCONTROLLER_H

@class DevicePINController, NSString, UINavigationController, UIViewController;
@protocol AXUIPasscodePaneContainingNavigationControllerDelegate, UIPopoverPresentationControllerDelegate, AXUIPasscodeViewControllerDelegate;



@interface AXUIPasscodeViewController : DevicePINController <AXUIPasscodePaneContainingNavigationControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (nonatomic) BOOL asynchronouslyCheckedPinWasValid; // ivar: _asynchronouslyCheckedPinWasValid
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXUIPasscodeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *hostingNavigationController; // ivar: _hostingNavigationController
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode
@property (nonatomic, getter=isPasscodeViewVisible) BOOL passcodeViewVisible; // ivar: _passcodeViewVisible
@property (nonatomic) int pinLength; // ivar: _pinLength
@property (nonatomic) int presentationStyle; // ivar: _presentationStyle
@property (retain, nonatomic) UIViewController *presentorViewController; // ivar: _presentorViewController
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldAllowMultipleEntryAttempts;
-(BOOL)_shouldShowCancelButton;
-(BOOL)isNumericPIN;
-(BOOL)pinIsAcceptable:(id)arg0 outError:(*id)arg1 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(BOOL)requiresKeyboard;
-(BOOL)simplePIN;
-(BOOL)switchFromKeypadToKeyboard;
-(BOOL)useProgressiveDelays;
-(BOOL)validatePIN:(id)arg0 ;
-(NSInteger)_activeInterfaceOrientation;
-(NSInteger)axui_activeInterfaceOrientationForNavigationController:(id)arg0 ;
-(NSInteger)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg0 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPresentationStyle:(int)arg0 forSetup:(BOOL)arg1 pinLength:(NSUInteger)arg2 ;
-(id)stringsBundle;
-(void)_didFinishDismissingPasscodeViewWithReason:(NSInteger)arg0 ;
-(void)_dismissPasscodeViewAnimated:(BOOL)arg0 withReason:(NSInteger)arg1 ;
-(void)_notifyDelegateOfPasscodeViewDismissalWithReason:(NSInteger)arg0 ;
-(void)_notifyDelegateOfPasscodeViewVisibilityChange;
-(void)_presentPasscodeViewWithParentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_slidePasscodeField;
-(void)_updateErrorTextAndFailureCount:(BOOL)arg0 ;
-(void)cancelButtonTapped;
-(void)didAcceptEnteredPIN;
-(void)didAcceptSetPIN;
-(void)dismissPasscodeViewAnimated:(BOOL)arg0 reason:(NSInteger)arg1 ;
-(void)loadView;
-(void)pinEntered:(id)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)presentPasscodeViewWithParentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)setPIN:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif