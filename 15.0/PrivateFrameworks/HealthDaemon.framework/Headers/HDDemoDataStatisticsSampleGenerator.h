// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEMODATASTATISTICSSAMPLEGENERATOR_H
#define HDDEMODATASTATISTICSSAMPLEGENERATOR_H

@class NSArray;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {
    linear_congruential_engine<unsigned int, 48271, 0, 2147483647> _generator;
    normal_distribution<double> _distribution;
    NSArray *_pseudoRandomDoubles;
}




+(BOOL)supportsSecureCoding;
-(CGFloat)computeNoiseFromTime:(CGFloat)arg0 stdDev:(CGFloat)arg1 ;
-(CGFloat)computeStatisticalTimeFromCurrentTime:(CGFloat)arg0 mean:(CGFloat)arg1 stdDev:(CGFloat)arg2 ;
-(CGFloat)pseudoRandomDoubleFromTime:(CGFloat)arg0 ;
-(CGFloat)randomDoubleFromGenerator;
-(id)_pseudoRandomDoubles;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif