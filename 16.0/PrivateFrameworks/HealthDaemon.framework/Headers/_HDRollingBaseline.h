// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDROLLINGBASELINE_H
#define _HDROLLINGBASELINE_H

@class HKRollingBaselineConfiguration, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _HDRollingBaseline : NSObject {
    HKRollingBaselineConfiguration *_configuration;
    NSMutableArray *_samples;
    NSMutableArray *_supplementarySamples;
    CGFloat _samplesSum;
    CGFloat _supplementarySamplesSum;
}


@property (readonly, nonatomic) NSInteger additionalSampleCountRequiredToBaseline;
@property (readonly, nonatomic) CGFloat currentBaseline;
@property (readonly, nonatomic) BOOL hasSufficientDataToBaseline;
@property (readonly, nonatomic) CGFloat mostRecentSampleStartTime;
@property (readonly, nonatomic) CGFloat mostRecentSupplementarySampleStartTime;


-(CGFloat)_sum;
-(NSUInteger)_sampleCount;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_assertValidNextStartTime:(CGFloat)arg0 ;
-(void)addNextSampleValue:(CGFloat)arg0 startTime:(CGFloat)arg1 ;
-(void)addSupplementarySampleValue:(CGFloat)arg0 startTime:(CGFloat)arg1 ;
-(void)pruneForNextSampleStartTime:(CGFloat)arg0 ;


@end


#endif