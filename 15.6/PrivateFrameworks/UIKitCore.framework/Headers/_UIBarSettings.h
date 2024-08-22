// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBARSETTINGS_H
#define _UIBARSETTINGS_H

@class PTSettings;


#import "_UITabBarSettings.h"

@interface _UIBarSettings : PTSettings

@property (nonatomic) NSInteger backgroundMode; // ivar: _backgroundMode
@property (nonatomic) BOOL colorByBarType; // ivar: _colorByBarType
@property (nonatomic) BOOL retainShadow; // ivar: _retainShadow
@property (retain, nonatomic) _UITabBarSettings *tabBarSettings; // ivar: _tabBarSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif