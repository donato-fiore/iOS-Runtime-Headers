// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITCKQUERYBACKEDIMPORTWORKITEM_H
#define PFCLOUDKITCKQUERYBACKEDIMPORTWORKITEM_H

@class NSString, NSDate, CKQueryCursor, CKRecordZoneID;


#import "PFCloudKitImportRecordsWorkItem.h"

@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem {
    NSString *_recordType;
    NSDate *_maxModificationDate;
    CKQueryCursor *_queryCursor;
    CKRecordZoneID *_zoneIDToQuery;
}




-(BOOL)applyAccumulatedChangesToStore:(id)arg0 inManagedObjectContext:(id)arg1 withStoreMonitor:(id)arg2 madeChanges:(*BOOL)arg3 error:(*id)arg4 ;
-(BOOL)commitMetadataChangesWithContext:(id)arg0 forStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateMetadataForAccumulatedChangesInContext:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initForRecordType:(id)arg0 withOptions:(id)arg1 request:(id)arg2 ;
-(void)addUpdatedRecord:(id)arg0 ;
-(void)dealloc;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg0 completion:(id)arg1 ;


@end


#endif