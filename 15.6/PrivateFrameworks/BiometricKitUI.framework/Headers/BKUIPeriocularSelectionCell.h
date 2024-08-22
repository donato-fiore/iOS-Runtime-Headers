// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIPERIOCULARSELECTIONCELL_H
#define BKUIPERIOCULARSELECTIONCELL_H

@class UITableViewCell, UIImageView, UILabel;



@interface BKUIPeriocularSelectionCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_descriptionFont;
-(id)_titleFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif