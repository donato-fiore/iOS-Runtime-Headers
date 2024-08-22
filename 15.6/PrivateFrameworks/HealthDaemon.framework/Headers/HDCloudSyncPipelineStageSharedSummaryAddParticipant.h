// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCPIPELINESTAGESHAREDSUMMARYADDPARTICIPANT_H
#define HDCLOUDSYNCPIPELINESTAGESHAREDSUMMARYADDPARTICIPANT_H

@class NSArray, CKUserIdentity;


#import "HDCloudSyncPipelineStage.h"
#import "HDCodableSummarySharingEntry.h"
#import "HDCloudSyncShareSetupMetadata.h"

@interface HDCloudSyncPipelineStageSharedSummaryAddParticipant : HDCloudSyncPipelineStage {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiers;
}


@property (readonly) CKUserIdentity *participantIdentity; // ivar: _participantIdentity
@property (readonly) HDCloudSyncShareSetupMetadata *shareSetupMetadata; // ivar: _shareSetupMetadata


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 codableEntry:(id)arg2 authorizationIdentifiers:(id)arg3 ;
-(void)main;


@end


#endif