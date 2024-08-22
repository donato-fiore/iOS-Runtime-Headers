// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COCLUSTERROLEMONITOR_H
#define COCLUSTERROLEMONITOR_H

@class NSString, NSXPCConnection, NSArray;
@protocol COClusterRoleMonitorClientInterface, COClusterRoleMonitorConnectionProvider;

#import <Foundation/Foundation.h>


@interface COClusterRoleMonitor : NSObject <COClusterRoleMonitorClientInterface>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *cluster; // ivar: _cluster
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSXPCConnection *lastConnection; // ivar: _lastConnection
@property (copy, nonatomic) NSArray *memberObservers; // ivar: _memberObservers
@property (readonly, nonatomic) NSObject<COClusterRoleMonitorConnectionProvider> *provider; // ivar: _provider
@property (copy, nonatomic) NSArray *roleObservers; // ivar: _roleObservers
@property (copy, nonatomic) NSArray *snapshotObservers; // ivar: _snapshotObservers
@property (readonly) Class superclass;


-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)_serviceConnection;
-(id)addObserverForMember:(id)arg0 toDispatchQueue:(id)arg1 block:(id)arg2 ;
-(id)addObserverForRole:(id)arg0 toDispatchQueue:(id)arg1 block:(id)arg2 ;
-(id)addObserverForSnapshotsToDispatchQueue:(id)arg0 block:(id)arg1 ;
-(id)initWithCluster:(id)arg0 ;
-(id)initWithConnectionProvider:(id)arg0 cluster:(id)arg1 ;
-(void)_lostConnectionToService;
-(void)_registerMemberObserver:(id)arg0 ;
-(void)_registerRoleObserver:(id)arg0 ;
-(void)_registerSnapshotObserver;
-(void)_unregisterMemberObserver:(id)arg0 ;
-(void)_unregisterRoleObserver:(id)arg0 ;
-(void)_unregisterSnapshotObserver;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)membersWithRole:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;
-(void)removeObserverForMember:(id)arg0 ;
-(void)removeObserverForRole:(id)arg0 ;
-(void)removeObserverForSnapshots:(id)arg0 ;
-(void)roleOfMember:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;
-(void)snapshotOfCluster:(id)arg0 didChangeTo:(id)arg1 ;


@end


#endif