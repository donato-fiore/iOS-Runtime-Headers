// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACACCOUNTMIGRATIONSTATE_H
#define ACACCOUNTMIGRATIONSTATE_H


#import <Foundation/Foundation.h>


@interface ACAccountMigrationState : NSObject



+(BOOL)isMigrationFinished;
+(BOOL)migrationFinishedForKey:(struct __CFString *)arg0 ;
+(id)_currentSystemVersion;
+(void)writeMigrationVersionPref;
+(void)writeMigrationVersionPrefForKey:(struct __CFString *)arg0 ;


@end


#endif