// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROUTEHYPOTHESIZERUPDATER_H
#define GEOROUTEHYPOTHESIZERUPDATER_H

@class NSMutableArray, NSDate;
@protocol NSSecureCoding, GEORouteHypothesizerUpdaterDelegate;

#import <Foundation/Foundation.h>

#import "GEOComposedWaypoint.h"
#import "GEODirectionsRequest.h"
#import "GEOCommonOptions.h"
#import "GEOLocation.h"
#import "GEOMapRegion.h"
#import "GEODirectionsRequestFeedback.h"
#import "GEOComposedRoute.h"
#import "GEORouteAttributes.h"
#import "GEORouteMatch.h"

@interface GEORouteHypothesizerUpdater : NSObject <NSSecureCoding>

 {
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEODirectionsRequest *_currentRequest;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_originLocation;
    GEOLocation *_lastMatchedLocation;
    GEOMapRegion *_arrivalMapRegion;
    NSMutableArray *_rerouteEntries;
    BOOL _shouldThrottleReroutes;
    NSDate *_lastRerouteDate;
    NSUInteger _numThrottledReroutes;
    os_unfair_lock_s _requestLock;
}


@property (weak, nonatomic) NSObject<GEORouteHypothesizerUpdaterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback; // ivar: _feedback
@property (readonly, nonatomic) BOOL hasArrived; // ivar: _hasArrived
@property (nonatomic) BOOL isNavd; // ivar: _isNavd
@property (readonly, nonatomic) BOOL isTraveling; // ivar: _isTraveling
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (readonly, nonatomic) GEORouteMatch *routeMatch; // ivar: _routeMatch
@property (readonly, nonatomic) CGFloat score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(BOOL)_checkForArrival:(id)arg0 routeMatch:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 destination:(id)arg1 routeAttributes:(id)arg2 ;
-(id)routeMatchForLocation:(id)arg0 ;
-(int)_transportType;
-(void)_requestNewRouteFromLocation:(id)arg0 usualRouteData:(id)arg1 ;
-(void)_updateScoreForLocation:(id)arg0 ;
-(void)cancelCurrentRequest;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)startUpdatingFromLocation:(id)arg0 usualRouteData:(id)arg1 ;
-(void)updateForLocation:(id)arg0 ;


@end


#endif