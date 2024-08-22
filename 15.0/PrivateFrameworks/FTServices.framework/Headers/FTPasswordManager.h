// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTPASSWORDMANAGER_H
#define FTPASSWORDMANAGER_H

@class NSMutableSet, ACAccountStore, IMUserNotificationCenter, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, FTPasswordManager;

#import <Foundation/Foundation.h>

#import "_FTPasswordManagerCachedAuthTokenInfo.h"

@interface FTPasswordManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, FTPasswordManager>

 {
    NSMutableSet *_runningQueries;
    ACAccountStore *_accountStore;
    IMUserNotificationCenter *_userNotificationCenter;
    _FTPasswordManagerCachedAuthTokenInfo *_cachedAuthTokenInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_loginUserNotificationForService:(id)arg0 user:(id)arg1 isForBadPassword:(BOOL)arg2 showForgetPassword:(BOOL)arg3 shouldRememberPassword:(BOOL)arg4 ;
+(id)sharedInstance;
-(BOOL)_shouldForceSilentOnlyAuthForUsername:(id)arg0 serviceIdentifier:(id)arg1 ;
-(BOOL)_usernameHasCorrespondingIdMSAccount:(id)arg0 ;
-(BOOL)isAuthTokenReceiptTime:(CGFloat)arg0 withinGracePeriod:(CGFloat)arg1 ;
-(BOOL)supportsAuthTokenRequests;
-(CGFloat)authTokenGracePeriod;
-(id)_accountBasedOnProfileID:(id)arg0 orUsername:(id)arg1 inStore:(id)arg2 ;
-(id)_accountOptionsDictForRenewCredentialsForService:(id)arg0 username:(id)arg1 shouldFailIfNotSilent:(BOOL)arg2 ;
-(id)_accountWithProfileID:(id)arg0 username:(id)arg1 inStore:(id)arg2 ;
-(id)_accountWithProfileIDMatchingUser:(id)arg0 inStore:(id)arg1 ;
-(id)_accountWithUsername:(id)arg0 inStore:(id)arg1 ;
-(id)_accountWithUsernameAlias:(id)arg0 inStore:(id)arg1 ;
-(id)_findIDSAccountInStore:(id)arg0 withCriteria:(id)arg1 ;
-(id)_findIDSAccountsInStore:(id)arg0 withCriteria:(id)arg1 ;
-(id)_keychainAuthTokenForUsername:(id)arg0 service:(id)arg1 ;
-(id)_keychainPasswordForUsername:(id)arg0 service:(id)arg1 ;
-(id)_profileIDForUsername:(id)arg0 inStore:(id)arg1 ;
-(id)acAccountWithProfileID:(id)arg0 username:(id)arg1 accountStore:(id)arg2 ;
-(id)init;
-(id)initWithUserNotificationCenter:(id)arg0 ;
-(id)profileIDForACAccount:(id)arg0 ;
// -(void)_renewCredentialsIfPossibleForAccount:(id)arg0 username:(id)arg1 inServiceIdentifier:(id)arg2 originalInServiceIdentifier:(id)arg3 serviceName:(id)arg4 failIfNotSilent:(BOOL)arg5 renewHandler:(id)arg6 shortCircuitCompletionBlock:(unk)arg7  ;
-(void)_setKeychainAuthToken:(id)arg0 forUsername:(id)arg1 service:(id)arg2 ;
-(void)_setKeychainPassword:(id)arg0 forUsername:(id)arg1 service:(id)arg2 ;
-(void)_updateStatus:(id)arg0 onAccount:(id)arg1 ;
-(void)accountCredentialChanged:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)cancelRequestID:(id)arg0 serviceIdentifier:(id)arg1 ;
// -(void)cleanUpAccountsBasedOnInUseUsernamesBlock:(id)arg0 profileIDBlock:(unk)arg1 completionBlock:(id)arg2  ;
-(void)cleanUpAccountsWithUsername:(id)arg0 orProfileID:(id)arg1 basedOnInUseUsernames:(id)arg2 profileIDs:(id)arg3 completionBlock:(id)arg4 ;
-(void)fetchAuthTokenForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 outRequestID:(*id)arg3 completionBlock:(id)arg4 ;
-(void)fetchPasswordForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 outRequestID:(*id)arg3 completionBlock:(id)arg4 ;
-(void)performCleanUpWithCompletion:(id)arg0 ;
-(void)removeAuthTokenAllowingGracePeriodForProfileID:(id)arg0 username:(id)arg1 ;
-(void)requestAuthTokenForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 failIfNotSilent:(BOOL)arg5 outRequestID:(*id)arg6 completionBlock:(id)arg7 ;
-(void)requestAuthTokenForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 forceRenewal:(BOOL)arg5 failIfNotSilent:(BOOL)arg6 outRequestID:(*id)arg7 completionBlock:(id)arg8 ;
-(void)requestAuthTokenForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 outRequestID:(*id)arg5 completionBlock:(id)arg6 ;
-(void)requestPasswordForUsername:(id)arg0 service:(id)arg1 badPassword:(BOOL)arg2 showForgotPassword:(BOOL)arg3 shouldRememberPassword:(BOOL)arg4 outRequestID:(*id)arg5 completionBlock:(id)arg6 ;
-(void)setAccountStatus:(id)arg0 forProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 ;
-(void)setAuthTokenForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 authToken:(id)arg3 selfHandle:(id)arg4 accountStatus:(id)arg5 outRequestID:(*id)arg6 completionBlock:(id)arg7 ;
-(void)setAuthTokenForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 authToken:(id)arg3 selfHandle:(id)arg4 outRequestID:(*id)arg5 completionBlock:(id)arg6 ;
-(void)setHandlesForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 handles:(id)arg3 ;
-(void)setPasswordForProfileID:(id)arg0 username:(id)arg1 service:(id)arg2 password:(id)arg3 outRequestID:(*id)arg4 completionBlock:(id)arg5 ;
-(void)updatePreviousUsername:(id)arg0 toNewUsername:(id)arg1 ;


@end


#endif