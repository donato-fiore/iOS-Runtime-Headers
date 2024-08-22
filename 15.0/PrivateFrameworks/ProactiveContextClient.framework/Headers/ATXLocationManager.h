// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXLOCATIONMANAGER_H
#define ATXLOCATIONMANAGER_H

@class _PASLock, GEOLocationShifter, NSString, NSDate;
@protocol ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol, ATXLocationManagerGPS, ATXLocationManagerRoutine, ATXLocationManagerStateStore, OS_dispatch_queue, ATXLocationParameters;

#import <Foundation/Foundation.h>


@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol>

 {
    id<ATXLocationManagerGPS> *_gps;
    id<ATXLocationManagerRoutine> *_routine;
    id<ATXLocationManagerStateStore> *_stateStore;
    _PASLock *_lock;
    GEOLocationShifter *_shifter;
    NSObject<OS_dispatch_queue> *_loiUpdateQueue;
    id<ATXLocationParameters> *_modeGlobals;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *now; // ivar: _now
@property (nonatomic) CGFloat predictedExitDateTimeout; // ivar: _predictedExitDateTimeout
@property (nonatomic) CGFloat predictedNextLOITimeout; // ivar: _predictedNextLOITimeout
@property (readonly) Class superclass;


+(id)debugDescriptionForCLLocation:(id)arg0 ;
+(id)stringForLOIType:(NSInteger)arg0 ;
-(BOOL)isAvailableLocationOfInterestType:(NSInteger)arg0 ;
-(BOOL)isLocationNearKnownTypeLocationOfInterest:(id)arg0 ;
-(BOOL)isNearFrequentLocationOfInterest;
-(BOOL)isTourist;
-(BOOL)isTouristWithCurrentDate:(id)arg0 ;
-(BOOL)locationEnabled;
-(BOOL)preciseLocationEnabled;
-(CGFloat)_distanceOfCurrentLocationFrom:(id)arg0 ;
-(CGFloat)distanceFromGymOfCurrentLocationInMeters;
-(CGFloat)distanceFromHomeOfCurrentLocationInMeters;
-(CGFloat)distanceFromSchoolOfCurrentLocationInMeters;
-(CGFloat)distanceFromWorkOfCurrentLocationInMeters;
-(NSInteger)stateForRegion:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(NSUInteger)getCurrentRoutineModeWithCurrentDate:(id)arg0 ;
-(id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)arg0 ;
-(id)_updateLocationsOfInterestWithCurrentLocation:(id)arg0 ;
-(id)cachedLocationOfInterestAtCurrentLocation;
-(id)getCurrentLocation;
-(id)getCurrentLocationWithShiftInChina;
-(id)getCurrentLocation_RequestPreciseLocation:(BOOL)arg0 ;
-(id)getCurrentPreciseLocation;
-(id)getCurrentPreciseLocationWithShiftInChina;
-(id)getPredictedExitTimesFromLOIName:(id)arg0 startDate:(id)arg1 ;
-(id)getPredictedLocationsOfInterestFromLOIName:(id)arg0 startDate:(id)arg1 ;
-(id)init;
-(id)initWithGPS:(id)arg0 routine:(id)arg1 stateStore:(id)arg2 now:(id)arg3 modeGlobals:(id)arg4 ;
-(id)initWithStateStore:(id)arg0 modeGlobals:(id)arg1 ;
-(id)locationOfInterestAtCurrentLocation;
-(id)predictedExitTimes;
-(id)predictedLocationsOfInterest;
-(id)previousLOIAndCurrentLOI;
-(id)shiftedLocationForChinaFromLocation:(id)arg0 ;
-(id)shifter;
-(void)_fetchLocationOfInterest:(NSInteger)arg0 inGroup:(id)arg1 ;
-(void)_gotLocation:(id)arg0 forLocationOfInterest:(NSInteger)arg1 ;
-(void)_handleRoutineError:(id)arg0 forThing:(id)arg1 ;
-(void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id)arg0 ;
-(void)_updatePredictedExitTimesIfTimeElapsed;
-(void)_updatePredictedLocationsOfInterestIfTimeElapsed;
-(void)beginMonitoringRegion:(id)arg0 ;
-(void)clearLocationOfInterest;
-(void)didChangeLocationEnabled:(BOOL)arg0 ;
-(void)didChangePreciseLocationEnabled:(BOOL)arg0 ;
-(void)fetchAllLocationsOfInterest:(id)arg0 ;
-(void)fetchLOILocationOfType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)getCurrentLocationWithCompletionHandler:(id)arg0 ;
-(void)gotState:(id)arg0 ;
-(void)invalidateLocationOfInterestCache;
-(void)locationManagerGPS:(id)arg0 didEnterRegionWithIdentifier:(id)arg1 ;
-(void)locationManagerGPS:(id)arg0 didExitRegionWithIdentifier:(id)arg1 ;
-(void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id)arg0 ;
-(void)stopMonitoringRegionWithIdentifier:(id)arg0 ;
-(void)updateCurrentLocationOfInterest;
-(void)updateCurrentLocationOfInterestIfTimeElapsed;
-(void)updateCurrentLocationOfInterestWithCompletionHandler:(id)arg0 ;
-(void)updatePredictedExitTimes;
-(void)updatePredictedLocationsOfInterest;


@end


#endif