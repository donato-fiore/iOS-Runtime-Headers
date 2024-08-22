// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIACCESSIBILITYTINTVIEW_H
#define PBUIACCESSIBILITYTINTVIEW_H

@class UIView, NSString;
@protocol PBUIFakeBluring, PBUIWallpaperObserver, PBUIFakeBlurObserver, PBUIWallpaperLegibilityProviding, PBUILegacyWallpaperPresenting;



@interface PBUIAccessibilityTintView : UIView <PBUIFakeBluring, PBUIWallpaperObserver>

 {
    NSInteger _variant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIFakeBlurObserver> *observer; // ivar: _observer
@property (nonatomic) BOOL shouldMatchWallpaperPosition; // ivar: _shouldMatchWallpaperPosition
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (readonly, weak, nonatomic) NSObject<PBUIWallpaperLegibilityProviding> *wallpaperLegibilityProvider; // ivar: _wallpaperLegibilityProvider
@property (readonly, weak, nonatomic) NSObject<PBUILegacyWallpaperPresenting> *wallpaperPresenter; // ivar: _wallpaperPresenter
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