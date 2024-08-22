// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDBACKINGEXPLICITCREDENTIALSACCOUNT_H
#define CKDBACKINGEXPLICITCREDENTIALSACCOUNT_H

@class ACAccount, NSString;
@protocol AKAppleIDAuthenticationDelegate;


#import "CKDBackingAccount.h"

@interface CKDBackingExplicitCredentialsAccount : CKDBackingAccount <AKAppleIDAuthenticationDelegate>



@property (nonatomic, readonly) NSInteger accountType;
@property (nonatomic, readonly) ACAccount *ckAccount;
@property (retain) ACAccount *fakeCKAccount; // ivar: _fakeCKAccount
@property (readonly, nonatomic) NSString *hsa2AccountPassword; // ivar: _hsa2AccountPassword
@property (retain) NSString *hsa2DevicePassword; // ivar: _hsa2DevicePassword
@property (readonly, nonatomic) NSString *hsa2RecoveryKey; // ivar: _hsa2RecoveryKey
@property (nonatomic, readonly) NSString *password;


+(id)explicitCredentialsAccountWithEmail:(id)arg0 password:(id)arg1 recoveryKey:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4 ;
+(void)initialize;
-(?)deviceCountWithCompletionHandler;
-(?)renewAuthTokenWithOptionscompletionHandler;
-(?)updateAccountPropertiesAndSaveAccount;
-(BOOL)authenticationController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(BOOL)isDataclassEnabled:(id)arg0 ;
-(id)cloudKitAuthTokenWithError:(*id)arg0 ;
-(id)iCloudAuthTokenWithError:(*id)arg0 ;
-(id)initWithAppleAccount:(id)arg0 hsa2RecoveryKey:(id)arg1 hsa2AccountPassword:(id)arg2 ;
-(void)_setOverridesOnVettingContext:(id)arg0 ;


@end


#endif