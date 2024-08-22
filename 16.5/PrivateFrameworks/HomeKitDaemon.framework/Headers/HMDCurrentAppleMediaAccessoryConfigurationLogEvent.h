// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCURRENTAPPLEMEDIAACCESSORYCONFIGURATIONLOGEVENT_H
#define HMDCURRENTAPPLEMEDIAACCESSORYCONFIGURATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCurrentAppleMediaAccessoryConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *numMediaAutomations; // ivar: _numMediaAutomations
@property (readonly, copy) NSNumber *numPairedSensorAutomations; // ivar: _numPairedSensorAutomations
@property (readonly, copy) NSNumber *numPairedSensors; // ivar: _numPairedSensors
@property (readonly, copy) NSNumber *sensorStatus; // ivar: _sensorStatus
@property (readonly) Class superclass;


-(id)initWithNumPairedSensors:(id)arg0 sensorStatus:(id)arg1 numPairedSensorAutomations:(id)arg2 numMediaAutomations:(id)arg3 ;


@end


#endif