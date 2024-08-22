// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPTRANSFERCARDVIEW_H
#define PKPAYMENTSETUPTRANSFERCARDVIEW_H

@class UIView, UIButton;
@protocol PKPaymentSetupTransferCardDelegate;



@interface PKPaymentSetupTransferCardView : UIView

@property (weak, nonatomic) NSObject<PKPaymentSetupTransferCardDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *transferBalanceButton; // ivar: _transferBalanceButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSubviews;
-(void)_transferBalanceButtonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif