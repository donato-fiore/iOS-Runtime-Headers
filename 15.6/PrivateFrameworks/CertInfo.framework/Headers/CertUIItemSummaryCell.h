// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTUIITEMSUMMARYCELL_H
#define CERTUIITEMSUMMARYCELL_H

@class UITableViewCell, UIImageView, UILabel, UIView;



@interface CertUIItemSummaryCell : UITableViewCell

@property (retain, nonatomic) UIImageView *itemImageView; // ivar: _itemImageView
@property (retain, nonatomic) UILabel *itemSubtitleLabel; // ivar: _itemSubtitleLabel
@property (retain, nonatomic) UILabel *itemTitleLabel; // ivar: _itemTitleLabel
@property (retain, nonatomic) UIView *itemTitleView; // ivar: _itemTitleView


+(CGFloat)titleOriginX;
-(CGFloat)cellHeight;
-(id)_profileImageAppropriateForDevice;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupCell;
-(void)_setupConstraints;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif