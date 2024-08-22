// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERTIMECONDITIONEDITORSECTIONMODULE_H
#define HUTRIGGERTIMECONDITIONEDITORSECTIONMODULE_H

@class HFItem, HFTransformItem, NSArray;


#import "HUTriggerConditionEditorExpandingSectionModule.h"

@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule

@property (retain, nonatomic) HFItem *anyTimeOptionItem; // ivar: _anyTimeOptionItem
@property (retain, nonatomic) HFTransformItem *customOptionItem; // ivar: _customOptionItem
@property (retain, nonatomic) HFTransformItem *onlyDayOptionItem; // ivar: _onlyDayOptionItem
@property (retain, nonatomic) HFTransformItem *onlyNightOptionItem; // ivar: _onlyNightOptionItem
@property (readonly, nonatomic) NSArray *optionItems;
@property (retain, nonatomic) HFTransformItem *specificTimesOptionItem; // ivar: _specificTimesOptionItem


-(BOOL)conditionIsDisabled;
-(BOOL)doesOptionItemRequireInitialUserConfiguration:(id)arg0 ;
-(id)_conditionItemForType:(NSUInteger)arg0 ;
-(id)_createConditionItemForType:(NSUInteger)arg0 ;
-(id)buildConditionOptionItems;
-(id)conditionForOptionItem:(id)arg0 ;
-(id)conditionTitle;
-(id)noConditionSummaryTitle;
-(id)preferredConditionFromConditions:(id)arg0 ;
-(id)selectOptionItemForCondition:(id)arg0 ;


@end


#endif