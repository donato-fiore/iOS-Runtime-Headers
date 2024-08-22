// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLOCKSCREENBIOMETRICFAILURESETTINGS_H
#define CSLOCKSCREENBIOMETRICFAILURESETTINGS_H

@class PTSettings;



@interface CSLockScreenBiometricFailureSettings : PTSettings

@property (nonatomic) BOOL jiggleLock; // ivar: _jiggleLock
@property (nonatomic) BOOL showPasscode; // ivar: _showPasscode
@property (nonatomic) BOOL vibrate; // ivar: _vibrate
@property (nonatomic) BOOL waitUntilButtonUp; // ivar: _waitUntilButtonUp


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif