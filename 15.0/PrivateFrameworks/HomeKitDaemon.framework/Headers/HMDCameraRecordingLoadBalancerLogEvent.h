// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGLOADBALANCERLOGEVENT_H
#define HMDCAMERARECORDINGLOADBALANCERLOGEVENT_H

@class HMMLogEvent, NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *numberOfResidents; // ivar: _numberOfResidents
@property (readonly, copy) NSNumber *numberOfRetries; // ivar: _numberOfRetries
@property (readonly, copy) NSString *selectedResidentDeviceType; // ivar: _selectedResidentDeviceType
@property (readonly, copy) NSNumber *selectedResidentFullJobSlots; // ivar: _selectedResidentFullJobSlots
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams; // ivar: _selectedResidentNumberOfActiveStreams
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots; // ivar: _selectedResidentPartialJobSlots
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel; // ivar: _selectedResidentSystemResourceUsageLevel


-(id)eventName;
-(id)initWithNumberOfResidents:(id)arg0 numberOfRetries:(id)arg1 selectedResidentDeviceType:(id)arg2 selectedResidentNumberOfActiveStreams:(id)arg3 selectedResidentSystemResourceUsageLevel:(id)arg4 selectedResidentFullJobSlots:(id)arg5 selectedResidentPartialJobSlots:(id)arg6 ;
-(id)serializedEvent;


@end


#endif