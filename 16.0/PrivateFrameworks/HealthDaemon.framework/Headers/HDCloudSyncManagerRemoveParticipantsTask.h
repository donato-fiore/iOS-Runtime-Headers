// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCMANAGERREMOVEPARTICIPANTSTASK_H
#define HDCLOUDSYNCMANAGERREMOVEPARTICIPANTSTASK_H

@class NSSet;


#import "HDCloudSyncManagerPipelineTask.h"

@interface HDCloudSyncManagerRemoveParticipantsTask : HDCloudSyncManagerPipelineTask {
    BOOL _removeAllParticipants;
    NSSet *_participantsToRemove;
}




-(id)initWithManager:(id)arg0 context:(id)arg1 removeAllParticipants:(BOOL)arg2 participantsToRemove:(id)arg3 accessibilityAssertion:(id)arg4 completion:(id)arg5 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif