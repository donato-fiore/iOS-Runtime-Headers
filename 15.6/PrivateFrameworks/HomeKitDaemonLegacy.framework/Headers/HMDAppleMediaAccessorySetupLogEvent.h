// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORYSETUPLOGEVENT_H
#define HMDAPPLEMEDIAACCESSORYSETUPLOGEVENT_H

@class HMMLogEvent, NSString, NSDate, NSNumber, NSDictionary, NSError;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *category; // ivar: _category
@property (readonly, copy) NSDate *configurationEndTime; // ivar: _configurationEndTime
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSDate *firstSettingTime; // ivar: _firstSettingTime
@property (readonly) NSDate *languageSettingTime; // ivar: _languageSettingTime
@property (readonly, copy) NSNumber *retryCount; // ivar: _retryCount
@property (readonly, copy) NSNumber *role; // ivar: _role
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, copy) NSDate *setupEndTime; // ivar: _setupEndTime
@property (readonly, copy) NSError *setupSessionError; // ivar: _setupSessionError
@property (readonly, copy) NSDate *setupStartTime; // ivar: _setupStartTime


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithRole:(NSInteger)arg0 setupStartTime:(id)arg1 setupEndTime:(id)arg2 configurationEndTime:(id)arg3 setupSessionError:(id)arg4 category:(id)arg5 retryCount:(NSUInteger)arg6 firstSettingTime:(id)arg7 languageSettingTime:(id)arg8 ;


@end


#endif