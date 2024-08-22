// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTBILLPAYMENTAMOUNTCONTAINERVIEW_H
#define PKACCOUNTBILLPAYMENTAMOUNTCONTAINERVIEW_H

@class UIView;


#import "PKEnterCurrencyAmountView.h"

@interface PKAccountBillPaymentAmountContainerView : UIView

@property (retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView; // ivar: _enterCurrencyAmountView
@property (nonatomic) BOOL showAmount; // ivar: _showAmount


-(CGFloat)_amountLabelFontSize;
-(id)initWithCurrencyCode:(id)arg0 minimumAmount:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif