// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYSETTINGSMETRICSDISPATCHER_H
#define HMACCESSORYSETTINGSMETRICSDISPATCHER_H

@class HMFObject, NSMutableDictionary;


#import "HMCoreAnalyticsMetricEventDispatcher.h"

@interface HMAccessorySettingsMetricsDispatcher : HMFObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_trackingEvents;
}


@property (readonly) HMCoreAnalyticsMetricEventDispatcher *metricEventDispatcher; // ivar: _metricEventDispatcher


-(id)finishTrackingEventWithIdentifier:(id)arg0 ;
-(id)initWithCoreAnalyticsMetricDispatcher:(id)arg0 ;
-(void)startEventWithMessage:(id)arg0 ;
-(void)startTrackingEvent:(id)arg0 withEventIdentifier:(id)arg1 ;
-(void)submitEventWithMessage:(id)arg0 error:(id)arg1 ;


@end


#endif