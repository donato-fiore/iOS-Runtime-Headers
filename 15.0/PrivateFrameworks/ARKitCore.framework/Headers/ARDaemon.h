// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARDAEMON_H
#define ARDAEMON_H

@class NSTimer, NSString, NSArray;
@protocol ARMemoryPressureMonitorDelegate;

#import <Foundation/Foundation.h>

#import "ARControlListener.h"
#import "ARDaemonServiceListener.h"
#import "ARMemoryPressureMonitor.h"
#import "ARServer.h"

@interface ARDaemon : NSObject <ARMemoryPressureMonitorDelegate>

 {
    BOOL _anonymousListenerEnabled;
    ARControlListener *_controlListener;
    NSTimer *_heartbeatTimer;
    ARDaemonServiceListener *_listener;
    ARMemoryPressureMonitor *_memoryPressureMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *runningRemoteServices; // ivar: _runningRemoteServices
@property (readonly, nonatomic) ARServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)_fullDescription;
+(id)_runningDaemons;
+(id)anonymousListenerDaemon;
+(id)anonymousListenerDaemonWithLibraryImageName:(char *)arg0 ;
-(id)_fullDescription;
-(id)init;
-(id)initWithAnonymousListenerEnabled:(BOOL)arg0 ;
-(id)initWithAnonymousListenerEnabled:(BOOL)arg0 libraryImageName:(char *)arg1 ;
-(id)listenerEndPointForServiceNamed:(id)arg0 ;
-(void)dealloc;
-(void)memoryPressureMonitor:(id)arg0 didUpdateProcessMemoryPressureCondition:(NSInteger)arg1 ;
-(void)memoryPressureMonitor:(id)arg0 didUpdateSystemMemoryPressureCondition:(NSInteger)arg1 ;
-(void)printInfo;
-(void)shutdown;
-(void)startWithReplayURL:(id)arg0 deterministic:(BOOL)arg1 services:(id)arg2 replayDelegate:(id)arg3 ;
-(void)startup;


@end


#endif