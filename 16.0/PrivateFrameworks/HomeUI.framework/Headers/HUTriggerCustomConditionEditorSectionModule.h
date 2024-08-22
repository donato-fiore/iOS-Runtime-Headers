// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERCUSTOMCONDITIONEDITORSECTIONMODULE_H
#define HUTRIGGERCUSTOMCONDITIONEDITORSECTIONMODULE_H

@class HFItemModule, NSString, NSSet, HMHome, HFTransformItemProvider, NSMutableSet, HFConditionItemProvider;
@protocol HUTriggerConditionEditorSectionModule;



@interface HUTriggerCustomConditionEditorSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>



@property (readonly, nonatomic) NSUInteger conditionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *disabledConditions;
@property (readonly, nonatomic) NSSet *enabledConditions;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFTransformItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSMutableSet *mutableDisabledConditions; // ivar: _mutableDisabledConditions
@property (retain, nonatomic) NSMutableSet *mutableEnabledConditions; // ivar: _mutableEnabledConditions
@property (readonly, nonatomic) HFConditionItemProvider *sourceConditionItemProvider; // ivar: _sourceConditionItemProvider
@property (readonly) Class superclass;


-(BOOL)isConditionEnabled:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)conditionForItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemForCondition:(id)arg0 ;
-(void)_buildItemProviders;
-(void)setConditionEnabled:(BOOL)arg0 forCondition:(id)arg1 ;
-(void)updateEnabledConditions:(id)arg0 disabledConditions:(id)arg1 ;


@end


#endif