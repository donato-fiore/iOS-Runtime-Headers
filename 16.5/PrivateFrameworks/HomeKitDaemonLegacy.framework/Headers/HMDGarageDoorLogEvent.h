// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDGARAGEDOORLOGEVENT_H
#define HMDGARAGEDOORLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDGarageDoorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSString *characteristicUUID; // ivar: _characteristicUUID
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *doorStatus; // ivar: _doorStatus
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homePresence; // ivar: _homePresence
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *timeStamp; // ivar: _timeStamp
@property (readonly, copy, nonatomic) NSString *triggerSource; // ivar: _triggerSource
@property (readonly, copy, nonatomic) NSString *userUUID; // ivar: _userUUID


-(id)initWithGarageDoorStatus:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 timeStamp:(id)arg3 homeUUID:(id)arg4 homePresence:(id)arg5 triggerSource:(id)arg6 bundleId:(id)arg7 userUUID:(id)arg8 ;


@end


#endif