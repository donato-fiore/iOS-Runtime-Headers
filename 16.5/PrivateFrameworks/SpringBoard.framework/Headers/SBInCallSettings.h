// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINCALLSETTINGS_H
#define SBINCALLSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBInCallSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeInSettings; // ivar: _transientOverlayFadeInSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeOutSettings; // ivar: _transientOverlayFadeOutSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif