// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSSTANDALONEENDPOINTCONTROLLER_H
#define MEDIACONTROLSSTANDALONEENDPOINTCONTROLLER_H

@class NSString, MPMRAVEndpointObserverWrapper, MPAVRoutingController;
@protocol MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate;


#import "MediaControlsEndpointController.h"

@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate>

 {
    BOOL _allowsAutomaticResponseLoading;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEndpointDiscovered) BOOL endpointDiscovered; // ivar: _endpointDiscovered
@property (retain, nonatomic) MPMRAVEndpointObserverWrapper *endpointObserver; // ivar: _endpointObserver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (readonly, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (readonly) Class superclass;


-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(id)_routeForEndpoint:(*void)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(id)initWithRouteUID:(id)arg0 ;
-(id)initWithRouteUID:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(id)proxyDelegate;
-(void)beginObserving;
-(void)dealloc;
-(void)endObserving;
-(void)endpointController:(id)arg0 willAttemptToConnectToRoute:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)setAllowsAutomaticResponseLoading:(BOOL)arg0 ;
-(void)setRoute:(id)arg0 ;
-(void)updateAllowsAutomaticResponseLoading;


@end


#endif