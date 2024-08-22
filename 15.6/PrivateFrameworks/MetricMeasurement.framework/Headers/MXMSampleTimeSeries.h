// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMSAMPLETIMESERIES_H
#define MXMSAMPLETIMESERIES_H



#import "MXMSampleSet.h"
#import "MXMSampleTimeSeries.h"

@interface MXMSampleTimeSeries : MXMSampleSet {
    MXMSampleTimeSeries *_time;
}




-(id)init;
-(id)initWithAbsoluteTimeSeries:(*NSUInteger)arg0 length:(NSUInteger)arg1 ;
-(id)initWithContinuousTimeSeries:(*NSUInteger)arg0 length:(NSUInteger)arg1 ;
-(id)initWithTimeSeries:(*CGFloat)arg0 tag:(id)arg1 unit:(id)arg2 length:(NSUInteger)arg3 ;
-(id)timeIndex;
-(void)_appendAbsoluteTime:(NSUInteger)arg0 ;


@end


#endif