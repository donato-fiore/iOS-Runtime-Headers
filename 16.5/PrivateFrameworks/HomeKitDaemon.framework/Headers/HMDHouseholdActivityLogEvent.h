// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDACTIVITYLOGEVENT_H
#define HMDHOUSEHOLDACTIVITYLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSArray, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHouseholdActivityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (getter=isActiveDay) BOOL activeDay; // ivar: _activeDay
@property NSUInteger activeDaysBitField; // ivar: _activeDaysBitField
@property NSInteger activeDaysPerMonthCount; // ivar: _activeDaysPerMonthCount
@property NSUInteger activeDeviceCount; // ivar: _activeDeviceCount
@property NSUInteger cameraStreamStartFailureCount; // ivar: _cameraStreamStartFailureCount
@property NSUInteger cameraStreamStartSuccessCount; // ivar: _cameraStreamStartSuccessCount
@property (readonly, nonatomic) NSArray *contributors; // ivar: _contributors
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property NSInteger countOfDaysSinceLastActive; // ivar: _countOfDaysSinceLastActive
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger fetchCameraClipVideoSegmentAssetCount; // ivar: _fetchCameraClipVideoSegmentAssetCount
@property (readonly) NSUInteger hash;
@property NSUInteger numAccessoriesAdded; // ivar: _numAccessoriesAdded
@property NSUInteger numReadFirstPartyApp; // ivar: _numReadFirstPartyApp
@property NSUInteger numReadSiri; // ivar: _numReadSiri
@property NSUInteger numReadThirdPartyApp; // ivar: _numReadThirdPartyApp
@property NSUInteger numScenesAdded; // ivar: _numScenesAdded
@property NSUInteger numScenesUserRun; // ivar: _numScenesUserRun
@property NSUInteger numShortcutsAdded; // ivar: _numShortcutsAdded
@property NSUInteger numShortcutsRun; // ivar: _numShortcutsRun
@property NSUInteger numTriggersAdded; // ivar: _numTriggersAdded
@property NSUInteger numTriggersFired; // ivar: _numTriggersFired
@property NSUInteger numWriteFirstPartyApp; // ivar: _numWriteFirstPartyApp
@property NSUInteger numWriteSiri; // ivar: _numWriteSiri
@property NSUInteger numWriteThirdPartyApp; // ivar: _numWriteThirdPartyApp
@property NSUInteger requestCount; // ivar: _requestCount
@property (readonly) Class superclass;


+(id)coalescedEventFromHouseholdActivityLogEvents:(id)arg0 homeUUID:(id)arg1 contributors:(id)arg2 ;
+(id)logCategory;
-(id)initPopulatedFromDate:(id)arg0 homeUUID:(id)arg1 contributors:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 contributors:(id)arg1 ;
-(id)initWithHomeUUID:(id)arg0 contributors:(id)arg1 ;
-(id)serializedMetric;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif