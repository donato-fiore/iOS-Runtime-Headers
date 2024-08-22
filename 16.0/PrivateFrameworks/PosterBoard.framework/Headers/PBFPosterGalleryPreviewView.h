// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERGALLERYPREVIEWVIEW_H
#define PBFPOSTERGALLERYPREVIEWVIEW_H

@class UIView, UIImage;
@protocol PBFPosterPreview, PBFPosterPreviewGenerator;


#import "PBFPosterGalleryPreviewComplicationContentView.h"
#import "PBFPosterGalleryPreviewContentView.h"
#import "PBFPosterGalleryShadowContainerView.h"
#import "PBFShadowView.h"

@interface PBFPosterGalleryPreviewView : UIView {
    PBFPosterGalleryPreviewComplicationContentView *_posterPreviewComplicationContentView;
    PBFPosterGalleryPreviewContentView *_posterPreviewContentView;
    PBFPosterGalleryShadowContainerView *_shadowContainerView;
    PBFShadowView *_shadowView;
    UIView *_loadingIndicatorContainerView;
}


@property (nonatomic) NSUInteger index;
@property (retain, nonatomic) NSObject<PBFPosterPreview> *posterPreview; // ivar: _posterPreview
@property (retain, nonatomic) NSObject<PBFPosterPreviewGenerator> *posterPreviewGenerator; // ivar: _posterPreviewGenerator
@property (readonly, nonatomic) UIImage *posterPreviewImage;
@property (readonly, nonatomic) CGRect posterPreviewImageFrame;
@property (nonatomic) CGFloat posterPreviewScale; // ivar: _posterPreviewScale
@property (nonatomic) BOOL showsLoadingIndicator; // ivar: _showsLoadingIndicator


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)makeComplicationsPortalView;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_updatePreviewWithImage:(id)arg0 posterPreview:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)sizeToFit;


@end


#endif