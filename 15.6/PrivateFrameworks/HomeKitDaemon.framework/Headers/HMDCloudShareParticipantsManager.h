// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCLOUDSHAREPARTICIPANTSMANAGER_H
#define HMDCLOUDSHAREPARTICIPANTSMANAGER_H

@class HMFObject, HMBCloudZone, NSString, NSSet;
@protocol HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDCloudShareParticipantsManager : HMFObject <HMFLogging>



@property (readonly) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (weak) NSObject<HMDCloudShareParticipantsManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCloudShareParticipantsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly) NSSet *participatingUsers;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)isAcceptedParticipatingUser:(id)arg0 ;
-(id)_untrustedInvitationContextForUser:(id)arg0 shouldGrantWriteAccess:(BOOL)arg1 ;
-(id)fetchInvitationContextForUser:(id)arg0 shouldGrantWriteAccess:(BOOL)arg1 ;
-(id)fetchInvitationToUser:(id)arg0 shouldGrantWriteAccess:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg0 cloudZone:(id)arg1 home:(id)arg2 ;
-(id)logIdentifier;
-(void)_inviteUser:(id)arg0 usingDevice:(id)arg1 ;
-(void)clearParticipants;
-(void)configure;
-(void)handleHomeUserAddedNotification:(id)arg0 ;
-(void)handleHomeUserRemovedNotification:(id)arg0 ;
-(void)inviteUser:(id)arg0 usingDevice:(id)arg1 ;
-(void)updateShareParticipants;


@end


#endif