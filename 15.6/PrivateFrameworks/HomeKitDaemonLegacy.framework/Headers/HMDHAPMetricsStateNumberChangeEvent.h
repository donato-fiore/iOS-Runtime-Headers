// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPMETRICSSTATENUMBERCHANGEEVENT_H
#define HMDHAPMETRICSSTATENUMBERCHANGEEVENT_H

@class NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"

@interface HMDHAPMetricsStateNumberChangeEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithAccessory:(id)arg0 ;


@end


#endif