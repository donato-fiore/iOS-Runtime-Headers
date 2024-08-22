// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NDOAPPITEMVIEWCELL_H
#define NDOAPPITEMVIEWCELL_H

@class PSTableCell, NSMutableArray, NSString, UIButton, UILabel, UIImageView, UIView;



@interface NDOAppItemViewCell : PSTableCell {
    NSMutableArray *_imageConstraints;
    NSString *_supportAppURL;
}


@property (retain, nonatomic) UIButton *itemButton; // ivar: _itemButton
@property (retain, nonatomic) UILabel *itemDetailLabel; // ivar: _itemDetailLabel
@property (retain, nonatomic) UIImageView *itemImageView; // ivar: _itemImageView
@property (retain, nonatomic) UILabel *itemSubtitleLabel; // ivar: _itemSubtitleLabel
@property (retain, nonatomic) UILabel *itemTitleLabel; // ivar: _itemTitleLabel
@property (retain, nonatomic) UIView *itemTitleView; // ivar: _itemTitleView


+(NSInteger)cellStyle;
-(CGFloat)getCurrentTitleFontSize;
-(id)_imageAppropriateForDevice:(id)arg0 ;
-(id)_imageFromAppStore:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupAppSuportCell;
-(void)_setupWarrantyCoverageCell;
-(void)executeAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif