// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCURATIONKEYASSETCOMPARISONVIEWCELL_H
#define PUCURATIONKEYASSETCOMPARISONVIEWCELL_H

@class UICollectionViewCell, UIImageView, NSString, UIImage;



@interface PUCurationKeyAssetComparisonViewCell : UICollectionViewCell {
    UIImageView *_imageView;
}


@property (retain, nonatomic) NSString *representedAssetIdentifier; // ivar: _representedAssetIdentifier
@property (retain, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage


+(CGFloat)cellHeightWithCellWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif