// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEHYPOTHESISMONITOR_H
#define GEOROUTEHYPOTHESISMONITOR_H

@class geo_isolater, NSMutableArray, NSString, NSData, NSDate;
@protocol GEOETAUpdaterDelegate, NSSecureCoding, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "GEOLocation.h"
#import "GEOETAUpdater.h"
#import "GEOComposedETARoute.h"
#import "GEOCommonOptions.h"
#import "GEOMapServiceTraits.h"
#import "GEORouteHypothesizerAnalyticsStore.h"
#import "GEONavdClientInfo.h"
#import "GEOComposedRoute.h"
#import "GEODirectionsRequest.h"
#import "GEORouteMatch.h"
#import "GEOMapRegion.h"
#import "GEOComposedWaypoint.h"
#import "GEODirectionsRequestFeedback.h"
#import "GEORouteHypothesis.h"
#import "GEORouteAttributes.h"

@interface GEORouteHypothesisMonitor : NSObject <GEOETAUpdaterDelegate, NSSecureCoding>

 {
    id *_handler;
    GEOLocation *_originLocation;
    int _transportType;
    GEOLocation *_lastLocation;
    NSObject<OS_dispatch_group> *_etaUpdaterDispatchGroup;
    GEOETAUpdater *_liveETAUpdater;
    GEOComposedETARoute *_liveETARoute;
    GEOCommonOptions *_commonOptions;
    GEOMapServiceTraits *_traits;
    GEORouteHypothesizerAnalyticsStore *_analyticsStore;
    GEONavdClientInfo *_clientInfo;
    GEOComposedRoute *_route;
    geo_isolater *_requestIsolater;
    GEODirectionsRequest *_currentRequest;
    BOOL _needReroute;
    NSMutableArray *_rerouteEntries;
    GEORouteMatch *_routeMatch;
    GEOLocation *_lastMatchedLocation;
    BOOL _hasArrived;
    BOOL _isTraveling;
    CGFloat _travelScore;
    GEOMapRegion *_arrivalMapRegion;
    NSString *_traceName;
    NSData *_sessionState;
}


@property (readonly, nonatomic) NSDate *arrivalDate; // ivar: _arrivalDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *destination; // ivar: _destination
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback; // ivar: _feedback
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEORouteHypothesis *hypothesis; // ivar: _hypothesis
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (readonly, nonatomic) NSString *routeName;
@property (readonly, nonatomic) GEOComposedWaypoint *source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDirections;
@property (readonly, nonatomic) BOOL supportsLiveTraffic;
@property (readonly, nonatomic) int transportType;


+(BOOL)supportsSecureCoding;
+(id)monitorWithSource:(id)arg0 toDestination:(id)arg1 traceName:(id)arg2 traits:(id)arg3 routeAttributes:(id)arg4 clientInfo:(id)arg5 ;
+(id)routeAttributesForTransportType:(int)arg0 withArrivalDate:(id)arg1 ;
+(id)serverFormattedStringFormatter;
+(id)userPreferencesProvider;
+(void)setServerFormattedStringFormatter:(id)arg0 ;
+(void)setUserPreferencesProvider:(id)arg0 ;
-(BOOL)_hasInitialRoute;
-(BOOL)_isNavigating;
-(BOOL)_isNavigatingToDestination;
-(BOOL)_shouldUpdateETAForRouteMatch:(id)arg0 ;
-(id)_newETAUpdater;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 traceName:(id)arg2 traits:(id)arg3 routeAttributes:(id)arg4 clientInfo:(id)arg5 ;
-(id)navDestination;
-(id)routeMatchForLocation:(id)arg0 ;
-(void)_commonInit;
-(void)_executeBlockAccessingCurrentRequest:(id)arg0 ;
-(void)_fetchETAWithRouteMatch:(id)arg0 ;
-(void)_recalculateETAWithRouteMatch:(id)arg0 ;
-(void)_receivedRouteResponse:(id)arg0 forLocation:(id)arg1 isReroute:(BOOL)arg2 ;
-(void)_requestNewRouteFromLocation:(id)arg0 usualRouteData:(id)arg1 ;
-(void)_routeRequestFailed:(id)arg0 ;
-(void)_showDebugAlert;
-(void)_updateLocation:(id)arg0 allowServer:(BOOL)arg1 ;
-(void)_updateRouteMatchETAAndTravelState;
-(void)_updateScoreForLocation:(id)arg0 ;
-(void)callHandlerIvar;
-(void)cancelCurrentRequest;
-(void)checkRouteForLocation:(id)arg0 ;
-(void)clientDisplayedUINotification:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)etaUpdater:(id)arg0 receivedETATrafficUpdateResponse:(id)arg1 etaRoute:(id)arg2 ;
-(void)etaUpdater:(id)arg0 receivedError:(id)arg1 ;
-(void)etaUpdater:(id)arg0 willSendETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg0 newRoute:(id)arg1 incidentsOnRoute:(id)arg2 incidentsOffRoute:(id)arg3 ;
-(void)etaUpdaterRequestCompleted:(id)arg0 ;
-(void)etaUpdaterUpdatedETA:(id)arg0 ;
-(void)recordETAUpdatesAfterEventStart;
-(void)stopMonitoring;
-(void)travelStateChanged;
-(void)updateLocation:(id)arg0 allowServer:(BOOL)arg1 hypothesisHandler:(id)arg2 ;


@end


#endif