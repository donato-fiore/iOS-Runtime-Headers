// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDOCUMENTPASSWORDVIEW_H
#define UIDOCUMENTPASSWORDVIEW_H

@class NSString;
@protocol UITextFieldDelegate, UIDocumentPasswordViewDelegate;


#import "UIView.h"
#import "UILabel.h"
#import "UITextField.h"

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate>

 {
    UILabel *_label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate; // ivar: passwordDelegate
@property (readonly, nonatomic) UITextField *passwordField; // ivar: _passwordTextField
@property (readonly) Class superclass;


-(BOOL)_canDrawContent;
-(CGFloat)_labelHorizontalOffset;
-(CGFloat)_textFieldWidth;
-(id)_labelFont;
-(id)_labelTextColor;
-(id)initWithDocumentName:(id)arg0 ;
-(void)_passwordEntered:(id)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif