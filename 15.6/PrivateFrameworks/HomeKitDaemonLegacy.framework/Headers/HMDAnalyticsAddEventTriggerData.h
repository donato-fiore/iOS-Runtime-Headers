// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDANALYTICSADDEVENTTRIGGERDATA_H
#define HMDANALYTICSADDEVENTTRIGGERDATA_H

@class HMFObject;


#import "HMDAnalyticsEventTriggerData.h"

@interface HMDAnalyticsAddEventTriggerData : HMFObject

@property (retain, nonatomic) HMDAnalyticsEventTriggerData *eventTrigger; // ivar: _eventTrigger
@property int requestOrigin; // ivar: _requestOrigin
@property unsigned int resultErrorCode; // ivar: _resultErrorCode
@property NSUInteger timestamp; // ivar: _timestamp




@end


#endif