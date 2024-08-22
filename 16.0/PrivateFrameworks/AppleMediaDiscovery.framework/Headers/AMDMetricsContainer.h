// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDMETRICSCONTAINER_H
#define AMDMETRICSCONTAINER_H

@class NSMutableDictionary, NSNumber, AMSMetricsEvent;

#import <Foundation/Foundation.h>


@interface AMDMetricsContainer : NSObject

@property (retain) NSMutableDictionary *logData; // ivar: _logData
@property (retain) NSNumber *loggingProbability; // ivar: _loggingProbability
@property (retain, nonatomic) AMSMetricsEvent *metricEvent; // ivar: _metricEvent
@property char verbosity; // ivar: _verbosity


-(id)initWithLevel:(char)arg0 andAction:(id)arg1 andVersion:(id)arg2 andBuild:(id)arg3 andStorefrontId:(id)arg4 withLoggingProbability:(id)arg5 ;


@end


#endif