// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCMANAGERFETCHSHAREPARTICIPANTSTASK_H
#define HDCLOUDSYNCMANAGERFETCHSHAREPARTICIPANTSTASK_H

@class NSArray;


#import "HDCloudSyncManagerPipelineTask.h"
#import "HDCloudSyncPipelineStageFetchShares.h"

@interface HDCloudSyncManagerFetchShareParticipantsTask : HDCloudSyncManagerPipelineTask {
    BOOL _fetchAllShares;
    HDCloudSyncPipelineStageFetchShares *_fetchSharesStage;
}


@property (readonly, copy, nonatomic) NSArray *shares;


-(id)initWithManager:(id)arg0 context:(id)arg1 fetchAllShares:(BOOL)arg2 accessibilityAssertion:(id)arg3 completion:(id)arg4 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif