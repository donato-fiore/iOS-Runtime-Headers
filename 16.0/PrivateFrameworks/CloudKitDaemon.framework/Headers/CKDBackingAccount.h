// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDBACKINGACCOUNT_H
#define CKDBACKINGACCOUNT_H

@class NSString, ACAccount, NSPersonNameComponents, NSURL;

#import <Foundation/Foundation.h>


@interface CKDBackingAccount : NSObject

@property (readonly, nonatomic) NSInteger accountType;
@property (readonly, nonatomic) NSString *altDSID;
@property (retain, nonatomic) ACAccount *appleAccount; // ivar: _appleAccount
@property (readonly, nonatomic) ACAccount *ckAccount;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
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


+(id)accountWithAltDSID:(id)arg0 ;
+(id)accountWithIdentifier:(id)arg0 ;
+(id)credentialRenewalDatesBySuspendedAccountID;
+(id)deviceCountQueue;
+(id)explicitCredentialsAccountWithEmail:(id)arg0 password:(id)arg1 propertyOverrides:(id)arg2 overridesByDataclass:(id)arg3 ;
+(id)mockAccountWithTestAccount:(id)arg0 testDevice:(id)arg1 ;
+(id)primaryAccount;
+(void)deviceCountForAccount:(id)arg0 ignoreCache:(BOOL)arg1 completionHandler:(id)arg2 ;
+(void)fetchDeviceCountForAccount:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)canSuspendedAccountRenewCredentials;
-(BOOL)isAccountSuspended;
-(BOOL)isDataclassEnabled:(id)arg0 ;
-(BOOL)isDataclassEnabledForCellular:(id)arg0 ;
-(id)_accountCredentialForAccount:(id)arg0 withError:(*id)arg1 ;
-(id)accountPropertiesForDataclass:(id)arg0 ;
-(id)cloudKitAuthTokenWithError:(*id)arg0 ;
-(id)iCloudAuthTokenWithError:(*id)arg0 ;
-(id)init;
-(id)privateCodeServiceURLPreferringGateway:(BOOL)arg0 ;
-(id)urlForDataclass:(id)arg0 ;
-(id)urlForDataclass:(id)arg0 preferringGateway:(BOOL)arg1 ;
-(void)_setOverridesOnVettingContext:(id)arg0 ;
-(void)deviceCountWithCompletionHandler:(id)arg0 ;
-(void)noteSuspendedAccountRenewalDate;
-(void)renewAuthTokenWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccount:(id)arg0 ;
-(void)validateVettingToken:(id)arg0 vettingEmail:(id)arg1 vettingPhone:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif