// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBENTITYREMOVALDOSIDOSLIDEOUTANIMATIONSETTINGS_H
#define SBENTITYREMOVALDOSIDOSLIDEOUTANIMATIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;


#import "SBEntityRemovalDosidoDefaultAnimationSettings.h"

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings

@property (retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings; // ivar: _defaultAnimationSettings
@property (nonatomic) CGFloat fromViewSlideOutAnimationDelay; // ivar: _fromViewSlideOutAnimationDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings; // ivar: _fromViewSlideOutAnimationSettings
@property (nonatomic) CGFloat fromViewSlideOutHeightOffsetMultiplier; // ivar: _fromViewSlideOutHeightOffsetMultiplier


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif