// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBIDLETIMERSETTINGS_H
#define SBIDLETIMERSETTINGS_H

@class PTSettings;



@interface SBIdleTimerSettings : PTSettings

@property (nonatomic) BOOL disableIdleTimer; // ivar: _disableIdleTimer


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif