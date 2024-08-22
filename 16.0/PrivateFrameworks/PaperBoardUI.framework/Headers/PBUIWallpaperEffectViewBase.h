// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPEREFFECTVIEWBASE_H
#define PBUIWALLPAPEREFFECTVIEWBASE_H

@class UIView, UIColor, UIImage, UIView<PBUIFakeBluring>, NSString, UIImageView;
@protocol PBUIFakeBlurObserver, PBUIWallpaperObserver, PBUIWallpaperPositioning, PBUIWallpaperPresenting><PBUIWallpaperLegibilityProviding;



@interface PBUIWallpaperEffectViewBase : UIView <PBUIFakeBlurObserver, PBUIWallpaperObserver, PBUIWallpaperPositioning>

 {
    NSInteger _variant;
    UIColor *_wallpaperAverageColor;
    NSInteger _startStyle;
    NSInteger _endStyle;
    CGFloat _transitionFraction;
    UIImage *_maskImage;
    BOOL _shouldMaskBlur;
    BOOL _shouldMaskTint;
    BOOL _accessibilityReduceTransparencyEnabled;
}


@property (retain, nonatomic) UIView *blurMaskingContainer; // ivar: _blurMaskingContainer
@property (retain, nonatomic) UIView<PBUIFakeBluring> *blurView; // ivar: _blurView
@property (retain, nonatomic) UIView *colorTintView; // ivar: _colorTintView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcesOpaque; // ivar: _forcesOpaque
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (retain, nonatomic) UIView *grayscaleTintView; // ivar: _grayscaleTintView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *maskImageView; // ivar: _maskImageView
@property (nonatomic) BOOL shouldMatchWallpaperPosition; // ivar: _shouldMatchWallpaperPosition
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *tintMaskingContainer; // ivar: _tintMaskingContainer
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (retain, nonatomic) UIView<PBUIFakeBluring> *transitionBlurView; // ivar: _transitionBlurView
@property (retain, nonatomic) UIView *transitionColorTintView; // ivar: _transitionColorTintView
@property (retain, nonatomic) UIView *transitionGrayscaleTintView; // ivar: _transitionGrayscaleTintView
@property (readonly, nonatomic) NSObject<PBUIWallpaperPresenting><PBUIWallpaperLegibilityProviding> *wallpaperPresenter; // ivar: _wallpaperPresenter
@property (nonatomic) CGFloat zoomScale;


-(BOOL)_needsBlurViewForStyle:(NSInteger)arg0 ;
-(BOOL)_shouldEffectivelyMatchWallpaperPosition;
-(BOOL)currentTransitionStateIsOpaque;
-(BOOL)prepareToAnimateToTransitionState:(struct ? *)arg0 ;
-(NSInteger)wallpaperStyle;
-(id)appearanceStorage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWallpaperPresenter:(id)arg0 variant:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;
-(void)_accessibilityReduceTransparencyChanged:(id)arg0 ;
-(void)_configureForCurrentBlurStyle;
-(void)_configureFromScratch;
-(void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)arg0 ;
-(void)_configureViews;
-(void)_configureViewsPositioning;
-(void)_setFrame:(struct CGRect )arg0 forceUpdateBackgroundImage:(BOOL)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg0 ;
-(void)_setTransitionFraction:(CGFloat)arg0 ;
-(void)_updateWallpaperAverageColor:(id)arg0 ;
-(void)dealloc;
-(void)fakeBlurView:(id)arg0 didChangeStyle:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)offsetWallpaperBy:(struct CGPoint )arg0 ;
-(void)setAppearanceStorage:(id)arg0 ;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)setBarTintColor:(id)arg0 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setMaskImage:(id)arg0 masksBlur:(BOOL)arg1 masksTint:(BOOL)arg2 ;
-(void)setStyle:(NSInteger)arg0 ;
-(void)setTransitionState:(struct ? )arg0 ;
-(void)setTranslucent:(BOOL)arg0 ;
-(void)setWallpaperStyle:(NSInteger)arg0 ;
-(void)updateBackgroundImage;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif