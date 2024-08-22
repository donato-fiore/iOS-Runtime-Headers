// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDVALUEHISTOGRAMCOLLECTIONCALCULATOR_H
#define HDVALUEHISTOGRAMCOLLECTIONCALCULATOR_H

@class HKUnit, NSArray, NSMutableArray, NSDateInterval, NSNumber, NSMutableDictionary, _HKDateIntervalCollection, HKQuantityType;

#import <Foundation/Foundation.h>


@interface HDValueHistogramCollectionCalculator : NSObject {
    HKUnit *_canonicalUnit;
    NSArray *_valueRangesInCanonicalUnit;
    NSMutableArray *_currentIntervalCountsByValueRange;
    NSDateInterval *_currentInterval;
    NSNumber *_currentIntervalIndex;
    NSMutableDictionary *_finalizedHistogramsByDateIntervalIndex;
}


@property (readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection; // ivar: _intervalCollection
@property (readonly, copy, nonatomic) NSArray *quantityRanges; // ivar: _quantityRanges
@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


-(id)initWithQuantityType:(id)arg0 quantityRanges:(id)arg1 intervalCollection:(id)arg2 ;
-(id)result;
-(void)addSampleValue:(CGFloat)arg0 startTime:(CGFloat)arg1 ;


@end


#endif