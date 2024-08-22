// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIIPHONESLIDESHOWCELL_H
#define SKUIIPHONESLIDESHOWCELL_H

@class UICollectionViewCell, UIImageView, UIImage;



@interface SKUIIPhoneSlideshowCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIImageView *_playIcon;
}


@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGRect imageFrame;
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic, getter=isVideo) BOOL video;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif