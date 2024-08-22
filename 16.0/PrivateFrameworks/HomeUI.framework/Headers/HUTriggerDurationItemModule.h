// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERDURATIONITEMMODULE_H
#define HUTRIGGERDURATIONITEMMODULE_H

@class HFItemModule, NSSet, NSString, HFItem, HFTriggerDurationSummaryItem, HFItemManager, HFTriggerBuilder;
@protocol HFItemHiding;



@interface HUTriggerDurationItemModule : HFItemModule <HFItemHiding>

 {
    NSSet *_itemProviders;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFItem *durationPickerItem; // ivar: _durationPickerItem
@property (nonatomic) BOOL durationPickerShown; // ivar: _durationPickerShown
@property (retain, nonatomic) HFTriggerDurationSummaryItem *durationSummaryItem; // ivar: _durationSummaryItem
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HFItemManager *itemManager; // ivar: _itemManager
@property (readonly) Class superclass;
@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)_shouldShowDurationItems;
-(id)_buildItemProviders;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_staticItems;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 itemUpdater:(id)arg1 ;
-(id)itemProviders;


@end


#endif