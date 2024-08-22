// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTBILLPAYMENTCHECKMARKRINGVIEW_H
#define PKACCOUNTBILLPAYMENTCHECKMARKRINGVIEW_H

@class UIView, LAUICheckmarkLayer;



@interface PKAccountBillPaymentCheckmarkRingView : UIView

@property (retain, nonatomic) LAUICheckmarkLayer *checkmarkLayer; // ivar: _checkmarkLayer
@property (retain, nonatomic) UIView *ringView; // ivar: _ringView


-(id)initWithRingView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif