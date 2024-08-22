// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHHOMEPULLTOSEARCHSETTINGS_H
#define SBHHOMEPULLTOSEARCHSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBHHomePullToSearchSettings : PTSettings

@property (nonatomic) BOOL allowsKeyboardWhileInteractive; // ivar: _allowsKeyboardWhileInteractive
@property (nonatomic) BOOL keyboardFollowsSpotlightContent; // ivar: _keyboardFollowsSpotlightContent
@property (nonatomic) CGFloat pullGestureBeganFromTopLeeway; // ivar: _pullGestureBeganFromTopLeeway
@property (nonatomic) CGFloat pullTransitionActivationThreshold; // ivar: _pullTransitionActivationThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *pullTransitionAnimationSettings; // ivar: _pullTransitionAnimationSettings
@property (nonatomic) CGFloat pullTransitionDistance; // ivar: _pullTransitionDistance
@property (nonatomic) CGFloat pullTransitionSearchFadeInThreshold; // ivar: _pullTransitionSearchFadeInThreshold
@property (nonatomic) CGFloat searchAffordanceMaxOffset; // ivar: _searchAffordanceMaxOffset
@property (nonatomic) CGFloat searchAffordanceMaxScaleX; // ivar: _searchAffordanceMaxScaleX
@property (nonatomic) CGFloat searchAffordanceMaxScaleY; // ivar: _searchAffordanceMaxScaleY
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAffordanceMorphAnimationSettings; // ivar: _searchAffordanceMorphAnimationSettings
@property (nonatomic) BOOL searchAffordanceMorphFollowsPullTransition; // ivar: _searchAffordanceMorphFollowsPullTransition
@property (nonatomic) CGFloat searchAffordanceOffsetRubberbandingRange; // ivar: _searchAffordanceOffsetRubberbandingRange
@property (nonatomic) CGFloat searchAffordanceScaleRubberbandingRange; // ivar: _searchAffordanceScaleRubberbandingRange
@property (nonatomic) CGFloat searchAffordanceTransientFadeInThreshold; // ivar: _searchAffordanceTransientFadeInThreshold
@property (nonatomic) CGFloat searchContentFadeOutThreshold; // ivar: _searchContentFadeOutThreshold


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif