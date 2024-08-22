// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALACCOUNTSPROVIDER_H
#define CALACCOUNTSPROVIDER_H

@class ACAccountStore, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CalAccountsProvider : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) NSArray *accountsEnabledForCalendar;
@property (readonly, nonatomic) NSArray *accountsEnabledForReminders;
@property (retain, nonatomic) NSMutableArray *accountsWhenRunningUnitTests; // ivar: _accountsWhenRunningUnitTests
@property (readonly, nonatomic) NSArray *allAccounts;
@property (readonly, nonatomic) NSArray *enabledAccounts;
@property (nonatomic) BOOL runningUnitTests; // ivar: _runningUnitTests


+(BOOL)accountIsDuplicate:(id)arg0 inStore:(id)arg1 ;
+(id)_accountTypeWithIdentifier:(id)arg0 inStore:(id)arg1 ;
+(id)_accountsWithAccountType:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
+(id)_existingAccountForAccount:(id)arg0 inStore:(id)arg1 ;
+(id)_uniqueStringsForUsername:(id)arg0 ;
+(id)defaultProvider;
+(id)uniqueStringsForHostname:(id)arg0 ;
+(id)uniqueStringsForPrincipalPath:(id)arg0 ;
+(id)verboseDescriptionForAccount:(id)arg0 ;
-(BOOL)_bundleIDSupportsDataclassCalendars:(id)arg0 ;
-(BOOL)_bundleIDSupportsDataclassReminders:(id)arg0 ;
-(BOOL)account:(id)arg0 hasServerURL:(id)arg1 ;
-(BOOL)accountIsDuplicate:(id)arg0 ;
-(BOOL)removeAccount:(id)arg0 withError:(*id)arg1 ;
-(BOOL)renewCredentialsForAccount:(id)arg0 ;
-(BOOL)renewCredentialsForAccount:(id)arg0 forceRenewal:(BOOL)arg1 ;
-(BOOL)saveAccount:(id)arg0 verify:(BOOL)arg1 withError:(*id)arg2 ;
-(BOOL)saveAccount:(id)arg0 withError:(*id)arg1 ;
-(id)_accountsEnabledForDataClass:(id)arg0 ;
-(id)_accountsEnabledForDataClasses:(id)arg0 ;
-(id)_mainBundleID;
-(id)_providerForCalDAVAccount:(id)arg0 ;
-(id)_supportedDataclassesForBundleID:(id)arg0 ;
-(id)_supportedDataclassesForMainBundleID;
-(id)accountTypeWithIdentifier:(id)arg0 ;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)accountWithIdentifier:(id)arg0 returnCachedVersion:(BOOL)arg1 ;
-(id)accountsWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)accountsWithServerURL:(id)arg0 ;
-(id)accountsWithServerURL:(id)arg0 username:(id)arg1 returnCachedVersions:(BOOL)arg2 ;
-(id)accountsWithUsername:(id)arg0 ;
-(id)allAccountsWithError:(*id)arg0 ;
-(id)clientTokenForAccountWithIdentifier:(id)arg0 ;
-(id)delegatePrincipalUIDsForAccount:(id)arg0 ;
-(id)existingAccountForAccount:(id)arg0 ;
-(id)init;
-(id)oauthTokenForAccount:(id)arg0 tokenType:(id)arg1 ;
-(id)primaryAppleAccount;
-(void)removeAccount:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg0 forceRenewal:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)saveAccount:(id)arg0 verify:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)saveAccount:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif