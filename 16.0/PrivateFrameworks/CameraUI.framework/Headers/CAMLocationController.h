// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLOCATIONCONTROLLER_H
#define CAMLOCATIONCONTROLLER_H

@class NSMutableArray, NSHashTable, CLLocationManager, CLHeading, CLLocation, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMLocationController : NSObject <CLLocationManagerDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_authorizationQueue; // ivar: __authorizationQueue
@property (nonatomic) int _authorizationQueue_currentAuthorizationStatus; // ivar: __authorizationQueue_currentAuthorizationStatus
@property (nonatomic, setter=_setDidRequestLocation:) BOOL _didRequestLocation; // ivar: __didRequestLocation
@property (readonly, nonatomic) NSMutableArray *_enqueuedAssetsWaitingForLocation; // ivar: __enqueuedAssetsWaitingForLocation
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_listenersQueue; // ivar: __listenersQueue
@property (readonly, nonatomic) NSHashTable *_listenersWaitingForLocation; // ivar: __listenersWaitingForLocation
@property (readonly, nonatomic) CLLocationManager *_locationManager; // ivar: __locationManager
@property (readonly, nonatomic, getter=_isMonitoringLocation) BOOL _monitoringLocation; // ivar: __monitoringLocation
@property (readonly, nonatomic) CLHeading *currentHeading; // ivar: _currentHeading
@property (retain, nonatomic, setter=_setCurrentLocation:) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHeadingEnabled) BOOL headingEnabled; // ivar: _headingEnabled
@property (readonly) Class superclass;


+(id)_sharedGPSDatestampFormatter;
+(id)_sharedGPSTimestampFormatter;
+(id)locationMetadataForLocation:(id)arg0 heading:(id)arg1 device:(NSInteger)arg2 ;
-(id)headingForOrientation:(NSInteger)arg0 ;
-(id)init;
-(void)_authorizeOrStartLocationManager;
-(void)_notifyListenersForAuthorizationStatusUpdate:(int)arg0 ;
-(void)_notifyListenersWaitingOnLocation:(id)arg0 ;
// -(void)_performBlock:(id)arg0 andLogIfExecutionExceeds:(unk)arg1 logPrefix:(CGFloat)arg2  ;
-(void)_resetDidRequestLocation;
-(void)_startMonitoringLocationUpdates;
-(void)_stopMonitoringLocationUpdates;
-(void)_updateAssetsWaitingOnLocation;
-(void)_updateLocationMonitoring;
-(void)addListenerForLocationUpdates:(id)arg0 ;
-(void)dealloc;
-(void)enqueueAssetForLocationUpdates:(id)arg0 ;
-(void)locationManager:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)removeListenerForLocationUpdates:(id)arg0 ;


@end


#endif