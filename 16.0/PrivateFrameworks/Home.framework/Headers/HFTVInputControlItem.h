// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTVINPUTCONTROLITEM_H
#define HFTVINPUTCONTROLITEM_H

@class NSArray;


#import "HFControlItem.h"

@interface HFTVInputControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSArray *inputs; // ivar: _inputs


+(Class)valueClass;
+(id)_inputSourceValueComparatorForTelevisionProfile:(SEL)arg0 ;
+(id)inputCharacteristicTypes;
+(id)readOnlyOptionalInputCharacteristicTypes;
-(BOOL)supportsItemRepresentingServices:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 displayResults:(id)arg1 ;
-(id)readValueAndPopulateStandardResults;
-(id)valueForCharacteristicType:(id)arg0 inBatchReadResponse:(id)arg1 ;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writeValue:(id)arg0 ;


@end


#endif