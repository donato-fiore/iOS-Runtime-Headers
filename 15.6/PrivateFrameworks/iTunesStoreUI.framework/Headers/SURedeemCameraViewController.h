// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUREDEEMCAMERAVIEWCONTROLLER_H
#define SUREDEEMCAMERAVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, UIView, UIBarButtonItem;
@protocol SUCodeRedeemerControllerDelegate, UITextFieldDelegate;


#import "SUCodeRedeemerController.h"
#import "SURedeemCodeTextField.h"

@interface SURedeemCameraViewController : UIViewController <SUCodeRedeemerControllerDelegate, UITextFieldDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) SUCodeRedeemerController *cameraController; // ivar: _cameraController
@property (copy, nonatomic) id *codeHandler; // ivar: _codeHandler
@property (retain, nonatomic) SURedeemCodeTextField *codeTextField; // ivar: _codeTextField
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreDefaultKeyboardNotifications; // ivar: _ignoreDefaultKeyboardNotifications
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UIBarButtonItem *redeemBarButton; // ivar: _redeemBarButton
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) UIBarButtonItem *toggleCameraBarButton; // ivar: _toggleCameraBarButton


+(BOOL)cameraSupported;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(void)_cancelButtonAction;
-(void)_detectedCode:(id)arg0 ;
-(void)_dismissKeyboard;
-(void)_hideOverlay;
-(void)_layoutCodeTextField;
-(void)_layoutCodeTextFieldWithNotification:(id)arg0 ;
-(void)_overlayTapAction;
-(void)_pauseCamera;
-(void)_presentCameraErrorAlert;
-(void)_recognitionError;
-(void)_recognitionSuccess;
-(void)_redeemButtonAction;
-(void)_resumeCamera;
-(void)_setBackButtonTitle:(id)arg0 ;
-(void)_setup;
-(void)_setupActivityIndicator;
-(void)_setupCameraController;
-(void)_setupCodeTextField;
-(void)_setupNavigationItem;
-(void)_setupNotifications;
-(void)_setupOverlayView;
-(void)_showOverlay;
-(void)_startActivityIndicator;
-(void)_startCameraController;
-(void)_stopAcitivityIndicator;
-(void)_stopCameraController;
-(void)_toggleCameraButtonAction;
-(void)_updateNavigationItemAnimated;
-(void)_updateState;
-(void)codeRedeemerControllerDidCancel;
-(void)codeRedeemerControllerDidEndWithCode:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)performAction:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif