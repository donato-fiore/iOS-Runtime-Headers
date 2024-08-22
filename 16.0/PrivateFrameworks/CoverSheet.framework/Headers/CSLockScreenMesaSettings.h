// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLOCKSCREENMESASETTINGS_H
#define CSLOCKSCREENMESASETTINGS_H

@class PTSettings;


#import "CSLockScreenBiometricFailureSettings.h"

@interface CSLockScreenMesaSettings : PTSettings

@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *fifthFailureSettings; // ivar: _fifthFailureSettings
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *firstFailureSettings; // ivar: _firstFailureSettings
@property (nonatomic) BOOL flashRedOnPasscodeRequiredEvents; // ivar: _flashRedOnPasscodeRequiredEvents
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *fourthFailureSettings; // ivar: _fourthFailureSettings
@property (nonatomic) BOOL passcodeRequiredEventsCountAsFailures; // ivar: _passcodeRequiredEventsCountAsFailures
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *secondFailureSettings; // ivar: _secondFailureSettings
@property (nonatomic) CGFloat slowPressDuration; // ivar: _slowPressDuration
@property (nonatomic) BOOL successFeedbackWaitsUntilButtonUp; // ivar: _successFeedbackWaitsUntilButtonUp
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *thirdFailureSettings; // ivar: _thirdFailureSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif