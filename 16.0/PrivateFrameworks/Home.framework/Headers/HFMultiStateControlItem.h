// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMULTISTATECONTROLITEM_H
#define HFMULTISTATECONTROLITEM_H

@class NSString;


#import "HFControlItem.h"
#import "HFMultiStateValueSet.h"

@interface HFMultiStateControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *multiStateCharacteristicType; // ivar: _multiStateCharacteristicType
@property (readonly, copy, nonatomic) HFMultiStateValueSet *possibleValueSet; // ivar: _possibleValueSet


+(Class)valueClass;
+(id)na_identity;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 characteristicType:(id)arg1 possibleValueSet:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg0 multiStateCharacteristicType:(id)arg1 allCharacteristicOptions:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif