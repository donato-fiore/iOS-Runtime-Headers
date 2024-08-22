// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIANALYTICSNUMBERFIELDSPEC_H
#define TIANALYTICSNUMBERFIELDSPEC_H

@class NSNumber;


#import "TIAnalyticsFieldSpec.h"

@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec

@property (readonly, nonatomic) BOOL isInteger; // ivar: _isInteger
@property (readonly, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (readonly, nonatomic) NSNumber *minValue; // ivar: _minValue
@property (readonly, nonatomic) NSNumber *significantDigits; // ivar: _significantDigits


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 isInteger:(BOOL)arg1 minValue:(id)arg2 maxValue:(id)arg3 significantDigits:(id)arg4 ;


@end


#endif