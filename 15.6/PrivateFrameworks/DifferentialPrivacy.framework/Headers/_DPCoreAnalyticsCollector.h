// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPCOREANALYTICSCOLLECTOR_H
#define _DPCOREANALYTICSCOLLECTOR_H

@protocol _DPMetricsCollector;

#import <Foundation/Foundation.h>


@interface _DPCoreAnalyticsCollector : NSObject <_DPMetricsCollector>





+(id)sharedInstance;
-(void)reportMetricsForEvent:(id)arg0 withMetrics:(id)arg1 ;


@end


#endif