// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPAPPLICATIONLAUNCHER_H
#define CPAPPLICATIONLAUNCHER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPApplicationLauncherSwift.h"
#import "CPFeatureFlags.h"

@interface CPApplicationLauncher : NSObject {
    CPApplicationLauncherSwift *_newApplicationLauncher;
}


@property (retain, nonatomic) NSMutableDictionary *bundleIDToAssertionMap; // ivar: _bundleIDToAssertionMap
@property (readonly, nonatomic) CPFeatureFlags *featureFlags; // ivar: _featureFlags
@property (retain, nonatomic) NSMutableDictionary *sessionIDtoAuthMap; // ivar: _sessionIDtoAuthMap
@property (retain, nonatomic) NSMutableDictionary *sessionIDtoCompletionMap; // ivar: _sessionIDtoCompletionMap
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(BOOL)_acquireAssertionForBundleID:(id)arg0 ;
-(BOOL)_sessionAlreadyAuthorizingOrAuthorizedForPiP:(id)arg0 ;
-(id)_authorizationForActivitySession:(id)arg0 ;
-(id)_authorizationsForBundleID:(id)arg0 ;
-(id)_openApplicationOptionsForActivitySession:(id)arg0 options:(NSInteger)arg1 ;
-(id)_sessionIDForActivity:(id)arg0 ;
-(id)_sessionIDForAuthorization:(id)arg0 ;
-(id)init;
-(void)_authorizePiPForActivity:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleStateTransitionForAuthorization:(id)arg0 activitySession:(id)arg1 state:(NSInteger)arg2 ;
// -(void)_insertAuth:(id)arg0 completion:(id)arg1 forSessionID:(unk)arg2  ;
-(void)_insertBKSAssertion:(id)arg0 forBundleID:(id)arg1 ;
-(void)_invalidateBKSAssertionForBundleID:(id)arg0 ;
-(void)_invokeAndDequeueCompletionForSessionID:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_launchAndAcquireAssertionIfNecessaryForActivitySession:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_launchAppForActivitySession:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_launchApplicationForActivitySession:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_revokeAndRemoveAuthForSessionID:(id)arg0 ;
-(void)_revokeAuthorizations:(id)arg0 ;
-(void)_validatePiPStartedFor:(id)arg0 bundleID:(id)arg1 ;
-(void)authorizePiPForActivity:(id)arg0 withCompletion:(id)arg1 ;
-(void)launchAppForActivitySession:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)revokeBackgroundAuthorizationForBundleID:(id)arg0 ;
-(void)revokeBackgroundAuthorizationForSession:(id)arg0 ;


@end


#endif