// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTESTAUTOMATIONSERVICE_H
#define SBTESTAUTOMATIONSERVICE_H

@class FBServiceClientAuthenticator, NSHashTable, NSMutableDictionary, NSString;
@protocol SBSystemServiceServerTestAutomationDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate>

 {
    FBServiceClientAuthenticator *_clientAuthenticator;
    id<BSInvalidatable> *_idleTimerAssertion;
    NSHashTable *_reachabilityEnabledAssertions;
    NSHashTable *_inFlightAnimationTransactions;
    NSMutableDictionary *_accessoriesByType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_authenticateClient:(id)arg0 ;
-(NSUInteger)_iconGridSizeClassFromClientArgument:(NSInteger)arg0 ;
-(id)init;
-(void)systemServiceServer:(id)arg0 addWidgetsToEachPageForClient:(id)arg1 ;
-(void)systemServiceServer:(id)arg0 clearAllUserNotificationsForClient:(id)arg1 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 addWidgetStackWithIdentifiers:(id)arg2 toPage:(NSInteger)arg3 withSizing:(NSInteger)arg4 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 addWidgetWithIdentifier:(id)arg2 toPage:(NSInteger)arg3 withSizing:(NSInteger)arg4 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 countScenesForBundleIdentifier:(id)arg2 withCompletion:(id)arg3 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 loadStashedSwitcherModelFromPath:(id)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 port:(id)arg2 acquireAssertionForReachabilityEnabled:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 port:(id)arg2 acquireHUDHiddenAssertionForIdentifier:(id)arg3 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 resetToHomeScreenAnimated:(BOOL)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setAccessoryType:(NSInteger)arg2 attached:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setAlertsEnabled:(BOOL)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setApplicationBundleIdentifier:(id)arg2 blockedForScreenTime:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setHiddenFeaturesEnabled:(BOOL)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setIdleTimerEnabled:(BOOL)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setMallocStackLoggingEnabled:(BOOL)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setOrientationLockEnabled:(BOOL)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setReachabilityActive:(BOOL)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 stashSwitcherModelToPath:(id)arg2 ;
-(void)systemServiceServer:(id)arg0 suspendAllDisplaysForClient:(id)arg1 ;


@end


#endif