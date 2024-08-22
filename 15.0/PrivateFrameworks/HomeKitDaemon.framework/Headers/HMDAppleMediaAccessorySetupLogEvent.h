// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYSETUPLOGEVENT_H
#define HMDAPPLEMEDIAACCESSORYSETUPLOGEVENT_H

@class HMMLogEvent, NSString, NSDate, NSNumber, NSError;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *category; // ivar: _category
@property (readonly, copy) NSDate *configurationEndTime; // ivar: _configurationEndTime
@property (readonly, copy) NSNumber *retryCount; // ivar: _retryCount
@property (readonly, copy) NSNumber *role; // ivar: _role
@property (readonly, copy) NSDate *setupEndTime; // ivar: _setupEndTime
@property (readonly, copy) NSError *setupSessionError; // ivar: _setupSessionError
@property (readonly, copy) NSDate *setupStartTime; // ivar: _setupStartTime


+(BOOL)submitEventWithHistogrammedCommonConfigurationDimensions;
-(id)eventName;
-(id)initWithRole:(NSInteger)arg0 setupStartTime:(id)arg1 setupEndTime:(id)arg2 configurationEndTime:(id)arg3 setupSessionError:(id)arg4 category:(id)arg5 retryCount:(NSUInteger)arg6 ;
-(id)serializedEvent;


@end


#endif