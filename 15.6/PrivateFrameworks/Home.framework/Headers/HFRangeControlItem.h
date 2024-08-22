// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFRANGECONTROLITEM_H
#define HFRANGECONTROLITEM_H

@class NSString, NSNumber, NSSet;


#import "HFControlItem.h"
#import "HFNumberValueConstraints.h"

@interface HFRangeControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *maximumCharacteristicType; // ivar: _maximumCharacteristicType
@property (readonly, copy, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) HFNumberValueConstraints *maximumValueConstraints;
@property (readonly, copy, nonatomic) NSString *minimumCharacteristicType; // ivar: _minimumCharacteristicType
@property (readonly, copy, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) HFNumberValueConstraints *minimumValueConstraints;
@property (readonly, copy, nonatomic) NSNumber *stepValue;
@property (readonly, copy, nonatomic) NSSet *targetCharacteristicTypes; // ivar: _targetCharacteristicTypes
@property (readonly, nonatomic) HFNumberValueConstraints *targetValueConstraints;


+(BOOL)_hasWritableCharacteristicsOfType:(id)arg0 valueSource:(id)arg1 ;
+(Class)valueClass;
+(id)readOnlyCharacteristicTypes;
-(NSUInteger)rangeModeWithCharacteristicValuesKeyedByType:(id)arg0 ;
-(id)_targetCharacteristicTypeMetadataWithCharacteristicValuesKeyedByType:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 targetCharacteristicTypes:(id)arg1 minimumCharacteristicType:(id)arg2 maximumCharacteristicType:(id)arg3 displayResults:(id)arg4 ;
-(id)numberValueFormatter;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif