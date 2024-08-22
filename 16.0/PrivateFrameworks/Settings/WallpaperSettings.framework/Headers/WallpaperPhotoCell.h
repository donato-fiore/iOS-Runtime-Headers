// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WALLPAPERPHOTOCELL_H
#define WALLPAPERPHOTOCELL_H

@class UICollectionViewCell, UIImageView, UIView, UIImage;



@interface WallpaperPhotoCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIView *_highlightOverlayView;
    UIImageView *_badgeView;
}


@property (nonatomic) BOOL appearanceAware; // ivar: _appearanceAware
@property (retain, nonatomic) UIImage *image; // ivar: _image


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureView;
-(void)_updateHighlight;
-(void)_updateImageView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif