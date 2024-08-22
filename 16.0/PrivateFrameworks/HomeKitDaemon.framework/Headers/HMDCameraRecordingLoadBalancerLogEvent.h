// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGLOADBALANCERLOGEVENT_H
#define HMDCAMERARECORDINGLOADBALANCERLOGEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSNumber *numberOfResidents; // ivar: _numberOfResidents
@property (readonly, copy) NSNumber *numberOfRetries; // ivar: _numberOfRetries
@property (readonly, copy) NSNumber *remainingNumberOfJobSlots; // ivar: _remainingNumberOfJobSlots
@property (readonly, copy) NSString *selectedResidentDeviceType; // ivar: _selectedResidentDeviceType
@property (readonly, copy) NSNumber *selectedResidentJobSlots; // ivar: _selectedResidentJobSlots
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams; // ivar: _selectedResidentNumberOfActiveStreams
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots; // ivar: _selectedResidentPartialJobSlots
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel; // ivar: _selectedResidentSystemResourceUsageLevel
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, copy) NSNumber *totalNumberOfJobSlots; // ivar: _totalNumberOfJobSlots


-(id)initWithNumberOfResidents:(id)arg0 numberOfRetries:(id)arg1 totalNumberOfJobSlots:(id)arg2 remainingNumberOfJobSlots:(id)arg3 selectedResidentDeviceType:(id)arg4 selectedResidentNumberOfActiveStreams:(id)arg5 selectedResidentSystemResourceUsageLevel:(id)arg6 selectedResidentJobSlots:(id)arg7 selectedResidentPartialJobSlots:(id)arg8 ;


@end


#endif