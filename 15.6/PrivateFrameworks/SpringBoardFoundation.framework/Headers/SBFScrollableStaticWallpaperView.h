// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFSCROLLABLESTATICWALLPAPERVIEW_H
#define SBFSCROLLABLESTATICWALLPAPERVIEW_H

@class UIImageView, UIScrollView, NSString;
@protocol UIScrollViewDelegate, SBFCancelable;


#import "SBFStaticWallpaperView.h"
#import "SBFWallpaperParallaxSettings.h"
#import "SBFSubject.h"

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate>

 {
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    SBFSubject *_scrollViewObserver;
    id<SBFCancelable> *_colorBoxCancelToken;
    id<SBFCancelable> *_parallaxCancelToken;
    CGFloat _minimumZoomScaleForParallax;
    CGFloat _minimumZoomScale;
}


@property (nonatomic) BOOL automaticallyEnablesParallax; // ivar: _automaticallyEnablesParallax
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_canCacheImages;
+(BOOL)_canDownscaleSampleImage;
+(BOOL)_shouldScaleForParallax;
-(BOOL)supportsCropping;
-(CGFloat)_parallaxFactorWithZoomScale:(CGFloat)arg0 contentOffset:(struct CGPoint )arg1 ;
-(CGFloat)_scrollViewParallaxFactor;
-(CGFloat)_throttleDuration;
-(CGFloat)cropZoomScale;
-(CGFloat)parallaxFactor;
-(id)_newImageView;
-(id)_scrollView;
-(id)_wallpaperImageForAnalysis;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGPoint )_boundedContentOffsetForOverhang;
-(struct CGPoint )_maximumContentOffsetForOverhang;
-(struct CGPoint )_minimumContentOffsetForOverhang;
-(struct CGRect )_cropRect;
-(struct CGRect )cropRect;
-(struct CGSize )_imageSize;
-(void)_resetColorBoxes;
-(void)_setupColorBoxObserver;
-(void)_setupContentViewWithOptions:(NSUInteger)arg0 ;
-(void)_setupParallaxObserver;
-(void)_setupScrollView;
-(void)_setupScrollViewObserver;
-(void)_updateParallaxForScroll;
-(void)_updateScrollViewZoomScales;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)setContentView:(id)arg0 ;
-(void)setCropRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 ;
-(void)setParallaxEnabled:(BOOL)arg0 ;


@end


#endif