// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUREDEEMCODETEXTFIELD_H
#define SUREDEEMCODETEXTFIELD_H

@class UIView, NSString, UITextField, UIVisualEffectView;
@protocol UITextFieldDelegate;



@interface SURedeemCodeTextField : UIView

@property (weak, nonatomic) NSObject<UITextFieldDelegate> *delegate;
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithHeight:(CGFloat)arg0 ;
-(void)_setupSubviews;
-(void)_setupTextField;
-(void)_setupVisualEffectView;
-(void)layoutSubviews;


@end


#endif