// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSETUPSHARINGFORUNIFIEDZONETASK_H
#define HDCLOUDSYNCSETUPSHARINGFORUNIFIEDZONETASK_H

@class CKUserIdentityLookupInfo, NSNumber;


#import "HDCloudSyncManagerPipelineTask.h"
#import "HDCloudSyncShareToParticipantOperation.h"
#import "HDCloudSyncShareSetupMetadata.h"

@interface HDCloudSyncSetupSharingForUnifiedZoneTask : HDCloudSyncManagerPipelineTask {
    CKUserIdentityLookupInfo *_lookupInfo;
    BOOL _requireExistingRelationship;
    NSNumber *_requireZoneDeviceMode;
    HDCloudSyncShareToParticipantOperation *_shareOperation;
}


@property (readonly, copy, nonatomic) HDCloudSyncShareSetupMetadata *shareSetupMetadata;


-(id)initWithManager:(id)arg0 context:(id)arg1 lookupInfo:(id)arg2 requireExistingRelationship:(BOOL)arg3 requireZoneDeviceMode:(id)arg4 accessibilityAssertion:(id)arg5 completion:(id)arg6 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif