// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDBACKINGFAKEACCOUNT_H
#define CKDBACKINGFAKEACCOUNT_H

@class ACAccount;


#import "CKDBackingAccount.h"

@interface CKDBackingFakeAccount : CKDBackingAccount

@property (retain, nonatomic) ACAccount *fakeCKAccount; // ivar: _fakeCKAccount


+(id)fakeAccountWithEmail:(id)arg0 password:(id)arg1 propertyOverrides:(id)arg2 overridesByDataclass:(id)arg3 ;
+(void)_setUpFakeAccountShenanigans;
-(BOOL)isDataclassEnabled:(id)arg0 ;
-(BOOL)isFakeAccount;
-(id)_initFakeAccountWithEmail:(id)arg0 password:(id)arg1 ;
-(id)_initFakeAccountWithEmail:(id)arg0 password:(id)arg1 propertyOverrides:(id)arg2 overridesByDataclass:(id)arg3 ;
-(id)ckAccount;
-(id)cloudKitAuthTokenWithError:(*id)arg0 ;
-(id)iCloudAuthTokenWithError:(*id)arg0 ;
-(id)identifier;
-(id)password;
-(void)_checkAndLogIfAccountError;
-(void)_setOverridesOnVettingContext:(id)arg0 ;
-(void)deviceCountWithCompletionHandler:(id)arg0 ;
-(void)renewAuthTokenWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccount:(id)arg0 ;


@end


#endif