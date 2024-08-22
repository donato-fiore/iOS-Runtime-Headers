// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGLOADBALANCERLOGEVENT_H
#define HMDCAMERARECORDINGLOADBALANCERLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *numberOfResidents; // ivar: _numberOfResidents
@property (readonly, copy) NSNumber *numberOfRetries; // ivar: _numberOfRetries
@property (readonly, copy) NSNumber *remainingNumberOfJobSlots; // ivar: _remainingNumberOfJobSlots
@property (readonly, copy) NSString *selectedResidentDeviceType; // ivar: _selectedResidentDeviceType
@property (readonly) BOOL selectedResidentHasActiveSessionWithCamera; // ivar: _selectedResidentHasActiveSessionWithCamera
@property (readonly, copy) NSNumber *selectedResidentJobSlots; // ivar: _selectedResidentJobSlots
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams; // ivar: _selectedResidentNumberOfActiveStreams
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots; // ivar: _selectedResidentPartialJobSlots
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel; // ivar: _selectedResidentSystemResourceUsageLevel
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *totalNumberOfJobSlots; // ivar: _totalNumberOfJobSlots


-(id)initWithNumberOfResidents:(id)arg0 numberOfRetries:(id)arg1 totalNumberOfJobSlots:(id)arg2 remainingNumberOfJobSlots:(id)arg3 selectedResidentDeviceType:(id)arg4 selectedResidentNumberOfActiveStreams:(id)arg5 selectedResidentSystemResourceUsageLevel:(id)arg6 selectedResidentJobSlots:(id)arg7 selectedResidentPartialJobSlots:(id)arg8 selectedResidentHasActiveSessionWithCamera:(BOOL)arg9 ;


@end


#endif