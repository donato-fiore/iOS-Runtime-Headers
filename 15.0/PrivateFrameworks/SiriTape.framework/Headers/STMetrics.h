// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMETRICS_H
#define STMETRICS_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface STMetrics : NSObject {
    NSMutableSet *memoryUsageMetricsTypes;
    NSMutableDictionary *performanceMetricsEvents;
}




+(id)sharedMetricsLogger;
-(id)init;
-(void)observeAndLogClientFlowMemoryUsageMetrics;
-(void)observeAndLogClientFlowPerformanceMetrics;


@end


#endif