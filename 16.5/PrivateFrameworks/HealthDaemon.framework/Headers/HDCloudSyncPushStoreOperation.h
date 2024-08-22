// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCPUSHSTOREOPERATION_H
#define HDCLOUDSYNCPUSHSTOREOPERATION_H



#import "HDCloudSyncOperation.h"
#import "HDCloudSyncTarget.h"
#import "_HDCloudSyncStorePersistableState.h"

@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    os_unfair_lock_s _lock;
    _HDCloudSyncStorePersistableState *_storeState;
}


@property (copy) HDCloudSyncTarget *target;


+(BOOL)shouldLogAtOperationStart;
+(id)operationTagDependencies;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 target:(id)arg2 ;
-(void)main;


@end


#endif