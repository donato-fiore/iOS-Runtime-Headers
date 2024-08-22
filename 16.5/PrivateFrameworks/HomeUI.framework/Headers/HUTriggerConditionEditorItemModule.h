// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERCONDITIONEDITORITEMMODULE_H
#define HUTRIGGERCONDITIONEDITORITEMMODULE_H

@class HFItemModule, HFConditionCollection, NSSet, HMHome;


#import "HUTriggerCustomConditionEditorSectionModule.h"
#import "HUTriggerConditionEditorExpandingSectionModule.h"

@interface HUTriggerConditionEditorItemModule : HFItemModule

@property (readonly, nonatomic) HFConditionCollection *conditionCollection; // ivar: _conditionCollection
@property (retain, nonatomic) HUTriggerCustomConditionEditorSectionModule *customConditionsModule; // ivar: _customConditionsModule
@property (readonly, nonatomic) NSSet *disallowedConditionTypes; // ivar: _disallowedConditionTypes
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *locationConditionModule; // ivar: _locationConditionModule
@property (retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *timeConditionModule; // ivar: _timeConditionModule


-(BOOL)_isConditionOptionItem:(id)arg0 ofType:(NSUInteger)arg1 ;
-(BOOL)doesConditionOptionItemRequireInitialConfiguration:(id)arg0 ;
-(BOOL)isConditionOptionItem:(id)arg0 ;
-(BOOL)isCustomConditionSwitchItem:(id)arg0 ;
-(BOOL)isShowConditionOptionsItem:(id)arg0 ;
-(BOOL)shouldShowConditionOptionsForType:(NSUInteger)arg0 ;
-(NSUInteger)conditionTypeForItem:(id)arg0 ;
-(id)_allSectionModules;
-(id)_expandingSectionModuleForConditionType:(NSUInteger)arg0 ;
-(id)_expandingSectionModules;
-(id)_moduleForConditionOptionItem:(id)arg0 ;
-(id)_sectionModuleForItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)conditionForOptionItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 conditionCollection:(id)arg2 disallowedConditionTypes:(id)arg3 ;
-(void)_buildItemProviders;
-(void)_reloadConditionForExpandingSectionModule:(id)arg0 remainingConditions:(id)arg1 ;
-(void)_reloadConditionsFromConditionCollection;
-(void)setCustomConditionEnabled:(BOOL)arg0 forItem:(id)arg1 ;
-(void)setSelectedConditionOptionItem:(id)arg0 forType:(NSUInteger)arg1 ;
-(void)setShowConditionOptions:(BOOL)arg0 forType:(NSUInteger)arg1 ;
-(void)updateCondition:(id)arg0 forOptionItem:(id)arg1 ;


@end


#endif