// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSAUTHENTICATIONMIGRATOR_H
#define AMSAUTHENTICATIONMIGRATOR_H


#import <Foundation/Foundation.h>


@interface AMSAuthenticationMigrator : NSObject



+(BOOL)_ensureBackupDirectoryExistsWithError:(*id)arg0 ;
+(void)_archiveAccount:(id)arg0 ;
+(void)migrateAuthenticatediTunesAccountsWithOptions:(id)arg0 ;


@end


#endif