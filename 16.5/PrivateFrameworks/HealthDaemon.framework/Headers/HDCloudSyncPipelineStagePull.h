// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCPIPELINESTAGEPULL_H
#define HDCLOUDSYNCPIPELINESTAGEPULL_H

@class NSError;


#import "HDCloudSyncPipelineStage.h"

@interface HDCloudSyncPipelineStagePull : HDCloudSyncPipelineStage {
    NSInteger _queue_pullOperationFailureCount;
    NSError *_queue_firstPullOperationError;
}




+(id)operationTagDependencies;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;


@end


#endif