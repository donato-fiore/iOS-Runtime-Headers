// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKQUICKROUTEMANAGER_H
#define _MKQUICKROUTEMANAGER_H

@class NSError, GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions;
@protocol MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding, MKQuickRouteConfigurableView;

#import <Foundation/Foundation.h>

#import "_MKRouteETAFetcher.h"
#import "_MKRouteETA.h"
#import "MKMapItem.h"

@interface _MKQuickRouteManager : NSObject {
    _MKRouteETAFetcher *_etaFetcher;
    CGFloat _maxDistanceToRequestETA;
    _MKRouteETA *_lastETA;
    NSUInteger _lastPreferredDirectionsType;
    NSError *_lastError;
    CGFloat _closeWalkTravelTime;
    CGFloat _maxWalkingDistance;
    BOOL _viewHasChangedSinceLastUpdate;
}


@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (weak, nonatomic) NSObject<MKQuickRouteManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fetchAllTransportTypes; // ivar: _fetchAllTransportTypes
@property (readonly, nonatomic) BOOL isOnlyDriving;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItem *originMapItem;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (weak, nonatomic) NSObject<MKQuickRouteTransportTypeFinding> *transportTypeFinder; // ivar: _transportTypeFinder
@property (readonly, nonatomic, getter=isUsingCurrentLocationForOrigin) BOOL usingCurrentLocationForOrigin;
@property (weak, nonatomic) NSObject<MKQuickRouteConfigurableView> *view; // ivar: _view


+(BOOL)isLikelyToReturnETAForLocation:(id)arg0 ;
+(CGFloat)_maxDistanceToRequestETA;
+(NSUInteger)counterpartForTransportType:(NSUInteger)arg0 ;
+(NSUInteger)directionsTypeForMapItem:(id)arg0 delegate:(id)arg1 mapType:(NSUInteger)arg2 ;
-(BOOL)_transportTypeShouldBeSmart;
-(BOOL)haveETAsForPreferredTransportType:(NSUInteger)arg0 ;
-(NSUInteger)directionsTypeForMapType:(NSUInteger)arg0 ;
-(NSUInteger)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D )arg0 destinationCoordinate:(struct CLLocationCoordinate2D )arg1 preferredDirectionsType:(NSUInteger)arg2 ;
-(NSUInteger)guessTransportTypeForDistance:(CGFloat)arg0 preferredDirectionsType:(NSUInteger)arg1 ;
-(id)bestETAForPreferredDirectionsType:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)routeETAForTransportType:(NSUInteger)arg0 ;
-(struct CLLocationCoordinate2D )destinationCoordinate;
-(struct CLLocationCoordinate2D )originCoordinate;
-(void)_performWithTransportType:(id)arg0 ;
-(void)_resetState;
-(void)requestNewETAForPreferredTransportType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)updateETA;


@end


#endif