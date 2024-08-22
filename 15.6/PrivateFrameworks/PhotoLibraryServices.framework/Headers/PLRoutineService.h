// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLROUTINESERVICE_H
#define PLROUTINESERVICE_H

@class NSSet, NSDateInterval, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PLLocationOfInterestCache.h"

@interface PLRoutineService : NSObject

@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (retain, nonatomic) NSDateInterval *fetchDateInterval; // ivar: _fetchDateInterval
@property (readonly, nonatomic) NSSet *homeLocations;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers; // ivar: _pendingPinningVisitIdentifiers
@property (readonly, nonatomic) BOOL routineIsAvailable; // ivar: _routineIsAvailable
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache; // ivar: _visitsCache
@property (readonly, nonatomic) NSSet *workLocations;


-(BOOL)hasLocationsOfInterestInformation;
-(BOOL)isRemoteLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(CGFloat)_disambiguationDistanceForDevicePlacementType:(NSUInteger)arg0 ;
-(NSUInteger)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg0 ;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg0 ;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg0 routineManager:(id)arg1 ;
-(id)initWithFetchDateInterval:(id)arg0 ;
-(id)lastLocationOfInterestVisit;
-(id)locationOfInterestAtLocation:(id)arg0 ;
-(id)locationOfInterestCloseToLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(id)locationsOfInterestOfType:(NSInteger)arg0 ;
-(void)_buildLocationsOfInterestCache;
-(void)_pinPendingVisits;
-(void)fetchLocationsOfInterestIfNeeded;
-(void)invalidateLocationsOfInterest;
-(void)postProcessLocationsOfInterest;


@end


#endif