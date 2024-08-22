// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERCONDITIONEDITOREXPANDINGSECTIONMODULE_H
#define HUTRIGGERCONDITIONEDITOREXPANDINGSECTIONMODULE_H

@class HFItemModule, HFCondition, NSString, HMHome, HFStaticItemProvider, NSArray, HFItem;
@protocol HUTriggerConditionEditorSectionModule;



@interface HUTriggerConditionEditorExpandingSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>



@property (retain, nonatomic) HFCondition *condition; // ivar: _condition
@property (readonly, nonatomic) NSUInteger conditionType; // ivar: _conditionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFStaticItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSArray *optionItems; // ivar: _optionItems
@property (retain, nonatomic) HFItem *selectedOptionItem; // ivar: _selectedOptionItem
@property (nonatomic) BOOL showOptions; // ivar: _showOptions
@property (retain, nonatomic) HFItem *showOptionsItem; // ivar: _showOptionsItem
@property (readonly) Class superclass;


+(id)sectionModuleForConditionType:(NSUInteger)arg0 itemUpdater:(id)arg1 home:(id)arg2 ;
-(BOOL)doesOptionItemRequireInitialUserConfiguration:(id)arg0 ;
-(id)buildConditionOptionItems;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)conditionForOptionItem:(id)arg0 ;
-(id)createNoConditionOptionItemWithTitle:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 conditionType:(NSUInteger)arg1 home:(id)arg2 ;
-(id)preferredConditionFromConditions:(id)arg0 ;
-(id)sectionID;
-(id)selectOptionItem:(id)arg0 ;
-(id)selectOptionItemForCondition:(id)arg0 ;
-(id)updateSelectionWithCondition:(id)arg0 ;
-(void)_buildItemProvider;


@end


#endif