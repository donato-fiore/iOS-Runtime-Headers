// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIFAKEBLURVIEW_H
#define PBUIFAKEBLURVIEW_H

@class UIView, NSString;
@protocol PBUIFakeBlurImageProviding, PBUIFakeBluring, PBUIWallpaperReachabilityObserving, PBUIFakeBlurViewRegistering, PBUIFakeBlurObserver, PBUIWallpaperReachabilityCoordinating;


#import "PBUIWallpaperView.h"
#import "PBUIWallpaperViewController.h"

@interface PBUIFakeBlurView : UIView <PBUIFakeBlurImageProviding, PBUIFakeBluring, PBUIWallpaperReachabilityObserving>

 {
    NSInteger _requestedStyle;
    NSInteger _effectiveStyle;
    PBUIWallpaperView *_wallpaperView;
    CGPoint _wallpaperOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<PBUIFakeBlurViewRegistering> *fakeBlurRegistry; // ivar: _fakeBlurRegistry
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<PBUIFakeBlurImageProviding> *imageProvider; // ivar: _imageProvider
@property (weak, nonatomic) NSObject<PBUIFakeBlurObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) UIView *providedImageView; // ivar: _providedImageView
@property (readonly, nonatomic) NSObject<PBUIWallpaperReachabilityCoordinating> *reachabilityCoordinator; // ivar: _reachabilityCoordinator
@property (nonatomic) BOOL shouldMatchWallpaperPosition; // ivar: _shouldMatchWallpaperPosition
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (readonly, nonatomic) NSInteger variant;
@property (readonly, weak, nonatomic) PBUIWallpaperViewController *wallpaperViewController; // ivar: _wallpaperViewController
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