// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKARTWORKIMAGEVIEW_H
#define MKARTWORKIMAGEVIEW_H

@class UIImageView, UIColor;
@protocol MKArtworkImageSource;



@interface MKArtworkImageView : UIImageView {
    UIImageView *_cachedBadgeView;
}


@property (readonly, nonatomic) UIImageView *badgeView;
@property (retain, nonatomic) NSObject<MKArtworkImageSource> *imageSource; // ivar: _imageSource
@property (retain, nonatomic) UIColor *primaryTintColor; // ivar: _primaryTintColor
@property (retain, nonatomic) UIColor *secondaryTintColor; // ivar: _secondaryTintColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateImageView;
-(void)setImage:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif