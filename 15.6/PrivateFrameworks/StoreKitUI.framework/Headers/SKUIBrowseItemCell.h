// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIBROWSEITEMCELL_H
#define SKUIBROWSEITEMCELL_H

@class UICollectionViewCell, UILabel, UIView, UIImageView, UIImage, NSString;



@interface SKUIBrowseItemCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_borderView;
    UIView *_topBorderView;
    UIImageView *_decorationImageView;
}


@property (retain, nonatomic) UIImage *decorationImage; // ivar: _decorationImage
@property (nonatomic) BOOL hasBlueBackgroundWhenSelected; // ivar: _hasBlueBackgroundWhenSelected
@property (nonatomic) BOOL showTopBorder; // ivar: _showTopBorder
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_reloadHighlightState;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif