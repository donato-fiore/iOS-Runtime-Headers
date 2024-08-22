// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef C2METRIC_H
#define C2METRIC_H


#import <Foundation/Foundation.h>


@interface C2Metric : NSObject



+(id)generateDeviceInfo;
+(id)generateError:(id)arg0 ;
+(id)generateGenericEventWithName:(id)arg0 genericMetricType:(NSInteger)arg1 startTime:(id)arg2 endTime:(id)arg3 attributes:(id)arg4 ;


@end


#endif