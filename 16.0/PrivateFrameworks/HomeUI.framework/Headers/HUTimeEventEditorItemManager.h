// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTIMEEVENTEDITORITEMMANAGER_H
#define HUTIMEEVENTEDITORITEMMANAGER_H

@class HFItemManager, NSSet, HFStaticItem, NSDateComponents, NSMutableDictionary, HFEventBuilder<HFTimeEventBuilder>, HFEventTriggerBuilder;


#import "HUInstructionsItem.h"

@interface HUTimeEventEditorItemManager : HFItemManager

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
@property (readonly, nonatomic) HFEventBuilder<HFTimeEventBuilder> *timeEvent; // ivar: _timeEvent
@property (retain, nonatomic) HFStaticItem *timeOptionItem; // ivar: _timeOptionItem
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)defaultOffsetForSignificantEvent:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithTimeEvent:(id)arg0 triggerBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setDefaultOffset:(id)arg0 forSignificantEvent:(id)arg1 ;
-(void)updateForSignificantEventOffsetChange;


@end


#endif