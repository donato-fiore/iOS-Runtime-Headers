// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYWAVEZOOMSETTINGS_H
#define SBHLIBRARYWAVEZOOMSETTINGS_H

@class SBFAnimationSettings, PTPointSettings;


#import "SBHIconZoomSettings.h"
#import "SBHInterpolationSettings.h"

@interface SBHLibraryWaveZoomSettings : SBHIconZoomSettings

@property (nonatomic) CGFloat interPodWaveDelay; // ivar: _interPodWaveDelay
@property (retain, nonatomic) SBFAnimationSettings *podFadeSettings; // ivar: _podFadeSettings
@property (nonatomic) CGFloat podRelativeFadeDelay; // ivar: _podRelativeFadeDelay
@property (nonatomic) CGFloat relativeBackgroundDuration; // ivar: _relativeBackgroundDuration
@property (nonatomic) CGFloat relativeSearchDuration; // ivar: _relativeSearchDuration
@property (retain, nonatomic) SBHInterpolationSettings *retargetedBasicDurationSettings; // ivar: _retargetedBasicDurationSettings
@property (retain, nonatomic) SBHInterpolationSettings *retargetedInitialVelocitySettings; // ivar: _retargetedInitialVelocitySettings
@property (retain, nonatomic) SBHInterpolationSettings *retargetedMassSettings; // ivar: _retargetedMassSettings
@property (retain, nonatomic) SBHInterpolationSettings *retargetedStiffnessSettings; // ivar: _retargetedStiffnessSettings
@property (nonatomic) CGFloat searchScale; // ivar: _searchScale
@property (nonatomic) CGFloat upperPodRelativeCrossfadeDuration; // ivar: _upperPodRelativeCrossfadeDuration
@property (nonatomic) CGFloat upperPodRelativeStackAlphaDuration; // ivar: _upperPodRelativeStackAlphaDuration
@property (retain, nonatomic) PTPointSettings *zEffectControlPoint1Settings; // ivar: _zEffectControlPoint1Settings
@property (retain, nonatomic) PTPointSettings *zEffectControlPoint2Settings; // ivar: _zEffectControlPoint2Settings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif