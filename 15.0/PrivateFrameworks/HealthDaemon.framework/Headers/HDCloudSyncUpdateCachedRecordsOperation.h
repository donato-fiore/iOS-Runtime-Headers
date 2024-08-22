// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCUPDATECACHEDRECORDSOPERATION_H
#define HDCLOUDSYNCUPDATECACHEDRECORDSOPERATION_H

@class NSMutableSet, NSString, NSArray;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncUpdateCachedRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    HDSynchronousTaskGroup *_taskGroup;
    NSMutableSet *_invalidRecordIDs;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *invalidRecordIDs;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *zoneIdentifiersWithIdentityLost; // ivar: _zoneIdentifiersWithIdentityLost


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif