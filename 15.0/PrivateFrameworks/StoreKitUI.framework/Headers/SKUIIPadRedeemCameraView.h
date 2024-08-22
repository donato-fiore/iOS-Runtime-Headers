// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIIPADREDEEMCAMERAVIEW_H
#define SKUIIPADREDEEMCAMERAVIEW_H

@class UIView, UIScrollView, UIButton, NSString, UIImage;
@protocol UITextFieldDelegate, SKUIRedeemCameraViewDelegate;


#import "SKUIRedeemTextField.h"
#import "SKUIRedeemCameraLandingView.h"

@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate>

 {
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_redeemerView;
    UIScrollView *_scrollView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIRedeemCameraViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_adjustVerticalSpacingForHeight:(CGFloat)arg0 ;
-(id)_newTextFieldWithClientContext:(id)arg0 placeholderColor:(id)arg1 ;
-(id)initWithClientContext:(id)arg0 ;
-(void)_hideKeyboard;
-(void)_landingButtonAction:(id)arg0 ;
-(void)_termsButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)keyboardDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)showKeyboard;
-(void)start;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textFieldTextDidChange:(id)arg0 ;


@end


#endif