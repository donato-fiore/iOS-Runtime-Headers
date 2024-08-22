// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBACCESSIBILITYTINTVIEW_H
#define _SBACCESSIBILITYTINTVIEW_H

@class UIView, NSString;
@protocol _SBWFakeBlur, SBWallpaperObserver, _SBWFakeBlurObserver, SBWWallpaperLegibilityProviding, SBWWallpaperPresenting;



@interface _SBAccessibilityTintView : UIView <_SBWFakeBlur, SBWallpaperObserver>

 {
    NSInteger _variant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen; // ivar: _fullscreen
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<_SBWFakeBlurObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (readonly, weak, nonatomic) NSObject<SBWWallpaperLegibilityProviding> *wallpaperLegibilityProvider; // ivar: _wallpaperLegibilityProvider
@property (readonly, weak, nonatomic) NSObject<SBWWallpaperPresenting> *wallpaperPresenter; // ivar: _wallpaperPresenter
@property (nonatomic) CGFloat zoomScale;


-(NSInteger)effectiveStyle;
-(id)initWithVariant:(NSInteger)arg0 wallpaperPresenter:(id)arg1 wallpaperLegibilityProvider:(id)arg2 ;
-(id)initWithVariant:(NSInteger)arg0 wallpaperViewController:(id)arg1 ;
-(void)_updateBackgroundColor;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)offsetWallpaperBy:(struct CGPoint )arg0 ;
-(void)requestStyle:(NSInteger)arg0 ;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg0 forVariant:(NSInteger)arg1 ;


@end


#endif