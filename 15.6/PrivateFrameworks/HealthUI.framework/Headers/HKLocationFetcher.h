// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKLOCATIONFETCHER_H
#define HKLOCATIONFETCHER_H

@class HKHealthStore, HKAnchoredObjectQuery, _HKWorkoutRouteStore, _HKLocationShifter;

#import <Foundation/Foundation.h>


@interface HKLocationFetcher : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKAnchoredObjectQuery *routesQuery; // ivar: _routesQuery
@property (retain, nonatomic) _HKWorkoutRouteStore *routesStore; // ivar: _routesStore
@property (retain, nonatomic) _HKLocationShifter *shifter; // ivar: _shifter


-(BOOL)_routesAreSmoothed:(id)arg0 ;
-(id)_workoutRoutesQueryForWorkout:(id)arg0 withUpdateHandler:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;
-(void)_handleAndShiftLocations:(id)arg0 forWorkout:(id)arg1 withSamplesHandler:(id)arg2 ;
-(void)dealloc;
-(void)fetchLocationsFromWorkout:(id)arg0 applyThreshold:(BOOL)arg1 withSamplesHandler:(id)arg2 ;
-(void)fetchLocationsFromWorkout:(id)arg0 withSamplesHandler:(id)arg1 ;
-(void)fetchRoutesFromWorkout:(id)arg0 withUpdateHandler:(id)arg1 ;


@end


#endif