// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTRIGGERCONDITIONSUMMARYITEM_H
#define HUTRIGGERCONDITIONSUMMARYITEM_H

@class HFItem, NSArray, HMHome;



@interface HUTriggerConditionSummaryItem : HFItem

@property (readonly, nonatomic) NSArray *conditions; // ivar: _conditions
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithConditions:(id)arg0 home:(id)arg1 ;


@end


#endif