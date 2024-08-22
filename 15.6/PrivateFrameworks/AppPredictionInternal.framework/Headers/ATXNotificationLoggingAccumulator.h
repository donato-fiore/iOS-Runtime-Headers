// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONLOGGINGACCUMULATOR_H
#define ATXNOTIFICATIONLOGGINGACCUMULATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXNotificationLoggingAccumulator : NSObject {
    NSMutableDictionary *_unhandledNotificationReceiveDimensionSets;
    NSMutableDictionary *_summaryMetrics;
}




-(id)_getSummaryMetricForDimensions:(id)arg0 ;
-(id)_popReceiveNotificationDimensionSetForNotificationId:(id)arg0 ;
-(id)init;
-(void)handleNextNotification:(id)arg0 currentDimensionSet:(id)arg1 ;
-(void)logToCoreAnalytics;


@end


#endif