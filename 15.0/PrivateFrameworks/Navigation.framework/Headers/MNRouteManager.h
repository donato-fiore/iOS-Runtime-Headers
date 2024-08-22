// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNROUTEMANAGER_H
#define MNROUTEMANAGER_H

@class NSArray, GEORoutePreloader, NSString, GEOApplicationAuditToken, GEOCommonOptions, GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEOComposedWaypoint, GEORouteAttributes;
@protocol MNLocationManagerObserver;

#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"

@interface MNRouteManager : NSObject <MNLocationManagerObserver>

 {
    NSArray *_allRoutes;
    MNActiveRouteInfo *_originalRouteInfo;
    GEORoutePreloader *_preloader;
    NSString *_tileLoaderClientIdentifier;
    GEOApplicationAuditToken *_auditToken;
}


@property (readonly, nonatomic) NSArray *allRoutes;
@property (readonly, nonatomic) NSArray *alternateRoutes; // ivar: _alternateRoutes
@property (readonly, nonatomic) GEOCommonOptions *commonOptions; // ivar: _commonOptions
@property (readonly, nonatomic) NSArray *contingencyRouteSegments; // ivar: _contingencyRouteSegments
@property (readonly, nonatomic) GEOComposedRoute *currentRoute;
@property (readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo; // ivar: _currentRouteInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest; // ivar: _directionsRequest
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse; // ivar: _directionsResponse
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOComposedWaypoint *originalDestination; // ivar: _originalDestination
@property (readonly, nonatomic) GEOComposedRoute *originalRoute; // ivar: _originalRoute
@property (readonly, nonatomic) NSArray *previewRoutes; // ivar: _previewRoutes
@property (readonly, nonatomic) NSString *requestingAppIdentifier; // ivar: _requestingAppIdentifier
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (nonatomic) NSUInteger selectedRouteIndex; // ivar: _selectedRouteIndex
@property (readonly) Class superclass;


-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(id)arg0 ;
-(void)_clearPreloader;
-(void)_updatePreloaderForRoute:(id)arg0 ;
-(void)clearCurrentRoute;
-(void)close;
-(void)dealloc;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)open;
-(void)updateForLocation:(id)arg0 ;
-(void)updateForReroute:(id)arg0 rerouteReason:(NSUInteger)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)updateWithAlternateRoutes:(id)arg0 ;
-(void)updateWithInitialDirectionsRequest:(id)arg0 directionsResponse:(id)arg1 waypoints:(id)arg2 ;
-(void)updateWithPreviewRoutes:(id)arg0 selectedRouteIndex:(NSUInteger)arg1 ;
-(void)updateWithStartNavigationDetails:(id)arg0 ;


@end


#endif