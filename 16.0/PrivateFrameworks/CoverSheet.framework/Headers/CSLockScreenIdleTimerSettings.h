// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLOCKSCREENIDLETIMERSETTINGS_H
#define CSLOCKSCREENIDLETIMERSETTINGS_H

@class PTSettings;



@interface CSLockScreenIdleTimerSettings : PTSettings

@property (nonatomic) BOOL increaseNotificationScrollLogging; // ivar: _increaseNotificationScrollLogging
@property (nonatomic) CGFloat unlockSlideForIdleTimerDisabledPercentage; // ivar: _unlockSlideForIdleTimerDisabledPercentage
@property (nonatomic) CGFloat unlockSlideForIdleTimerDisabledPercentageIPad; // ivar: _unlockSlideForIdleTimerDisabledPercentageIPad


+(id)settingsControlModule;
-(void)setDefaultValues;


@end


#endif