// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIMESERIES_H
#define TIMESERIES_H


#import <Foundation/Foundation.h>

#import "TimeseriesInternal.h"

@interface Timeseries : NSObject

@property (readonly) TimeseriesInternal *underlyingObject; // ivar: _underlyingObject


-(id)init;
-(id)runBinomialTestTimeseriesWithSamples:(id)arg0 sampleTimestamps:(id)arg1 chunkMethod:(id)arg2 minimumSampleSize:(id)arg3 lastTimestampPreviousTest:(id)arg4 significanceLevel:(id)arg5 pHypothesis:(id)arg6 error:(*id)arg7 ;
-(id)runChangeDetectionWithEvents:(id)arg0 test:(id)arg1 lastRun:(id)arg2 ;
-(id)runZTestBinomialProportionsTimeseriesWithSamples:(id)arg0 sampleTimestamps:(id)arg1 chunkMethod:(id)arg2 minimumSampleSize:(id)arg3 lastTimestampPreviousTest:(id)arg4 significanceLevel:(id)arg5 error:(*id)arg6 ;


@end


#endif