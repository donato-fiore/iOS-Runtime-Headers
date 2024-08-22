// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPOTLIGHTSETTINGS_H
#define SBSPOTLIGHTSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBSpotlightSettings : PTSettings

@property (nonatomic) CGFloat anchorPointY; // ivar: _anchorPointY
@property (nonatomic) CGFloat dimmingViewRubberbandingMax; // ivar: _dimmingViewRubberbandingMax
@property (nonatomic) CGFloat dimmingViewRubberbandingMin; // ivar: _dimmingViewRubberbandingMin
@property (nonatomic) CGFloat dimmingViewRubberbandingRange; // ivar: _dimmingViewRubberbandingRange
@property (nonatomic) CGFloat hiddenBlurRadius; // ivar: _hiddenBlurRadius
@property (nonatomic) CGFloat hiddenScale; // ivar: _hiddenScale
@property (nonatomic) CGFloat homeScreenScaleRubberbandingMax; // ivar: _homeScreenScaleRubberbandingMax
@property (nonatomic) CGFloat homeScreenScaleRubberbandingMin; // ivar: _homeScreenScaleRubberbandingMin
@property (nonatomic) CGFloat homeScreenScaleRubberbandingRange; // ivar: _homeScreenScaleRubberbandingRange
@property (nonatomic) CGFloat maxTranslationForDimmingView; // ivar: _maxTranslationForDimmingView
@property (nonatomic) CGFloat maxTranslationForHomeScreenScale; // ivar: _maxTranslationForHomeScreenScale
@property (nonatomic) CGFloat maxTranslationForSpotlightScale; // ivar: _maxTranslationForSpotlightScale
@property (nonatomic) CGFloat minTranslationToShowSpotlight; // ivar: _minTranslationToShowSpotlight
@property (retain, nonatomic) SBFFluidBehaviorSettings *opacityAnimationSettings; // ivar: _opacityAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleAnimationSettings; // ivar: _scaleAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *snappyOpacityAnimationSettings; // ivar: _snappyOpacityAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *snappyScaleAnimationSettings; // ivar: _snappyScaleAnimationSettings
@property (nonatomic) CGFloat spotlightScaleRubberbandingMax; // ivar: _spotlightScaleRubberbandingMax
@property (nonatomic) CGFloat spotlightScaleRubberbandingMin; // ivar: _spotlightScaleRubberbandingMin
@property (nonatomic) CGFloat spotlightScaleRubberbandingRange; // ivar: _spotlightScaleRubberbandingRange
@property (nonatomic) CGFloat spotlightTranslationRubberbandingRange; // ivar: _spotlightTranslationRubberbandingRange


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif