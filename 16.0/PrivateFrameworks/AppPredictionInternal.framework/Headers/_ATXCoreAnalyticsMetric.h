// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXCOREANALYTICSMETRIC_H
#define _ATXCOREANALYTICSMETRIC_H


#import <Foundation/Foundation.h>

#import "_ATXCoreAnalyticsDimensionSet.h"

@interface _ATXCoreAnalyticsMetric : NSObject

@property (readonly, nonatomic) _ATXCoreAnalyticsDimensionSet *dimensionSet; // ivar: _dimensionSet


-(id)coreAnalyticsDictionary;
-(id)coreAnalyticsDictionaryWithDimensions;
-(id)init;
-(id)initWithDimensions:(id)arg0 ;
-(id)metricName;
-(void)logToCoreAnalytics;


@end


#endif