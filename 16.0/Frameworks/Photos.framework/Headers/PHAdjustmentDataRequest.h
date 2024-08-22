// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHADJUSTMENTDATAREQUEST_H
#define PHADJUSTMENTDATAREQUEST_H

@class PLCPLDownloadContext;
@protocol OS_dispatch_semaphore, PHAdjustmentDataRequestDelegate;


#import "PHMediaRequest.h"
#import "PHAdjustmentDataResult.h"
#import "PHAdjustmentDataRequestBehaviorSpec.h"

@interface PHAdjustmentDataRequest : PHMediaRequest {
    PLCPLDownloadContext *_legacyDownloadContext;
    PHAdjustmentDataResult *_adjustmentDataResult;
    NSObject<OS_dispatch_semaphore> *_syncDownloadWaitSemaphore;
}


@property (readonly, nonatomic) PHAdjustmentDataRequestBehaviorSpec *behaviorSpec; // ivar: _behaviorSpec
@property (readonly, weak, nonatomic) NSObject<PHAdjustmentDataRequestDelegate> *delegate; // ivar: _delegate


-(BOOL)isSynchronous;
-(id)initWithRequestID:(int)arg0 requestIndex:(NSUInteger)arg1 contextType:(NSInteger)arg2 managerID:(NSUInteger)arg3 asset:(id)arg4 behaviorSpec:(id)arg5 delegate:(id)arg6 ;
-(void)_cplDownloadStatusNotification:(id)arg0 ;
-(void)_finishFromAsynchronousCallback;
-(void)cancel;
-(void)startRequest;


@end


#endif