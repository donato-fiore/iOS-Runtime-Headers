// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPSHADOWSETTINGS_H
#define SBPIPSHADOWSETTINGS_H

@class PTSettings;


#import "SBDropShadowSettings.h"

@interface SBPIPShadowSettings : PTSettings

@property (retain, nonatomic) SBDropShadowSettings *bodyShadowSettings; // ivar: _bodyShadowSettings
@property (retain, nonatomic) SBDropShadowSettings *tabShadowSettings; // ivar: _tabShadowSettings


+(id)settingsControllerModule;


@end


#endif