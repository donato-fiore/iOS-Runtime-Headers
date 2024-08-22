// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATASTATISTICSSAMPLEGENERATOR_H
#define HDDEMODATASTATISTICSSAMPLEGENERATOR_H

@class NSArray;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {
    linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> _generator;
    normal_distribution<double> _distribution;
    NSArray *_pseudoRandomDoubles;
}




+(BOOL)supportsSecureCoding;
-(CGFloat)computeNoiseFromTime:(CGFloat)arg0 stdDev:(CGFloat)arg1 ;
-(CGFloat)computeStatisticalTimeFromCurrentTime:(CGFloat)arg0 mean:(CGFloat)arg1 stdDev:(CGFloat)arg2 ;
-(CGFloat)pseudoRandomDoubleFromTime:(CGFloat)arg0 ;
-(CGFloat)randomDoubleFromGenerator;
-(CGFloat)randomSampleFromNormalDistributionWithMean:(CGFloat)arg0 stdDev:(CGFloat)arg1 ;
-(id)_pseudoRandomDoubles;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif