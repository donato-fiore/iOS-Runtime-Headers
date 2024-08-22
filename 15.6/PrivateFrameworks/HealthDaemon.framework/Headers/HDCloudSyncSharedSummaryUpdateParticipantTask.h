// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYUPDATEPARTICIPANTTASK_H
#define HDCLOUDSYNCSHAREDSUMMARYUPDATEPARTICIPANTTASK_H

@class NSArray;


#import "HDCloudSyncManagerPipelineTask.h"
#import "HDCodableSummarySharingEntry.h"

@interface HDCloudSyncSharedSummaryUpdateParticipantTask : HDCloudSyncManagerPipelineTask {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiersToAdd;
    NSArray *_authorizationIdentifiersToDelete;
}




-(id)initWithManager:(id)arg0 context:(id)arg1 codableEntry:(id)arg2 authorizationIdentifiersToAdd:(id)arg3 authorizationIdentifiersToDelete:(id)arg4 accessibilityAssertion:(id)arg5 completion:(id)arg6 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif