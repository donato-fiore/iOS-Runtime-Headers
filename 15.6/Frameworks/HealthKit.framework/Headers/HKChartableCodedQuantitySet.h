// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCHARTABLECODEDQUANTITYSET_H
#define HKCHARTABLECODEDQUANTITYSET_H

@class NSArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKUnit.h"

@interface HKChartableCodedQuantitySet : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *codings; // ivar: _codings
@property (readonly, copy, nonatomic) HKUnit *compatibleUnit;
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSArray *quantities; // ivar: _quantities


+(id)setWithChartableQuantity:(id)arg0 date:(id)arg1 ;
+(id)setWithMedicalCodings:(id)arg0 quantities:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
-(BOOL)isCompatibleWithUnit:(id)arg0 ;
-(CGFloat)maxValueForUnit:(id)arg0 ;
-(CGFloat)maxValueIncludingReferenceRangeForUnit:(id)arg0 ;
-(CGFloat)minValueForUnit:(id)arg0 ;
-(CGFloat)minValueIncludingReferenceRangeForUnit:(id)arg0 ;
-(id)_initWithMedicalCodings:(id)arg0 date:(id)arg1 quantities:(id)arg2 ;
-(id)chartableCodedQuantitySetByChangingDate:(id)arg0 ;
-(id)chartableCodedQuantitySetConvertedToUnit:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)addChartableCodedQuantities:(id)arg0 ;


@end


#endif