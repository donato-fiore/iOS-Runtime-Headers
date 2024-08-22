// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKENTERCURRENCYAMOUNTPASSTABLEHEADERFOOTERVIEW_H
#define PKENTERCURRENCYAMOUNTPASSTABLEHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView;
@protocol PKEnterCurrencyAmountPassViewDelegate;


#import "PKEnterCurrencyAmountPassView.h"

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView

@property (readonly, nonatomic) PKEnterCurrencyAmountPassView *amountPassView; // ivar: _amountPassView
@property (weak, nonatomic) NSObject<PKEnterCurrencyAmountPassViewDelegate> *delegate; // ivar: _delegate


-(CGFloat)_bottomPadding;
-(id)initWithCurrenyAmount:(id)arg0 ;
-(id)initWithCurrenyAmount:(id)arg0 pass:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif