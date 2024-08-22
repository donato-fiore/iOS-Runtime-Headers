// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCMODIFYRECORDZONESOPERATION_H
#define HDCLOUDSYNCMODIFYRECORDZONESOPERATION_H

@class CKContainer, CKDatabase, NSString, NSArray;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncModifyRecordZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    CKContainer *_container;
    CKDatabase *_database;
    HDSynchronousTaskGroup *_taskGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (copy, nonatomic) NSArray *recordZonesToSave; // ivar: _recordZonesToSave
@property (readonly) Class superclass;


+(BOOL)shouldLogAtOperationStart;
-(id)initWithConfiguration:(id)arg0 container:(id)arg1 recordZonesToSave:(id)arg2 recordZoneIDsToDelete:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 container:(id)arg1 scope:(NSInteger)arg2 recordZonesToSave:(id)arg3 recordZoneIDsToDelete:(id)arg4 ;
-(void)_limitExceededForSavingRecordZones:(id)arg0 deletingRecordZoneIDs:(id)arg1 error:(id)arg2 ;
-(void)_saveRecordZones:(id)arg0 deleteRecordZoneIDs:(id)arg1 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif