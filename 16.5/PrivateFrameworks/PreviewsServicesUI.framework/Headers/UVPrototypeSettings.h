// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UVPROTOTYPESETTINGS_H
#define UVPROTOTYPESETTINGS_H

@class PTSettings;



@interface UVPrototypeSettings : PTSettings

@property (nonatomic) CGFloat crashAnimationDuration; // ivar: _crashAnimationDuration
@property (nonatomic) CGFloat crashFadeOutOpacity; // ivar: _crashFadeOutOpacity
@property (nonatomic) BOOL forceMetricsView; // ivar: _forceMetricsView
@property (nonatomic) BOOL showDebugUI; // ivar: _showDebugUI


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif