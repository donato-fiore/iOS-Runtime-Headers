// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDMESAUNLOCKBEHAVIORCONFIGURATION_H
#define SBDASHBOARDMESAUNLOCKBEHAVIORCONFIGURATION_H

@class CSLockScreenSettings, SBUIBiometricResource, NSString;
@protocol SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration, SBBiometricUnlockBehaviorConfigurationDelegate;

#import <Foundation/Foundation.h>

#import "SBLiftToWakeController.h"

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration>

 {
    SBLiftToWakeController *_liftToWakeController;
    CSLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBBiometricUnlockBehaviorConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
-(Class)_currentUnlockTriggerClass;
-(Class)_expectedTriggerClassIncludingAccessibility:(BOOL)arg0 ;
-(id)_liftToWakeController;
-(id)_unlockTriggerWithClass:(Class)arg0 ;
-(id)initWithLiftToWakeController:(id)arg0 biometricResource:(id)arg1 lockScreenPrototypeSettings:(id)arg2 ;
-(id)newBehaviorForCurrentConfiguration;
-(void)_accessibilityOptionsChanged:(id)arg0 ;
-(void)_evaluateTriggerClass;
-(void)_setLiftToWakeController:(id)arg0 ;
-(void)dealloc;
-(void)liftToWakeControllerEnablementDidChange:(id)arg0 ;


@end


#endif