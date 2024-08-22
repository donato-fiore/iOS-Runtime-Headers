// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONDETAILLINEITEMTABLEVIEWCELL_H
#define PKPAYMENTTRANSACTIONDETAILLINEITEMTABLEVIEWCELL_H

@class UITableViewCell, UIColor, UIFont, UILabel, NSString;



@interface PKPaymentTransactionDetailLineItemTableViewCell : UITableViewCell

@property (nonatomic) BOOL hasTrailingLineSeperator; // ivar: _hasTrailingLineSeperator
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *valueColor; // ivar: _valueColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (retain, nonatomic) NSString *valueText; // ivar: _valueText


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif