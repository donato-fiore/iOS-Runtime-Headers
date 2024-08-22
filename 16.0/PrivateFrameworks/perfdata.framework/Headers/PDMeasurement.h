// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDMEASUREMENT_H
#define PDMEASUREMENT_H

@class NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>

#import "PDContainer.h"

@interface PDMeasurement : NSObject

@property (retain, nonatomic) NSString *cachedMetricFilter; // ivar: _cachedMetricFilter
@property (weak, nonatomic) PDContainer *container; // ivar: _container
@property (nonatomic, getter=isContext) BOOL context; // ivar: _context
@property (nonatomic) NSUInteger group; // ivar: _group
@property (readonly, nonatomic) NSUInteger histogramBucketCount;
@property (retain, nonatomic) NSDictionary *labels; // ivar: _labels
@property (nonatomic) BOOL largerBetter; // ivar: _largerBetter
@property (retain, nonatomic) NSNumber *maximum; // ivar: _maximum
@property (retain, nonatomic) NSNumber *mean; // ivar: _mean
@property (retain, nonatomic) NSDictionary *measurement; // ivar: _measurement
@property (retain, nonatomic) NSString *metric; // ivar: _metric
@property (retain, nonatomic) NSNumber *minimum; // ivar: _minimum
@property (readonly, nonatomic) NSUInteger percentileCount;
@property (retain, nonatomic) NSNumber *sampleCount; // ivar: _sampleCount
@property (retain, nonatomic) NSNumber *standardDeviation; // ivar: _standardDeviation
@property (nonatomic, getter=isSummary) BOOL summary; // ivar: _summary
@property (retain, nonatomic) NSString *unitString; // ivar: _unitString
@property (retain, nonatomic) NSNumber *value; // ivar: _value
@property (retain, nonatomic) NSDictionary *variables; // ivar: _variables


-(BOOL)enumerateHistogramBucketsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)enumeratePercentilesWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)isComparableTo:(id)arg0 ;
-(BOOL)isComparableTo:(id)arg0 ignoringNullableVariables:(id)arg1 ;
-(BOOL)isComparableTo:(id)arg0 ignoringVariables:(id)arg1 ;
-(BOOL)isLike:(id)arg0 ;
-(BOOL)matchesMetricFilter:(id)arg0 ;
-(BOOL)matchesVariables:(id)arg0 ignoringMissing:(BOOL)arg1 ;
-(id)description;
-(id)initWithContainer:(id)arg0 dictionary:(id)arg1 group:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)metricFilterIgnoringNullableVariables:(id)arg0 ;
-(id)metricFilterIgnoringVariables:(id)arg0 ;


@end


#endif