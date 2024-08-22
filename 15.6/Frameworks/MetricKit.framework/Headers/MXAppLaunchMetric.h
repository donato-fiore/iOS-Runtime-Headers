// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXAPPLAUNCHMETRIC_H
#define MXAPPLAUNCHMETRIC_H



#import "MXMetric.h"
#import "MXHistogram.h"

@interface MXAppLaunchMetric : MXMetric

@property (readonly) MXHistogram *histogrammedApplicationResumeTime; // ivar: _histogrammedApplicationResumeTime
@property (readonly) MXHistogram *histogrammedOptimizedTimeToFirstDraw; // ivar: _histogrammedOptimizedTimeToFirstDraw
@property (readonly) MXHistogram *histogrammedTimeToFirstDraw; // ivar: _histogrammedTimeToFirstDraw


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLaunchTimeData:(id)arg0 withResumeTimeData:(id)arg1 ;
-(id)initWithLaunchTimeData:(id)arg0 withResumeTimeData:(id)arg1 withActivationTimeData:(id)arg2 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif