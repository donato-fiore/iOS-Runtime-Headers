// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSESSIONMETRICEVENT_H
#define HMDACCESSORYSESSIONMETRICEVENT_H

@class NSString, NSDictionary, NSUUID;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"
#import "HMDAccessory.h"

@interface HMDAccessorySessionMetricEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *accessoryTransport; // ivar: _accessoryTransport
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *expectedTransport; // ivar: _expectedTransport
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) BOOL isHomeThreadCapable; // ivar: _isHomeThreadCapable
@property (readonly, nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (readonly, nonatomic) NSUInteger lastSeenSecondsAgo; // ivar: _lastSeenSecondsAgo
@property (readonly, nonatomic) BOOL lastSeenWithLowBattery; // ivar: _lastSeenWithLowBattery
@property (readonly, nonatomic) NSUInteger numActiveSessionClients; // ivar: _numActiveSessionClients
@property (readonly, nonatomic) NSUInteger numBonjourNames; // ivar: _numBonjourNames
@property (readonly, nonatomic) NSUInteger numIPAddresses; // ivar: _numIPAddresses
@property (readonly, nonatomic) NSUInteger numIPAddressesTried; // ivar: _numIPAddressesTried
@property (readonly, nonatomic) NSUInteger percentDurationReachable; // ivar: _percentDurationReachable
@property (readonly, nonatomic) NSUInteger percentageDurationActiveSession; // ivar: _percentageDurationActiveSession
@property (readonly, nonatomic) CGFloat sessionCheckIntervalSec; // ivar: _sessionCheckIntervalSec
@property (readonly, nonatomic) NSUInteger sessionFailures; // ivar: _sessionFailures
@property (readonly, nonatomic) CGFloat submissionIntervalSec; // ivar: _submissionIntervalSec
@property (readonly, nonatomic) NSUInteger successfulSessionRetries; // ivar: _successfulSessionRetries
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger topErrorCode; // ivar: _topErrorCode
@property (readonly, nonatomic) NSString *topErrorDomain; // ivar: _topErrorDomain


-(id)initWithAccessory:(id)arg0 sessionMetric:(id)arg1 ;


@end


#endif