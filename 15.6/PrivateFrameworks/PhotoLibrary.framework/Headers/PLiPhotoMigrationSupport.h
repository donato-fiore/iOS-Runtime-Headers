// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLIPHOTOMIGRATIONSUPPORT_H
#define PLIPHOTOMIGRATIONSUPPORT_H


#import <Foundation/Foundation.h>


@interface PLiPhotoMigrationSupport : NSObject {
    uint8_t _inFlightMigrationCount;
}


@property (readonly, nonatomic) BOOL migrationWasInterrupted;


+(id)sharedInstance;
-(BOOL)_createParentDirectoryIfNecessaryWithPath:(id)arg0 ;
-(BOOL)_isMigrating;
-(BOOL)_validateUuid:(id)arg0 ;
-(id)_displayableUuidWithUuid:(id)arg0 ;
-(id)_firstFilePathWithAnyExtensionAtPath:(id)arg0 extension:(*id)arg1 ;
-(id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg0 ;
-(id)_iPhotoToPhotosUuidMapTable;
-(id)_inFlightMigrationMarkerFilePath;
-(id)_migratediPhotoDir;
-(id)_preMigratediPhotoDir;
-(void)_decrementInFlightMigrationCount;
-(void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg0 subDirectoryName:(id)arg1 description:(id)arg2 ;
-(void)_incrementInFlightMigrationCount;
-(void)_migrateiPhotoLibraryWithProgressHandler:(id)arg0 ;
// -(void)_migrateiPhotoLibraryWorkerWithProgressHandler:(id)arg0 iPhotoLibraryDir:(unk)arg1  ;
-(void)checkForUnmigratediPhotoContentWithCompletion:(id)arg0 ;
-(void)fireMigrationOfiPhotoLibraryWithProgressHandler:(id)arg0 ;
// -(void)migrateEachPreMigratediPhotoLibrary:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif