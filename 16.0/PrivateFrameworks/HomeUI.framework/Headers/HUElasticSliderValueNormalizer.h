// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUELASTICSLIDERVALUENORMALIZER_H
#define HUELASTICSLIDERVALUENORMALIZER_H

@class HFNumberValueConstraints;

#import <Foundation/Foundation.h>

#import "HUElasticSliderValueNormalizationOptions.h"

@interface HUElasticSliderValueNormalizer : NSObject

@property (nonatomic) ? currentValueRange; // ivar: _currentValueRange
@property (nonatomic) BOOL hasSecondaryValue; // ivar: _hasSecondaryValue
@property (retain, nonatomic) HFNumberValueConstraints *maxValueConstraints; // ivar: _maxValueConstraints
@property (retain, nonatomic) HFNumberValueConstraints *minValueConstraints; // ivar: _minValueConstraints
@property (retain, nonatomic) HUElasticSliderValueNormalizationOptions *options; // ivar: _options


-(CGFloat)_rubberBandValue:(CGFloat)arg0 ofType:(NSUInteger)arg1 ;
-(CGFloat)normalizeValue:(CGFloat)arg0 ofType:(NSUInteger)arg1 ;
-(id)_effectiveConstraintsForValueOfType:(NSUInteger)arg0 boundRange:(BOOL)arg1 ;
-(id)_originalConstraintsForValueType:(NSUInteger)arg0 ;
-(id)initWithCurrentValueRange:(struct ? )arg0 hasSecondaryValue:(BOOL)arg1 ;
-(struct ? )normalizeRange:(struct ? )arg0 ;


@end


#endif