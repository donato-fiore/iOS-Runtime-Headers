// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIDLETIMERDESCRIPTORFACTORY_H
#define SBIDLETIMERDESCRIPTORFACTORY_H

@class SBUIBiometricResource;

#import <Foundation/Foundation.h>

#import "SBIdleTimerGlobalStateMonitor.h"
#import "SBAlertItemsController.h"
#import "SBBacklightController.h"
#import "SBConferenceManager.h"
#import "SBIdleTimerSettings.h"
#import "SBLockScreenManager.h"
#import "SBMainWorkspace.h"
#import "SBPrototypeController.h"
#import "SpringBoard.h"
#import "SBTelephonyManager.h"

@interface SBIdleTimerDescriptorFactory : NSObject {
    SBIdleTimerGlobalStateMonitor *_stateMonitor;
    int _previousShouldUseAttentionSensorAccess;
}


@property (retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // ivar: _alertItemsController
@property (retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController; // ivar: _override_backlightController
@property (retain, nonatomic, getter=_biometricResource, setter=_setBiometricResource:) SBUIBiometricResource *biometricResource; // ivar: _override_biometricResource
@property (retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // ivar: _override_conferenceManager
@property (retain, nonatomic, getter=_idleTimerPrototypeSettings, setter=_setIdleTimerPrototypeSettings:) SBIdleTimerSettings *idleTimerPrototypeSettings; // ivar: _override_idleTimerPrototypeSettings
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // ivar: _override_lockScreenManager
@property (retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // ivar: _override_mainWorkspace
@property (retain, nonatomic, getter=_prototypeController, setter=_setPrototypeController:) SBPrototypeController *prototypeController; // ivar: _override_prototypeController
@property (retain, nonatomic, getter=_springBoard, setter=_setSpringBoard:) SpringBoard *springBoard; // ivar: _springBoard
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // ivar: _override_telephonyManager


+(id)disabledIdleTimerDescriptor;
-(BOOL)_isIdleDurationForever:(CGFloat)arg0 ;
-(BOOL)_shouldUseAttentionSensor;
-(BOOL)sanitizeDescriptorForLockscreenDefaults:(id)arg0 ;
-(BOOL)sanitizeSettingsAfterInitialSetup:(id)arg0 ;
-(BOOL)sanitizeSettingsAfterSetup:(id)arg0 duration:(NSInteger)arg1 ;
-(BOOL)sanitizeTotalDuration:(id)arg0 ;
-(BOOL)sanitizeWarnInterval:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForActiveClientConfiguration:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForAutoLockTimeout:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForBatterySaverMode:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForDefaultWarnInterval:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForDuration:(NSInteger)arg0 descriptor:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForFaceDown:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForPowerDefaults:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForPrototypeSettings:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForSecurityDefaults:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForTelephony:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForThermalBlockedMode:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForUnlockedWithMesa:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsForWarnInterval:(id)arg0 ;
-(BOOL)updateIdleTimerSettingsWithCustomTimeouts:(id)arg0 fromBehavior:(id)arg1 ;
-(id)idleTimerDescriptorForBehavior:(id)arg0 ;
-(id)initWithGlobalStateMonitor:(id)arg0 ;
-(void)_updateIdleTimerSettingsWarnInterval:(id)arg0 totalInterval:(CGFloat)arg1 ;


@end


#endif