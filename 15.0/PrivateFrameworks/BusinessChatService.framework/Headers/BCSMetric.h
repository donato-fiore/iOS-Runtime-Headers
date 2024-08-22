// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSMETRIC_H
#define BCSMETRIC_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BCSMetric : NSObject {
    NSArray *_postProcessingMetricHandlers;
    id *_context;
}


@property (readonly, nonatomic) NSInteger metricType; // ivar: _metricType


+(BOOL)isUsingExpensiveNetwork;
-(void)submitForPostProcessing;


@end


#endif