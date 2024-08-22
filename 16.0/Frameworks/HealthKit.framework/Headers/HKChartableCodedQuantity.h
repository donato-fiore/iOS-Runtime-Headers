// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCHARTABLECODEDQUANTITY_H
#define HKCHARTABLECODEDQUANTITY_H

@class NSArray, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKCodedQuantity.h"
#import "HKQuantity.h"

@interface HKChartableCodedQuantity : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *codings; // ivar: _codings
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) BOOL hasRange;
@property (readonly, nonatomic) BOOL isInRange;
@property (copy, nonatomic) HKCodedQuantity *originalCodedQuantity; // ivar: _originalCodedQuantity
@property (copy, nonatomic) HKCodedQuantity *originalRangeHighCodedQuantity; // ivar: _originalRangeHighCodedQuantity
@property (copy, nonatomic) HKCodedQuantity *originalRangeLowCodedQuantity; // ivar: _originalRangeLowCodedQuantity
@property (readonly, copy, nonatomic) HKQuantity *quantity; // ivar: _quantity
@property (readonly, copy, nonatomic) NSNumber *rangeHigh; // ivar: _rangeHigh
@property (readonly, copy, nonatomic) NSNumber *rangeLow; // ivar: _rangeLow


+(id)_valueFromCodedQuantity:(id)arg0 inUnit:(id)arg1 error:(*id)arg2 ;
+(id)chartableCodedQuantityWithCodings:(id)arg0 originalCodedQuantity:(id)arg1 originalRangeLowCodedQuantity:(id)arg2 originalRangeHighCodedQuantity:(id)arg3 error:(*id)arg4 ;
+(id)converter;
-(BOOL)isCompatibleWithUnit:(id)arg0 ;
-(CGFloat)doubleValueForUnit:(id)arg0 ;
-(id)chartableCodedQuantityInUnit:(id)arg0 adoptUnitIfNullUnit:(BOOL)arg1 error:(*id)arg2 ;
-(id)chartableCodedQuantityInUnit:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCodings:(id)arg0 quantity:(id)arg1 rangeLow:(id)arg2 rangeHigh:(id)arg3 ;


@end


#endif