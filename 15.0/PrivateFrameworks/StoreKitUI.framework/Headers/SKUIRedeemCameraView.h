// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMCAMERAVIEW_H
#define SKUIREDEEMCAMERAVIEW_H

@class UIView, UIButton, NSString, UIImage;
@protocol UITextFieldDelegate, SKUIRedeemCameraViewDelegate;


#import "SKUIClientContext.h"
#import "SKUIRedeemTextField.h"
#import "SKUIRedeemITunesPassLockup.h"
#import "SKUIRedeemCameraLandingView.h"
#import "SKUIITunesPassConfiguration.h"

@interface SKUIRedeemCameraView : UIView <UITextFieldDelegate>

 {
    SKUIClientContext *_clientContext;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemITunesPassLockup *_iTunesPassLockup;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_overlay;
    UIView *_redeemerView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
    BOOL _displayRedeem;
}


@property (retain, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration; // ivar: _iTunesPassConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIRedeemCameraViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


-(BOOL)_isShowingRedeemer;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_newTextFieldWithClientContext:(id)arg0 placeholderColor:(id)arg1 ;
-(id)initWithClientContext:(id)arg0 ;
-(void)_hideKeyboard;
-(void)_iTunesPassLearnMoreAction:(id)arg0 ;
-(void)_landingButtonAction:(id)arg0 ;
-(void)_pauseRedeemer;
-(void)_resumeRedeemer;
-(void)_showRedeemer:(BOOL)arg0 ;
-(void)_tapGestureAction:(id)arg0 ;
-(void)_termsButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)layoutSubviews;
-(void)showKeyboard;
-(void)start;
-(void)textFieldTextDidChange:(id)arg0 ;


@end


#endif