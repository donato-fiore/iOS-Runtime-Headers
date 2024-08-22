// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPMETRICSSTATENUMBERCHANGEEVENT_H
#define HMDHAPMETRICSSTATENUMBERCHANGEEVENT_H

@class NSString;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"

@interface HMDHAPMetricsStateNumberChangeEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;


-(id)eventName;
-(id)initWithAccessory:(id)arg0 ;


@end


#endif