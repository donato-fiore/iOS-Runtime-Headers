// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCOPERATIONPIPELINESTAGE_H
#define HDCLOUDSYNCOPERATIONPIPELINESTAGE_H



#import "HDCloudSyncPipelineStage.h"
#import "HDCloudSyncOperation.h"

@interface HDCloudSyncOperationPipelineStage : HDCloudSyncPipelineStage

@property (readonly, nonatomic) HDCloudSyncOperation *operation; // ivar: _operation


-(id)description;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithOperation:(id)arg0 ;
-(void)main;


@end


#endif