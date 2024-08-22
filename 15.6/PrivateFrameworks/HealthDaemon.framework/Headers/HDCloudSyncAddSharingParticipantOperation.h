// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCADDSHARINGPARTICIPANTOPERATION_H
#define HDCLOUDSYNCADDSHARINGPARTICIPANTOPERATION_H

@class CKShareParticipant, NSMutableArray, NSArray, NSString, NSDictionary;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncAddSharingParticipantOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    os_unfair_lock_s _lock;
    CKShareParticipant *_participant;
    NSMutableArray *_clonedParticipants;
    NSArray *_zoneIdentifiers;
    BOOL _requireExistingRelationship;
    HDSynchronousTaskGroup *_taskGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURL; // ivar: _invitationTokensByShareURL
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant; // ivar: _ownerParticipant
@property (retain) CKShareParticipant *participant;
@property BOOL requireExistingRelationship;
@property (readonly, copy, nonatomic) NSArray *shareURLs; // ivar: _shareURLs
@property (readonly) Class superclass;
@property (copy) NSArray *zoneIdentifiers;


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif