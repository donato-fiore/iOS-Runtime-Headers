// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPNORESULTSVIEW_H
#define PKPAYMENTSETUPNORESULTSVIEW_H

@class UIView, UIImageView, UILabel, UIButton;



@interface PKPaymentSetupNoResultsView : UIView {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setActionButtonTitle:(id)arg0 addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif