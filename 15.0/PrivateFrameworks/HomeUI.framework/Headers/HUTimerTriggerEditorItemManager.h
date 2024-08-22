// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTIMERTRIGGEREDITORITEMMANAGER_H
#define HUTIMERTRIGGEREDITORITEMMANAGER_H

@class HFItemManager, NSSet, HFStaticItem, NSDateComponents, NSMutableDictionary, HFTimerTriggerBuilder;


#import "HUTriggerConditionEditorItemModule.h"
#import "HUInstructionsItem.h"

@interface HUTimerTriggerEditorItemManager : HFItemManager

@property (retain, nonatomic) HUTriggerConditionEditorItemModule *conditionModule; // ivar: _conditionModule
@property (readonly, nonatomic) NSSet *dateOptionsItems;
@property (retain, nonatomic) HFStaticItem *datePickerItem; // ivar: _datePickerItem
@property (nonatomic) BOOL datePickerShown; // ivar: _datePickerShown
@property (retain, nonatomic) NSDateComponents *defaultFireTimeComponents; // ivar: _defaultFireTimeComponents
@property (retain, nonatomic) HUInstructionsItem *instructionsItem; // ivar: _instructionsItem
@property (retain, nonatomic) HUInstructionsItem *recurrencesInstructionsItem; // ivar: _recurrencesInstructionsItem
@property (retain, nonatomic) HFStaticItem *recurrencesItem; // ivar: _recurrencesItem
@property (readonly, nonatomic) NSMutableDictionary *significantEventToDefaultOffsetMap; // ivar: _significantEventToDefaultOffsetMap
@property (retain, nonatomic) HFStaticItem *sunriseOptionItem; // ivar: _sunriseOptionItem
@property (retain, nonatomic) HFStaticItem *sunsetOptionItem; // ivar: _sunsetOptionItem
@property (retain, nonatomic) HFStaticItem *timeOptionItem; // ivar: _timeOptionItem
@property (readonly, nonatomic) HFTimerTriggerBuilder *timerTriggerBuilder; // ivar: _timerTriggerBuilder


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)defaultOffsetForSignificantEvent:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithTimerTriggerBuilder:(id)arg0 delegate:(id)arg1 ;
-(void)setDefaultOffset:(id)arg0 forSignificantEvent:(id)arg1 ;
-(void)updateForSignificantEventOffsetChange;


@end


#endif