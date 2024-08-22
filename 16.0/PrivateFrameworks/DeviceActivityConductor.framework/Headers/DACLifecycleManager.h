// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACLIFECYCLEMANAGER_H
#define DACLIFECYCLEMANAGER_H

@class NSString, NSXPCConnection, NSMutableSet;
@protocol DACLifecycleClientInterface, DACLifecycleManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DACActivityList.h"
#import "DACDeviceRole.h"

@interface DACLifecycleManager : NSObject <DACLifecycleClientInterface>



@property (retain, nonatomic) DACActivityList *activityList; // ivar: _activityList
@property (readonly, copy, nonatomic) NSString *cluster; // ivar: _cluster
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (weak, nonatomic) NSXPCConnection *currentConnection; // ivar: _currentConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<DACLifecycleManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableSet *registeredActivities; // ivar: _registeredActivities
@property (nonatomic) int resetNotifyToken; // ivar: _resetNotifyToken
@property (retain, nonatomic) DACDeviceRole *role; // ivar: _role
@property (nonatomic) BOOL shouldAttemptReconnect; // ivar: _shouldAttemptReconnect
@property (readonly) Class superclass;


-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)_serviceConnection;
-(id)initWithDelegate:(id)arg0 cluster:(id)arg1 queue:(id)arg2 ;
-(void)_conductordResetOnQueue;
-(void)_lostConnectionToService;
-(void)activityListChanged:(id)arg0 ;
-(void)dealloc;
-(void)enumerateLifecycleInfo:(id)arg0 ;
-(void)lifecycleStateOfActivity:(id)arg0 result:(id)arg1 ;
-(void)registerActivity:(id)arg0 ;
-(void)requestActivationOfActivity:(id)arg0 requester:(id)arg1 ;
-(void)requestDeactivationOfActivity:(id)arg0 requester:(id)arg1 ;
-(void)roleChanged:(id)arg0 ;
-(void)unregisterActivity:(id)arg0 ;


@end


#endif