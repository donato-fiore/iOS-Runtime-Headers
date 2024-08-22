// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFIELDFOOTERVIEW_H
#define PKPAYMENTSETUPFIELDFOOTERVIEW_H

@class UITableViewHeaderFooterView, UIButton, PKPaymentSetupFieldLabel;
@protocol PKPaymentSetupFieldFooterViewDelegate;



@interface PKPaymentSetupFieldFooterView : UITableViewHeaderFooterView {
    UIButton *_button;
}


@property (weak, nonatomic) NSObject<PKPaymentSetupFieldFooterViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PKPaymentSetupFieldLabel *field; // ivar: _field


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonTapped;
-(void)_updateDisplayForFieldTypeLabel;
-(void)layoutSubviews;


@end


#endif