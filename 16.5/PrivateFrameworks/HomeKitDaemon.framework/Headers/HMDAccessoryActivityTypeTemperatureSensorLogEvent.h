// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYACTIVITYTYPETEMPERATURESENSORLOGEVENT_H
#define HMDACCESSORYACTIVITYTYPETEMPERATURESENSORLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAccessoryActivityTypeTemperatureSensorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUIDString; // ivar: _accessoryUUIDString
@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSString *characteristicUUIDString; // ivar: _characteristicUUIDString
@property (readonly, copy, nonatomic) NSString *characteristicValue; // ivar: _characteristicValue
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homePresence; // ivar: _homePresence
@property (readonly, copy, nonatomic) NSString *regionRange; // ivar: _regionRange
@property (readonly, copy, nonatomic) NSString *serviceUUIDString; // ivar: _serviceUUIDString
@property (readonly, copy, nonatomic) NSString *subscriptionEventTypeString; // ivar: _subscriptionEventTypeString
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *timeStamp; // ivar: _timeStamp
@property (readonly, copy, nonatomic) NSString *triggerSource; // ivar: _triggerSource
@property (readonly, copy, nonatomic) NSString *userUUID; // ivar: _userUUID


-(id)initWithCharacteristicValue:(id)arg0 accessoryUUIDString:(id)arg1 serviceUUIDString:(id)arg2 characteristicUUIDString:(id)arg3 timeStamp:(id)arg4 regionRange:(id)arg5 homeUUID:(id)arg6 homePresence:(id)arg7 subscriptionEventTypeString:(id)arg8 triggerSource:(id)arg9 bundleId:(id)arg10 userUUID:(id)arg11 ;


@end


#endif