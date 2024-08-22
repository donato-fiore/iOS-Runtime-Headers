// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDTRANSITWALKINGROUTESTEP_H
#define GEOCOMPOSEDTRANSITWALKINGROUTESTEP_H

@class NSArray;
@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;


#import "GEOComposedWalkingRouteStep.h"
#import "GEOTransitStep.h"

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {
    GEOTransitStep *_transitStep;
    ? _startCoordinate;
    ? _endCoordinate;
    NSArray *_steppingArtwork;
    NSArray *_routeDetailsPrimaryArtwork;
    id<GEOTransitArtworkDataSource> *_routeDetailsSecondaryArtwork;
}


@property (readonly, nonatomic) NSObject<GEOTransitRoutingIncidentMessage> *routeDetailsIncidentMessage; // ivar: _routeDetailsIncidentMessage
@property (readonly, nonatomic) NSObject<GEOTransitRoutingIncidentMessage> *steppingIncidentMessage; // ivar: _steppingIncidentMessage


+(BOOL)supportsSecureCoding;
-(BOOL)isArrivalStep;
-(CGFloat)distance;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 decoderData:(id)arg1 transitStep:(id)arg2 stepIndex:(NSUInteger)arg3 geoStep:(id)arg4 pointRange:(struct _NSRange )arg5 maneuverPointRange:(struct _NSRange )arg6 ;
-(id)initWithComposedRoute:(id)arg0 decoderData:(id)arg1 transitStep:(id)arg2 stepIndex:(NSUInteger)arg3 startCoordinate:(struct ? )arg4 endCoordinate:(struct ? )arg5 pointRange:(struct _NSRange )arg6 ;
-(id)instructions;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(id)steppingArtwork;
-(id)transitStep;
-(struct ? )endGeoCoordinate;
-(struct ? )startGeoCoordinate;
-(void)_commonInitWithDecoderData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif