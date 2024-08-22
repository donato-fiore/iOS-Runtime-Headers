// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHAREDDATAMIGRATION_H
#define SHAREDDATAMIGRATION_H


#import <Foundation/Foundation.h>


@interface SharedDataMigration : NSObject



+(BOOL)_migrateCacheFileFromSubpath:(id)arg0 toSubpath:(id)arg1 ensureIsDirectory:(BOOL)arg2 ;
+(BOOL)migrateRecentSearches;
+(BOOL)migrateThumbnails;
+(id)_userCachesDirectoryPath;
+(void)migratePersistentStorageDefaults;
+(void)migrateTabDatabaseIfNeeded;


@end


#endif