// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUENDPOINTCONTROLLER_H
#define MRUENDPOINTCONTROLLER_H

@class NSString, NSHashTable, MPCPlayerResponse, MPAVEndpointRoute;
@protocol MediaControlsEndpointControllerDelegate;

#import <Foundation/Foundation.h>

#import "MediaControlsEndpointController.h"

@interface MRUEndpointController : NSObject <MediaControlsEndpointControllerDelegate>



@property (readonly, nonatomic, getter=isAirPlaying) BOOL airplaying;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MediaControlsEndpointController *endpointController; // ivar: _endpointController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDeviceSystemRoute;
@property (readonly, nonatomic) BOOL isEndpointDiscovered;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) MPAVEndpointRoute *route;
@property (readonly, copy, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL updatesActiveEndpointInPlace;


+(id)localEndpointController;
+(id)proactiveEndpointController;
-(BOOL)containsOutputDeviceWithRouteUID:(id)arg0 ;
-(id)initWithEndpointController:(id)arg0 ;
-(id)initWithRouteUID:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)connectAllowingAuthenticationWithCompletion:(id)arg0 ;
-(void)endpointController:(id)arg0 didLoadNewResponse:(id)arg1 ;
-(void)endpointControllerDidChangeState:(id)arg0 ;
-(void)endpointControllerDidUpdateRoutingAvailability:(id)arg0 ;
-(void)endpointControllerRouteDidUpdate:(id)arg0 ;
-(void)launchNowPlayingApp;
-(void)notifyObserversRouteDidUpdate;
-(void)removeObserver:(id)arg0 ;


@end


#endif