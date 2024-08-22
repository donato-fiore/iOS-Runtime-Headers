// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (readonly) Class superclass;


-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)_serviceConnection;
-(id)_synchronousRemoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)addObserverForMember:(id)arg0 toDispatchQueue:(id)arg1 block:(id)arg2 ;
-(id)initWithCluster:(id)arg0 ;
-(id)initWithConnectionProvider:(id)arg0 cluster:(id)arg1 ;
-(void)_lostConnectionToService;
-(void)_registerMemberObserver:(id)arg0 ;
-(void)_unregisterMemberObserver:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)removeObserverForMember:(id)arg0 ;
-(void)roleOfMember:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;


@end


#endif