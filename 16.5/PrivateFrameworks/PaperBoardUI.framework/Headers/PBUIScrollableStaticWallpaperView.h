// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUISCROLLABLESTATICWALLPAPERVIEW_H
#define PBUISCROLLABLESTATICWALLPAPERVIEW_H

@class UIImageView, UIScrollView, BSAtomicFlag, NSString;
@protocol UIScrollViewDelegate, OS_dispatch_queue, OS_dispatch_source;


#import "PBUIStaticWallpaperView.h"
#import "PBUIWallpaperParallaxSettings.h"

@interface PBUIScrollableStaticWallpaperView : PBUIStaticWallpaperView <UIScrollViewDelegate>

 {
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    PBUIWallpaperParallaxSettings *_parallaxSettings;
    CGFloat _minimumZoomScaleForParallax;
    CGFloat _minimumZoomScale;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_throttleTimer;
    BSAtomicFlag *_throttleCanUpdateFlag;
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
-(void)_cancelThrottle;
-(void)_resetColorBoxes;
-(void)_scrollViewDidUpdate;
-(void)_setupContentViewWithOptions:(NSUInteger)arg0 ;
-(void)_setupScrollView;
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