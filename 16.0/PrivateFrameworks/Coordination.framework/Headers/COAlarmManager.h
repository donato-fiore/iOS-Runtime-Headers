// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COALARMMANAGER_H
#define COALARMMANAGER_H

@class HMAccessory, NSString, NSUUID, NSXPCConnection;
@protocol COAlarmManagerClientInterface, COObservable, COAlarmManagerConnectionProvider;

#import <Foundation/Foundation.h>

#import "COObserverSet.h"

@interface COAlarmManager : NSObject <COAlarmManagerClientInterface, COObservable>

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
@property (readonly, nonatomic) NSObject<COAlarmManagerConnectionProvider> *provider; // ivar: _provider
@property (readonly) Class superclass;


-(BOOL)_canDispatchForAssociatedAccessory;
-(id)_alarmsForAccessoryUniqueIdentifier:(id)arg0 categoryType:(id)arg1 includingSleepAlarm:(BOOL)arg2 ;
-(id)_categoryTypeForAlarm:(id)arg0 ;
-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)addAlarm:(id)arg0 ;
-(id)addObserverForName:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)alarms;
-(id)alarmsForAccessory:(id)arg0 ;
-(id)alarmsIncludingSleepAlarm:(BOOL)arg0 ;
-(id)dismissAlarmWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initForAccessory:(id)arg0 withConnectionProvider:(id)arg1 ;
-(id)initWithConnectionProvider:(id)arg0 ;
-(id)removeAlarm:(id)arg0 ;
-(id)snoozeAlarmWithIdentifier:(id)arg0 ;
-(id)updateAlarm:(id)arg0 ;
-(void)_handleNotification:(id)arg0 ;
-(void)_lostConnectionToService;
-(void)_registerObserverWithName:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)postNotificationName:(id)arg0 withUserInfo:(id)arg1 callback:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif