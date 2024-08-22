// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPODSETUPLATENCYLOGEVENT_H
#define HMDHOMEPODSETUPLATENCYLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSUInteger accessoryAddProcessedTime; // ivar: _accessoryAddProcessedTime
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSUInteger coreDataFirstCloudImportCompleteTime; // ivar: _coreDataFirstCloudImportCompleteTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger pairingIdentityCreationTime; // ivar: _pairingIdentityCreationTime
@property (readonly, nonatomic) NSUInteger settingsCreationTime; // ivar: _settingsCreationTime
@property (readonly, nonatomic) NSUInteger setupEndTime; // ivar: _setupEndTime
@property (readonly, nonatomic) NSUInteger setupStartTime; // ivar: _setupStartTime
@property (readonly, nonatomic) NSUInteger siriReadinessTime; // ivar: _siriReadinessTime
@property (readonly) Class superclass;


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithSetupStartTime:(NSUInteger)arg0 setupEndTime:(NSUInteger)arg1 settingsCreationTime:(NSUInteger)arg2 pairingIdentityCreationTime:(NSUInteger)arg3 accessoryAddProcessedTime:(NSUInteger)arg4 coreDataFirstCloudImportCompleteTime:(NSUInteger)arg5 siriReadinessTime:(NSUInteger)arg6 ;


@end


#endif