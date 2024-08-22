// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARDAEMON_H
#define ARDAEMON_H

@class NSTimer, NSUUID, NSString, NSArray;
@protocol ARMemoryPressureMonitorDelegate;

#import <Foundation/Foundation.h>

#import "ARMemoryPressureMonitor.h"
#import "ARSystemTimeSnapshot.h"
#import "ARDaemonServiceListener.h"
#import "ARServer.h"

@interface ARDaemon : NSObject <ARMemoryPressureMonitorDelegate>

 {
    BOOL _anonymousListenerEnabled;
    NSTimer *_heartbeatTimer;
    ARMemoryPressureMonitor *_memoryPressureMonitor;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ARDaemonServiceListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSArray *runningRemoteServices; // ivar: _runningRemoteServices
@property (readonly, nonatomic) ARServer *server; // ivar: _server
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)_fullDescription;
+(id)_runningDaemons;
+(id)createAnonymousListenerDaemon;
+(id)createAnonymousListenerDaemonWithReplayURL:(id)arg0 deterministic:(BOOL)arg1 replayDelegate:(id)arg2 ;
+(id)localAnonymousListenerDaemon;
-(id)_fullDescription;
-(id)initWithSpawnTime:(id)arg0 watchdogMonitor:(id)arg1 ;
-(id)initWithSpawnTime:(id)arg0 watchdogMonitor:(id)arg1 anonymousListenerEnabled:(BOOL)arg2 graphScheduler:(id)arg3 replayDelegate:(id)arg4 ;
-(id)listenerEndPointForServiceNamed:(id)arg0 ;
-(void)dealloc;
-(void)memoryPressureMonitor:(id)arg0 didUpdateProcessMemoryPressureCondition:(NSInteger)arg1 ;
-(void)memoryPressureMonitor:(id)arg0 didUpdateSystemMemoryPressureCondition:(NSInteger)arg1 ;
-(void)printInfo;
-(void)shutdown;
-(void)startWithServices:(id)arg0 ;
-(void)startup;


@end


#endif