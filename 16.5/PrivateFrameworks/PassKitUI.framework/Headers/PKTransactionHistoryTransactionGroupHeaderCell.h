// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONHISTORYTRANSACTIONGROUPHEADERCELL_H
#define PKTRANSACTIONHISTORYTRANSACTIONGROUPHEADERCELL_H

@class UILabel, UIImage, UIImageView, UIView, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKTransactionHistoryTransactionGroupHeaderCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    BOOL _isTemplateLayout;
    UIImage *_image;
    UIImageView *_imageView;
    UIView *_imageBackgroundView;
    BOOL _strokeImage;
}


@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL useShadows; // ivar: _useShadows


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setupImageView;
-(void)_updateImageViewDynamicColors;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)setStrokeImage:(BOOL)arg0 ;


@end


#endif