// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLOCATIONOFINTERESTCACHE_H
#define PLLOCATIONOFINTERESTCACHE_H

@class NSMutableSet, NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PLLocationOfInterestVisit.h"

@interface PLLocationOfInterestCache : NSObject

@property (retain, nonatomic) NSMutableSet *allLocationsOfInterest; // ivar: _allLocationsOfInterest
@property (readonly) NSDate *earliestVisitStartDate; // ivar: _earliestVisitStartDate
@property (retain, nonatomic) NSMutableSet *homeLocations; // ivar: _homeLocations
@property (readonly) PLLocationOfInterestVisit *lastLocationOfInterestVisit; // ivar: _lastLocationOfInterestVisit
@property (readonly) NSUInteger numberOfLocationsOfInterest;
@property (readonly) NSUInteger numberOfLocationsOfInterestTransitions; // ivar: _numberOfLocationsOfInterestTransitions
@property (readonly) NSUInteger numberOfLocationsOfInterestVisits; // ivar: _numberOfLocationsOfInterestVisits
@property (retain, nonatomic) NSMutableDictionary *visitsCache; // ivar: _visitsCache
@property (retain, nonatomic) NSMutableSet *workLocations; // ivar: _workLocations


-(id)closestLocationOfInterestVisitToLocation:(id)arg0 withinDistance:(CGFloat)arg1 inDateInterval:(id)arg2 ;
-(id)init;
-(id)locationOfInterestAtLocation:(id)arg0 ;
-(id)locationsOfInterestOfType:(NSInteger)arg0 ;
-(id)locationsOfInterestVisitsAtLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(id)locationsOfInterestVisitsInDateInterval:(id)arg0 ;
-(void)addLocationOfInterest:(id)arg0 ;


@end


#endif