// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDANALYTICSEVENTTRIGGEREXECUTIONSESSIONDATA_H
#define HMDANALYTICSEVENTTRIGGEREXECUTIONSESSIONDATA_H

@class HMFObject, NSArray, NSString;



@interface HMDAnalyticsEventTriggerExecutionSessionData : HMFObject

@property (copy, nonatomic) NSArray *endEvents; // ivar: _endEvents
@property int executionState; // ivar: _executionState
@property int resultErrorCode; // ivar: _resultErrorCode
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property NSUInteger timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSArray *triggerEvents; // ivar: _triggerEvents




@end


#endif