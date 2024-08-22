// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDTRANSITROUTESTEP_H
#define GEOCOMPOSEDTRANSITROUTESTEP_H

@class NSArray, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitVehicleEntries;


#import "GEOComposedRouteStep.h"
#import "GEOPBTransitHall.h"
#import "GEOPBTransitStop.h"
#import "GEOComposedTransitRouteStep.h"
#import "GEOTransitScheduleInfo.h"
#import "GEOTransitStep.h"

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {
    unsigned int _startTime;
    unsigned int _duration;
    NSArray *_routeDetailsPrimaryArtwork;
    id<GEOTransitArtworkDataSource> *_routeDetailsSecondaryArtwork;
    NSArray *_steppingArtwork;
    NSArray *_transitIncidents;
    NSArray *_advisories;
}


@property (readonly, nonatomic) GEOPBTransitHall *destinationHall; // ivar: _destinationHall
@property (readonly, nonatomic) GEOPBTransitStop *destinationStop; // ivar: _destinationStop
@property (readonly, nonatomic) NSString *destinationStopIntermediateListName;
@property (readonly, nonatomic) NSUInteger destinationTransitEntityMuid;
@property (readonly, nonatomic) int maneuver; // ivar: _maneuver
@property (readonly, nonatomic) GEOComposedTransitRouteStep *nextTransitStep;
@property (readonly, nonatomic) GEOPBTransitHall *originHall; // ivar: _originHall
@property (readonly, nonatomic) GEOPBTransitStop *originStop; // ivar: _originStop
@property (readonly, nonatomic) NSString *originStopIntermediateListName;
@property (readonly, nonatomic) NSUInteger originTransitEntityMuid;
@property (readonly, nonatomic) GEOComposedTransitRouteStep *previousTransitStep;
@property (readonly, nonatomic) NSArray *regionAlerts;
@property (readonly, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property (readonly, nonatomic) GEOTransitStep *transitStep; // ivar: _transitStep
@property (readonly, nonatomic) NSObject<GEOTransitVehicleEntries> *vehicleEntries;


+(BOOL)supportsSecureCoding;
-(BOOL)hasDuration;
-(BOOL)isArrivalStep;
-(CGFloat)distance;
-(NSUInteger)_muidForStop:(id)arg0 ;
-(id)_intermediateListNameForStop:(id)arg0 ;
-(id)_largestEntityAtStop:(id)arg0 passingTest:(id)arg1 ;
-(id)advisories;
-(id)description;
-(id)endingStop;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 decoderData:(id)arg1 routeSegmentType:(NSInteger)arg2 step:(id)arg3 stepIndex:(NSUInteger)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange )arg6 ;
-(id)instructions;
-(id)nextAlightingStep;
-(id)nextBoardingStep;
-(id)nextStop;
-(id)previousAlightingStep;
-(id)previousBoardingStep;
-(id)previousStop;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(id)startingStop;
-(id)steppingArtwork;
-(id)transitIncidents;
-(struct ? )endGeoCoordinate;
-(struct ? )startGeoCoordinate;
-(unsigned int)duration;
-(unsigned int)startTime;
-(void)_populateArtworksWithDecoderData:(id)arg0 ;
-(void)_populateIncidentsWithDecoderData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif