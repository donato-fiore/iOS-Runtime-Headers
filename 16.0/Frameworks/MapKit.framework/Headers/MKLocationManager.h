// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOCATIONMANAGER_H
#define MKLOCATIONMANAGER_H

@class NSHashTable, CLLocation, NSMutableArray, NSTimer, GEOLocationShifter, NSLock, geo_isolater, GEOLocation, NSString, NSBundle, CLHeading, NSError;
@protocol GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate, MKLocationProvider, OS_dispatch_group, MNLocationRecorder;

#import <Foundation/Foundation.h>


@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate>

 {
    id<MKLocationProvider> *_locationProvider;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    CLLocation *_lastLocation;
    CGFloat _lastLocationUpdateTime;
    BOOL _trackingLocation;
    BOOL _trackingHeading;
    CGFloat _applicationResumeTime;
    CGFloat _applicationSuspendTime;
    CGFloat _headingUpdateTime;
    CGFloat _locationAccuracyUpdateTime;
    CGFloat _locationUpdateStartTime;
    BOOL _isReceivingAccurateLocations;
    NSMutableArray *_waitForAccurateLocationsHandlers;
    NSTimer *_waitForAccurateLocationsTimer;
    CGFloat _lastLocationReportTime;
    GEOLocationShifter *_locationShifter;
    NSTimer *_headingThrottlingTimer;
    CGFloat _lastVehicleHeading;
    CGFloat _lastVehicleSpeed;
    CGFloat _lastVehicleHeadingUpdateTime;
    CGFloat _lastVehicleSpeedUpdateTime;
    int _consecutiveOutOfCourseCount;
    BOOL _continuedAfterBecomingInactive;
    BOOL _suspended;
    NSMutableArray *_recentLocationUpdateIntervals;
    NSLock *_lastLocationLock;
    NSLock *_observersLock;
    int _accuracyAuthorizationState;
    BOOL _temporaryPreciseLocationAuthorizationPromptShown;
    geo_isolater *_accuracyAuthorizationIsolater;
    GEOOnce_s _initializedAuthorizationStatus;
    NSObject<OS_dispatch_group> *_authStatusInitializationGroup;
    BOOL _hasCustomDesiredAccuracy;
}


@property (nonatomic) NSInteger activityType;
@property (copy, nonatomic) id *authorizationRequestBlock;
@property (nonatomic) BOOL continuesWhileInactive; // ivar: _continuesWhileInactive
@property (readonly, nonatomic) GEOLocation *courseCorrectedLocation;
@property (readonly, nonatomic) GEOLocation *currentLocation;
@property (readonly, nonatomic) CGFloat currentVehicleHeading;
@property (readonly, nonatomic) CGFloat currentVehicleSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredAccuracy;
@property (nonatomic) CGFloat distanceFilter;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) CGFloat expectedGpsUpdateInterval;
@property (nonatomic) BOOL fusionInfoEnabled;
@property (readonly, nonatomic) GEOLocation *gridSnappedCurrentLocation;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLHeading *heading; // ivar: _heading
@property (nonatomic) NSInteger headingOrientation;
@property (readonly, nonatomic) CGFloat headingUpdateTimeInterval;
@property (readonly, nonatomic) BOOL isAuthorizedForPreciseLocation;
@property (readonly, nonatomic) BOOL isHeadingServicesAvailable;
@property (readonly, nonatomic) BOOL isLastLocationStale; // ivar: _isLastLocationStale
@property (readonly, nonatomic) BOOL isLocationServicesApproved;
@property (readonly, nonatomic) BOOL isLocationServicesAvailable;
@property (readonly, nonatomic) BOOL isLocationServicesDenied;
@property (readonly, nonatomic) BOOL isLocationServicesEnabled;
@property (readonly, nonatomic) BOOL isLocationServicesPossiblyAvailable;
@property (readonly, nonatomic) BOOL isLocationServicesRestricted;
@property (readonly, nonatomic) BOOL isTemporaryPreciseLocationAuthorizationPromptShown;
@property (readonly, nonatomic) CLLocation *lastGoodLocation; // ivar: _lastGoodLocation
@property (readonly, nonatomic) CLLocation *lastLocation;
@property (readonly, nonatomic, getter=wasLastLocationPushed) BOOL lastLocationPushed; // ivar: _lastLocationPushed
@property (readonly, nonatomic) CLLocation *lastProviderLocation;
@property (copy, nonatomic) id *locationCorrector; // ivar: _locationCorrector
@property (readonly, nonatomic) NSError *locationError; // ivar: _locationError
@property (retain, nonatomic) NSObject<MKLocationProvider> *locationProvider;
@property (retain, nonatomic) NSObject<MNLocationRecorder> *locationRecorder; // ivar: _locationRecorder
@property (readonly, nonatomic, getter=isLocationServicesAuthorizationNeeded) BOOL locationServicesAuthorizationNeeded;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property (nonatomic) BOOL logStartStopLocationUpdates; // ivar: _logStartStopLocationUpdates
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) CGFloat minimumLocationUpdateInterval; // ivar: _minimumLocationUpdateInterval
@property (readonly, nonatomic) CGFloat navigationCourse; // ivar: _navCourse
@property (copy, nonatomic) id *networkActivity; // ivar: _networkActivity
@property (readonly) Class superclass;
@property (retain, nonatomic) CLHeading *throttledHeading; // ivar: _throttledHeading
@property (readonly, nonatomic) CGFloat timeScale;
@property (nonatomic) BOOL useCourseForHeading; // ivar: _useCourseForHeading
@property (readonly, nonatomic) CGFloat vehicleHeadingOrCourse;


