// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHUDSETTINGS_H
#define SBHUDSETTINGS_H

@class PTSettings;



@interface SBHUDSettings : PTSettings

@property (nonatomic) float defaultHUDPresentationAnimationDuration; // ivar: _defaultHUDPresentationAnimationDuration
@property (nonatomic) BOOL listenToDeviceOrientationWhileScreenIsOff; // ivar: _listenToDeviceOrientationWhileScreenIsOff
@property (nonatomic) BOOL lockVolumePolarityForHUD; // ivar: _lockVolumePolarityForHUD
@property (nonatomic) BOOL volumeButtonRemappingEnabled; // ivar: _volumeButtonRemappingEnabled


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif