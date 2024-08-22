// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COTIMERMANAGER_H
#define COTIMERMANAGER_H

@class HMAccessory, NSString, NSUUID, NSXPCConnection;
@protocol COTimerManagerClientInterface, COObservable, COTimerManagerConnectionProvider;

#import <Foundation/Foundation.h>

#import "COObserverSet.h"

@interface COTimerManager : NSObject <COTimerManagerClientInterface, COObservable>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy, nonatomic) NSString *cluster; // ivar: _cluster
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *instanceID; // ivar: _instanceID
@property (weak, nonatomic) NSXPCConnection *lastConnection; // ivar: _lastConnection
@property (readonly, nonatomic) COObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<COTimerManagerConnectionProvider> *provider; // ivar: _provider
@property (readonly) Class superclass;


-(BOOL)_canDispatchForAssociatedAccessory;
-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)_timersForAccessoryUniqueIdentifier:(id)arg0 ;
-(id)addObserverForName:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)addTimer:(id)arg0 ;
-(id)dismissTimerWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initForAccessory:(id)arg0 withConnectionProvider:(id)arg1 ;
-(id)initWithConnectionProvider:(id)arg0 ;
-(id)removeTimer:(id)arg0 ;
-(id)timers;
-(id)timersForAccessory:(id)arg0 ;
-(id)updateTimer:(id)arg0 ;
-(void)_handleNotification:(id)arg0 ;
-(void)_lostConnectionToService;
-(void)_registerObserverWithName:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)postNotificationName:(id)arg0 withUserInfo:(id)arg1 callback:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif