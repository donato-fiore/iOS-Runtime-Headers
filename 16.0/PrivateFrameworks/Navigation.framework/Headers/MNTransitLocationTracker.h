// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRANSITLOCATIONTRACKER_H
#define MNTRANSITLOCATIONTRACKER_H

@class GEOTransitRouteMatcher, GEORoadMatcher, NSDate, NSMutableDictionary, NSString;
@protocol MNLocationManagerObserver;


#import "MNSteppingLocationTracker.h"
#import "MNLocation.h"

@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNLocationManagerObserver>

 {
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    BOOL _hasArrived;
    NSMutableDictionary *_monitoredRegions;
    NSMutableDictionary *_transitRegions;
    NSMutableDictionary *_transitAlerts;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugSnapToTransitLines; // ivar: _debugSnapToTransitLines
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isInaccurateLocation:(id)arg0 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(CGFloat)_timeToDisplayStaleGPSLocation;
-(id)_clRegionWithCenter:(id)arg0 identifier:(id)arg1 signalStrength:(int)arg2 ;
-(id)_correctedLocationForLocation:(id)arg0 ;
-(id)_locationForInaccurateLocation:(id)arg0 ;
-(id)_matchedLocationForLocation:(id)arg0 ;
-(id)_roadMatchForOffRouteLocation:(id)arg0 routeMatch:(id)arg1 ;
-(id)_stepForRegionAlert:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(int)transportType;
-(void)_initRegionAlertsForRoute:(id)arg0 ;
-(void)_startMonitoringTransitAlerts;
-(void)_stopMonitoringAllRegions;
-(void)_stopMonitoringForRegionWithIdentifier:(id)arg0 ;
-(void)_triggerAlertForRegionId:(id)arg0 ;
-(void)locationManager:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)reroute:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)startTrackingWithInitialLocation:(id)arg0 ;
-(void)stopTracking;


@end


#endif