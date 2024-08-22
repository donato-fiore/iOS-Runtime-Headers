// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUAIRPLAYROUTEOBSERVERREGISTRY_H
#define PUAIRPLAYROUTEOBSERVERREGISTRY_H

@class AVOutputDeviceDiscoverySession, NSHashTable, NSString, NSDate;
@protocol PXSettingsKeyObserver, OS_dispatch_queue, PUAirPlayRouteObserverRegistryDelegate;

#import <Foundation/Foundation.h>


@interface PUAirPlayRouteObserverRegistry : NSObject <PXSettingsKeyObserver>



@property (nonatomic, getter=_isDiscoveryAllowed, setter=_setDiscoveryAllowed:) BOOL _discoveryAllowed; // ivar: __discoveryAllowed
@property (retain, nonatomic, setter=_setDiscoverySession:) AVOutputDeviceDiscoverySession *_discoverySession; // ivar: __discoverySession
@property (retain, nonatomic, setter=_setDiscoverySessionIsolationQueue:) NSObject<OS_dispatch_queue> *_discoverySessionIsolationQueue; // ivar: __discoverySessionIsolationQueue
@property (retain, nonatomic, setter=_setRouteObservers:) NSHashTable *_routeObservers; // ivar: __routeObservers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUAirPlayRouteObserverRegistryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastKnownRouteAvailability; // ivar: _lastKnownRouteAvailability
@property (retain, nonatomic) NSDate *lastKnownRouteAvailabilityDate; // ivar: _lastKnownRouteAvailabilityDate
@property (nonatomic, setter=_setRouteAvailability:) NSUInteger routeAvailability; // ivar: _routeAvailability
@property (readonly) Class superclass;


-(id)init;
-(void)_appEnteredBackground:(id)arg0 ;
-(void)_appEnteringForeground:(id)arg0 ;
-(void)_availableOutputDevicesDidChange:(id)arg0 ;
-(void)_updateAllObservers;
-(void)_updateDiscoverySession;
-(void)_updateObserver:(id)arg0 ;
-(void)addRouteObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeRouteObserver:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif