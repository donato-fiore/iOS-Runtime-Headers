// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDACCOUNT_H
#define CKDACCOUNT_H

@class NSString, ACAccountStore, NSPersonNameComponents, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDBackingAccount.h"

@interface CKDAccount : NSObject

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) NSInteger accountType;
@property (readonly, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue; // ivar: _authTokenCallbackQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (readonly, nonatomic) CKDBackingAccount *backingAccount; // ivar: _backingAccount
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *formattedUsername;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment; // ivar: _haveWarnedAboutServerPreferredPushEnvironment
@property (readonly, nonatomic) BOOL isCarryAccount;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
@property (copy, nonatomic) NSString *lastFailedCloudKitAuthToken; // ivar: _lastFailedCloudKitAuthToken
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken; // ivar: _lastFailediCloudAuthToken
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) NSString *sharingURLHostname;
@property (readonly, nonatomic) NSString *username;


+(id)globalAuthTokenQueue;
-(BOOL)_userCloudDBURLisInCarryPartition;
-(BOOL)isDataclassEnabled:(id)arg0 ;
-(BOOL)isDataclassEnabledForCellular:(id)arg0 ;
-(id)_init;
-(id)_lockedCloudKitAuthTokenWithContainer:(id)arg0 error:(*id)arg1 ;
-(id)_lockediCloudAuthTokenWithContainer:(id)arg0 error:(*id)arg1 ;
-(id)cloudKitAuthTokenWithContainer:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)iCloudAuthTokenWithContainer:(id)arg0 error:(*id)arg1 ;
-(id)initAnonymousAccount;
-(id)initExplicitCredentialsAccountWithAccountOverrideInfo:(id)arg0 ;
-(id)initMockAccountWithTestAccount:(id)arg0 testDevice:(id)arg1 ;
-(id)initPrimaryAccount;
-(id)initWithAccountID:(id)arg0 ;
-(id)initWithAltDSID:(id)arg0 ;
// -(void)_lockedRenewTokenWithReason:(id)arg0 shouldForce:(BOOL)arg1 container:(id)arg2 tokenFetchBlock:(id)arg3 completionHandler:(unk)arg4  ;
-(void)cloudKitAuthTokenWithContainer:(id)arg0 completionHandler:(id)arg1 ;
-(void)deviceCountWithCompletionHandler:(id)arg0 ;
-(void)iCloudAuthTokenWithContainer:(id)arg0 completionHandler:(id)arg1 ;
-(void)renewCloudKitAuthTokenWithReason:(id)arg0 shouldForce:(BOOL)arg1 container:(id)arg2 failedToken:(id)arg3 completionHandler:(id)arg4 ;
-(void)renewiCloudAuthTokenWithReason:(id)arg0 shouldForce:(BOOL)arg1 container:(id)arg2 failedToken:(id)arg3 completionHandler:(id)arg4 ;
-(void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(id)arg0 ;
-(void)validateVettingToken:(id)arg0 vettingEmail:(id)arg1 vettingPhone:(id)arg2 container:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif