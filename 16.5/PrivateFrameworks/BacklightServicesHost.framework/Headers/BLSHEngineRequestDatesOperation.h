// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENGINEREQUESTDATESOPERATION_H
#define BLSHENGINEREQUESTDATESOPERATION_H

@class NSMutableSet, NSArray, NSDate, NSString, NSDateInterval;
@protocol BSInvalidatable, BSTimerScheduleQuerying><BSCancellable><BSInvalidatable, BLSHEngineRequestDatesOperationDelegate, BLSHOSTimerProviding;

#import <Foundation/Foundation.h>


@interface BLSHEngineRequestDatesOperation : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_lock_pendingEnvironments;
    id<BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> *_lock_timeoutTimer;
    id<BLSHEngineRequestDatesOperationDelegate> *_lock_delegate;
    id<BLSHOSTimerProviding> *_osTimerProvider;
    NSArray *_lock_environmentIdentifiers;
    unsigned int _lock_environmentCount;
    NSDate *_lock_beginDate;
    CGFloat _lock_beginTime;
    CGFloat _lock_shortestInterval;
    CGFloat _lock_averageInterval;
    CGFloat _lock_longestInterval;
    BOOL _lock_complete;
    BOOL _lock_begun;
    BOOL _lock_didReset;
    BOOL _lock_timedOut;
    BOOL _lock_invalidated;
}


@property (readonly, nonatomic) CGFloat averageInterval;
@property (readonly, nonatomic) NSDate *beginDate;
@property (readonly, nonatomic) CGFloat beginTimestamp;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didReset;
@property (readonly, nonatomic) unsigned int environmentCount;
@property (readonly, nonatomic) NSArray *environmentIdentifiers;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat longestInterval;
@property (readonly, nonatomic) NSDateInterval *requestInterval; // ivar: _requestInterval
@property (readonly, nonatomic) CGFloat shortestInterval;
@property (readonly) Class superclass;


-(id)initWithRequestInterval:(id)arg0 delegate:(id)arg1 osTimerProvider:(id)arg2 ;
-(id)telemetryDataWithEndTime:(CGFloat)arg0 ;
-(void)beginOperationWithIntervals:(id)arg0 shouldReset:(BOOL)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif