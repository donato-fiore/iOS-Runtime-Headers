// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPAPPLICATIONLAUNCHER_H
#define CPAPPLICATIONLAUNCHER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPApplicationLauncher : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundleIDToAssertionMap; // ivar: _bundleIDToAssertionMap
@property (retain, nonatomic) NSMutableDictionary *sessionIDtoAuthMap; // ivar: _sessionIDtoAuthMap
@property (retain, nonatomic) NSMutableDictionary *sessionIDtoCompletionMap; // ivar: _sessionIDtoCompletionMap
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(BOOL)_acquireAssertionForBundleID:(id)arg0 ;
-(BOOL)_launchAndAcquireAssertionForBundleID:(id)arg0 sessionID:(id)arg1 ;
-(BOOL)_launchApplicationWithBundleIdentifier:(id)arg0 ;
-(BOOL)_sessionAlreadyAuthorizedForPiP:(id)arg0 ;
-(id)_appBundleIDForActivity:(id)arg0 ;
-(id)_authorizationForActivitySession:(id)arg0 ;
-(id)_authorizationsForBundleID:(id)arg0 ;
-(id)_sessionIDForActivity:(id)arg0 ;
-(id)_sessionIDForAuthorization:(id)arg0 ;
-(id)init;
-(void)_handleStateTransitionForAuthorization:(id)arg0 state:(NSInteger)arg1 ;
// -(void)_insertAuth:(id)arg0 completion:(id)arg1 forSessionID:(unk)arg2  ;
-(void)_insertBKSAssertion:(id)arg0 forBundleID:(id)arg1 ;
-(void)_invalidateBKSAssertionForBundleID:(id)arg0 ;
-(void)_invokeAndDequeueCompletionForSessionID:(id)arg0 error:(id)arg1 ;
-(void)_launchAppWithBackgroundPiPForActivity:(id)arg0 withCompletion:(id)arg1 ;
-(void)_revokeAndRemoveAuthForSessionID:(id)arg0 ;
-(void)_revokeAuthorizations:(id)arg0 ;
-(void)_validatePiPStartedFor:(id)arg0 bundleID:(id)arg1 ;
-(void)launchAppWithBackgroundPiPForActivity:(id)arg0 withCompletion:(id)arg1 ;
-(void)revokeBackgroundPiPAuthorizationForBundleID:(id)arg0 ;
-(void)revokeBackgroundPiPAuthorizationForSession:(id)arg0 ;


@end


#endif