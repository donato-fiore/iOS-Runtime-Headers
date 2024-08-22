// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPLABELFIELDCELL_H
#define PKPAYMENTSETUPLABELFIELDCELL_H

@class UIButton;


#import "PKPaymentSetupFieldCell.h"

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell {
    UIButton *_button;
}




-(CGFloat)minimumTextFieldOffset;
-(id)editableTextField;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonTapped;
-(void)_updateDisplay:(BOOL)arg0 ;
-(void)_updateDisplayForFieldTypeLabel:(id)arg0 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)setMinimumTextLabelWidth:(CGFloat)arg0 ;


@end


#endif