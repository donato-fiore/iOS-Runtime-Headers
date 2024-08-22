// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBILLPAYMENTSUGGESTEDAMOUNTVIEW_H
#define PKBILLPAYMENTSUGGESTEDAMOUNTVIEW_H

@class UIView, CABackdropLayer, PKBillPaymentSuggestedAmount;



@interface PKBillPaymentSuggestedAmountView : UIView {
    CABackdropLayer *_background;
}


@property (readonly, nonatomic) PKBillPaymentSuggestedAmount *suggestedAmount; // ivar: _suggestedAmount


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithSuggestedAmount:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif