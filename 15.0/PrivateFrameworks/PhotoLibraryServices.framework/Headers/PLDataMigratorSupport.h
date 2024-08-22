// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDATAMIGRATORSUPPORT_H
#define PLDATAMIGRATORSUPPORT_H

@class PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>


@interface PLDataMigratorSupport : NSObject

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager


-(id)initWithPathManager:(id)arg0 ;
-(void)recordDataMigrationInfo:(id)arg0 ;
-(void)removeAsidePhotosDatabase;
-(void)removeInternalMemoriesRelatedSnapshotDirectory;
-(void)removeLegacyMetadataFiles;
-(void)removeModelInterestDatabase;


@end


#endif