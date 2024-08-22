// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITIMPORTRECORDSWORKITEM_H
#define PFCLOUDKITIMPORTRECORDSWORKITEM_H

@class NSMutableDictionary, NSUUID, NSMutableArray, NSString;
@protocol PFCloudKitSerializerDelegate;


#import "PFCloudKitImporterWorkItem.h"
#import "PFCloudKitFetchedAssetBytesMetric.h"
#import "PFCloudKitFetchedRecordBytesMetric.h"

@interface PFCloudKitImportRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate>

 {
    NSMutableDictionary *_assetPathToSafeSaveURL;
    NSUUID *_importOperationIdentifier;
    NSMutableArray *_updatedRecords;
    NSUInteger _totalOperationBytes;
    PFCloudKitFetchedAssetBytesMetric *_fetchedAssetBytesMetric;
    PFCloudKitFetchedRecordBytesMetric *_fetchedRecordBytesMetric;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_allRecordIDs;
    NSMutableArray *_encounteredErrors;
    NSMutableArray *_failedRelationships;
    NSMutableArray *_incrementalResults;
    NSMutableArray *_unknownItemRecordIDs;
    NSMutableDictionary *_updatedShares;
    NSUInteger _currentOperationBytes;
    NSUInteger _countUpdatedRecords;
    NSUInteger _countDeletedRecords;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)applyAccumulatedChangesToStore:(id)arg0 inManagedObjectContext:(id)arg1 withStoreMonitor:(id)arg2 madeChanges:(*BOOL)arg3 error:(*id)arg4 ;
-(BOOL)commitMetadataChangesWithContext:(id)arg0 forStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateMetadataForAccumulatedChangesInContext:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(id)cloudKitSerializer:(id)arg0 safeSaveURLForAsset:(id)arg1 ;
-(id)createMirroringResultForRequest:(id)arg0 storeIdentifier:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(id)entityNameToAttributesToUpdate;
-(id)entityNameToRelationshipsToUpdate;
-(id)initWithOptions:(id)arg0 request:(id)arg1 ;
-(void)addUpdatedRecord:(id)arg0 ;
-(void)cloudKitSerializer:(id)arg0 failedToUpdateRelationship:(id)arg1 withError:(id)arg2 ;
-(void)dealloc;
-(void)doWorkForStore:(id)arg0 inMonitor:(id)arg1 completion:(id)arg2 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg0 completion:(id)arg1 ;


@end


#endif