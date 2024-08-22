// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCPULLSTOREOPERATION_H
#define HDCLOUDSYNCPULLSTOREOPERATION_H



#import "HDCloudSyncOperation.h"
#import "HDCloudSyncTarget.h"

@interface HDCloudSyncPullStoreOperation : HDCloudSyncOperation {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) BOOL hasAppliedChange; // ivar: _hasAppliedChange
@property (readonly, nonatomic) HDCloudSyncTarget *target; // ivar: _target


+(BOOL)shouldLogAtOperationStart;
-(BOOL)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 target:(id)arg2 ;
-(void)main;


@end


#endif