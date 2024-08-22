// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSESSIONMETRIC_H
#define HMDACCESSORYSESSIONMETRIC_H

@class HMFObject, NSString, NSMutableDictionary, NSDate, HAP2AccessorySessionInfo, HMFTimer, NSError;
@protocol HMFLogging, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDAccessory.h"

@interface HMDAccessorySessionMetric : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly, weak) HMDAccessory *accessory; // ivar: _accessory
@property (copy, nonatomic) NSString *accessoryTransport; // ivar: _accessoryTransport
@property (nonatomic) CGFloat activeSessionDurationSec; // ivar: _activeSessionDurationSec
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSMutableDictionary *errorCounts; // ivar: _errorCounts
@property (nonatomic) BOOL hasActiveSession; // ivar: _hasActiveSession
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentPrimaryResident;
@property (readonly, nonatomic) BOOL isHomeThreadCapable;
@property (nonatomic) BOOL isReachable; // ivar: _isReachable
@property (copy, nonatomic) NSDate *metricCollectionStartTime; // ivar: _metricCollectionStartTime
@property (nonatomic) CGFloat reachableDurationSec; // ivar: _reachableDurationSec
@property (copy, nonatomic) NSDate *reachableStartTime; // ivar: _reachableStartTime
@property (readonly, nonatomic) CGFloat sessionCheckIntervalSec;
@property (nonatomic) NSUInteger sessionFailures; // ivar: _sessionFailures
@property (copy, nonatomic) HAP2AccessorySessionInfo *sessionInfo; // ivar: _sessionInfo
@property (retain, nonatomic) HMFTimer *sessionMetricTimer; // ivar: _sessionMetricTimer
@property (copy, nonatomic) NSDate *sessionStartTime; // ivar: _sessionStartTime
@property (nonatomic) CGFloat submissionIntervalSec; // ivar: _submissionIntervalSec
@property (nonatomic) NSUInteger successfulSessionRetries; // ivar: _successfulSessionRetries
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timerInterval; // ivar: _timerInterval
@property (copy, nonatomic) NSError *topError; // ivar: _topError
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_currentTransportForAccessory:(id)arg0 ;
-(id)attributeDescriptions;
-(id)expectedTransport;
-(id)initWithAccessory:(id)arg0 ;
-(id)logIdentifier;
-(void)_resetSessionMetric;
-(void)_submitMetric;
-(void)submitMetricAndStop;
-(void)timerDidFire:(id)arg0 ;
-(void)updateReachableState:(BOOL)arg0 ;
-(void)updateSessionState:(BOOL)arg0 sessionInfo:(id)arg1 withError:(id)arg2 ;


@end


#endif