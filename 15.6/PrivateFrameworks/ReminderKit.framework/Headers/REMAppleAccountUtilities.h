// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMAPPLEACCOUNTUTILITIES_H
#define REMAPPLEACCOUNTUTILITIES_H

@class ACAccount, ACAccountStore;

#import <Foundation/Foundation.h>


@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount; // ivar: __debug_primaryICloudACAccount
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (nonatomic) BOOL primaryICloudACAccountIsValid; // ivar: _primaryICloudACAccountIsValid
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount; // ivar: _unsafeUntilSystemReady_primaryICloudACAccount
@property (readonly) BOOL unsafeUntilSystemReady_primaryICloudAccountEnabled;


+(id)accountDescriptionWithACAccount:(id)arg0 ;
+(id)getAppleIDSession;
+(id)sharedInstance;
-(id)accessQueue;
-(id)init;
-(id)initForObservingAccountStoreChanges:(BOOL)arg0 ;
-(id)status;
-(id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
-(id)unsafeUntilSystemReady_primaryICloudAccountCalDavService;
-(void)_setPrimaryICloudACAccount:(id)arg0 ;
-(void)_unsetMigrationFlagsWithACAccount:(id)arg0 inStore:(id)arg1 completionHandler:(id)arg2 ;
-(void)accountStoreDidChange:(id)arg0 ;
-(void)dealloc;
-(void)internalInvalidatePrimaryICloudACAccount;
-(void)invalidatePrimaryICloudACAccount;
-(void)saveDidChooseToMigrate:(BOOL)arg0 didFinishMigration:(BOOL)arg1 toACAccount:(id)arg2 inStore:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif