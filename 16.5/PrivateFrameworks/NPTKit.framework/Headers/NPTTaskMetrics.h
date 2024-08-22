// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTTASKMETRICS_H
#define NPTTASKMETRICS_H

@class NSURLSessionDataTask, NSURLSessionTaskMetrics;

#import <Foundation/Foundation.h>

#import "NPTMetricResult.h"

@interface NPTTaskMetrics : NSObject

@property (retain, nonatomic) NPTMetricResult *results; // ivar: _results
@property (retain, nonatomic) NSURLSessionDataTask *task; // ivar: _task
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // ivar: _taskMetrics


-(id)init;


@end


#endif