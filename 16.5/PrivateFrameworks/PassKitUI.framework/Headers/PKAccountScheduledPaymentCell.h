// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSCHEDULEDPAYMENTCELL_H
#define PKACCOUNTSCHEDULEDPAYMENTCELL_H

@class UITableViewCell, UILabel, UITableViewCellLayoutManager, NSTimeZone, PKAccountPayment, UIColor;



@interface PKAccountScheduledPaymentCell : UITableViewCell {
    UILabel *_frequencyLabel;
    UILabel *_statusLabel;
    UILabel *_amountLabel;
    UITableViewCellLayoutManager *_layoutManager;
    NSTimeZone *_timeZone;
    BOOL _hasPaymentDueDate;
    BOOL _sizing;
    BOOL _useStackedLayout;
}


@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (nonatomic) BOOL onHold; // ivar: _onHold
@property (weak, nonatomic) PKAccountPayment *payment; // ivar: _payment
@property (copy, nonatomic) UIColor *titleColor; // ivar: _titleColor


-(BOOL)_useStackedLayoutForUsableWidth:(CGFloat)arg0 ;
-(id)_amountAttributedString;
-(id)_amountString;
-(id)_dateString;
-(id)_frequencyAttributedString;
-(id)_frequencyString;
-(id)_statusAttributedString;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_effectiveLayoutMargins;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif