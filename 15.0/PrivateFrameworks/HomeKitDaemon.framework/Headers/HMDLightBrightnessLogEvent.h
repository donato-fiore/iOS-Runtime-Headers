// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLIGHTBRIGHTNESSLOGEVENT_H
#define HMDLIGHTBRIGHTNESSLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDLightBrightnessLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSString *brightness; // ivar: _brightness
@property (readonly, copy, nonatomic) NSString *characteristicUUID; // ivar: _characteristicUUID
@property (readonly, copy, nonatomic) NSString *eventOrder; // ivar: _eventOrder
@property (readonly, copy, nonatomic) NSString *homePresence; // ivar: _homePresence
@property (readonly, copy, nonatomic) NSString *homeUUID; // ivar: _homeUUID
@property (readonly, copy, nonatomic) NSString *luxLevel; // ivar: _luxLevel
@property (readonly, copy, nonatomic) NSString *regionRange; // ivar: _regionRange
@property (readonly, copy, nonatomic) NSString *sunRiseTime; // ivar: _sunRiseTime
@property (readonly, copy, nonatomic) NSString *sunSetTime; // ivar: _sunSetTime
@property (readonly, copy, nonatomic) NSString *timeStamp; // ivar: _timeStamp


-(id)eventName;
-(id)initWithBrightness:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 timeStamp:(id)arg3 homeUUID:(id)arg4 eventOrder:(id)arg5 sunRiseTime:(id)arg6 sunSetTime:(id)arg7 homePresence:(id)arg8 regionRange:(id)arg9 luxLevel:(id)arg10 ;
-(id)serializedEvent;


@end


#endif