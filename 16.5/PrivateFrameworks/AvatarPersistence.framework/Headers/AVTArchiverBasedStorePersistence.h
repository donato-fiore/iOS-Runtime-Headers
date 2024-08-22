// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTARCHIVERBASEDSTOREPERSISTENCE_H
#define AVTARCHIVERBASEDSTOREPERSISTENCE_H


#import <Foundation/Foundation.h>


@interface AVTArchiverBasedStorePersistence : NSObject



+(BOOL)_createStoreEmptyFileIfNeededAtLocation:(id)arg0 logger:(id)arg1 fileManager:(id)arg2 error:(*id)arg3 ;
+(BOOL)_createStoreFolderIfNeededAtLocation:(id)arg0 logger:(id)arg1 fileManager:(id)arg2 error:(*id)arg3 ;
+(BOOL)_createStoreIfNeededAtLocation:(id)arg0 logger:(id)arg1 error:(*id)arg2 ;
+(BOOL)_migrateFromPre0_5ToCurrentForStoreAtLocation:(id)arg0 logger:(id)arg1 fileManager:(id)arg2 error:(*id)arg3 ;
+(BOOL)_migrateFromPre0_6ToCurrentForStoreAtLocation:(id)arg0 logger:(id)arg1 fileManager:(id)arg2 error:(*id)arg3 ;
+(BOOL)_performMigrationIfNeededForStoreAtLocation:(id)arg0 logger:(id)arg1 fileManager:(id)arg2 error:(*id)arg3 ;
+(BOOL)_writeContent:(id)arg0 toDiskAtLocation:(id)arg1 logger:(id)arg2 error:(*id)arg3 ;
+(BOOL)contentExistsAtLocation:(id)arg0 ;
+(BOOL)isFileNotFoundError:(id)arg0 ;
+(BOOL)removeFilesAtLocation:(id)arg0 error:(*id)arg1 ;
+(BOOL)writeContent:(id)arg0 toDiskAtLocation:(id)arg1 logger:(id)arg2 error:(*id)arg3 ;
+(BOOL)writeVersion:(id)arg0 toDiskAtLocation:(id)arg1 error:(*id)arg2 ;
+(id)_migrateDifferentAvatarKitVersionsForContent:(id)arg0 logger:(id)arg1 ;
+(id)_readContentFromDiskAtLocation:(id)arg0 logger:(id)arg1 error:(*id)arg2 ;
+(id)currentVersion;
+(id)dbLocationForStoreLocation:(id)arg0 ;
+(id)readContentFromDiskAtLocation:(id)arg0 logger:(id)arg1 error:(*id)arg2 ;
+(id)readVersionForStoreAtLocation:(id)arg0 error:(*id)arg1 ;


@end


#endif