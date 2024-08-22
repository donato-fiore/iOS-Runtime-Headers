// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKENGINEENVIRONMENTCONSUMER_H
#define MPCPLAYBACKENGINEENVIRONMENTCONSUMER_H

@class NSString;
@protocol MPCPlaybackEngineEventObserving, ICEnvironmentMonitorObserver, MPCPlaybackEngineEventConsumer, MPCPlaybackEngineEventStreamSubscription;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCPlaybackEngineEnvironmentConsumer : NSObject <MPCPlaybackEngineEventObserving, ICEnvironmentMonitorObserver, MPCPlaybackEngineEventConsumer>

 {
    os_unfair_lock_s _lock;
    NSInteger _reachability;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_addEventForAccountIdentifier:(id)arg0 cursor:(id)arg1 event:(id)arg2 nudge:(int)arg3 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillTerminate:(id)arg0 ;
-(void)_devicePrivateListeningDidChange:(id)arg0 ;
-(void)_snapshotAccount:(id)arg0 eventType:(id)arg1 atTime:(struct ? )arg2 ;
-(void)_snapshotAccount:(id)arg0 eventType:(id)arg1 event:(id)arg2 nudge:(int)arg3 ;
-(void)_snapshotDeviceAtTime:(struct ? )arg0 ;
-(void)_snapshotDeviceWithEvent:(id)arg0 nudge:(int)arg1 ;
-(void)_snapshotNetworkReachabilityAtTime:(struct ? )arg0 force:(BOOL)arg1 ;
-(void)_snapshotNetworkReachabilityWithEvent:(id)arg0 nudge:(int)arg1 ;
-(void)_snapshotNetworkTypeAtTime:(struct ? )arg0 ;
-(void)_snapshotNetworkTypeWithEvent:(id)arg0 nudge:(int)arg1 ;
-(void)engine:(id)arg0 didChangeAccounts:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif