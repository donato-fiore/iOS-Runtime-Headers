// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDOORLOGEVENT_H
#define HMDDOORLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDDoorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSString *characteristicUUID; // ivar: _characteristicUUID
@property (readonly, copy, nonatomic) NSString *doorStatus; // ivar: _doorStatus
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *homePresence; // ivar: _homePresence
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, copy, nonatomic) NSString *timeStamp; // ivar: _timeStamp


-(id)initWithDoorStatus:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 timeStamp:(id)arg3 homeUUID:(id)arg4 homePresence:(id)arg5 ;


@end


#endif