+(id)sharedLocationManager;
+(id)timeoutError;
+(void)setCanMonitorWiFiStatus:(BOOL)arg0 ;
-(BOOL)_isTimeToResetOnResume;
-(BOOL)_shouldAllowLocationUpdateInterval:(CGFloat)arg0 ;
-(BOOL)isLocationServicesPossiblyAvailable:(*id)arg0 ;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg0 ;
-(id)init;
-(id)initWithCLLocationManager:(id)arg0 ;
-(id)observersDescription;
-(id)singleLocationUpdateWithDesiredAccuracy:(CGFloat)arg0 handler:(id)arg1 ;
// -(id)singleLocationUpdateWithDesiredAccuracy:(CGFloat)arg0 handler:(id)arg1 timeout:(unk)arg2  ;
// -(id)singleLocationUpdateWithDesiredAccuracy:(CGFloat)arg0 handler:(id)arg1 timeout:(unk)arg2 maxLocationAge:(CGFloat)arg3  ;
-(id)singleLocationUpdateWithHandler:(id)arg0 ;
-(void)_initializeAuthStatusIfNecessary;
-(void)_locationProvider:(id)arg0 didUpdateLocation:(id)arg1 lastKnownNavCourse:(CGFloat)arg2 ;
-(void)_reportHeadingFailureWithError:(id)arg0 ;
-(void)_reportHeadingSuccess;
-(void)_reportLocationFailureWithError:(id)arg0 ;
-(void)_reportLocationReset;
-(void)_reportLocationStatus:(SEL)arg0 ;
-(void)_reportLocationSuccess;
-(void)_setIsReceivingAccurateLocations:(BOOL)arg0 ;
-(void)_setTrackingHeading:(BOOL)arg0 ;
-(void)_setTrackingLocation:(BOOL)arg0 ;
-(void)_startLocationUpdateWithObserver:(id)arg0 desiredAccuracy:(CGFloat)arg1 ;
-(void)_suspend;
-(void)_syncLocationProviderWithTracking;
-(void)_useDefaultCoreLocationProvider;
-(void)_waitForAccurateLocationsTimerFired:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)dampenGPSLocationAccuracy:(*id)arg0 ;
-(void)dealloc;
-(void)dismissHeadingCalibrationDisplay;
-(void)listenForLocationUpdates:(id)arg0 ;
-(void)locationProvider:(id)arg0 didReceiveError:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateLocation:(id)arg1 lastKnownNavCourse:(CGFloat)arg2 ;
-(void)locationProvider:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationProvider:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg0 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg0 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg0 ;
-(void)pushLocation:(id)arg0 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg0 completion:(id)arg1 ;
-(void)requestWhenInUseAuthorization;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)reset;
-(void)resetAfterResumeIfNecessary;
-(void)resourceManifestManager:(id)arg0 didChangeActiveTileGroup:(id)arg1 fromOldTileGroup:(id)arg2 ;
-(void)startHeadingUpdateWithObserver:(id)arg0 ;
-(void)startLocationUpdateWithObserver:(id)arg0 ;
-(void)startVehicleHeadingUpdate;
-(void)startVehicleSpeedUpdate;
-(void)stopHeadingUpdateWithObserver:(id)arg0 ;
-(void)stopListeningForLocationUpdates:(id)arg0 ;
-(void)stopLocationUpdateWithObserver:(id)arg0 ;
-(void)stopVehicleHeadingUpdate;
-(void)stopVehicleSpeedUpdate;
-(void)waitForAccurateLocationWithTimeout:(CGFloat)arg0 handler:(id)arg1 ;


@end


#endif