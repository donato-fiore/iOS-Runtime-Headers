// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKLOGINMANAGER_H
#define FBKLOGINMANAGER_H

@class FBKData<FBKLoginManagerDelegate>, FBKSeedPortalAPI<FBKLoginManagerDelegate>, NSMutableArray;
@protocol FBKReAuthenticationHandler;

#import <Foundation/Foundation.h>


@interface FBKLoginManager : NSObject

@property (weak) FBKData<FBKLoginManagerDelegate> *FBKData; // ivar: _FBKData
@property (weak) FBKSeedPortalAPI<FBKLoginManagerDelegate> *api; // ivar: _api
@property BOOL loggedInAsSomeoneElse; // ivar: _loggedInAsSomeoneElse
@property NSUInteger loginState; // ivar: _loginState
@property (copy) id *pendingLoginOperation; // ivar: _pendingLoginOperation
@property (retain, nonatomic) NSMutableArray *postLogOutTaskQueue; // ivar: _postLogOutTaskQueue
@property (retain, nonatomic) NSMutableArray *postLoginTaskQueue; // ivar: _postLoginTaskQueue
@property (weak, nonatomic) NSObject<FBKReAuthenticationHandler> *reAuthHandler; // ivar: _reAuthHandler


-(BOOL)_errorIncludesNotAParticipant:(id)arg0 ;
-(BOOL)_errorIncludesOutdatedVersion:(id)arg0 ;
-(BOOL)_hasInternalDeviceToken;
-(BOOL)_usesNewAutoLoginFlowAfterInvalidSessionError;
-(id)_loginInfo;
-(id)authenticationContextForUsername:(id)arg0 ;
-(id)initWithAPI:(id)arg0 ;
-(id)signInViewControllerWithAuthenticationContext:(id)arg0 ;
-(void)_drainLogOutTaskQueue;
-(void)_drainLoginTaskQueue;
-(void)_internalLoginWithDeviceToken:(id)arg0 ;
-(void)_loginWithUsername:(id)arg0 authenticationResults:(id)arg1 completion:(id)arg2 ;
-(void)autoLoginUsingSystemAccount:(BOOL)arg0 completion:(id)arg1 ;
-(void)autoLoginWithCompletion:(id)arg0 ;
-(void)autoLoginWithUserID:(id)arg0 userName:(id)arg1 deviceToken:(id)arg2 usesSystemAccount:(BOOL)arg3 completion:(id)arg4 ;
-(void)backgroundStartupWithCompletion:(id)arg0 ;
-(void)clearLoginTaskQueue;
-(void)dealloc;
-(void)didLoginWithUserInfo:(id)arg0 ;
-(void)didLoginWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)handleInteractiveLoginWithError:(id)arg0 success:(BOOL)arg1 completion:(id)arg2 ;
-(void)interactiveStartupUsingSystemAccount:(BOOL)arg0 completion:(id)arg1 ;
-(void)interactiveStartupWithCompletion:(id)arg0 ;
-(void)interactiveStartupWithLaunchAction:(id)arg0 completion:(id)arg1 ;
-(void)logOut;
-(void)logOutIfNeededAndRun:(id)arg0 ;
-(void)loginAsAnonymousUserWithLaunchAction:(id)arg0 completion:(id)arg1 ;
-(void)loginAsUnauthenticatedUserWithCompletion:(id)arg0 ;
-(void)loginWithEphemeralDeviceToken:(id)arg0 completion:(id)arg1 ;
-(void)loginWithSystemAccountWithCompletion:(id)arg0 ;
-(void)loginWithUsername:(id)arg0 authenticationResults:(id)arg1 completion:(id)arg2 ;
-(void)runAfterLogin:(id)arg0 ;
-(void)sessionDidBecomeInvalid:(id)arg0 ;


@end


#endif