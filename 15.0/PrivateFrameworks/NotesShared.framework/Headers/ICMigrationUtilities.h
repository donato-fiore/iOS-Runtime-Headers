// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMIGRATIONUTILITIES_H
#define ICMIGRATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICMigrationUtilities : NSObject



+(void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg0 ;
+(void)deleteMigratedHTMLAccountsInContext:(id)arg0 ;
+(void)fetchAndSetMigrationStateForAccountID:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)fetchMigrationStateAndUserRecordForAccountID:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)fetchMigrationStateForAccountID:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)saveDidChooseToMigrate:(BOOL)arg0 didFinishMigration:(BOOL)arg1 didMigrateOnMac:(BOOL)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(id)arg5 ;
+(void)updateAllLegacyAccountMigrationStatesInContext:(id)arg0 ;
+(void)updateLegacyAccountMigrationStateForModernAccount:(id)arg0 ;


@end


#endif