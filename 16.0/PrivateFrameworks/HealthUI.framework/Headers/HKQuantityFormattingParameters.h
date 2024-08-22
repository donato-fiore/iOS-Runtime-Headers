// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUANTITYFORMATTINGPARAMETERS_H
#define HKQUANTITYFORMATTINGPARAMETERS_H

@class HKUnit, UIFont;

#import <Foundation/Foundation.h>


@interface HKQuantityFormattingParameters : NSObject

@property (nonatomic) BOOL hasSpaceBetweenValueAndUnit; // ivar: _hasSpaceBetweenValueAndUnit
@property (nonatomic) BOOL omitUnit; // ivar: _omitUnit
@property (nonatomic) NSInteger precision; // ivar: _precision
@property (retain, nonatomic) HKUnit *preferredUnit; // ivar: _preferredUnit
@property (nonatomic) NSInteger significantDigits; // ivar: _significantDigits
@property (nonatomic) NSUInteger timeFormatOptions; // ivar: _timeFormatOptions
@property (retain, nonatomic) UIFont *unitFont; // ivar: _unitFont
@property (nonatomic) BOOL useColor; // ivar: _useColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (nonatomic) NSInteger wheelchairUse; // ivar: _wheelchairUse


-(BOOL)_objectType:(id)arg0 isCategoryWithIdentifier:(id)arg1 ;
-(BOOL)_objectType:(id)arg0 isQuantityWithIdentifier:(id)arg1 ;
-(BOOL)_unitIsFeet:(id)arg0 ;
-(NSInteger)_maximumPrecisionForObjectType:(id)arg0 unit:(id)arg1 value:(CGFloat)arg2 ;
-(id)_sleepFormatForQuantity:(id)arg0 ;
-(id)_standardFormatForQuantity:(id)arg0 unit:(id)arg1 objectType:(id)arg2 ;
-(id)_unitForQuantity:(id)arg0 objectType:(id)arg1 ;
-(id)init;
-(id)unitString:(id)arg0 quantity:(id)arg1 ;
-(id)valueString:(id)arg0 quantity:(id)arg1 ;
-(void)_setFormatter:(id)arg0 maximumSignificantDigits:(NSInteger)arg1 ;


@end


#endif