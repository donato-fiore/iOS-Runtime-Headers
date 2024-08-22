// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHARACTERISTICEVENTITEMMANAGER_H
#define HUCHARACTERISTICEVENTITEMMANAGER_H

@class HFItemManager, HFItem, HFCharacteristicEventBuilderItem, HFItem<HFServiceVendor>, HFStaticItemProvider, HFEventTriggerBuilder;


#import "HUTriggerConditionEditorItemModule.h"
#import "HUInstructionsItem.h"
#import "HUCharacteristicEventOptionProvider.h"

@interface HUCharacteristicEventItemManager : HFItemManager

@property (retain, nonatomic) HFItem *activeOptionItem; // ivar: _activeOptionItem
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionModule; // ivar: _conditionModule
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem; // ivar: _eventBuilderItem
@property (retain, nonatomic) HUInstructionsItem *instructionsItem; // ivar: _instructionsItem
@property (retain, nonatomic) HUCharacteristicEventOptionProvider *optionProvider; // ivar: _optionProvider
@property (retain, nonatomic) HFItem *serviceNameItem; // ivar: _serviceNameItem
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem; // ivar: _serviceVendingItem
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(id)_optionItemComparator:(SEL)arg0 ;
+(id)_titleForItemSection:(id)arg0 ;
+(id)serviceVendorItemForEventBuilderItem:(id)arg0 inHome:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 eventBuilderItem:(id)arg1 delegate:(id)arg2 ;
-(id)optionItems;


@end


#endif