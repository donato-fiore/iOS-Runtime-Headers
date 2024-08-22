// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSIMPLEINCREMENTALCONTROLITEM_H
#define HFSIMPLEINCREMENTALCONTROLITEM_H

@class NSString, NSNumber;


#import "HFControlItem.h"

@interface HFSimpleIncrementalControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // ivar: _incrementalCharacteristicType
@property (readonly, nonatomic) NSNumber *maxValue;
@property (readonly, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) NSNumber *stepValue;


+(Class)valueClass;
-(id)_metadata;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 characteristicType:(id)arg1 displayResults:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writeValue:(id)arg0 ;


@end


#endif