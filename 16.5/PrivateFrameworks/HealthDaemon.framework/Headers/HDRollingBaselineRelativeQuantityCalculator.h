// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDROLLINGBASELINERELATIVEQUANTITYCALCULATOR_H
#define HDROLLINGBASELINERELATIVEQUANTITYCALCULATOR_H

@class NSMutableDictionary, HKRollingBaselineConfiguration;

#import <Foundation/Foundation.h>


@interface HDRollingBaselineRelativeQuantityCalculator : NSObject {
    NSMutableDictionary *_baselineBySourceID;
}


@property (readonly, nonatomic) HKRollingBaselineConfiguration *configuration; // ivar: _configuration


-(BOOL)hasSufficientDataToBaselineSampleWithSourceID:(id)arg0 ;
-(CGFloat)baselineRelativeValueForSampleValue:(CGFloat)arg0 sourceID:(id)arg1 ;
-(CGFloat)mostRecentSampleStartTimeForSourceID:(id)arg0 ;
-(CGFloat)mostRecentSupplementarySampleStartTimeForSourceID:(id)arg0 ;
-(NSInteger)additionalSampleCountRequiredToBaselineSampleWithSourceID:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)addNextSampleValue:(CGFloat)arg0 startTime:(CGFloat)arg1 sourceID:(id)arg2 ;
-(void)addSupplementarySampleValue:(CGFloat)arg0 startTime:(CGFloat)arg1 sourceID:(id)arg2 ;
-(void)pruneForNextSampleStartTime:(CGFloat)arg0 sourceID:(id)arg1 ;


@end


#endif