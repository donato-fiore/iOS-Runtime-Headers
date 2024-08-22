// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCDELETERECORDSOPERATION_H
#define HDCLOUDSYNCDELETERECORDSOPERATION_H

@class NSArray, NSString;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncDeleteRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    os_unfair_lock_s _lock;
    HDSynchronousTaskGroup *_taskGroup;
    NSArray *_recordIDsToDelete;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSArray *recordIDsToDelete;
@property (readonly) Class superclass;


+(BOOL)shouldLogAtOperationStart;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif