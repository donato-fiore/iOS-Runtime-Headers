// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCIGNOREDERRORSPIPELINESTAGE_H
#define HDCLOUDSYNCIGNOREDERRORSPIPELINESTAGE_H



#import "HDCloudSyncPipelineStage.h"

@interface HDCloudSyncIgnoredErrorsPipelineStage : HDCloudSyncPipelineStage

@property (retain) HDCloudSyncPipelineStage *stage; // ivar: _stage


-(id)description;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 stage:(id)arg2 ;
-(void)main;


@end


#endif