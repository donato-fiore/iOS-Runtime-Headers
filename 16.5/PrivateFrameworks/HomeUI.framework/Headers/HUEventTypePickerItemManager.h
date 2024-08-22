// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUEVENTTYPEPICKERITEMMANAGER_H
#define HUEVENTTYPEPICKERITEMMANAGER_H

@class HFItemManager, HFStaticItem, HFItem, HFEventTriggerBuilder;



@interface HUEventTypePickerItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *alarmEventItem; // ivar: _alarmEventItem
@property (retain, nonatomic) HFStaticItem *arrivingAtLocationEventItem; // ivar: _arrivingAtLocationEventItem
@property (retain, nonatomic) HFStaticItem *characteristicEventItem; // ivar: _characteristicEventItem
@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem
@property (retain, nonatomic) HFStaticItem *leavingLocationEventItem; // ivar: _leavingLocationEventItem
@property (retain, nonatomic) HFStaticItem *timerEventItem; // ivar: _timerEventItem
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)_hasMinimumRequiredTriggerableServices:(NSUInteger)arg0 ;
-(BOOL)_hasMinimumRequiredTriggeringServices:(NSInteger)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_createCharacteristicItemForSource:(NSUInteger)arg0 ;
-(id)_createLocationItemForType:(NSUInteger)arg0 ;
-(id)_createTimeItem;
-(id)initWithTriggerBuilder:(id)arg0 delegate:(id)arg1 ;


@end


#endif