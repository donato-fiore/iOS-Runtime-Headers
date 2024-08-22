// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLEGACYACCOUNTUTILITIES_H
#define ICLEGACYACCOUNTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICLegacyAccountUtilities : NSObject



+(BOOL)didChooseToMigrateAccount:(id)arg0 context:(id)arg1 ;
+(BOOL)didChooseToMigrateAccountsForContext:(id)arg0 forAccountPassingTest:(id)arg1 ;
+(BOOL)didChooseToMigrateLegacyAccountType:(NSInteger)arg0 ;
+(BOOL)isLegacyLocalAccount:(id)arg0 ;
+(id)accountForAccountIdentifier:(id)arg0 context:(id)arg1 ;
+(id)accountIdentifierForAccount:(id)arg0 ;
+(id)legacyAccountForICloudACAccount:(id)arg0 context:(id)arg1 ;
+(id)legacyAccountForICloudAccount:(id)arg0 context:(id)arg1 ;
+(id)legacyAccountForLegacyAccountType:(NSInteger)arg0 context:(id)arg1 ;
+(id)legacyAccountForLocalAccountWithContext:(id)arg0 ;
+(id)legacyAccountForPrimaryICloudAccountWithContext:(id)arg0 ;


@end


#endif