// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSMETRICSIMPRESSIONSEVENT_H
#define SSMETRICSIMPRESSIONSEVENT_H

@class NSArray;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSArray *impressionIdentifiers;


-(id)description;
-(id)init;


@end


#endif