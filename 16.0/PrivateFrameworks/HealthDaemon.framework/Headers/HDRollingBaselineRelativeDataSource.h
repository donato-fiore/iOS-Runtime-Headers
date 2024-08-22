// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDROLLINGBASELINERELATIVEDATASOURCE_H
#define HDROLLINGBASELINERELATIVEDATASOURCE_H

@class HKQuantityType, NSDate;

#import <Foundation/Foundation.h>

#import "HDRollingBaselineRelativeQuantityCalculator.h"
#import "_HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap.h"
#import "HDProfile.h"

@interface HDRollingBaselineRelativeDataSource : NSObject {
    HKQuantityType *_quantityType;
    HDRollingBaselineRelativeQuantityCalculator *_baselineCalculator;
    _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap *_canonicalSourceMap;
    CGFloat _queryPrefetchWindow;
    NSDate *_currentDate;
    unordered_map<NSString *, std::deque<HDRawQuantitySample>, HDStringHash, HDStringEqual, std::allocator<std::pair<NSString *const, std::deque<HDRawQuantitySample>>>> _prefetchedSamplesByBaselineCompatibilityID;
}


@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (copy, nonatomic) id *shouldContinueHandler; // ivar: _shouldContinueHandler


-(BOOL)_couldSampleEverResolveToDeterminateValue:(struct HDRawQuantitySample )arg0 ;
-(BOOL)_primeBaselineCalculatorWithPriorSamplesForSample:(struct HDRawQuantitySample )arg0 baselineCompatibilityID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldContinueWithError:(*id)arg0 ;
-(BOOL)_supplementCalculatorWithSubsequentSamplesForSample:(struct HDRawQuantitySample )arg0 baselineCompatibilityID:(id)arg1 error:(*id)arg2 ;
-(id)_predicateForSamplesStartingWithinDateInterval:(id)arg0 sourceID:(NSInteger)arg1 isIntervalStartDateInclusive:(BOOL)arg2 ;
-(id)computeRelativeValueForSample:(struct HDRawQuantitySample )arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 quantityType:(id)arg1 configuration:(id)arg2 queryPrefetchWindow:(CGFloat)arg3 currentDate:(id)arg4 ;


@end


#endif