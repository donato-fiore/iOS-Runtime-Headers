// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDEVICEUSAGEACCUMULATOR_H
#define ATXDEVICEUSAGEACCUMULATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ATXModeDimensionSet.h"

@interface ATXDeviceUsageAccumulator : NSObject {
    NSMutableDictionary *_summaryMetrics;
    ATXModeDimensionSet *_lastDimensionSet;
}




-(id)_getSummaryMetricForDimensions:(id)arg0 ;
-(id)init;
-(void)handleEndOfStream:(id)arg0 ;
-(void)handleModeDimensionSetChange:(id)arg0 changeTime:(id)arg1 ;
-(void)handleNextOnInterval:(id)arg0 dimensionSet:(id)arg1 ;
-(void)logToCoreAnalytics;


@end


#endif