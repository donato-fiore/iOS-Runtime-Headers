// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCFETCHRECORDSOPERATION_H
#define HDCLOUDSYNCFETCHRECORDSOPERATION_H

@class CKContainer, NSString, NSArray;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncFetchRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    CKContainer *_container;
    os_unfair_lock_s _lock;
    HDSynchronousTaskGroup *_taskGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *recordHandler; // ivar: _recordHandler
@property (copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 container:(id)arg1 recordIDs:(id)arg2 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif