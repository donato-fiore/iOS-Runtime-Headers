// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONUSERMETRICSLOG_H
#define ATXACTIONUSERMETRICSLOG_H

@protocol ATXUserMetricsLog;

#import <Foundation/Foundation.h>

#import "ATXUserMetricsPBActionPredictionsMetricsLogEntry.h"

@interface ATXActionUserMetricsLog : NSObject <ATXUserMetricsLog>

 {
    ATXUserMetricsPBActionPredictionsMetricsLogEntry *_metric;
}




-(CGFloat)enrollmentPeriod;
-(CGFloat)enrollmentRate;
-(id)getPBCodableWithUserId:(id)arg0 ;
-(id)initWithActionResponse:(id)arg0 abGroup:(id)arg1 rankOfFirstEngagement:(id)arg2 currentCalendar:(id)arg3 ;
-(id)scheme;


@end


#endif