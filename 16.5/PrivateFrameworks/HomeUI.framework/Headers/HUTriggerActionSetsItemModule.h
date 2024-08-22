// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERACTIONSETSITEMMODULE_H
#define HUTRIGGERACTIONSETSITEMMODULE_H

@class HFItemModule, NSSet, HFStaticItem, NSString, HFTriggerBuilder;
@protocol HFItemHiding;


#import "HUTriggerActionFlow.h"
#import "HUShortcutItem.h"

@interface HUTriggerActionSetsItemModule : HFItemModule <HFItemHiding>

 {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HFStaticItem *actionSetsGridItem; // ivar: _actionSetsGridItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HUTriggerActionFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *prioritizedAccessories; // ivar: _prioritizedAccessories
@property (retain, nonatomic) HFStaticItem *prioritizedServiceActionsGridItem; // ivar: _prioritizedServiceActionsGridItem
@property (retain, nonatomic) HFStaticItem *serviceActionsGridItem; // ivar: _serviceActionsGridItem
@property (retain, nonatomic) HUShortcutItem *shortcutItem; // ivar: _shortcutItem
@property (readonly, nonatomic) BOOL shouldShowPrioritizedActions;
@property (readonly) Class superclass;
@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)prioritizedAccessoriesContainsMediaProfiles:(id)arg0 ;
-(BOOL)prioritizedAccessoriesContainsServices:(id)arg0 ;
-(id)_buildItemProviders;
-(id)_itemsToHideForStandardTriggerInSet:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_staticItems;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 flow:(id)arg1 itemUpdater:(id)arg2 ;
-(id)itemProviders;


@end


#endif