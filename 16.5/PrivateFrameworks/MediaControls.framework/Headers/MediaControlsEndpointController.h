// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSENDPOINTCONTROLLER_H
#define MEDIACONTROLSENDPOINTCONTROLLER_H

@class NSString, MPMediaControlsConfiguration, MPCPlayerPath, MPRequestResponseController, MPCPlayerResponse, MPAVEndpointRoute, NSArray;
@protocol MPRequestResponseControllerDelegate, _MCStateDumpPropertyListTransformable, MediaControlsEndpointControllerConnectionDelegate, MediaControlsEndpointControllerDelegate, MediaControlsEndpointObserverDelegate;

#import <Foundation/Foundation.h>


@interface MediaControlsEndpointController : NSObject <MPRequestResponseControllerDelegate, _MCStateDumpPropertyListTransformable>



@property (readonly, nonatomic, getter=isAirPlaying) BOOL airplaying;
@property (nonatomic) BOOL allowsAutomaticResponseLoading; // ivar: _allowsAutomaticResponseLoading
@property (nonatomic, getter=isAttemptingConnection) BOOL attemptingConnection; // ivar: _attemptingConnection
@property (nonatomic, getter=isAutomaticResponseLoading) BOOL automaticResponseLoading; // ivar: _automaticResponseLoading
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<MediaControlsEndpointControllerConnectionDelegate> *connectionDelegate; // ivar: _connectionDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaControlsEndpointControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceUnlocked; // ivar: _deviceUnlocked
@property (readonly, nonatomic) BOOL hasAvailableRoutes; // ivar: _hasAvailableRoutes
@property (nonatomic) BOOL hasEverReceivedResponse; // ivar: _hasEverReceivedResponse
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDeviceSystemRoute;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL onScreen; // ivar: _onScreen
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly, copy, nonatomic) NSString *predictedDeviceUID; // ivar: _predictedDeviceUID
@property (weak, nonatomic) NSObject<MediaControlsEndpointObserverDelegate> *proxyDelegate; // ivar: _proxyDelegate
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (readonly, nonatomic) MPRequestResponseController *requestController; // ivar: _requestController
@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (retain, nonatomic) MPAVEndpointRoute *route;
@property (readonly, copy, nonatomic) NSArray *routeNames; // ivar: _routeNames
@property (readonly, nonatomic, getter=isRoutingToWireless) BOOL routingToWireless;
@property (readonly, nonatomic) NSString *specifiedClient; // ivar: _specifiedClient
@property (readonly, nonatomic) NSString *specifiedPlayer; // ivar: _specifiedPlayer
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(void)_connectIfNeeded;
-(void)_connectionDidAttemptConnection:(id)arg0 ;
-(void)_connectionDidConnect:(id)arg0 ;
-(void)_connectionDidInvalidate:(id)arg0 ;
-(void)_connectionHasBecomeInvalid;
-(void)_createRequestController;
-(void)_getConnected:(*BOOL)arg0 connecting:(*BOOL)arg1 invalid:(*BOOL)arg2 ;
-(void)_getConnected:(*BOOL)arg0 invalid:(*BOOL)arg1 ;
-(void)_maybeReloadPlayerPathWithRoute:(id)arg0 ;
-(void)_reloadPlayerPathWithRoute:(id)arg0 ;
-(void)_routeDidChange:(id)arg0 ;
-(void)_updateState;
-(void)connectAllowingAuthenticationWithCompletion:(id)arg0 ;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)launchNowPlayingApp;
-(void)representsLongFormVideoContentWithCompletion:(id)arg0 ;
-(void)updateRoutePropertiesIfNeeded;


@end


#endif