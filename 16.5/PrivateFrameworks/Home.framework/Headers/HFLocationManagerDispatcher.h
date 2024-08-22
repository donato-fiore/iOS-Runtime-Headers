// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFLOCATIONMANAGERDISPATCHER_H
#define HFLOCATIONMANAGERDISPATCHER_H

@class NAFuture, NSString, CLLocationManager, NSHashTable, NSMutableArray;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFLocationManagerDispatcher : NSObject <CLLocationManagerDelegate>



@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) NAFuture *authorizationStatusFuture;
@property (nonatomic) int cachedAuthorizationStatus; // ivar: _cachedAuthorizationStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasInitializedAuthorizationStatus; // ivar: _hasInitializedAuthorizationStatus
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSHashTable *locationObservers; // ivar: _locationObservers
@property (readonly, nonatomic) NSMutableArray *pendingAuthorizationStatusFutures; // ivar: _pendingAuthorizationStatusFutures
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedDispatcher;
-(id)getAuthorizationStatusAsync;
-(id)init;
-(void)_authorizeHomeKitLocationServices;
-(void)_updateCachedAuthorizationStatus:(int)arg0 ;
-(void)_updateMacAuthorizationStatus:(int)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
// -(void)dispatchLocationManagerObserverMessage:(SEL)arg0 withBlock:(id)arg1 sender:(unk)arg2  ;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didFinishDeferredUpdatesWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didRangeBeacons:(id)arg1 inRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didStartMonitoringForRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg0 rangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif