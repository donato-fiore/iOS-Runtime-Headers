// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICOMPOSETEXTFIELD_H
#define SKUICOMPOSETEXTFIELD_H

@class UIView, UILabel, NSString, UITextField;
@protocol UITextFieldDelegate;


#import "SKUIComposeTextFieldConfiguration.h"

@interface SKUIComposeTextField : UIView <UITextFieldDelegate>

 {
    SKUIComposeTextFieldConfiguration *_configuration;
    NSInteger _currentTextLength;
    UILabel *_label;
}


@property (readonly, nonatomic) NSInteger composeReviewStyle; // ivar: _style
@property (readonly, nonatomic) SKUIComposeTextFieldConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)labelColorForStyle:(NSInteger)arg0 ;
+(id)labelFontForStyle:(NSInteger)arg0 ;
-(BOOL)textField:(id)arg0 shouldInsertText:(id)arg1 replacingRange:(struct _NSRange )arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 style:(NSInteger)arg1 ;
-(void)_textChanged:(id)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif