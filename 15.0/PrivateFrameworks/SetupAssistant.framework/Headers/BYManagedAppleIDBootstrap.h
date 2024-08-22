// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYMANAGEDAPPLEIDBOOTSTRAP_H
#define BYMANAGEDAPPLEIDBOOTSTRAP_H

@class AKAppleIDAuthenticationContext, UMUserSwitchContext, NSDictionary, NSString;
@protocol AKAppleIDAuthenticationDelegate, BYNetworkObserver, UMUserSwitchStakeholder, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver, UMUserSwitchStakeholder>

 {
    AKAppleIDAuthenticationContext *_authContext;
    UMUserSwitchContext *_userSwitchContext;
}


@property (retain, nonatomic) NSDictionary *authenticationResults; // ivar: _authenticationResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (readonly, nonatomic) BOOL passwordChangeFlowNeedsToRun;
@property (readonly, copy, nonatomic) NSString *shortLivedToken;
@property (nonatomic) BOOL shouldRetrySilentLoginUpgrade; // ivar: _shouldRetrySilentLoginUpgrade
@property (nonatomic) NSInteger silentLoginUpgradeRetryCount; // ivar: _silentLoginUpgradeRetryCount
@property (readonly) Class superclass;
@property (readonly, nonatomic) UMUserSwitchContext *userSwitchContext;


+(BOOL)isFirstTimeLogin;
+(BOOL)isManagedAppleIDSignedIn;
+(BOOL)isMultiUser;
+(BOOL)isSettingUpMultiUser;
+(id)delegateBundleIDsForManagedAccount;
+(id)sharedManager;
-(BOOL)isLoginUser;
-(BOOL)needsToUpgradeShortLivedToken;
-(id)_authenticationContextWithAuthenticationResults:(id)arg0 ;
-(id)_fetchAKURLBagSynchronously;
-(id)_languageConfigurationDictionary;
-(id)init;
-(void)_createAppleAccountWithAuthenticationResults:(id)arg0 completion:(id)arg1 ;
-(void)_modifyAuthenticationContextIfNeeded:(id)arg0 ;
-(void)_registerForStartupCompletionNotificationWithTask:(id)arg0 ;
-(void)_runPostStartupTasksWithAccountStore:(id)arg0 completion:(id)arg1 ;
// -(void)_runSilentLoginUpgradeWithCompletion:(id)arg0 shortLivedTokenUpgradeCompletion:(unk)arg1  ;
-(void)_upgradeShortLivedTokenCompletion:(id)arg0 ;
-(void)dealloc;
-(void)ingestManagedBuddyData;
-(void)postUserSwitchContextHasBeenUsed;
-(void)recoverEMCSWithCompletion:(id)arg0 ;
// -(void)runSilentLoginUpgradeIfNeededWithCompletion:(id)arg0 shortLivedTokenUpgradeCompletion:(unk)arg1  ;
// -(void)runSilentLoginUpgradeIfNeededWithCompletion:(id)arg0 shortLivedTokenUpgradeCompletion:(unk)arg1 willNotCompleteBlock:(id)arg2  ;
-(void)switchToLoginWindowDueToError:(id)arg0 completion:(id)arg1 ;
-(void)willSwitchUser;
-(void)writeAccountConfigurationIfNeededWithCompletion:(id)arg0 ;


@end


#endif