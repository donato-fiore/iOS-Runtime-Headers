// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBALWAYSONSETTINGS_H
#define SBALWAYSONSETTINGS_H

@class PTSettings;


#import "SBAlwaysOnAPLSettings.h"
#import "SBAlwaysOnPolicySettings.h"

@interface SBAlwaysOnSettings : PTSettings

@property (retain, nonatomic) SBAlwaysOnAPLSettings *aplSettings; // ivar: _aplSettings
@property (retain, nonatomic) SBAlwaysOnPolicySettings *policySettings; // ivar: _policySettings
@property (nonatomic) NSInteger sideButtonBehavior; // ivar: _sideButtonBehavior


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif