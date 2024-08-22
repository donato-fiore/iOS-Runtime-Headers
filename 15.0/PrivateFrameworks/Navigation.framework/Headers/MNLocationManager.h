// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNLOCATIONMANAGER_H
#define MNLOCATIONMANAGER_H

@class NSBundle, NSString, NSHashTable, NSLock, GEOLocationShifter, CLInUseAssertion, NSDate, CLHeading;
@protocol GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate, MNLocationProvider, MNLocationRecorder;

#import <Foundation/Foundation.h>

#import "MNLocation.h"

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate>

 {
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    NSHashTable *_accessRequesters;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    NSLock *_observersLock;
    NSLock *_lastLocationLock;
    MNLocation *_lastLocation;
    GEOLocationShifter *_locationShifter;
    CGFloat _expectedGpsUpdateInterval;
    CLInUseAssertion *_locationAssertion;
    NSDate *_lastUpdatedHeadingDate;
    BOOL _trackingLocation;
    BOOL _trackingHeading;
}


@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) CGFloat expectedGpsUpdateInterval;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLHeading *heading; // ivar: _heading
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isHeadingServicesAvailable;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (copy, nonatomic) id *locationCorrector; // ivar: _locationCorrector
@property (retain, nonatomic) NSObject<MNLocationProvider> *locationProvider; // ivar: _locationProvider
@property (readonly, nonatomic) NSUInteger locationProviderType; // ivar: _locationProviderType
@property (retain, nonatomic) NSObject<MNLocationRecorder> *locationRecorder; // ivar: _locationRecorder
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeScale;


+(id)sharedLocationManager;
-(BOOL)_hasLocationAssertion;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg0 ;
-(id)init;
-(void)_clearLocationAssertion;
-(void)_createLocationAssertion;
-(void)_reportLocationFailureWithError:(id)arg0 ;
-(void)_reportLocationReset;
-(void)_reportLocationStatus:(SEL)arg0 ;
-(void)_reportLocationSuccess;
-(void)_reset;
-(void)_setTrackingHeading:(BOOL)arg0 ;
-(void)_setTrackingLocation:(BOOL)arg0 ;
-(void)_shiftLocationIfNecessary:(id)arg0 handler:(id)arg1 ;
-(void)_updateForNewShiftedLocation:(id)arg0 rawLocation:(id)arg1 ;
-(void)addLocationListener:(id)arg0 ;
-(void)dealloc;
-(void)locationProvider:(id)arg0 didChangeCoarseMode:(BOOL)arg1 ;
-(void)locationProvider:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationProvider:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationProvider:(id)arg0 didReceiveError:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationProvider:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationProvider:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg0 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg0 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg0 ;
-(void)pushLocation:(id)arg0 ;
-(void)removeLocationAccessFor:(id)arg0 ;
-(void)removeLocationAccessForAll;
-(void)removeLocationListener:(id)arg0 ;
-(void)requestLocationAccessFor:(id)arg0 ;
-(void)resourceManifestManager:(id)arg0 didChangeActiveTileGroup:(id)arg1 fromOldTileGroup:(id)arg2 ;
-(void)startHeadingUpdateWithObserver:(id)arg0 ;
-(void)startLocationUpdateWithObserver:(id)arg0 ;
-(void)startMonitoringForRegion:(id)arg0 ;
-(void)stop;
-(void)stopHeadingUpdateWithObserver:(id)arg0 ;
-(void)stopLocationUpdateWithObserver:(id)arg0 ;
-(void)stopMonitoringForRegion:(id)arg0 ;
-(void)useGPSLocationProviderWithCLParameters:(id)arg0 ;
-(void)useHybridLocationProvider;
-(void)useSimulationLocationProvider:(id)arg0 ;
-(void)useTraceLocationProvider:(id)arg0 ;


@end


#endif