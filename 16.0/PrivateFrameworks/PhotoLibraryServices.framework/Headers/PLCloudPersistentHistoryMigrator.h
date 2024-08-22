// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDPERSISTENTHISTORYMIGRATOR_H
#define PLCLOUDPERSISTENTHISTORYMIGRATOR_H

@protocol PLCloudPersistentHistoryMigratorContext;

#import <Foundation/Foundation.h>

#import "PLCloudBatchUploader.h"
#import "PLCloudPhotoLibraryUploadTracker.h"
#import "PLManagedObjectContext.h"

@interface PLCloudPersistentHistoryMigrator : NSObject {
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    PLManagedObjectContext *_managedObjectContext;
    id<PLCloudPersistentHistoryMigratorContext> *_migratorContext;
}




+(void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)arg0 uploadTracker:(id)arg1 managedObjectContext:(id)arg2 migratorContext:(id)arg3 ;
-(BOOL)checkForExistingMigrationMarker;
-(BOOL)readLastKnownChangeHubIndex:(*NSUInteger)arg0 ;
-(NSInteger)migrate;
-(id)fetchAllPersistentHistoryTransactions;
-(id)fetchChangeHubEventsSinceLastKnownIndex:(NSUInteger)arg0 ;
-(id)initWithUploader:(id)arg0 uploadTracker:(id)arg1 managedObjectContext:(id)arg2 migratorContext:(id)arg3 ;
-(void)migrateToPersistentHistoryIfNecessary;
-(void)updateSavedTokenFromPersistentHistoryResult:(id)arg0 ;
-(void)uploadEventResults:(id)arg0 ;


@end


#endif