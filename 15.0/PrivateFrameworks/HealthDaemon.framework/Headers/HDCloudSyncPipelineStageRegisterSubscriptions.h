// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCPIPELINESTAGEREGISTERSUBSCRIPTIONS_H
#define HDCLOUDSYNCPIPELINESTAGEREGISTERSUBSCRIPTIONS_H

@class NSDictionary;


#import "HDCloudSyncPipelineStage.h"

@interface HDCloudSyncPipelineStageRegisterSubscriptions : HDCloudSyncPipelineStage

@property (nonatomic) BOOL includeSecondaryContainers; // ivar: _includeSecondaryContainers
@property (readonly, copy, nonatomic) NSDictionary *subscriptions; // ivar: _subscriptions


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 subscriptions:(id)arg2 ;
-(void)main;


@end


#endif