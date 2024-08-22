// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSACTIVEENDPOINTCONTROLLER_H
#define MEDIACONTROLSACTIVEENDPOINTCONTROLLER_H

@class NSString, MPCFuture, MSVPersistentTimer;
@protocol MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate;


#import "MediaControlsEndpointController.h"

@interface MediaControlsActiveEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate>



@property (retain, nonatomic) NSString *activeEndpointUID; // ivar: _activeEndpointUID
@property (readonly, nonatomic) NSString *activeRouteUID; // ivar: _activeRouteUID
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPCFuture *deferredPlayerPathFuture; // ivar: _deferredPlayerPathFuture
@property (retain, nonatomic) id *deferredPlayerPathInvalidationToken; // ivar: _deferredPlayerPathInvalidationToken
@property (retain, nonatomic) MSVPersistentTimer *deferredPlayerPathTimer; // ivar: _deferredPlayerPathTimer
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDeferred; // ivar: _isDeferred
@property (nonatomic) NSInteger routeType; // ivar: _routeType
@property (readonly) Class superclass;


+(CGFloat)mediaRecentlyPlayedTimeout;
-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(id)_routeForEndpoint:(struct __MRAVEndpointRef *)arg0 ;
-(id)initWithActiveRouteType:(NSInteger)arg0 ;
-(void)_activeSystemRouteDidChangeWithChangeType:(NSInteger)arg0 ;
-(void)_fetchActiveSystemRoute:(id)arg0 ;
-(void)_maybeRestoreDeferredPlayerPath;
-(void)_maybeUpdateActiveSystemRoute;
-(void)_resetDeferredPlayerPath;
-(void)_restoreDeferredPlayerPath;
-(void)_updateActiveSystemRoute;
-(void)activeSystemRouteDidChangeNotification:(id)arg0 ;
-(void)endpointController:(id)arg0 willAttemptToConnectToRoute:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)setDeviceUnlocked:(BOOL)arg0 ;
-(void)setOnScreen:(BOOL)arg0 ;


@end


#endif