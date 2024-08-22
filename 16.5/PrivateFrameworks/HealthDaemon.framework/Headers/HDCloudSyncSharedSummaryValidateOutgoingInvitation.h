// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYVALIDATEOUTGOINGINVITATION_H
#define HDCLOUDSYNCSHAREDSUMMARYVALIDATEOUTGOINGINVITATION_H

@class CKUserIdentity;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncSharedSummaryValidateOutgoingInvitation : HDCloudSyncOperation {
    os_unfair_lock_s _lock;
    CKUserIdentity *_userIdentity;
}




+(BOOL)shouldLogAtOperationStart;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;


@end


#endif