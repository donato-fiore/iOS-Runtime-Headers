// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPODSENSORPAIRINGLOGEVENT_H
#define HMDHOMEPODSENSORPAIRINGLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomePodSensorPairingLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger failureReason; // ivar: _failureReason
@property (readonly) NSUInteger hash;
@property (readonly) BOOL pairingSuccess; // ivar: _pairingSuccess
@property (readonly) Class superclass;


-(id)initWithPairingSuccess:(BOOL)arg0 failureReason:(NSUInteger)arg1 ;


@end


#endif