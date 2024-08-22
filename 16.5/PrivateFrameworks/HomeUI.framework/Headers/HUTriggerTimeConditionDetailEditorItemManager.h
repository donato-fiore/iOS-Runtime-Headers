// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERTIMECONDITIONDETAILEDITORITEMMANAGER_H
#define HUTRIGGERTIMECONDITIONDETAILEDITORITEMMANAGER_H

@class HFItemManager, HFItem, HFTimeRangeCondition;



@interface HUTriggerTimeConditionDetailEditorItemManager : HFItemManager

@property (retain, nonatomic) HFItem *endConditionPickerItem; // ivar: _endConditionPickerItem
@property (retain, nonatomic) HFTimeRangeCondition *rangeCondition; // ivar: _rangeCondition
@property (retain, nonatomic) HFItem *startConditionPickerItem; // ivar: _startConditionPickerItem


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 rangeCondition:(id)arg1 ;
-(id)primitiveConditionForPickerItem:(id)arg0 ;
-(void)setPrimitiveCondition:(id)arg0 forPickerItem:(id)arg1 ;


@end


#endif