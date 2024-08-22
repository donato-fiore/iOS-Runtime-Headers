// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCPIPELINESTAGE_H
#define HDCLOUDSYNCPIPELINESTAGE_H



#import "HDCloudSyncOperation.h"

@interface HDCloudSyncPipelineStage : HDCloudSyncOperation

@property (nonatomic) BOOL criticalFailureOnError; // ivar: _criticalFailureOnError
@property (nonatomic) NSInteger expectedReceiveSize; // ivar: _expectedReceiveSize
@property (nonatomic) NSInteger expectedSendSize; // ivar: _expectedSendSize


+(BOOL)shouldLogAtOperationEnd;
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)pipelineStageIgnoringErrors;


@end


#endif