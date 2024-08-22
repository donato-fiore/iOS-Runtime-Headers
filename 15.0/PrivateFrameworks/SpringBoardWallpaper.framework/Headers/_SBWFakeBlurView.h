// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBWFAKEBLURVIEW_H
#define _SBWFAKEBLURVIEW_H

@class UIView, SBFWallpaperView, NSString;
@protocol _SBWFakeBlurImageProviding, _SBWFakeBlur, SBWallpaperReachabilityObserving, _SBWFakeBlurViewRegistering, _SBWFakeBlurObserver, SBWallpaperReachabilityCoordinating;


#import "SBWWallpaperViewController.h"

@interface _SBWFakeBlurView : UIView <_SBWFakeBlurImageProviding, _SBWFakeBlur, SBWallpaperReachabilityObserving>

 {
    NSInteger _requestedStyle;
    NSInteger _effectiveStyle;
    SBFWallpaperView *_wallpaperView;
    UIView *_providedImageView;
    CGPoint _wallpaperOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<_SBWFakeBlurViewRegistering> *fakeBlurRegistry; // ivar: _fakeBlurRegistry
@property (nonatomic, getter=isFullscreen) BOOL fullscreen; // ivar: _fullscreen
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<_SBWFakeBlurImageProviding> *imageProvider; // ivar: _imageProvider
@property (weak, nonatomic) NSObject<_SBWFakeBlurObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<SBWallpaperReachabilityCoordinating> *reachabilityCoordinator; // ivar: _reachabilityCoordinator
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (readonly, nonatomic) NSInteger variant;
@property (readonly, weak, nonatomic) SBWWallpaperViewController *wallpaperViewController; // ivar: _wallpaperViewController
@property (nonatomic) CGFloat zoomScale;


+(id)_imageForStyle:(*NSInteger)arg0 withSource:(id)arg1 ;
+(id)_imageForStyle:(*NSInteger)arg0 withSource:(id)arg1 overrideTraitCollection:(id)arg2 ;
+(void)_imageForStyle:(NSInteger)arg0 withSource:(id)arg1 overrideTraitCollection:(id)arg2 result:(id)arg3 ;
-(BOOL)parallaxEnabledForVariant:(NSInteger)arg0 ;
-(BOOL)updateImageProviderView:(id)arg0 withImage:(id)arg1 ;
-(CGFloat)parallaxFactorForVariant:(NSInteger)arg0 ;
-(CGFloat)zoomFactorForVariant:(NSInteger)arg0 ;
-(NSInteger)effectiveStyle;
-(id)imageForWallpaperStyle:(*NSInteger)arg0 variant:(NSInteger)arg1 traitCollection:(id)arg2 ;
-(id)initWithVariant:(NSInteger)arg0 imageProvider:(id)arg1 fakeBlurRegistry:(id)arg2 wallpaperViewDelegate:(id)arg3 transformOptions:(NSUInteger)arg4 reachabilityCoordinator:(id)arg5 ;
-(id)initWithVariant:(NSInteger)arg0 wallpaperViewController:(id)arg1 transformOptions:(NSUInteger)arg2 reachabilityCoordinator:(id)arg3 ;
-(id)newImageProviderView;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)handleReachabilityYOffsetDidChange;
-(void)layoutSubviews;
-(void)offsetWallpaperBy:(struct CGPoint )arg0 ;
-(void)reconfigureFromProvider;
-(void)reconfigureWithSource:(id)arg0 ;
-(void)requestStyle:(NSInteger)arg0 ;
-(void)rotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateImageFromProviderForWallpaperMode:(NSInteger)arg0 ;
-(void)updateImageWithSource:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif