// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDANALYTICSTRIGGEREVENTDATA_H
#define HMDANALYTICSTRIGGEREVENTDATA_H

@class HMFObject;


#import "HMDAnalyticsCalendarEventData.h"
#import "HMDAnalyticsCharacteristicEventData.h"
#import "HMDAnalyticsCharacteristicThresholdEventData.h"
#import "HMDAnalyticsDurationEventData.h"
#import "HMDAnalyticsLocationEventData.h"
#import "HMDAnalyticsPresenceEventData.h"
#import "HMDAnalyticsSignificantTimeEventData.h"

@interface HMDAnalyticsTriggerEventData : HMFObject

@property (retain, nonatomic) HMDAnalyticsCalendarEventData *calendarEvent; // ivar: _calendarEvent
@property (retain, nonatomic) HMDAnalyticsCharacteristicEventData *charEvent; // ivar: _charEvent
@property (retain, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *charThresholdEvent; // ivar: _charThresholdEvent
@property (retain, nonatomic) HMDAnalyticsDurationEventData *durationEvent; // ivar: _durationEvent
@property (nonatomic) BOOL endEvent; // ivar: _endEvent
@property (retain, nonatomic) HMDAnalyticsLocationEventData *locationEvent; // ivar: _locationEvent
@property (retain, nonatomic) HMDAnalyticsPresenceEventData *presenceEvent; // ivar: _presenceEvent
@property (retain, nonatomic) HMDAnalyticsSignificantTimeEventData *significantTimeEvent; // ivar: _significantTimeEvent
@property (retain, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *thresholdEvent; // ivar: _thresholdEvent




@end


#endif