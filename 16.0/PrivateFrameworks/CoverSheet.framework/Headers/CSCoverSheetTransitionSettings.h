// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOVERSHEETTRANSITIONSETTINGS_H
#define CSCOVERSHEETTRANSITIONSETTINGS_H

@class PTSettings, NSString, SBFFluidBehaviorSettings;
@protocol BSDescriptionProviding;



@interface CSCoverSheetTransitionSettings : PTSettings <BSDescriptionProviding>



@property (nonatomic) BOOL alwaysFadesCoverSheetContent; // ivar: _alwaysFadesCoverSheetContent
@property (nonatomic) CGFloat behindCoverSheetBlurEnd; // ivar: _behindCoverSheetBlurEnd
@property (nonatomic) CGFloat behindCoverSheetBlurRadius; // ivar: _behindCoverSheetBlurRadius
@property (nonatomic) CGFloat behindCoverSheetBlurStart; // ivar: _behindCoverSheetBlurStart
@property (nonatomic) CGFloat blurEnd; // ivar: _blurEnd
@property (nonatomic) CGFloat blurEndReducedTransparency; // ivar: _blurEndReducedTransparency
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (nonatomic) CGFloat blurStart; // ivar: _blurStart
@property (nonatomic) BOOL blursBehindCoverSheet; // ivar: _blursBehindCoverSheet
@property (nonatomic) BOOL blursPanel; // ivar: _blursPanel
@property (nonatomic) CGFloat contentFadeEnd; // ivar: _contentFadeEnd
@property (nonatomic) CGFloat contentFadeStart; // ivar: _contentFadeStart
@property (nonatomic) CGFloat darkeningColorAlpha; // ivar: _darkeningColorAlpha
@property (nonatomic) CGFloat darkeningColorWhite; // ivar: _darkeningColorWhite
@property (nonatomic) CGFloat darkeningEnd; // ivar: _darkeningEnd
@property (nonatomic) CGFloat darkeningStart; // ivar: _darkeningStart
@property (nonatomic) BOOL darkensContent; // ivar: _darkensContent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadePanelWallpaper; // ivar: _fadePanelWallpaper
@property (nonatomic) CGFloat fadePanelWallpaperEnd; // ivar: _fadePanelWallpaperEnd
@property (nonatomic) CGFloat fadePanelWallpaperStart; // ivar: _fadePanelWallpaperStart
@property (nonatomic) BOOL fadesContent; // ivar: _fadesContent
@property (nonatomic) BOOL fadesCoverSheetContent; // ivar: _fadesCoverSheetContent
@property (nonatomic) CGFloat fadesCoverSheetContentEnd; // ivar: _fadesCoverSheetContentEnd
@property (nonatomic) CGFloat fadesCoverSheetContentStart; // ivar: _fadesCoverSheetContentStart
@property (nonatomic) BOOL floatingLayerAsWallpaperOverlay; // ivar: _floatingLayerAsWallpaperOverlay
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL iconsFlyIn; // ivar: _iconsFlyIn
@property (nonatomic) CGFloat maxContentAlpha; // ivar: _maxContentAlpha
@property (nonatomic) BOOL panelWallpaper; // ivar: _panelWallpaper
@property (nonatomic) BOOL revealWallpaper; // ivar: _revealWallpaper
@property (nonatomic) BOOL scaleWallpaper; // ivar: _scaleWallpaper
@property (readonly) Class superclass;
@property (nonatomic) BOOL trackingWallpaper; // ivar: _trackingWallpaper
@property (nonatomic) CGFloat trackingWallpaperParallaxFactor; // ivar: _trackingWallpaperParallaxFactor
@property (nonatomic) NSInteger transitionStyle; // ivar: _transitionStyle
@property (nonatomic) CGFloat wallpaperScale; // ivar: _wallpaperScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *wallpaperScaleSettings; // ivar: _wallpaperScaleSettings


+(id)settingsControllerModule;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)setDefaultValues;


@end


#endif