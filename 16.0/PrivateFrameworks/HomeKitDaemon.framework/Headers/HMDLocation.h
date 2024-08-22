// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLOCATION_H
#define HMDLOCATION_H

@class HMFObject, NSMutableSet, NSString, NSMapTable, NSHashTable;
@protocol HMFLogging, HMFTimerDelegate, HMDCLLocationManagerDelegate, OS_dispatch_queue, HMDCLLocationManager;



@interface HMDLocation : HMFObject <HMFLogging, HMFTimerDelegate, HMDCLLocationManagerDelegate>



@property (nonatomic) int authStatus; // ivar: _authStatus
@property (readonly, nonatomic) NSMutableSet *batchLocationContexts; // ivar: _batchLocationContexts
@property (nonatomic) BOOL beingConfigured; // ivar: _beingConfigured
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger locationAuthorized; // ivar: _locationAuthorized
@property (readonly, nonatomic) NSObject<HMDCLLocationManager> *locationManager; // ivar: _locationManager
@property (readonly, nonatomic) NSMapTable *pendingRegionCallbacks; // ivar: _pendingRegionCallbacks
@property (readonly, nonatomic) NSMapTable *pendingRegionMonitoringRequests; // ivar: _pendingRegionMonitoringRequests
@property (readonly, nonatomic) NSMapTable *regionStateDelegatesByRegionIdentifier; // ivar: _regionStateDelegatesByRegionIdentifier
@property (readonly, nonatomic) NSMapTable *regionStates; // ivar: _regionStates
@property (readonly, nonatomic) NSHashTable *singleLocationDelegates; // ivar: _singleLocationDelegates
@property (readonly) Class superclass;


+(BOOL)isAccurateLocation:(id)arg0 ;
+(id)_getAlmanacWithLocation:(id)arg0 ;
+(id)_getAlmanacWithLocation:(id)arg0 date:(id)arg1 ;
+(id)bundleForLocationManager;
+(id)findEvent:(id)arg0 withGeo:(id)arg1 ;
+(id)logCategory;
+(id)nextSunriseTimeForLocation:(id)arg0 date:(id)arg1 ;
+(id)nextSunsetTimeForLocation:(id)arg0 date:(id)arg1 ;
+(id)sharedManager;
+(id)sunriseTimeForLocation:(id)arg0 ;
+(id)sunsetTimeForLocation:(id)arg0 ;
+(void)timeZoneISOCountryCodeForCLLocationAsync:(id)arg0 withCompletion:(id)arg1 ;
-(BOOL)_canLocationBeExtracted;
-(id)_delegateforRegion:(id)arg0 ;
-(id)getCurrentLocation;
-(id)init;
-(id)initWithLocationManager:(id)arg0 handlerQueue:(id)arg1 ;
-(void)_extractSingleLocationForDelegate:(id)arg0 ;
-(void)_handleDeterminedState:(NSInteger)arg0 forRegion:(id)arg1 ;
-(void)_notifySingleLocationDelegate:(id)arg0 withLocation:(id)arg1 ;
-(void)_notifySingleLocationDelegatesWithLocation:(id)arg0 ;
-(void)_startExtractingBatchLocationsForDelegate:(id)arg0 ;
-(void)_stopExtractingBatchLocationsForContext:(id)arg0 ;
-(void)_updateEntryForRegion:(id)arg0 ;
-(void)_updateExitForRegion:(id)arg0 ;
-(void)_updateRegionState:(NSInteger)arg0 forRegion:(id)arg1 ;
-(void)_updateWithLocationAuthorizationStatus:(int)arg0 ;
-(void)beingConfigured:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)deregisterForRegionUpdate:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCoreRoutineLOIForCurrentLocationWithCompletionHandler:(id)arg0 ;
-(void)getLOIForCurrentLocationWithCompletionHandler:(id)arg0 ;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)registerForRegionUpdate:(id)arg0 withDelegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestMicroLocationLocalizationScanWithMetadata:(id)arg0 ;
-(void)requestMicroLocationRecordingScanWithMetadata:(id)arg0 ;
-(void)startExtractingBatchLocationsForDelegate:(id)arg0 ;
-(void)startExtractingSingleLocationForDelegate:(id)arg0 ;
-(void)stopExtractingBatchLocationsForDelegate:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif