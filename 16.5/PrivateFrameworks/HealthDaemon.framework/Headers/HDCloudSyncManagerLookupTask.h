// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMANAGERLOOKUPTASK_H
#define HDCLOUDSYNCMANAGERLOOKUPTASK_H

@class CKUserIdentityLookupInfo, CKShareParticipant;


#import "HDCloudSyncManagerPipelineTask.h"
#import "HDCloudSyncPipelineStageLookupParticipant.h"

@interface HDCloudSyncManagerLookupTask : HDCloudSyncManagerPipelineTask {
    CKUserIdentityLookupInfo *_lookupInfo;
    HDCloudSyncPipelineStageLookupParticipant *_lookupStage;
}


@property (readonly, copy, nonatomic) CKShareParticipant *participant;


-(id)initWithManager:(id)arg0 context:(id)arg1 lookupInfo:(id)arg2 accessibilityAssertion:(id)arg3 completion:(id)arg4 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif