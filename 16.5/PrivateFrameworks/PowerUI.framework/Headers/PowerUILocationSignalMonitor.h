// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUILOCATIONSIGNALMONITOR_H
#define POWERUILOCATIONSIGNALMONITOR_H

@class NSDictionary, CLLocation, NSString, CLLocationManager, RTRoutineManager;
@protocol CLLocationManagerDelegate, PowerUISignalMonitor, OS_dispatch_semaphore, OS_dispatch_queue, _CDLocalContext, PowerUISignalMonitorDelegate, OS_os_log, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor>



@property (retain, nonatomic) NSDictionary *analyticsData; // ivar: _analyticsData
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authorizationSemaphore; // ivar: _authorizationSemaphore
@property (nonatomic) int authorizationStatus; // ivar: _authorizationStatus
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PowerUISignalMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fullChargeDateQueue; // ivar: _fullChargeDateQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_dispatch_semaphore> *requestLocationSemaphore; // ivar: _requestLocationSemaphore
@property (retain, nonatomic) RTRoutineManager *routine; // ivar: _routine
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store
@property (readonly) Class superclass;


+(id)monitorWithDelegate:(id)arg0 ;
+(id)monitorWithDelegate:(id)arg0 trialManager:(id)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3 ;
+(id)stringFromRTType:(NSInteger)arg0 ;
-(BOOL)inTypicalChargingLocationWithError:(*id)arg0 ;
-(BOOL)isInSameTimeZone;
-(BOOL)locationIsUncertain:(id)arg0 ;
-(BOOL)longCharges:(id)arg0 occurredInLocationsNear:(id)arg1 withError:(*id)arg2 ;
-(BOOL)notAuthorizedForLocation;
-(CGFloat)empiricalDurationAtRemoteLocation:(NSInteger)arg0 withPotentialLOIs:(id)arg1 ;
-(CGFloat)empiricalDurationAwayFromLocations:(id)arg0 ;
-(NSInteger)inKnownMicrolocation;
-(NSUInteger)signalID;
-(id)LOIsWithinMeters:(int)arg0 ;
-(id)coreRoutinePredictedEntryDateFromNearbyLOIs:(id)arg0 ;
-(id)empiricalPredictedDateAwayFromNearbyLocations:(id)arg0 ;
-(id)empiricalPredictedDateStayingAtNearbyLOIs:(id)arg0 withRemoteLocation:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 trialManager:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 ;
-(id)lastAcquiredLocation;
-(id)likelyToBeInKnownArea;
-(id)longChargesAroundDate:(id)arg0 ;
-(id)longChargesAroundDate:(id)arg0 withinSeconds:(CGFloat)arg1 withinDays:(int)arg2 withMinimumDuration:(CGFloat)arg3 checkWhetherNearDate:(BOOL)arg4 ;
-(id)requiredFullChargeDate;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 didVisit:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)logPredictionsWithDuration:(id)arg0 withConfidence:(id)arg1 withLOIString:(id)arg2 withPredictionMethod:(id)arg3 withSkipString:(id)arg4 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif