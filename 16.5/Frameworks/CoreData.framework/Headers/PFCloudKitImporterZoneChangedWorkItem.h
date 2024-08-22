// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITIMPORTERZONECHANGEDWORKITEM_H
#define PFCLOUDKITIMPORTERZONECHANGEDWORKITEM_H

@class NSArray, NSMutableDictionary;


#import "PFCloudKitImportRecordsWorkItem.h"

@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImportRecordsWorkItem {
    NSArray *_changedRecordZoneIDs;
    NSMutableDictionary *_fetchedZoneIDToChangeToken;
    NSMutableDictionary *_fetchedZoneIDToMoreComing;
}




-(BOOL)commitMetadataChangesWithContext:(id)arg0 forStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateMetadataForAccumulatedChangesInContext:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithChangedRecordZoneIDs:(id)arg0 options:(id)arg1 request:(id)arg2 ;
-(void)dealloc;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg0 completion:(id)arg1 ;


@end


#endif