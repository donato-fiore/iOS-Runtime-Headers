// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTCONFIRMVIEW_H
#define SKUIGIFTCONFIRMVIEW_H

@class UIView, UILabel, UIButton;


#import "SKUIGiftConfirmLabeledValue.h"
#import "SKUIGiftConfiguration.h"

@interface SKUIGiftConfirmView : UIView {
    SKUIGiftConfirmLabeledValue *_amountView;
    UILabel *_chargeDisclaimerLabel;
    UILabel *_confirmYourOrderLabel;
    SKUIGiftConfirmLabeledValue *_senderView;
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGiftConfirmLabeledValue *_itemView;
    SKUIGiftConfirmLabeledValue *_messageView;
    SKUIGiftConfirmLabeledValue *_recipientsView;
    UIView *_rule1;
    UIView *_rule2;
    UIView *_rule3;
    UIView *_rule4;
    UIView *_rule5;
    UIView *_rule6;
    SKUIGiftConfirmLabeledValue *_fromView;
    SKUIGiftConfirmLabeledValue *_sendOnView;
    UIButton *_termsButton;
    SKUIGiftConfirmLabeledValue *_themeNameView;
    UILabel *_totalLabel;
}


@property (readonly, nonatomic) UIButton *termsButton;


-(id)_newBoldLabelWithSize:(CGFloat)arg0 ;
-(id)_newLightLabelWithSize:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(id)initWithGift:(id)arg0 configuration:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif