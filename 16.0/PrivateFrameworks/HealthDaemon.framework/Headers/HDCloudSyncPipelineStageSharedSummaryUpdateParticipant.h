// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCPIPELINESTAGESHAREDSUMMARYUPDATEPARTICIPANT_H
#define HDCLOUDSYNCPIPELINESTAGESHAREDSUMMARYUPDATEPARTICIPANT_H

@class NSArray;


#import "HDCloudSyncPipelineStage.h"
#import "HDCodableSummarySharingEntry.h"

@interface HDCloudSyncPipelineStageSharedSummaryUpdateParticipant : HDCloudSyncPipelineStage {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiersToAdd;
    NSArray *_authorizationIdentifiersToDelete;
}




-(id)initWithSummarySharingEntry:(id)arg0 configuration:(id)arg1 ;
-(id)initWithSummarySharingEntry:(id)arg0 configuration:(id)arg1 authorizationIdentifiersToAdd:(id)arg2 authorizationIdentifiersToDelete:(id)arg3 ;
-(void)main;


@end


#endif