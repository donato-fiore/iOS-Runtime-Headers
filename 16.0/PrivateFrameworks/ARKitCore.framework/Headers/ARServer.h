// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARSERVER_H
#define ARSERVER_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary, ARAlgorithmConfiguration, NSUUID, NSString, NSArray, NSDictionary;
@protocol ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate, ARControlListenerDelegate, ARLoggingFullDescription, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ARControlListener.h"
#import "ARSystemTimeSnapshot.h"
#import "ARDaemonService.h"
#import "ARUserProfile.h"

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate, ARControlListenerDelegate, ARLoggingFullDescription>

 {
    NSMutableArray *_services;
    NSMutableSet *_servicesClasses;
    NSMutableDictionary *_servicesByPID;
    os_unfair_lock_s _servicesLock;
    ARAlgorithmConfiguration *_currentConfiguration;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_latestTaskErrorMap;
    NSUInteger _batchServicesCount;
    NSMutableArray *_batchedServices;
    NSMutableArray *_lastRunningDaemonServices;
    NSObject<OS_dispatch_semaphore> *_batchedServicesSemaphore;
    ARControlListener *_controlListener;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSObject<OS_dispatch_source> *_statusTimer;
    BOOL _inProcess;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isKeybagUnlocked; // ivar: _isKeybagUnlocked
@property (retain) ARDaemonService *serviceBeingRemoved; // ivar: _serviceBeingRemoved
@property (retain) NSArray *servicesBeingAdded; // ivar: _servicesBeingAdded
@property (readonly, nonatomic) NSDictionary *statusDictionary;
@property (readonly, nonatomic) NSString *statusString;
@property (readonly) Class superclass;
@property (retain, nonatomic) ARUserProfile *userProfile; // ivar: _userProfile


-(BOOL)_addService:(id)arg0 ;
-(BOOL)_addServices:(id)arg0 ;
-(BOOL)_updateWithServices:(id)arg0 dryRun:(BOOL)arg1 parameters:(*id)arg2 error:(*id)arg3 ;
-(BOOL)_updateWithServices:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitServices:(id)arg0 ;
-(BOOL)updateAlgorithmConfigurationWithService:(id)arg0 ;
-(BOOL)updateAlgorithmConfigurationWithServices:(id)arg0 ;
-(NSInteger)numberOfActiveConnectionsForService:(id)arg0 ;
-(id)_fullDescription;
-(id)_peerServicesOfService:(id)arg0 ;
-(id)daemonServiceForServiceNamed:(id)arg0 ;
-(id)initInProcess:(BOOL)arg0 spawnTime:(id)arg1 sessionUUID:(id)arg2 watchdogMonitor:(id)arg3 executionManager:(id)arg4 ;
-(id)listenerEndPointForServiceNamed:(id)arg0 ;
-(id)service:(id)arg0 peerServiceOfType:(Class)arg1 ;
-(void)_configureServiceForExecution:(id)arg0 ;
-(void)_logDaemonStatusWithType:(id)arg0 ;
-(void)_removeService:(id)arg0 ;
-(void)_setupStatusTimer;
-(void)_updateServicesByPID;
-(void)dealloc;
-(void)didDiscoverControl:(id)arg0 ;
-(void)didDiscoverService:(id)arg0 ;
-(void)invalidate;
-(void)resume;
-(void)serviceDidInterrupt:(id)arg0 ;
-(void)serviceDidInvalidate:(id)arg0 ;
-(void)setServices:(id)arg0 ;
-(void)suspend;


@end


#endif