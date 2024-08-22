// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCPIPELINESTAGEADDSHARINGPARTICIPANT_H
#define HDCLOUDSYNCPIPELINESTAGEADDSHARINGPARTICIPANT_H

@class CKUserIdentityLookupInfo, NSString, NSUUID, NSNumber;


#import "HDCloudSyncPipelineStage.h"
#import "HDCloudSyncShareSetupMetadata.h"

@interface HDCloudSyncPipelineStageAddSharingParticipant : HDCloudSyncPipelineStage

@property (readonly, copy, nonatomic) CKUserIdentityLookupInfo *identityLookupInfo; // ivar: _identityLookupInfo
@property (readonly, copy, nonatomic) NSString *participantOwnerIdentifier; // ivar: _participantOwnerIdentifier
@property (readonly, copy, nonatomic) NSUUID *participantPushStoreIdentifier; // ivar: _participantPushStoreIdentifier
@property (nonatomic) BOOL requireExistingRelationship; // ivar: _requireExistingRelationship
@property (copy, nonatomic) NSNumber *requiredZoneDeviceMode; // ivar: _requiredZoneDeviceMode
@property (readonly, nonatomic) HDCloudSyncShareSetupMetadata *result; // ivar: _result


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 identityLookupInfo:(id)arg2 ;
-(void)main;


@end


#endif