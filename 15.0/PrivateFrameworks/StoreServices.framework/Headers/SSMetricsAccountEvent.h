// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSMETRICSACCOUNTEVENT_H
#define SSMETRICSACCOUNTEVENT_H

@class NSString;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsAccountEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *accountEventType;


-(id)init;


@end


#endif