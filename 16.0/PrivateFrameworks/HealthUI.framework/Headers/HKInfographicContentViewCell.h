// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINFOGRAPHICCONTENTVIEWCELL_H
#define HKINFOGRAPHICCONTENTVIEWCELL_H

@class UITableViewCell, UILabel, NSLayoutConstraint;



@interface HKInfographicContentViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_descriptionFont;
-(id)_labelWithFont:(id)arg0 ;
-(id)_titleFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif