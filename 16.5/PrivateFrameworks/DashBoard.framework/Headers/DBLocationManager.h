// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBLOCATIONMANAGER_H
#define DBLOCATIONMANAGER_H

@class NSMutableSet, NSBundle, NSString, CLLocation, CLLocationManager, NSMutableDictionary, CARObserverHashTable;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DBLocationManager : NSObject <CLLocationManagerDelegate>



@property (retain, nonatomic) NSMutableSet *activeAssertions; // ivar: _activeAssertions
@property (readonly, nonatomic) BOOL authorized;
@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (nonatomic) NSUInteger cacheUsedCount; // ivar: _cacheUsedCount
@property (readonly, nonatomic) CLLocation *cachedCurrentLocation; // ivar: _cachedCurrentLocation
@property (retain, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *lastPostedLocation; // ivar: _lastPostedLocation
@property (nonatomic) BOOL locationActive; // ivar: _locationActive
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *locationQueue; // ivar: _locationQueue
@property (retain, nonatomic) NSMutableDictionary *monitoringRegions; // ivar: _monitoringRegions
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)homeKitLocationManager;
-(id)_name;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundlePath:(id)arg0 ;
-(id)initWithLocationManager:(id)arg0 locationQueue:(id)arg1 ;
-(void)_authorizeIfNeeded;
-(void)_commonInit;
-(void)_commonPostInit;
-(void)_didEnterRegionWithIdentifier:(id)arg0 ;
-(void)_didExitRegionWithIDentifier:(id)arg0 ;
-(void)_startUpdatingLocationNow;
-(void)_stopUpdatingLocationNow;
-(void)_updateCurrentLocation:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)startMonitoringForRegionWithIdentifier:(id)arg0 locationCoordinate:(struct CLLocationCoordinate2D )arg1 range:(CGFloat)arg2 ;
-(void)startUpdatingLocationWithIdentifier:(id)arg0 ;
-(void)stopMonitoringForRegionWithIdentifier:(id)arg0 ;
-(void)stopUpdatingLocationWithIdentifier:(id)arg0 ;


@end


#endif