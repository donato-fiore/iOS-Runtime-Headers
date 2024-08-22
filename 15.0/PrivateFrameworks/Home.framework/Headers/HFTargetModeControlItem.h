// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFTARGETMODECONTROLITEM_H
#define HFTARGETMODECONTROLITEM_H

@class NSString;
@protocol HFTogglableControlItem;


#import "HFMultiStateControlItem.h"
#import "HFPowerStateControlItem.h"
#import "HFMultiStateValueSet.h"

@interface HFTargetModeControlItem : HFMultiStateControlItem <HFTogglableControlItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFPowerStateControlItem *primaryPowerStateControlItem; // ivar: _primaryPowerStateControlItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetModeCharacteristicType; // ivar: _targetModeCharacteristicType
@property (readonly, nonatomic) HFMultiStateValueSet *targetModeValueSet; // ivar: _targetModeValueSet


-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicType:(id)arg1 possibleValueSet:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg0 targetModeCharacteristicType:(id)arg1 targetModeValueSet:(id)arg2 primaryPowerStateControlItem:(id)arg3 displayResults:(id)arg4 ;
-(id)toggleValue;
-(id)updateWithOptions:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif