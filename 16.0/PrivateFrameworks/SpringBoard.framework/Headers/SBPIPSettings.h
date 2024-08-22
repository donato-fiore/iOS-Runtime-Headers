// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPSETTINGS_H
#define SBPIPSETTINGS_H

@class PTSettings;


#import "SBPIPFadeInOutSettings.h"
#import "SBPIPFluidTransitionsSettings.h"
#import "SBPIPInteractionSettings.h"
#import "SBPIPShadowSettings.h"
#import "SBPIPSizingSettings.h"
#import "SBPIPStashVisualSettings.h"

@interface SBPIPSettings : PTSettings

@property (retain, nonatomic) SBPIPFadeInOutSettings *fadeInOutSettings; // ivar: _fadeInOutSettings
@property (retain, nonatomic) SBPIPFluidTransitionsSettings *fluidTransitionsSettings; // ivar: _fluidTransitionsSettings
@property (retain, nonatomic) SBPIPInteractionSettings *interactionSettings; // ivar: _interactionSettings
@property (retain, nonatomic) SBPIPShadowSettings *shadowSettings; // ivar: _shadowSettings
@property (retain, nonatomic) SBPIPSizingSettings *sizingSettings; // ivar: _sizingSettings
@property (retain, nonatomic) SBPIPStashVisualSettings *stashVisualSettings; // ivar: _stashVisualSettings


+(id)settingsControllerModule;


@end


#endif