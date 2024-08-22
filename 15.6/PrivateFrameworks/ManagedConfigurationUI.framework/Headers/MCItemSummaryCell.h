// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCITEMSUMMARYCELL_H
#define MCITEMSUMMARYCELL_H

@class UITableViewCell, UIImageView, UILabel, UIView;



@interface MCItemSummaryCell : UITableViewCell

@property (retain, nonatomic) UIImageView *itemImageView; // ivar: _itemImageView
@property (retain, nonatomic) UILabel *itemSubtitleLabel; // ivar: _itemSubtitleLabel
@property (retain, nonatomic) UILabel *itemTitleLabel; // ivar: _itemTitleLabel
@property (retain, nonatomic) UIView *itemTitleView; // ivar: _itemTitleView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupCell;
-(void)_setupConstraints;


@end


#endif