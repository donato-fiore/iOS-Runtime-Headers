// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBCAMERAREADERVIEWCONTROLLER_H
#define AMSUIWEBCAMERAREADERVIEWCONTROLLER_H

@class UIViewController, NSString, NSDictionary, UIView;
@protocol CRCameraReaderDelegate, CRCodeRedeemerControllerDelegate, UITextFieldDelegate, AMSUIWebPagePresenter;


#import "AMSUICommonViewController.h"
#import "AMSUIWebAppearance.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebCameraReaderInfoView.h"
#import "AMSUIWebCameraReaderPageModel.h"
#import "AMSUIWebNavigationBarModel.h"
#import "AMSUIWebCameraTextField.h"

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, CRCodeRedeemerControllerDelegate, UITextFieldDelegate, AMSUIWebPagePresenter>



@property (retain, nonatomic) AMSUIWebAppearance *appearance; // ivar: _appearance
@property (retain, nonatomic) UIViewController *childController; // ivar: _childController
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSUIWebCameraReaderInfoView *infoView; // ivar: _infoView
@property (nonatomic) CGRect keyboardRect; // ivar: _keyboardRect
@property (retain, nonatomic) AMSUIWebCameraReaderPageModel *model; // ivar: _model
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel; // ivar: _navigationBarModel
@property (retain, nonatomic) NSDictionary *output; // ivar: _output
@property (retain, nonatomic) UIView *overlay; // ivar: _overlay
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSUIWebCameraTextField *textField; // ivar: _textField
@property (retain, nonatomic) UIView *textFieldSafeAreaBackdrop; // ivar: _textFieldSafeAreaBackdrop


+(BOOL)cameraSupported;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_cameraReader;
-(id)_makeTextFieldWithPlaceholderColor:(id)arg0 ;
-(id)_outputForCreditCardReaderObjects:(id)arg0 ;
-(id)_outputForGiftCardReaderCode:(id)arg0 ;
-(id)_outputForGiftCardReaderObjects:(id)arg0 ;
-(id)_outputForIDCardReaderObjects:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)_applyAppearance;
-(void)_commitNavigationBarModel;
-(void)_handleCameraOutput:(id)arg0 error:(id)arg1 ;
-(void)_hideKeyboard;
-(void)_layoutFullScreen;
-(void)_layoutHalfScreen;
-(void)_layoutPage;
-(void)_layoutTextField;
-(void)_overlayTapGestureAction:(id)arg0 ;
-(void)_redeemAction:(id)arg0 ;
-(void)_setCameraToggleButton;
-(void)_setChild:(id)arg0 ;
-(void)_setRedeemButton;
-(void)_setupCameraToggle;
-(void)_setupInfoView;
-(void)_setupNavigationModel;
-(void)_setupPage;
-(void)_setupPageForCreditCard;
-(void)_setupPageForGiftCard;
-(void)_setupPageForIDCard;
-(void)_setupTextEntry;
-(void)cameraReader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cameraReader:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg0 ;
-(void)cameraReaderDidEnd:(id)arg0 ;
-(void)codeRedeemerController:(id)arg0 didEndWithInfo:(id)arg1 ;
-(void)codeRedeemerControllerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willPresentPageModel:(id)arg0 appearance:(id)arg1 ;


@end


#endif