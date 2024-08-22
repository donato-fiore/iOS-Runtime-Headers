// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCPIPELINESTAGEACCEPTSHARES_H
#define HDCLOUDSYNCPIPELINESTAGEACCEPTSHARES_H

@class NSArray;


#import "HDCloudSyncPipelineStage.h"
#import "HDCloudSyncShareSetupMetadata.h"

@interface HDCloudSyncPipelineStageAcceptShares : HDCloudSyncPipelineStage

@property (readonly, copy, nonatomic) NSArray *acceptedShares; // ivar: _acceptedShares
@property (readonly, copy, nonatomic) HDCloudSyncShareSetupMetadata *share; // ivar: _share


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 sharingResult:(id)arg2 ;
-(void)main;


@end


#endif