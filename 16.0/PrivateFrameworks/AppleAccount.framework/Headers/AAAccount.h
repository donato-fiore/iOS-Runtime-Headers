// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAACCOUNT_H
#define AAACCOUNT_H

@class ACAccount, NSString, NSDictionary, NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface AAAccount : NSObject {
    ACAccount *_account;
}


@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property (readonly, nonatomic) NSDictionary *accountFooterButton;
@property (readonly, nonatomic) NSString *accountFooterText;
@property (readonly, nonatomic) int accountServiceType;
@property (readonly, nonatomic) NSArray *appleIDAliases; // ivar: _appleIDAliases
@property (copy, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSSet *enabledDataclasses;
@property (readonly, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *fmipToken; // ivar: _fmipToken
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL needsEmailConfiguration;
@property (readonly, nonatomic) BOOL needsRegistration;
@property (nonatomic) BOOL needsToVerifyTerms;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *personID;
@property (nonatomic) BOOL primaryAccount;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) BOOL primaryEmailVerified;
@property (readonly, nonatomic) NSString *protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) NSSet *provisionedDataclasses;
@property (readonly, nonatomic) BOOL serviceUnavailable;
@property (readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property (readonly, nonatomic) NSArray *supportedDataclasses;
@property (readonly, nonatomic) NSString *syncStoreIdentifier;
@property (copy, nonatomic) NSString *username;


+(id)accountTypeString;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(BOOL)isProvisionedForDataclass:(id)arg0 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg0 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg0 withHandler:(id)arg1 ;
-(BOOL)useCellularForDataclass:(id)arg0 ;
-(id)_childAccounts;
-(id)_mailChildAccount;
-(id)account;
-(id)accountPropertyForKey:(id)arg0 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(id)propertiesForDataclass:(id)arg0 ;
-(int)mobileMeAccountStatus;
-(void)authenticateWithHandler:(id)arg0 ;
-(void)flushCachedPassword;
-(void)flushCachedTokens;
-(void)notifyUserOfQuotaDepletion;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg0 ;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg0 withHandler:(id)arg1 ;
-(void)removePasswordFromKeychain;
-(void)removeTokensFromKeychain;
-(void)renewCredentialsForAppleIDWithHandler:(id)arg0 ;
-(void)saveFMIPTokenInKeychain;
-(void)savePasswordInKeychain;
-(void)saveTokensInKeychain;
-(void)setAccountProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 forDataclass:(id)arg1 ;
-(void)setUseCellular:(BOOL)arg0 forDataclass:(id)arg1 ;
-(void)setupChildMailAccountAndEnable:(BOOL)arg0 withEmail:(id)arg1 ;
-(void)updateAccountPropertiesWithHandler:(id)arg0 ;
-(void)updateAccountWithProvisioningResponse:(id)arg0 ;


@end


#endif