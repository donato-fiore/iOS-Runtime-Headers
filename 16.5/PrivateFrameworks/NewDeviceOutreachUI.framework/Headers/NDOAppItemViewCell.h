// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOAPPITEMVIEWCELL_H
#define NDOAPPITEMVIEWCELL_H

@class PSTableCell, NSMutableArray, UIImageView, UILabel, UIView;



@interface NDOAppItemViewCell : PSTableCell {
    NSMutableArray *_imageConstraints;
}


@property (retain, nonatomic) UIImageView *itemImageView; // ivar: _itemImageView
@property (retain, nonatomic) UILabel *itemSubtitleLabel; // ivar: _itemSubtitleLabel
@property (retain, nonatomic) UILabel *itemTitleLabel; // ivar: _itemTitleLabel
@property (retain, nonatomic) UIView *itemTitleView; // ivar: _itemTitleView


+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupWarrantyCoverageCell;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif