// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLOCKSCREENPEARLSETTINGS_H
#define CSLOCKSCREENPEARLSETTINGS_H

@class PTSettings;


#import "CSLockScreenBiometricFailureSettings.h"

@interface CSLockScreenPearlSettings : PTSettings

@property (nonatomic) BOOL coachingDelaysUnlock; // ivar: _coachingDelaysUnlock
@property (nonatomic) CGFloat durationOnCameraCoveredGlyphBeforeCoaching; // ivar: _durationOnCameraCoveredGlyphBeforeCoaching
@property (nonatomic) CGFloat durationToSuppressCameraCoveredWhenWakingWithSmartCover; // ivar: _durationToSuppressCameraCoveredWhenWakingWithSmartCover
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *failureSettings; // ivar: _failureSettings
@property (nonatomic) CGFloat minimumDurationBeforeShowingScanningState; // ivar: _minimumDurationBeforeShowingScanningState
@property (nonatomic) CGFloat minimumDurationBetweenLeavingCoachingAndCoaching; // ivar: _minimumDurationBetweenLeavingCoachingAndCoaching
@property (nonatomic) CGFloat minimumDurationShowingCoaching; // ivar: _minimumDurationShowingCoaching
@property (nonatomic) NSUInteger overrideCoachingBiometricEvent; // ivar: _overrideCoachingBiometricEvent
@property (nonatomic) BOOL overrideCoachingConditionEnabled; // ivar: _overrideCoachingConditionEnabled
@property (nonatomic) BOOL pearlDebugUIEnabled; // ivar: _pearlDebugUIEnabled
@property (nonatomic) BOOL showScanningStateDuringFaceDetect; // ivar: _showScanningStateDuringFaceDetect
@property (nonatomic) BOOL showScanningStateOnLockScreen; // ivar: _showScanningStateOnLockScreen
@property (nonatomic) BOOL spinBeforeCoaching; // ivar: _spinBeforeCoaching
@property (nonatomic) CGFloat systemApertureDismissDelayAuth; // ivar: _systemApertureDismissDelayAuth
@property (nonatomic) CGFloat systemApertureDismissDelayDismissal; // ivar: _systemApertureDismissDelayDismissal


+(id)settingsControllerModule;
-(struct ? )proudLockControllerViewControllerConfiguration;
-(void)setDefaultValues;


@end


#endif