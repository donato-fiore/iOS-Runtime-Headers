// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLXPCSERVICE_H
#define PLXPCSERVICE_H

@class PLService, NSArray, NSDictionary, PLNSNotificationOperatorComposition, NSMutableDictionary, PLTimer, PLSemaphore;
@protocol OS_xpc_object;



@interface PLXPCService : PLService

@property (retain) NSArray *clientIDs; // ivar: _clientIDs
@property (retain) NSDictionary *clientNames; // ivar: _clientNames
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // ivar: _dailyTaskNotification
@property (retain) NSDictionary *permissionCache; // ivar: _permissionCache
@property (retain) NSMutableDictionary *registeredListeners; // ivar: _registeredListeners
@property (retain) NSMutableDictionary *registeredResponders; // ivar: _registeredResponders
@property (retain) PLNSNotificationOperatorComposition *registrationNotification; // ivar: _registrationNotification
@property (retain) PLTimer *resetPermissionsForClientsTimer; // ivar: _resetPermissionsForClientsTimer
@property unsigned int responderWaitTime; // ivar: _responderWaitTime
@property (retain) PLSemaphore *satelliteProcessSemaphore; // ivar: _satelliteProcessSemaphore
@property (retain) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


+(id)defaults;
+(id)entryAggregateDefinitionXPCEvent;
+(id)entryAggregateDefinitions;
+(id)entryEventIntervalDefinitionResponderEvent;
+(id)entryEventIntervalDefinitions;
+(id)entryEventPointDefinitionClientLogging;
+(id)entryEventPointDefinitionClientLoggingDrops;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(id)registeredOperatorFromDictionary:(id)arg0 forMessage:(id)arg1 ;
-(short)permissionForClientID:(short)arg0 withKey:(id)arg1 withType:(id)arg2 withProcessName:(id)arg3 ;
-(void)dailyTasks;
-(void)handlePeer:(id)arg0 forEvent:(id)arg1 ;
-(void)handlePeerListenerEvent:(id)arg0 withMessage:(id)arg1 withClientID:(short)arg2 withProcessName:(id)arg3 withKey:(id)arg4 withPayload:(id)arg5 ;
-(void)handlePeerResponderEvent:(id)arg0 withMessage:(id)arg1 withClientID:(short)arg2 withProcessName:(id)arg3 withKey:(id)arg4 withPayload:(id)arg5 ;
-(void)handlePeerShouldLogEvent:(id)arg0 withMessage:(id)arg1 withClientID:(short)arg2 withProcessName:(id)arg3 withKey:(id)arg4 ;
-(void)handleSingleMessage:(id)arg0 fromPeer:(id)arg1 forEvent:(id)arg2 ;
-(void)initOperatorDependancies;
-(void)initSatelliteProcessSemaphore;
-(void)logMessage:(id)arg0 withPayload:(id)arg1 ;
-(void)resetPermissionsForClients;
-(void)respondToEvent:(id)arg0 withResponse:(id)arg1 ;
-(void)setSatelliteProcessExit;
-(void)setSatelliteProcessExitWithTime:(CGFloat)arg0 ;
-(void)stopPowerlogHelperd:(id)arg0 ;


@end


#endif