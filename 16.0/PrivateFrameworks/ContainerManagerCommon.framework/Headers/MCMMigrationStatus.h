// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMMIGRATIONSTATUS_H
#define MCMMIGRATIONSTATUS_H

@class NSURL, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSURL *migrationFileURL; // ivar: _migrationFileURL
@property (retain, nonatomic) NSMutableDictionary *migrationInfo; // ivar: _migrationInfo


+(id)currentBuildVersion;
-(BOOL)_writeMigrationStatusToDisk;
-(BOOL)hasMigrationOccurredForType:(id)arg0 ;
-(BOOL)isBuildUpgrade;
-(id)_iso8601DateFormatter;
-(id)_readMigrationStatusFromDisk;
-(id)init;
-(id)initForMobileUserMigration;
-(id)initForSystemMigration;
-(void)_migrateFromManyMarkerFilesToOneWithLibraryPath:(id)arg0 ;
-(void)_readStatusFromMarkerFileWithName:(id)arg0 andSetAsType:(id)arg1 libraryPath:(id)arg2 ;
-(void)_removeMarkerFileWithName:(id)arg0 libraryPath:(id)arg1 ;
-(void)setMigrationCompleteForType:(id)arg0 ;
-(void)writeCurrentBuildInfoToDisk;


@end


#endif