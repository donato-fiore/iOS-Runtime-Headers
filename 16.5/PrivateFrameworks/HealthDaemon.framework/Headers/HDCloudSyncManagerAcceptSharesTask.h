// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMANAGERACCEPTSHARESTASK_H
#define HDCLOUDSYNCMANAGERACCEPTSHARESTASK_H

@class NSArray;


#import "HDCloudSyncManagerPipelineTask.h"
#import "HDCloudSyncShareSetupMetadata.h"
#import "HDCloudSyncAcceptSharesOperation.h"

@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {
    HDCloudSyncShareSetupMetadata *_shareSetupMetadata;
    HDCloudSyncAcceptSharesOperation *_acceptSharesOperation;
}


@property (readonly, copy, nonatomic) NSArray *acceptedShares;


-(BOOL)requiresExistingShareOwnerParticipant;
-(id)initWithManager:(id)arg0 context:(id)arg1 shareSetupMetadata:(id)arg2 accessibilityAssertion:(id)arg3 completion:(id)arg4 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif