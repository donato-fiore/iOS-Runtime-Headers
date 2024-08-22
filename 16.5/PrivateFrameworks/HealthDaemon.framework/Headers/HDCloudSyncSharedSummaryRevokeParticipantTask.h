// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYREVOKEPARTICIPANTTASK_H
#define HDCLOUDSYNCSHAREDSUMMARYREVOKEPARTICIPANTTASK_H



#import "HDCloudSyncManagerPipelineTask.h"
#import "HDCodableSummarySharingEntry.h"

@interface HDCloudSyncSharedSummaryRevokeParticipantTask : HDCloudSyncManagerPipelineTask {
    HDCodableSummarySharingEntry *_codableEntry;
}




-(id)initWithManager:(id)arg0 context:(id)arg1 codableEntry:(id)arg2 accessibilityAssertion:(id)arg3 completion:(id)arg4 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif