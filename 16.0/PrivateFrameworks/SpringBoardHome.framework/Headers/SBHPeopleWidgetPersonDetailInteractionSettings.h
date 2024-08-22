// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHPEOPLEWIDGETPERSONDETAILINTERACTIONSETTINGS_H
#define SBHPEOPLEWIDGETPERSONDETAILINTERACTIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBHPeopleWidgetPersonDetailInteractionSettings : PTSettings

@property (nonatomic) CGFloat cardCornerRadius; // ivar: _cardCornerRadius
@property (nonatomic) CGFloat cardHeightLandscape; // ivar: _cardHeightLandscape
@property (nonatomic) CGFloat cardHeightPortrait; // ivar: _cardHeightPortrait
@property (nonatomic) CGFloat cardStyleDarkeningTintAlpha; // ivar: _cardStyleDarkeningTintAlpha
@property (nonatomic) CGFloat cardStyleHomeScreenAlpha; // ivar: _cardStyleHomeScreenAlpha
@property (nonatomic) CGFloat cardStyleHomeScreenScale; // ivar: _cardStyleHomeScreenScale
@property (nonatomic) CGFloat cardWidth; // ivar: _cardWidth
@property (retain, nonatomic) SBFFluidBehaviorSettings *fadeOutAnimationSettings; // ivar: _fadeOutAnimationSettings
@property (nonatomic) CGFloat fractionBetweenSourceAndContainerX; // ivar: _fractionBetweenSourceAndContainerX
@property (nonatomic) CGFloat fractionBetweenSourceAndContainerY; // ivar: _fractionBetweenSourceAndContainerY
@property (nonatomic) CGFloat fullScreenDarkeningTintAlpha; // ivar: _fullScreenDarkeningTintAlpha
@property (nonatomic) CGFloat fullScreenHomeScreenAlpha; // ivar: _fullScreenHomeScreenAlpha
@property (nonatomic) CGFloat fullScreenHomeScreenScale; // ivar: _fullScreenHomeScreenScale
@property (nonatomic) CGFloat percentMargin; // ivar: _percentMargin
@property (nonatomic) BOOL usesCardStyle; // ivar: _usesCardStyle
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomAnimationSettings; // ivar: _zoomAnimationSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif