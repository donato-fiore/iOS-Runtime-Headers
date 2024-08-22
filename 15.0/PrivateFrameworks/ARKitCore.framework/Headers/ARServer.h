// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSERVER_H
#define ARSERVER_H

@class NSMutableArray, NSMutableSet, ARAlgorithmConfiguration, NSMutableDictionary, NSString, NSArray, NSDictionary;
@protocol ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate, ARControlListenerDelegate, ARLoggingFullDescription, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ARDaemonService.h"
#import "ARUserProfile.h"

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate, ARControlListenerDelegate, ARLoggingFullDescription>

 {
    NSMutableArray *_services;
    NSMutableSet *_servicesClasses;
    os_unfair_lock_s _servicesLock;
    ARAlgorithmConfiguration *_currentConfiguration;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_latestTaskErrorMap;
    NSUInteger _batchServicesCount;
    NSMutableArray *_batchedServices;
    NSObject<OS_dispatch_semaphore> *_batchedServicesSemaphore;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSObject<OS_dispatch_source> *_statusTimer;
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
-(BOOL)_updateWithServices:(id)arg0 errorString:(*id)arg1 ;
-(BOOL)commitServices:(id)arg0 ;
-(BOOL)updateAlgorithmConfigurationWithService:(id)arg0 ;
-(BOOL)updateAlgorithmConfigurationWithServices:(id)arg0 ;
-(NSInteger)numberOfActiveConnectionsForService:(id)arg0 ;
-(id)_fullDescription;
-(id)_initInProcess:(BOOL)arg0 libraryImageName:(char *)arg1 ;
-(id)_peerServicesOfService:(id)arg0 ;
-(id)init;
-(id)initInProcessWithLibraryImageName:(char *)arg0 ;
-(id)service:(id)arg0 peerServiceOfType:(Class)arg1 ;
-(void)_logDaemonStatusWithType:(id)arg0 ;
-(void)_removeService:(id)arg0 ;
-(void)_setupStatusTimer;
-(void)dealloc;
-(void)didDiscoverControl:(id)arg0 ;
-(void)didDiscoverService:(id)arg0 ;
-(void)invalidate;
-(void)resume;
-(void)serviceDidInterrupt:(id)arg0 ;
-(void)serviceDidInvalidate:(id)arg0 ;
-(void)setAllTasksPerformanceStatsToActive:(BOOL)arg0 ;
-(void)suspend;


@end


#endif