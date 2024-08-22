// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMODIFYRECORDSOPERATION_H
#define HDCLOUDSYNCMODIFYRECORDSOPERATION_H

@class CKContainer, CKDatabase, NSMutableArray, NSString, NSArray;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncModifyRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    CKContainer *_container;
    CKDatabase *_database;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    HDSynchronousTaskGroup *_taskGroup;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken; // ivar: _markAsParticipantNeedsNewInvitationToken
@property (nonatomic) BOOL permitNonAtomicZoneSaves; // ivar: _permitNonAtomicZoneSaves
@property (copy, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (copy, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy
@property (readonly, copy, nonatomic) NSArray *savedRecords;
@property (readonly) Class superclass;
@property (nonatomic) BOOL treatAnyErrorAsFatal; // ivar: _treatAnyErrorAsFatal


+(BOOL)shouldLogAtOperationStart;
-(id)initWithConfiguration:(id)arg0 container:(id)arg1 recordsToSave:(id)arg2 recordIDsToDelete:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 container:(id)arg1 scope:(NSInteger)arg2 recordsToSave:(id)arg3 recordIDsToDelete:(id)arg4 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif