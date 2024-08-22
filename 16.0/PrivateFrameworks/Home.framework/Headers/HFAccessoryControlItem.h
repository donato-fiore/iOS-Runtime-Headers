// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYCONTROLITEM_H
#define HFACCESSORYCONTROLITEM_H

@class HMAccessory;


#import "HFControlItem.h"

@interface HFAccessoryControlItem : HFControlItem

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory


+(Class)valueClass;
-(BOOL)supportsItemRepresentingServices:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 parentAccessory:(id)arg1 displayResults:(id)arg2 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif