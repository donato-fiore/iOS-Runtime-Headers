// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLIBRARYMIGRATIONUTIL_H
#define MTLIBRARYMIGRATIONUTIL_H


#import <Foundation/Foundation.h>


@interface MTLibraryMigrationUtil : NSObject



+(BOOL)createPersistentStoreForModel:(id)arg0 attemptMigration:(BOOL)arg1 ;
+(BOOL)isMomCompatible:(id)arg0 ;
+(BOOL)isNewInstall;
+(BOOL)needsCoreDataMigration;
+(BOOL)needsDataMigration;
+(BOOL)needsImageStoreMigration;
+(id)libraryImageStoreType;
+(void)setLibraryImageStoreType:(id)arg0 ;


@end


#endif