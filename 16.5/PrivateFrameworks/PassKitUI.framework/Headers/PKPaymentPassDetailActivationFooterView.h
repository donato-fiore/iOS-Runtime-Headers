// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSDETAILACTIVATIONFOOTERVIEW_H
#define PKPAYMENTPASSDETAILACTIVATIONFOOTERVIEW_H

@class UITableViewHeaderFooterView, UILabel, UIButton;



@interface PKPaymentPassDetailActivationFooterView : UITableViewHeaderFooterView {
    UILabel *_footerTextLabel;
    UIButton *_activationButton;
}




-(id)initWithFrame:(struct CGRect )arg0 activationAction:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setActivationButtonText:(id)arg0 ;
-(void)setFooterText:(id)arg0 ;
-(void)setupActivationButtonWithAction:(id)arg0 ;
-(void)setupFooter;


@end


#endif