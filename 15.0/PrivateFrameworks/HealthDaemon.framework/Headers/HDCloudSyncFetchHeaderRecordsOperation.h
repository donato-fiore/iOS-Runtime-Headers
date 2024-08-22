// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCFETCHHEADERRECORDSOPERATION_H
#define HDCLOUDSYNCFETCHHEADERRECORDSOPERATION_H

@class NSMutableDictionary, NSMutableSet, NSString, NSArray;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncFetchHeaderRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_fetchedRecordIDsByContainerID;
    NSMutableSet *_invalidRecordIDs;
    HDSynchronousTaskGroup *_taskGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchSubscriptions; // ivar: _fetchSubscriptions
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *invalidRecordIDs;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif