// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPROGRAMMABLESWITCHEVENTOPTIONITEM_H
#define HUPROGRAMMABLESWITCHEVENTOPTIONITEM_H

@class HMCharacteristic;
@protocol HFCharacteristicValueSource;


#import "HUCharacteristicEventOptionItem.h"

@interface HUProgrammableSwitchEventOptionItem : HUCharacteristicEventOptionItem

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)_buildOutTriggerEditorOptionsForCharacteristic:(id)arg0 triggerValue:(id)arg1 latestResults:(id)arg2 ;
+(id)_longformTitleForCharacteristic:(id)arg0 latestResults:(id)arg1 ;
+(id)_sectionTitleForCharacteristic:(id)arg0 latestResults:(id)arg1 ;
+(id)_shortformTitleForLatestResults:(id)arg0 ;
+(id)_triggerBuilderContextAwareTitleForCharacteristic:(id)arg0 latestResults:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithCharacteristic:(id)arg0 triggerValue:(id)arg1 valueSource:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg0 thresholdValueRange:(id)arg1 ;
-(id)initWithCharacteristics:(id)arg0 triggerValue:(id)arg1 ;
-(id)initWithCharacteristics:(id)arg0 triggerValueRange:(id)arg1 ;


@end


#endif