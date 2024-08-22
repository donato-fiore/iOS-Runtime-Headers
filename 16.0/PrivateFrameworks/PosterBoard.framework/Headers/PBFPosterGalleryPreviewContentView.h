// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERGALLERYPREVIEWCONTENTVIEW_H
#define PBFPOSTERGALLERYPREVIEWCONTENTVIEW_H

@class UIView, UIImageView, UIImage;



@interface PBFPosterGalleryPreviewContentView : UIView {
    UIImageView *_posterPreviewImageView;
    UIImageView *_frontHiddenImageView;
    UIImageView *_backHiddenImageView;
}


@property (nonatomic, getter=isHero) BOOL hero; // ivar: _hero
@property (nonatomic) NSUInteger index; // ivar: _index
@property (nonatomic) BOOL preferredCornerRadius; // ivar: _preferredCornerRadius
@property (retain, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) CGRect previewImageFrame;
@property (nonatomic, getter=isSmartAlbum) BOOL smartAlbum; // ivar: _smartAlbum


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createHiddenViewsIfNeeded;
-(void)_updateHiddenImages;
-(void)layoutSubviews;


@end


#endif