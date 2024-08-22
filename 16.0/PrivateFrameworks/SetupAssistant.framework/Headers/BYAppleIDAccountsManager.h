// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYAPPLEIDACCOUNTSMANAGER_H
#define BYAPPLEIDACCOUNTSMANAGER_H

@class AALoginPluginManager, AAStorableLoginContext, AASetupAssistantService;

#import <Foundation/Foundation.h>


@interface BYAppleIDAccountsManager : NSObject {
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
}


@property (retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService; // ivar: _aaService


+(id)sharedManager;
-(id)init;
-(id)initForDelegateBundleIDs:(id)arg0 ;
-(id)storedLoginContext;
-(void)attemptPostRestoreRenewForAccount:(id)arg0 loginContext:(id)arg1 allowFollowUp:(BOOL)arg2 completion:(id)arg3 ;
-(void)clearStoredLoginContext;
-(void)enableDataClassesForAccount:(id)arg0 completion:(id)arg1 ;
-(void)loginDelegateAccountsWithUsername:(id)arg0 password:(id)arg1 rawPassword:(id)arg2 skipiTunes:(BOOL)arg3 onlyAppleIDPlugin:(BOOL)arg4 completion:(id)arg5 ;
-(void)performSilentICDPUpgrade;
-(void)preloadDefaultLoginParametersWithBundleIDs:(id)arg0 ;
-(void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg0 loginContext:(id)arg1 numberOfAttemptsAllowed:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)runPostRestoreRenewCredentialsIfNeeded;


@end


#endif