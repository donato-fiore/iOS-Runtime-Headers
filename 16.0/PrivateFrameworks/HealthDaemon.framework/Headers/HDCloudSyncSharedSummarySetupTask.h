// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYSETUPTASK_H
#define HDCLOUDSYNCSHAREDSUMMARYSETUPTASK_H

@class NSArray, CKUserIdentity;


#import "HDCloudSyncManagerPipelineTask.h"
#import "HDCodableSummarySharingEntry.h"
#import "HDCloudSyncPipelineStageSharedSummaryAddParticipant.h"
#import "HDCloudSyncShareSetupMetadata.h"

@interface HDCloudSyncSharedSummarySetupTask : HDCloudSyncManagerPipelineTask {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiers;
    HDCloudSyncPipelineStageSharedSummaryAddParticipant *_addParticipantStage;
}


@property (readonly, copy, nonatomic) CKUserIdentity *participantIdentity;
@property (readonly, copy, nonatomic) HDCloudSyncShareSetupMetadata *shareSetupMetadata;


-(id)initWithManager:(id)arg0 context:(id)arg1 codableEntry:(id)arg2 authorizationIdentifiers:(id)arg3 accessibilityAssertion:(id)arg4 completion:(id)arg5 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif