// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERJOBSTATISTICSHISTOGRAM_H
#define NURENDERJOBSTATISTICSHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface NURenderJobStatisticsHistogram : NSObject

@property (readonly) NSUInteger binCount; // ivar: _binCount
@property (readonly) *NSInteger completeDurationHistogram; // ivar: _completeDurationHistogram
@property (readonly) NSInteger completeDurationHistogramCount; // ivar: _completeDurationHistogramCount
@property (readonly) *NSInteger completeLatencyHistogram; // ivar: _completeLatencyHistogram
@property (readonly) NSInteger completeLatencyHistogramCount; // ivar: _completeLatencyHistogramCount
@property (readonly) CGFloat millisPerBin; // ivar: _millisPerBin
@property (readonly) *NSInteger prepareDurationHistogram; // ivar: _prepareDurationHistogram
@property (readonly) NSInteger prepareDurationHistogramCount; // ivar: _prepareDurationHistogramCount
@property (readonly) *NSInteger prepareLatencyHistogram; // ivar: _prepareLatencyHistogram
@property (readonly) NSInteger prepareLatencyHistogramCount; // ivar: _prepareLatencyHistogramCount
@property (readonly) *NSInteger renderDurationHistogram; // ivar: _renderDurationHistogram
@property (readonly) NSInteger renderDurationHistogramCount; // ivar: _renderDurationHistogramCount
@property (readonly) *NSInteger renderLatencyHistogram; // ivar: _renderLatencyHistogram
@property (readonly) NSInteger renderLatencyHistogramCount; // ivar: _renderLatencyHistogramCount
@property (readonly) *NSInteger totalDurationHistogram; // ivar: _totalDurationHistogram
@property (readonly) NSInteger totalDurationHistogramCount; // ivar: _totalDurationHistogramCount
@property (readonly) *NSInteger totalHistogram; // ivar: _totalHistogram
@property (readonly) NSInteger totalHistogramCount; // ivar: _totalHistogramCount
@property (readonly) *NSInteger totalLatencyHistogram; // ivar: _totalLatencyHistogram
@property (readonly) NSInteger totalLatencyHistogramCount; // ivar: _totalLatencyHistogramCount


-(id)description;
-(id)getPercentiles:(*NSInteger)arg0 numSamples:(NSInteger)arg1 ;
-(id)graphHistogram:(*NSInteger)arg0 label:(id)arg1 ;
-(id)initWithBins:(NSUInteger)arg0 millisPerBin:(CGFloat)arg1 ;
-(void)addStatisticsToHistogram:(id)arg0 ;
-(void)dealloc;


@end


#endif