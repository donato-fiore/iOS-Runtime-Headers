// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHARACTERISTICEVENTOPTIONITEM_H
#define HUCHARACTERISTICEVENTOPTIONITEM_H

@class HFItem, NSSet, HMCharacteristic, NSNumber, HMNumberRange, NSArray;
@protocol NSCopying;


#import "HUCharacteristicEventOptionItem.h"

@interface HUCharacteristicEventOptionItem : HFItem

@property (readonly, nonatomic) NSSet *characteristics; // ivar: _characteristics
@property (retain, nonatomic) HUCharacteristicEventOptionItem *childItem; // ivar: _childItem
@property (readonly, copy, nonatomic) HMCharacteristic *mainCharacteristic;
@property (readonly, nonatomic) id *representativeTriggerValue;
@property (retain, nonatomic) NSNumber *thresholdValue; // ivar: _thresholdValue
@property (readonly, copy, nonatomic) HMNumberRange *thresholdValueRange; // ivar: _thresholdValueRange
@property (readonly, copy, nonatomic) NSObject<NSCopying> *triggerValue; // ivar: _triggerValue
@property (readonly, copy, nonatomic) HMNumberRange *triggerValueRange; // ivar: _triggerValueRange
@property (readonly, copy, nonatomic) HMNumberRange *triggerValueRangeByApplyingThreshold;
@property (readonly, copy, nonatomic) NSArray *validTriggerValues;
@property (readonly, copy, nonatomic) NSArray *visibleTriggerValues;


-(BOOL)isValidThresholdValue:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithCharacteristics:(id)arg0 thresholdValueRange:(id)arg1 ;
-(id)initWithCharacteristics:(id)arg0 triggerValue:(id)arg1 ;
-(id)initWithCharacteristics:(id)arg0 triggerValueRange:(id)arg1 ;
-(id)localizedDescriptionForThresholdValue:(id)arg0 ;
-(id)localizedListDescriptionForThresholdValue:(id)arg0 ;


@end


#endif