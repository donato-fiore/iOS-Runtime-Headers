// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMAPPLEACCOUNTUTILITIES_H
#define REMAPPLEACCOUNTUTILITIES_H

@class ACAccount, ACAccountStore, NSArray;

#import <Foundation/Foundation.h>


@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccount *_debug_fullICloudACAccount; // ivar: __debug_fullICloudACAccount
@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount; // ivar: __debug_primaryICloudACAccount
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (nonatomic) BOOL cachedICloudACAccountsAreValid; // ivar: _cachedICloudACAccountsAreValid
@property (readonly) NSArray *unsafeUntilSystemReady_allICloudACAccounts; // ivar: _unsafeUntilSystemReady_allICloudACAccounts
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount; // ivar: _unsafeUntilSystemReady_primaryICloudACAccount


+(id)accountDescriptionWithACAccount:(id)arg0 ;
+(id)sharedInstance;
-(id)accessQueue;
-(id)init;
-(id)initForObservingAccountStoreChanges:(BOOL)arg0 ;
-(id)status;
-(id)unsafeUntilSystemReady_allCloudKitRemindersEnabledICloudACAccounts;
-(id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
-(id)unsafeUntilSystemReady_displayedHostnameOfICloudACAccountWithAccountIdentifier:(id)arg0 ;
-(id)unsafeUntilSystemReady_iCloudAccountCalDavServiceWithAccountID:(id)arg0 ;
-(id)unsafeUntilSystemReady_icloudACAccountMatchingAccountIdentifier:(id)arg0 ;
-(void)_invalidateCachedICloudACAccounts;
-(void)_setNonPrimaryICloudACAccount:(id)arg0 ;
-(void)_setPrimaryICloudACAccount:(id)arg0 ;
-(void)_unsetMigrationFlagsWithACAccount:(id)arg0 inStore:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateCachedICloudACAccounts;
-(void)accountStoreDidChange:(id)arg0 ;
-(void)dealloc;
-(void)invalidateICloudACAccounts;
-(void)saveDidChooseToMigrate:(BOOL)arg0 didFinishMigration:(BOOL)arg1 toACAccount:(id)arg2 inStore:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif