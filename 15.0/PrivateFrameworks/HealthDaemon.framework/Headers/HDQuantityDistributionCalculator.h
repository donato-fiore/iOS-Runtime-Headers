// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYDISTRIBUTIONCALCULATOR_H
#define HDQUANTITYDISTRIBUTIONCALCULATOR_H


#import <Foundation/Foundation.h>


@interface HDQuantityDistributionCalculator : NSObject {
    HistogramState _histogramState;
}




-(BOOL)validateDateSequenceForTesting:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 anchorDate:(id)arg2 intervalComponents:(id)arg3 histogramBucketAnchor:(CGFloat)arg4 histogramBucketSize:(CGFloat)arg5 ;
-(id)quantityDistributionsWithUnit:(id)arg0 ;
-(void)addDataPoint:(CGFloat)arg0 startTime:(CGFloat)arg1 endTime:(CGFloat)arg2 ;


@end


#endif