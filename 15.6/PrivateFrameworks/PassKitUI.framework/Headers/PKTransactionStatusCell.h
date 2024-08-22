// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONSTATUSCELL_H
#define PKTRANSACTIONSTATUSCELL_H

@class UITableViewCell, UILabel, NSString, UIColor;



@interface PKTransactionStatusCell : UITableViewCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryTitleLabel;
    UILabel *_secondaryValueLabel;
    BOOL _templateLayout;
}


@property (nonatomic) BOOL isBridge; // ivar: _isBridge
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UIColor *primaryTextOverrideColor; // ivar: _primaryTextOverrideColor
@property (retain, nonatomic) UIColor *secondaryTextOverrideColor; // ivar: _secondaryTextOverrideColor
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (copy, nonatomic) NSString *secondaryValue; // ivar: _secondaryValue


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateTextColors;
-(void)layoutSubviews;


@end


#endif