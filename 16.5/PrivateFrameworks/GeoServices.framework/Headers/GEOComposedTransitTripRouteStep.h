// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDTRANSITTRIPROUTESTEP_H
#define GEOCOMPOSEDTRANSITTRIPROUTESTEP_H

@class NSDate, NSTimeZone, NSArray;
@protocol GEOTransitLine, GEOTransitSystem;


#import "GEOComposedTransitRouteStep.h"
#import "GEOTransitBoardingInfo.h"
#import "GEOTransitVehicleInfo.h"
#import "GEOComposedTransitTripRouteSegment.h"

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {
    BOOL _canPreloadTiles;
}


@property (readonly, nonatomic) NSDate *arrivalTime;
@property (readonly, nonatomic) NSDate *arrivalTimeAtOrigin;
@property (readonly, nonatomic) NSTimeZone *arrivalTimeZone;
@property (readonly, nonatomic) NSArray *arrivalTimes; // ivar: _arrivalTimes
@property (readonly, nonatomic) NSArray *arrivalTimesAtOrigin; // ivar: _arrivalTimesAtOrigin
@property (readonly, nonatomic) GEOTransitBoardingInfo *boardingInfo;
@property (readonly, nonatomic) BOOL canPreloadTilesForThisStep;
@property (readonly, nonatomic) NSDate *departureTime;
@property (readonly, nonatomic) CGFloat departureTimeIntervalMax; // ivar: _departureTimeIntervalMax
@property (readonly, nonatomic) CGFloat departureTimeIntervalMin; // ivar: _departureTimeIntervalMin
@property (readonly, nonatomic) NSTimeZone *departureTimeZone;
@property (readonly, nonatomic) NSArray *departureTimes; // ivar: _departureTimes
@property (readonly, nonatomic) BOOL isBus; // ivar: _isBus
@property (readonly, nonatomic) BOOL isRail; // ivar: _isRail
@property (readonly, nonatomic) NSArray *routeLineArtwork; // ivar: _routeLineArtwork
@property (readonly, nonatomic) NSObject<GEOTransitLine> *transitLine; // ivar: _transitLine
@property (readonly, nonatomic) NSObject<GEOTransitSystem> *transitSystem; // ivar: _transitSystem
@property (readonly, nonatomic) GEOTransitVehicleInfo *transitVehicle; // ivar: _transitVehicle
@property (readonly, nonatomic) GEOComposedTransitTripRouteSegment *tripSegment;


+(BOOL)supportsSecureCoding;
-(BOOL)hasDuration;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 decoderData:(id)arg1 step:(id)arg2 stepIndex:(NSUInteger)arg3 duration:(unsigned int)arg4 pointRange:(struct _NSRange )arg5 ;
-(id)initWithComposedRoute:(id)arg0 routeSegmentType:(NSInteger)arg1 stepIndex:(NSUInteger)arg2 pointRange:(struct _NSRange )arg3 line:(id)arg4 maneuverType:(int)arg5 significance:(int)arg6 ;
-(unsigned int)duration;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif