// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDBACKINGMOCKACCOUNT_H
#define CKDBACKINGMOCKACCOUNT_H

@class NSString, CKTestAccount, CKTestDevice;


#import "CKDBackingAccount.h"

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}


@property (retain, nonatomic) CKTestAccount *testAccount; // ivar: _testAccount
@property (retain, nonatomic) CKTestDevice *testDevice; // ivar: _testDevice


+(id)mockAccountWithTestAccount:(id)arg0 testDevice:(id)arg1 ;
-(BOOL)canRenew;
-(BOOL)isDataclassEnabled:(id)arg0 ;
-(BOOL)isDataclassEnabledForCellular:(id)arg0 ;
-(BOOL)isPrimaryEmailVerified;
-(NSInteger)accountType;
-(id)_initMockAccountWithTestAccount:(id)arg0 testDevice:(id)arg1 ;
-(id)accountPropertiesForDataclass:(id)arg0 ;
-(id)cloudKitAuthTokenWithError:(*id)arg0 ;
-(id)displayedHostname;
-(id)dsid;
-(id)fullName;
-(id)iCloudAuthTokenWithError:(*id)arg0 ;
-(id)identifier;
-(id)personaIdentifier;
-(id)primaryEmail;
-(id)serverPreferredPushEnvironment;
-(id)sharingURLHostname;
-(id)username;
-(void)deviceCountWithCompletionHandler:(id)arg0 ;
-(void)renewAuthTokenInStore:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg0 completionHandler:(id)arg1 ;
-(void)validateVettingToken:(id)arg0 vettingEmail:(id)arg1 vettingPhone:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif