// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSROUTINESERVICE_H
#define CLSROUTINESERVICE_H

@class NSDateInterval, NSMutableSet;

#import <Foundation/Foundation.h>

#import "CLSLocationOfInterestCache.h"

@interface CLSRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval; // ivar: _fetchDateInterval
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers; // ivar: _pendingPinningVisitIdentifiers
@property (nonatomic) BOOL routineIsAvailable; // ivar: _routineIsAvailable
@property (readonly) CLSRoutineServiceStatisticsStruct statistics; // ivar: _statistics
@property (readonly, nonatomic) CLSLocationOfInterestCache *visitsCache; // ivar: _visitsCache


-(BOOL)hasLocationsOfInterestInformation;
-(BOOL)isRemoteLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(CGFloat)_disambiguationDistanceForDevicePlacementType:(NSUInteger)arg0 ;
-(NSInteger)predominantTransportationModeForDateInterval:(id)arg0 confidence:(*CGFloat)arg1 ;
-(NSUInteger)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg0 ;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg0 ;
-(id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg0 routineManager:(id)arg1 ;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg0 routineManager:(id)arg1 ;
-(id)_placemarksFromLocationsOfInterest:(id)arg0 ;
-(id)initWithFetchDateInterval:(id)arg0 ;
-(id)locationOfInterestAtLocation:(id)arg0 ;
-(id)locationOfInterestCloseToLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(id)locationOfInterestVisitsInDateInterval:(id)arg0 ;
-(id)locationsOfInterestOfType:(NSInteger)arg0 ;
-(id)placemarksOfInterestOfType:(NSInteger)arg0 ;
-(void)_buildLocationsOfInterestCache;
-(void)_pinPendingVisits;
-(void)invalidateLocationsOfInterest;
-(void)postProcessLocationsOfInterest;


@end


#endif