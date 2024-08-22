// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERLOCATIONCONDITIONEDITORSECTIONMODULE_H
#define HUTRIGGERLOCATIONCONDITIONEDITORSECTIONMODULE_H

@class HFItem, HFTransformItem, NSString;
@protocol HFLocationManagerObserver;


#import "HUTriggerConditionEditorExpandingSectionModule.h"

@interface HUTriggerLocationConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule <HFLocationManagerObserver>



@property (retain, nonatomic) HFItem *anyLocationOptionItem; // ivar: _anyLocationOptionItem
@property (retain, nonatomic) HFTransformItem *anyUserAtHomeOptionItem; // ivar: _anyUserAtHomeOptionItem
@property (retain, nonatomic) HFTransformItem *currentUserAtHomeOptionItem; // ivar: _currentUserAtHomeOptionItem
@property (retain, nonatomic) HFTransformItem *currentUserNotAtHomeOptionItem; // ivar: _currentUserNotAtHomeOptionItem
@property (retain, nonatomic) HFTransformItem *customOptionItem; // ivar: _customOptionItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFTransformItem *noUserAtHomeOptionItem; // ivar: _noUserAtHomeOptionItem
@property (readonly) Class superclass;


-(BOOL)conditionIsDisabled;
-(id)_conditionItemForPresenceEvent:(id)arg0 ;
-(id)_createConditionItemForPresenceEventType:(NSUInteger)arg0 userType:(NSUInteger)arg1 ;
-(id)buildConditionOptionItems;
-(id)conditionForOptionItem:(id)arg0 ;
-(id)conditionTitle;
-(id)initWithItemUpdater:(id)arg0 conditionType:(NSUInteger)arg1 home:(id)arg2 ;
-(id)noConditionSummaryTitle;
-(id)preferredConditionFromConditions:(id)arg0 ;
-(id)selectOptionItemForCondition:(id)arg0 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif