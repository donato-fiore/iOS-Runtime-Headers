// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKENTERCURRENCYAMOUNTPASSVIEW_H
#define PKENTERCURRENCYAMOUNTPASSVIEW_H

@class UIView, UIImageView, PKPass;
@protocol PKEnterCurrencyAmountPassViewDelegate;


#import "PKEnterValueNewBalanceView.h"
#import "PKEnterCurrencyAmountView.h"

@interface PKEnterCurrencyAmountPassView : UIView {
    UIImageView *_passView;
    BOOL _loadingSnapshot;
}


@property (readonly, nonatomic) PKEnterValueNewBalanceView *balanceView; // ivar: _balanceView
@property (weak, nonatomic) NSObject<PKEnterCurrencyAmountPassViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView; // ivar: _enterCurrencyAmountView
@property (retain, nonatomic) PKPass *pass; // ivar: _pass


-(CGFloat)_newBalanceHorizontalPadding;
-(id)initWithCurrenyAmount:(id)arg0 ;
-(id)initWithCurrenyAmount:(id)arg0 pass:(id)arg1 ;
-(struct ? )_amountPassViewSizeInfoForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)shakePassView;


@end


#endif