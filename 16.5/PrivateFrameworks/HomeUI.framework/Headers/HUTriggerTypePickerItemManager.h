// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERTYPEPICKERITEMMANAGER_H
#define HUTRIGGERTYPEPICKERITEMMANAGER_H

@class HFItemManager, HFStaticItem, HFItemModule;


#import "HUInstructionsItem.h"

@interface HUTriggerTypePickerItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *alarmTriggerItem; // ivar: _alarmTriggerItem
@property (retain, nonatomic) HFStaticItem *arrivingAtLocationTriggerItem; // ivar: _arrivingAtLocationTriggerItem
@property (retain, nonatomic) HFStaticItem *characteristicTriggerItem; // ivar: _characteristicTriggerItem
@property (retain, nonatomic) HFStaticItem *customAutomationItem; // ivar: _customAutomationItem
@property (retain, nonatomic) HUInstructionsItem *eventsInstructionsItem; // ivar: _eventsInstructionsItem
@property (retain, nonatomic) HFStaticItem *leavingLocationTriggerItem; // ivar: _leavingLocationTriggerItem
@property (nonatomic) BOOL showSuggestedAutomations; // ivar: _showSuggestedAutomations
@property (retain, nonatomic) HFItemModule *suggestedAutomationsModule; // ivar: _suggestedAutomationsModule
@property (retain, nonatomic) HUInstructionsItem *suggestionsInstructionsItem; // ivar: _suggestionsInstructionsItem
@property (retain, nonatomic) HFStaticItem *timerTriggerItem; // ivar: _timerTriggerItem


-(BOOL)_hasMinimumRequiredTriggerableServices:(NSUInteger)arg0 ;
-(BOOL)_hasMinimumRequiredTriggeringServices:(NSInteger)arg0 ;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_createCharacteristicItemForSource:(NSUInteger)arg0 ;
-(id)_createCustomItem;
-(id)_createLocationItemForType:(NSUInteger)arg0 ;
-(id)_createTimeItem;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif