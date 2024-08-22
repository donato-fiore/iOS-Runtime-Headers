// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCVALIDATEPUSHTARGETOPERATION_H
#define HDCLOUDSYNCVALIDATEPUSHTARGETOPERATION_H



#import "HDCloudSyncOperation.h"
#import "HDCloudSyncTarget.h"

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSInteger result; // ivar: _result
@property (copy, nonatomic) HDCloudSyncTarget *target; // ivar: _target


+(BOOL)shouldLogAtOperationStart;
-(id)analyticsDictionary;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;


@end


#endif