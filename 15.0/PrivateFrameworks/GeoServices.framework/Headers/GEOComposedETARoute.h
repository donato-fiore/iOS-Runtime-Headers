// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPOSEDETAROUTE_H
#define GEOCOMPOSEDETAROUTE_H

@class NSArray, NSUUID;
@protocol _GEORouteHypothesisMonitorETAProvider, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOETARoute.h"
#import "GEOETATrafficUpdateWaypointRoute.h"

@interface GEOComposedETARoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding>

 {
    NSArray *_legs;
    GEOETARoute *_geoETARoute;
    GEOETATrafficUpdateWaypointRoute *_geoETAWaypointRoute;
}


@property (readonly, nonatomic) CGFloat _hypothesis_travelDuration;
@property (readonly, nonatomic) CGFloat _hypothesis_travelDurationAggressiveEstimate;
@property (readonly, nonatomic) CGFloat _hypothesis_travelDurationConservativeEstimate;
@property (readonly, nonatomic) NSUUID *etauResponseID; // ivar: _etauResponseID
@property (readonly, nonatomic) BOOL hasValidTravelDurations; // ivar: _hasValidTravelDurations
@property (readonly, nonatomic) CGFloat historicTravelDuration; // ivar: _historicTravelDuration
@property (readonly, nonatomic) CGFloat length; // ivar: _length
@property (readonly, nonatomic) CGFloat travelDuration; // ivar: _travelDuration
@property (readonly, nonatomic) CGFloat travelDurationAggressiveEstimate; // ivar: _travelDurationAggressiveEstimate
@property (readonly, nonatomic) CGFloat travelDurationConservativeEstimate; // ivar: _travelDurationConservativeEstimate
@property (readonly, nonatomic) NSUUID *uniqueRouteID; // ivar: _uniqueRouteID


+(BOOL)supportsSecureCoding;
-(BOOL)_prepareForOldRequest:(id)arg0 route:(id)arg1 startRouteCoordinate:(struct ? )arg2 ;
-(BOOL)_updateForOldResponse:(id)arg0 route:(id)arg1 ;
-(BOOL)prepareForRequest:(id)arg0 route:(id)arg1 startRouteCoordinate:(struct ? )arg2 ;
-(BOOL)updateForResponse:(id)arg0 route:(id)arg1 ;
-(CGFloat)_hypothesis_travelDurationFromStep:(id)arg0 stepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)_travelDurationFromStepID:(NSUInteger)arg0 toStepID:(NSUInteger)arg1 currentStepRemainingDistance:(CGFloat)arg2 ;
-(CGFloat)travelDurationToEndOfLegFromStepID:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)travelDurationToEndOfRouteFromStepID:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(id)description;
-(id)evChargingStationInfos;
-(id)evStepInfos;
-(id)geoETARoute;
-(id)geoETAWaypointRoute;
-(id)geoTrafficBannerText;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRouteForTesting:(id)arg0 ;
-(id)navigabilityInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif