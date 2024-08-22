// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSCOVERSHEETTRANSITIONSETTINGS_H
#define CSCOVERSHEETTRANSITIONSETTINGS_H

@class PTSettings, NSString;
@protocol BSDescriptionProviding;



@interface CSCoverSheetTransitionSettings : PTSettings <BSDescriptionProviding>



@property (nonatomic) CGFloat blurEnd; // ivar: _blurEnd
@property (nonatomic) CGFloat blurEndReducedTransparency; // ivar: _blurEndReducedTransparency
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (nonatomic) CGFloat blurStart; // ivar: _blurStart
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
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL iconsFlyIn; // ivar: _iconsFlyIn
@property (nonatomic) CGFloat maxContentAlpha; // ivar: _maxContentAlpha
@property (nonatomic) BOOL panelWallpaper; // ivar: _panelWallpaper
@property (nonatomic) BOOL revealWallpaper; // ivar: _revealWallpaper
@property (readonly) Class superclass;
@property (nonatomic) BOOL trackingWallpaper; // ivar: _trackingWallpaper
@property (nonatomic) CGFloat trackingWallpaperParallaxFactor; // ivar: _trackingWallpaperParallaxFactor


+(id)settingsControllerModule;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)setDefaultValues;


@end


#endif