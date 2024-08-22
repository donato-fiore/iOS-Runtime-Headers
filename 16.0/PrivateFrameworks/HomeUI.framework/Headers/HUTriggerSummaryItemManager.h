// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERSUMMARYITEMMANAGER_H
#define HUTRIGGERSUMMARYITEMMANAGER_H

@class HFItemManager, HFItem, HFStaticItem, NSArray, NSSet, HFStaticItemProvider, HFTriggerBuilder;


#import "HUTriggerActionSetsItemModule.h"
#import "HUTriggerConditionEditorItemModule.h"
#import "HUTriggerActionFlow.h"
#import "HUTriggerDurationItemModule.h"
#import "HUTriggerEventsItemModule.h"
#import "HUTriggerMediaItemModule.h"

@interface HUTriggerSummaryItemManager : HFItemManager

@property (retain, nonatomic) HUTriggerActionSetsItemModule *actionsModule; // ivar: _actionsModule
@property (retain, nonatomic) HUTriggerConditionEditorItemModule *conditionModule; // ivar: _conditionModule
@property (retain, nonatomic) HFItem *createActionButtonItem; // ivar: _createActionButtonItem
@property (retain, nonatomic) HUTriggerActionFlow *currentFlow; // ivar: _currentFlow
@property (retain, nonatomic) HFItem *deleteTriggerItem; // ivar: _deleteTriggerItem
@property (retain, nonatomic) HUTriggerDurationItemModule *durationModule; // ivar: _durationModule
@property (retain, nonatomic) HFItem *enableItem; // ivar: _enableItem
@property (retain, nonatomic) HUTriggerEventsItemModule *eventsModule; // ivar: _eventsModule
@property (retain, nonatomic) HUTriggerMediaItemModule *mediaModule; // ivar: _mediaModule
@property (retain, nonatomic) HFStaticItem *namingRowItem; // ivar: _namingRowItem
@property (readonly, nonatomic) NSArray *overviewItemModules;
@property (copy, nonatomic) NSSet *prioritizedAccessories; // ivar: _prioritizedAccessories
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (retain, nonatomic) HFItem *testTriggerItem; // ivar: _testTriggerItem
@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder
@property (retain, nonatomic) HFStaticItemProvider *unsupportedItemProvider; // ivar: _unsupportedItemProvider


-(BOOL)_isInEditMode;
-(BOOL)_shouldShowDeleteItem;
-(BOOL)_shouldShowDurationItems;
-(BOOL)_shouldShowTestItem;
-(BOOL)_showActionSetsInstructionItem;
-(BOOL)_showEnableSwitch;
-(BOOL)_showTriggerSummary;
-(NSInteger)actionSetsSection;
-(NSInteger)serviceActionsSection;
-(NSInteger)unsupportedItemSectionIndex;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_staticItemsForHome:(id)arg0 ;
-(id)_triggerDeleteInstructionItemString;
-(id)_triggerServiceActionsInstructionDescription;
-(id)_triggerTestActionsInstructionDescription;
-(id)_unsupportedTriggers;
-(id)initWithTriggerBuilder:(id)arg0 flow:(id)arg1 delegate:(id)arg2 ;
-(id)instructionSections;
-(id)triggerCurrentDisplayedName;


@end


#endif