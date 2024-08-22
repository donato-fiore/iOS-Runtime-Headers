// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERUILOCATIONSIGNALMONITOR_H
#define POWERUILOCATIONSIGNALMONITOR_H

@class NSDictionary, CLLocation, NSString, CLLocationManager, RTRoutineManager;
@protocol CLLocationManagerDelegate, PowerUISignalMonitor, OS_dispatch_semaphore, _CDLocalContext, OS_os_log, OS_dispatch_queue, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor>



@property (retain, nonatomic) NSDictionary *analyticsData; // ivar: _analyticsData
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authorizationSemaphore; // ivar: _authorizationSemaphore
@property (nonatomic) int authorizationStatus; // ivar: _authorizationStatus
@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_dispatch_semaphore> *requestLocationSemaphore; // ivar: _requestLocationSemaphore
@property (retain, nonatomic) RTRoutineManager *routine; // ivar: _routine
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store
@property (readonly) Class superclass;


+(id)monitorWithDelegate:(id)arg0 ;
+(id)monitorWithDelegate:(id)arg0 withContext:(id)arg1 withKnowledgeStore:(id)arg2 ;
-(BOOL)inTypicalChargingLocationWithError:(*id)arg0 ;
-(BOOL)isInSameTimeZone;
-(BOOL)locationIsUncertain:(id)arg0 ;
-(BOOL)longCharges:(id)arg0 occurredInLocationsNear:(id)arg1 withError:(*id)arg2 ;
-(BOOL)notAuthorizedForLocation;
-(NSInteger)inKnownMicrolocation;
-(NSUInteger)signalID;
-(id)initWithContextStore:(id)arg0 withKnowledgeStore:(id)arg1 ;
-(id)lastAcquiredLocation;
-(id)likelyToBeInKnownArea;
-(id)longChargesAroundDate:(id)arg0 ;
-(id)predicateForEventsWithinSeconds:(CGFloat)arg0 aroundTimeOfDay:(id)arg1 ;
-(id)requiredFullChargeDate;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif