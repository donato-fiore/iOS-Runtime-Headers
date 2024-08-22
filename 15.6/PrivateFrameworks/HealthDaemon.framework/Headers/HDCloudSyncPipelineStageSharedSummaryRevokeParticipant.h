// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCPIPELINESTAGESHAREDSUMMARYREVOKEPARTICIPANT_H
#define HDCLOUDSYNCPIPELINESTAGESHAREDSUMMARYREVOKEPARTICIPANT_H



#import "HDCloudSyncPipelineStage.h"
#import "HDCodableSummarySharingEntry.h"

@interface HDCloudSyncPipelineStageSharedSummaryRevokeParticipant : HDCloudSyncPipelineStage {
    HDCodableSummarySharingEntry *_codableEntry;
}




-(id)initWithOutgoingSummarySharingEntry:(id)arg0 configuration:(id)arg1 ;
-(void)main;


@end


#endif