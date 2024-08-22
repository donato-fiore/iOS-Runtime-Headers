// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYSETUPLOGEVENT_H
#define HMDAPPLEMEDIAACCESSORYSETUPLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber, NSError;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly) NSUInteger accessoryAddEndTime; // ivar: _accessoryAddEndTime
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSUInteger accessoryRemoveTime; // ivar: _accessoryRemoveTime
@property (readonly, copy) NSString *accessorySoftwareVersion; // ivar: _accessorySoftwareVersion
@property (readonly, copy) NSString *category; // ivar: _category
@property (readonly) NSUInteger configurationEndTime; // ivar: _configurationEndTime
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger firstSettingTime; // ivar: _firstSettingTime
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger languageSettingTime; // ivar: _languageSettingTime
@property (readonly, copy) NSNumber *retryCount; // ivar: _retryCount
@property (readonly, copy) NSNumber *role; // ivar: _role
@property (readonly) NSUInteger setupEndTime; // ivar: _setupEndTime
@property (readonly, copy) NSError *setupSessionError; // ivar: _setupSessionError
@property (readonly) NSUInteger setupStartTime; // ivar: _setupStartTime
@property (readonly) Class superclass;


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithRole:(NSInteger)arg0 setupStartTime:(NSUInteger)arg1 setupEndTime:(NSUInteger)arg2 accessoryAddEndTime:(NSUInteger)arg3 accessoryRemoveTime:(NSUInteger)arg4 configurationEndTime:(NSUInteger)arg5 setupSessionError:(id)arg6 category:(id)arg7 accessorySoftwareVersion:(id)arg8 retryCount:(NSUInteger)arg9 firstSettingTime:(NSUInteger)arg10 languageSettingTime:(NSUInteger)arg11 ;


@end


#endif