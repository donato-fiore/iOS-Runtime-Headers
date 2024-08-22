// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLOCKSCREENTESTPLUGINSETTINGS_H
#define CSLOCKSCREENTESTPLUGINSETTINGS_H

@class PTSettings, NSString;



@interface CSLockScreenTestPluginSettings : PTSettings

@property NSInteger backgroundStyle; // ivar: _backgroundStyle
@property BOOL disableOnUnlock; // ivar: _disableOnUnlock
@property BOOL enableLostModePlugin; // ivar: _enableLostModePlugin
@property BOOL enablePlugin; // ivar: _enablePlugin
@property BOOL hideStatusBar; // ivar: _hideStatusBar
@property BOOL hideSubtitle; // ivar: _hideSubtitle
@property BOOL hideTimeAndDate; // ivar: _hideTimeAndDate
@property NSInteger notificationBehavior; // ivar: _notificationBehavior
@property NSInteger presentationStyle; // ivar: _presentationStyle
@property BOOL restrictCamera; // ivar: _restrictCamera
@property BOOL restrictControlCenter; // ivar: _restrictControlCenter
@property BOOL restrictLogout; // ivar: _restrictLogout
@property BOOL restrictMediaControls; // ivar: _restrictMediaControls
@property BOOL restrictSiri; // ivar: _restrictSiri
@property BOOL restrictTodayCenter; // ivar: _restrictTodayCenter
@property BOOL restrictTouchID; // ivar: _restrictTouchID
@property BOOL restrictUnlock; // ivar: _restrictUnlock
@property (retain) NSString *subtitleValue; // ivar: _subtitleValue


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif