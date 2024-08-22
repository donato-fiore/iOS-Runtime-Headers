// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTEXTSYNCSERVICE_H
#define CONTEXTSYNCSERVICE_H

@class NSString, NSXPCListener, NSMutableDictionary, IDSService, NSUserDefaults;
@protocol NSXPCListenerDelegate, IDSServiceDelegate, ContextSyncManaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ContextSyncSubscriptions.h"

@interface ContextSyncService : NSObject <NSXPCListenerDelegate, IDSServiceDelegate, ContextSyncManaging>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *biomeQueue; // ivar: _biomeQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceUUID; // ivar: _deviceUUID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // ivar: _idsQueue
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSMutableDictionary *localDSLIdentifiers; // ivar: _localDSLIdentifiers
@property (retain, nonatomic) NSMutableDictionary *lockedUpdates; // ivar: _lockedUpdates
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL rebootNotificationDelivered; // ivar: _rebootNotificationDelivered
@property (retain, nonatomic) NSMutableDictionary *remoteDSLIdentifiers; // ivar: _remoteDSLIdentifiers
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (retain, nonatomic) NSUserDefaults *subscriptionDefaults; // ivar: _subscriptionDefaults
@property (retain, nonatomic) _ContextSyncSubscriptions *subscriptions; // ivar: _subscriptions
@property (readonly) Class superclass;


+(id)contextSyncManager;
+(id)stringForIDSDeviceType:(NSInteger)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)registerForUpdates:(id)arg0 withIdentifier:(id)arg1 shouldWake:(BOOL)arg2 forDeviceTypes:(NSInteger)arg3 withError:(*id)arg4 ;
-(BOOL)registerForUpdates:(id)arg0 withIdentifier:(id)arg1 shouldWake:(BOOL)arg2 forDevices:(id)arg3 withError:(*id)arg4 ;
-(BOOL)registerRemoteDSLSubscription:(id)arg0 withRemoteIdentifier:(id)arg1 asWakingCall:(BOOL)arg2 forDevices:(id)arg3 ;
-(BOOL)unregisterForUpdates:(id)arg0 withIdentifier:(id)arg1 forDeviceTypes:(NSInteger)arg2 withError:(*id)arg3 ;
-(BOOL)unregisterForUpdates:(id)arg0 withIdentifier:(id)arg1 forDevices:(id)arg2 withError:(*id)arg3 ;
-(BOOL)unregisterRemoteDSLSubscription:(id)arg0 withRemoteIdentifier:(id)arg1 forDevices:(id)arg2 ;
-(id)bmdslFromMessage:(id)arg0 forIdentifier:(id)arg1 ;
-(id)contextSyncLOIFromSemanticLocationEvent:(id)arg0 ;
-(id)devicesWithDeviceType:(NSInteger)arg0 ;
-(id)idsDeviceForDeviceUUID:(id)arg0 ;
-(id)init;
-(id)registerSinkWithIdentifier:(id)arg0 withDSL:(id)arg1 ;
-(void)connection:(id)arg0 devicesChanged:(id)arg1 ;
-(void)contextChanged:(id)arg0 forSubscriptionWithIdentifier:(id)arg1 ;
-(void)initializeSinksForRemoteDSLIdentifiers:(id)arg0 ;
-(void)loadSubscriptions;
-(void)logMetricsForIdentifier:(id)arg0 withLocalDSL:(id)arg1 forDevice:(id)arg2 uponReboot:(BOOL)arg3 ;
-(void)logMetricsForMessage:(id)arg0 andContext:(id)arg1 fromDevice:(id)arg2 ;
-(void)registerForUpdates:(id)arg0 withIdentifier:(id)arg1 shouldWake:(BOOL)arg2 forDeviceTypes:(NSInteger)arg3 withErrorHandler:(id)arg4 ;
-(void)registerForUpdates:(id)arg0 withIdentifier:(id)arg1 shouldWake:(BOOL)arg2 forDeviceTypes:(NSInteger)arg3 withHandler:(id)arg4 ;
-(void)registerForUpdates:(id)arg0 withIdentifier:(id)arg1 shouldWake:(BOOL)arg2 forDevices:(id)arg3 withErrorHandler:(id)arg4 ;
-(void)removeSubscriptionsForRemoteDevice:(id)arg0 ;
-(void)saveObject:(id)arg0 forDevice:(id)arg1 ;
-(void)saveRemoteSubscription:(id)arg0 forDevice:(id)arg1 ;
-(void)sendIDSMessageAsWaking:(BOOL)arg0 toDevices:(id)arg1 withContent:(id)arg2 ;
-(void)sendLocalSubscriptionToDevice:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)subscribeToBiomeWithRemoteDSL:(id)arg0 forRemoteIdentifier:(id)arg1 ;
-(void)unregisterForUpdates:(id)arg0 withIdentifier:(id)arg1 forDeviceTypes:(NSInteger)arg2 withErrorHandler:(id)arg3 ;
-(void)unregisterForUpdates:(id)arg0 withIdentifier:(id)arg1 forDeviceTypes:(NSInteger)arg2 withHandler:(id)arg3 ;
-(void)unregisterForUpdates:(id)arg0 withIdentifier:(id)arg1 forDevices:(id)arg2 withErrorHandler:(id)arg3 ;
-(void)updateSubscriptionsAfterUnlock;


@end


#endif