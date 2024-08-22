// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLIGHTBRIGHTNESSLOGEVENT_H
#define HMDLIGHTBRIGHTNESSLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDLightBrightnessLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSString *brightness; // ivar: _brightness
@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSString *characteristicUUID; // ivar: _characteristicUUID
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *eventOrder; // ivar: _eventOrder
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homePresence; // ivar: _homePresence
@property (readonly, copy, nonatomic) NSString *luxLevel; // ivar: _luxLevel
@property (readonly, copy, nonatomic) NSString *regionRange; // ivar: _regionRange
@property (readonly, copy, nonatomic) NSString *sunRiseTime; // ivar: _sunRiseTime
@property (readonly, copy, nonatomic) NSString *sunSetTime; // ivar: _sunSetTime
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *timeStamp; // ivar: _timeStamp
@property (readonly, copy, nonatomic) NSString *triggerSource; // ivar: _triggerSource
@property (readonly, copy, nonatomic) NSString *userUUID; // ivar: _userUUID


-(id)initWithBrightness:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 timeStamp:(id)arg3 homeUUID:(id)arg4 eventOrder:(id)arg5 sunRiseTime:(id)arg6 sunSetTime:(id)arg7 homePresence:(id)arg8 regionRange:(id)arg9 luxLevel:(id)arg10 triggerSource:(id)arg11 bundleId:(id)arg12 userUUID:(id)arg13 ;


@end


#endif