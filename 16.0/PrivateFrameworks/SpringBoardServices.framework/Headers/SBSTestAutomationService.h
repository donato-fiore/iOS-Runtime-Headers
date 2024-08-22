// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTESTAUTOMATIONSERVICE_H
#define SBSTESTAUTOMATIONSERVICE_H

@class NSArray;


#import "SBSAbstractSystemService.h"

@interface SBSTestAutomationService : SBSAbstractSystemService

@property (nonatomic, getter=isChamoisWindowingUIEnabled) BOOL chamoisWindowingUIEnabled;
@property (readonly) BOOL deviceSupportsSystemAperture;
@property (readonly, copy) NSArray *systemApertureStateDump;


-(id)acquireAssertionForReachabilityEnabled:(BOOL)arg0 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg0 ;
-(void)addWidgetStackWithIdentifiers:(id)arg0 toPage:(int)arg1 withSizing:(int)arg2 ;
-(void)addWidgetWithIdentifier:(id)arg0 toPage:(int)arg1 withSizing:(int)arg2 ;
-(void)addWidgetsToEachPage;
-(void)clearAllUserNotifications;
-(void)countScenesForBundleIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)enterLostMode;
-(void)exitLostMode;
-(void)loadStashedSwitcherModelFromPath:(id)arg0 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg0 ;
-(void)setAccessoryType:(NSInteger)arg0 attached:(BOOL)arg1 ;
-(void)setAlertsEnabled:(BOOL)arg0 ;
-(void)setApplicationBundleIdentifier:(id)arg0 blockedForScreenTime:(BOOL)arg1 ;
-(void)setHiddenFeaturesEnabled:(BOOL)arg0 ;
-(void)setIdleTimerEnabled:(BOOL)arg0 ;
-(void)setMallocStackLoggingEnabled:(BOOL)arg0 ;
-(void)setOrientationLockEnabled:(BOOL)arg0 ;
-(void)setReachabilityActive:(BOOL)arg0 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg0 ;
-(void)stashSwitcherModelToPath:(id)arg0 ;
-(void)suspendAllDisplays;


@end


#endif