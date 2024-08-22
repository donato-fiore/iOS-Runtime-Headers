// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFNUMBERVALUECONSTRAINTS_H
#define HFNUMBERVALUECONSTRAINTS_H

@class NSString, NSNumber;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>

#import "HFNumberRange.h"

@interface HFNumberValueConstraints : NSObject <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (readonly, copy, nonatomic) NSNumber *minValue; // ivar: _minValue
@property (readonly, copy, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFNumberRange *validRange;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)_normalizeRangeValue:(id)arg0 withinRange:(id)arg1 ;
-(id)_normalizeStepValue:(id)arg0 withinRange:(id)arg1 ;
-(id)boundedValueForValue:(id)arg0 ;
-(id)init;
-(id)initWithMinValue:(id)arg0 maxValue:(id)arg1 stepValue:(id)arg2 ;
-(id)initWithValidRange:(id)arg0 stepValue:(id)arg1 ;
-(id)normalizedRangeForRange:(id)arg0 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)percentageConstraints;
-(id)percentageConstraintsWithinRange:(id)arg0 ;
-(id)roundedValueForValue:(id)arg0 ;


@end


#endif