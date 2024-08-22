// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVPROTOTYPESETTINGS_H
#define UVPROTOTYPESETTINGS_H

@class PTSettings;



@interface UVPrototypeSettings : PTSettings

@property (nonatomic) BOOL showDebugUI; // ivar: _showDebugUI


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif