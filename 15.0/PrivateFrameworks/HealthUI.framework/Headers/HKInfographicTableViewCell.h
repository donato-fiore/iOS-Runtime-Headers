// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINFOGRAPHICTABLEVIEWCELL_H
#define HKINFOGRAPHICTABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UIView, UILabel;



@interface HKInfographicTableViewCell : UITableViewCell {
    BOOL hideSeparator;
}


@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)_labelWithFont:(id)arg0 ;
-(id)_titleFont;
-(id)_valueFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif