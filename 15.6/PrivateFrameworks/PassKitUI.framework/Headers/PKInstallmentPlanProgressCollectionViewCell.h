// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINSTALLMENTPLANPROGRESSCOLLECTIONVIEWCELL_H
#define PKINSTALLMENTPLANPROGRESSCOLLECTIONVIEWCELL_H

@class UILabel, UIImageView, PKCurrencyAmount, NSString;


#import "PKDashboardCollectionViewCell.h"
#import "PKProgressBar.h"

@interface PKInstallmentPlanProgressCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_leadingTitleLabel;
    UILabel *_leadingAmountLabel;
    UILabel *_trailingTitleLabel;
    UILabel *_trailingAmountLabel;
    PKProgressBar *_progressBar;
    UIImageView *_completeCheckmark;
    UILabel *_completeLabel;
    UILabel *_detailLabel;
}


@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (retain, nonatomic) PKCurrencyAmount *leadingAmount; // ivar: _leadingAmount
@property (copy, nonatomic) NSString *leadingTitle; // ivar: _leadingTitle
@property (nonatomic) CGFloat progressAmount;
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (retain, nonatomic) PKCurrencyAmount *trailingAmount; // ivar: _trailingAmount
@property (copy, nonatomic) NSString *trailingTitle; // ivar: _trailingTitle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif