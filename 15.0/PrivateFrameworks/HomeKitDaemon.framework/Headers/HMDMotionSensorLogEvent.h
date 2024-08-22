// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMOTIONSENSORLOGEVENT_H
#define HMDMOTIONSENSORLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMotionSensorLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSString *characteristicUUID; // ivar: _characteristicUUID
@property (readonly, copy, nonatomic) NSString *homePresence; // ivar: _homePresence
@property (readonly, copy, nonatomic) NSString *homeUUID; // ivar: _homeUUID
@property (readonly, copy, nonatomic) NSString *motionSensorStatus; // ivar: _motionSensorStatus
@property (readonly, copy, nonatomic) NSString *timeStamp; // ivar: _timeStamp


-(id)eventName;
-(id)initWithMotionSensorStatus:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 timeStamp:(id)arg3 homeUUID:(id)arg4 homePresence:(id)arg5 ;
-(id)serializedEvent;


@end


#endif