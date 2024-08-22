// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSENDPOINTSMANAGER_H
#define MEDIACONTROLSENDPOINTSMANAGER_H

@class NSMutableDictionary, NSArray, MPAVEndpointRoute, NSString, MPMediaControlsConfiguration, MPAVRoutingController;
@protocol MPAVRoutingControllerDelegate, MediaControlsHomeObserverDelegate, MPAVOutputDevicePlaybackDataSource, OS_dispatch_queue, MediaControlsEndpointsManagerDelegate;

#import <Foundation/Foundation.h>

#import "MediaControlsHomeObserver.h"

@interface MediaControlsEndpointsManager : NSObject <MPAVRoutingControllerDelegate, MediaControlsHomeObserverDelegate, MPAVOutputDevicePlaybackDataSource>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_endpointControllersMap;
    BOOL _didLoadHomeUIDsOnce;
    BOOL _isRequestingActiveRoute;
    BOOL _isUpdatingRoutes;
    NSArray *_pendingRoutesToUpdate;
}


@property (readonly, nonatomic) MPAVEndpointRoute *activeSystemRoute;
@property (readonly, copy, nonatomic) NSString *activeSystemRouteUID; // ivar: _activeSystemRouteUID
@property (readonly, copy, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaControlsEndpointsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger discoveryMode; // ivar: _discoveryMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MediaControlsHomeObserver *homeObserver; // ivar: _homeObserver
@property (readonly, nonatomic) BOOL isActiveSystemEndpointEqualToLocalEndpoint;
@property (readonly, copy, nonatomic) NSString *pendingActiveSystemRouteUID; // ivar: _pendingActiveSystemRouteUID
@property (readonly, nonatomic) MPAVEndpointRoute *resolvedActiveSystemRoute;
@property (readonly, copy, nonatomic) NSArray *routes; // ivar: _routes
@property (readonly, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (readonly) Class superclass;


-(BOOL)_homeHasRoute:(id)arg0 ;
-(NSInteger)_indexOfRouteWithUID:(id)arg0 ;
-(id)_createSectionedCollectionFromRoutes:(id)arg0 ;
-(id)_endpointControllerContainingOutputDevice:(id)arg0 endpointWrapper:(*id)arg1 ;
-(id)endpointControllerForRoute:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_activeSystemRouteDidChange:(id)arg0 ;
-(void)_updateActiveRouteWithReason:(id)arg0 ;
-(void)_updateWithRoutes:(id)arg0 ;
-(void)dealloc;
-(void)getOutputDeviceIsPlaying:(id)arg0 completion:(id)arg1 ;
-(void)homeObserverDidUpdateKnownUIDs:(id)arg0 ;
-(void)prewarm;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;


@end


#endif