// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSHARETOPARTICIPANTOPERATION_H
#define HDCLOUDSYNCSHARETOPARTICIPANTOPERATION_H

@class CKUserIdentityLookupInfo, NSUUID, NSString, NSNumber, NSArray;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncZone.h"
#import "HDCloudSyncShareSetupMetadata.h"

@interface HDCloudSyncShareToParticipantOperation : HDCloudSyncOperation {
    os_unfair_lock_s _lock;
    CKUserIdentityLookupInfo *_identityLookupInfo;
    NSUUID *_storeIdentifier;
    NSString *_ownerIdentifier;
    BOOL _requireExistingRelationship;
    NSNumber *_expectedDeviceMode;
    HDCloudSyncZone *_participantPushZone;
    NSArray *_addedParticipants;
}


@property (readonly) HDCloudSyncShareSetupMetadata *result; // ivar: _result


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 identityLookupInfo:(id)arg2 requireExistingRelationship:(BOOL)arg3 requireZoneDeviceMode:(id)arg4 ;
-(void)main;


@end


#endif