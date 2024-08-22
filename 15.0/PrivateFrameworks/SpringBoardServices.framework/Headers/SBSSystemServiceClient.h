// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSSYSTEMSERVICECLIENT_H
#define SBSSYSTEMSERVICECLIENT_H



#import "SBSServiceFacilityClient.h"

@interface SBSSystemServiceClient : SBSServiceFacilityClient {
    BOOL _buttonEventServiceIsWaitingForServerMessages;
}


@property (nonatomic) NSInteger passcodePolicy;


+(id)serviceFacilityIdentifier;
-(NSInteger)toggleStateForButtonKind:(NSInteger)arg0 ;
-(id)acquireAssertionForReachabilityEnabled:(BOOL)arg0 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg0 ;
-(void)_handleButtonEventConsumePressMessage:(id)arg0 ;
-(void)acquireAssertionOfType:(NSInteger)arg0 forReason:(id)arg1 withCompletion:(id)arg2 ;
-(void)addWidgetStackWithIdentifiers:(id)arg0 toPage:(int)arg1 withSizing:(int)arg2 ;
-(void)addWidgetWithIdentifier:(id)arg0 toPage:(int)arg1 withSizing:(int)arg2 ;
-(void)addWidgetsToEachPage;
-(void)clearAllUserNotifications;
-(void)countScenesForBundleIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)disableRemoteStateDumpWithCompletion:(id)arg0 ;
-(void)enableRemoteStateDumpWithTimeout:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchHapticTypeForButtonKind:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchUnlockCredentialSetWithCompletion:(id)arg0 ;
-(void)handleMessage:(id)arg0 withType:(NSInteger)arg1 ;
-(void)loadStashedSwitcherModelFromPath:(id)arg0 ;
-(void)requestAppSwitcherAppearanceForHiddenApplicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestStateDump:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg0 ;
-(void)setAccessoryType:(NSInteger)arg0 attached:(BOOL)arg1 ;
-(void)setAlertsEnabled:(BOOL)arg0 ;
-(void)setApplicationBundleIdentifier:(id)arg0 blockedForScreenTime:(BOOL)arg1 ;
-(void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)arg0 ;
-(void)setEventMask:(NSUInteger)arg0 forButtonKind:(NSInteger)arg1 priority:(NSInteger)arg2 ;
-(void)setHapticType:(NSInteger)arg0 forButtonKind:(NSInteger)arg1 ;
-(void)setHiddenFeaturesEnabled:(BOOL)arg0 ;
-(void)setIdleTimerEnabled:(BOOL)arg0 ;
-(void)setMallocStackLoggingEnabled:(BOOL)arg0 ;
-(void)setOrientationLockEnabled:(BOOL)arg0 ;
-(void)setReachabilityActive:(BOOL)arg0 ;
-(void)setRequestsHIDEvents:(BOOL)arg0 token:(id)arg1 forButtonKind:(NSInteger)arg2 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg0 ;
-(void)stashSwitcherModelToPath:(id)arg0 ;
-(void)suspendAllDisplays;


@end


#endif