// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COROLESERVICE_H
#define COROLESERVICE_H

@class NSString, NSDictionary;
@protocol CORoleAddOnDelegate, COClusterRoleMonitorServiceInterface;


#import "COService.h"

@interface CORoleService : COService <CORoleAddOnDelegate, COClusterRoleMonitorServiceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *memberObservers; // ivar: _memberObservers
@property (retain, nonatomic) NSDictionary *roleObservers; // ivar: _roleObservers
@property (retain, nonatomic) NSDictionary *snapshotObservers; // ivar: _snapshotObservers
@property (retain, nonatomic) NSDictionary *snapshotState; // ivar: _snapshotState
@property (readonly) Class superclass;


+(id)serviceWithDelegate:(id)arg0 ;
-(BOOL)_canRequestCreationOfCluster:(id)arg0 ;
-(id)_membersWithRole:(id)arg0 inCluster:(id)arg1 ;
-(id)_membersWithRole:(id)arg0 inSnapshots:(id)arg1 ;
-(id)_remoteInterfaceForClient:(id)arg0 withErrorHandler:(id)arg1 ;
-(id)_roleOfMember:(id)arg0 inCluster:(id)arg1 ;
-(id)_roleOfMember:(id)arg0 inSnapshots:(id)arg1 ;
-(id)_snapshotsForCluster:(id)arg0 ;
-(id)initWithListenerProvider:(id)arg0 addOnProvider:(id)arg1 delegate:(id)arg2 ;
-(void)_addMemberObserverForClient:(id)arg0 ofRole:(id)arg1 inCluster:(id)arg2 ;
-(void)_addOnAdded:(id)arg0 ;
-(void)_addOnRemoved:(id)arg0 ;
-(void)_addRoleObserverForClient:(id)arg0 ofMember:(id)arg1 inCluster:(id)arg2 ;
-(void)_addSnapshotObserverForClient:(id)arg0 inCluster:(id)arg1 ;
-(void)_clientLost:(id)arg0 ;
-(void)_configureServiceInterfacesOnConnection:(id)arg0 ;
-(void)_identifyAndNotifyMemberChangesFromSnapshot:(id)arg0 inCluster:(id)arg1 ;
-(void)_identifyAndNotifyRoleChangesFromSnapshot:(id)arg0 inCluster:(id)arg1 ;
-(void)_notifyMemberObserver:(id)arg0 membersWithRole:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3 ;
-(void)_notifyMemberObserversMembersWithRole:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;
-(void)_notifyRoleObserver:(id)arg0 roleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3 ;
-(void)_notifyRoleObserversRoleOfMember:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;
-(void)_notifySnapshotObserver:(id)arg0 snapshotOfCluster:(id)arg1 didChangeTo:(id)arg2 ;
-(void)_notifySnapshotObserversSnapshotOfCluster:(id)arg0 didChangeTo:(id)arg1 ;
-(void)_removeMemberObserverForClient:(id)arg0 ofRole:(id)arg1 inCluster:(id)arg2 ;
-(void)_removeRoleObserverForClient:(id)arg0 ofMember:(id)arg1 inCluster:(id)arg2 ;
-(void)_removeSnapshotObserverForClient:(id)arg0 inCluster:(id)arg1 ;
-(void)_updateSnapshots:(id)arg0 inCluster:(id)arg1 ;
-(void)addOn:(id)arg0 stateChanged:(id)arg1 ;
-(void)registerForMemberChangesWithRole:(id)arg0 inCluster:(id)arg1 ;
-(void)registerForRoleChangesOfMember:(id)arg0 inCluster:(id)arg1 ;
-(void)registerForSnapshotChangesInCluster:(id)arg0 ;
-(void)unregisterForMemberChangesWithRole:(id)arg0 inCluster:(id)arg1 ;
-(void)unregisterForRoleChangesOfMember:(id)arg0 inCluster:(id)arg1 ;
-(void)unregisterForSnapshotChangesInCluster:(id)arg0 ;


@end


#endif