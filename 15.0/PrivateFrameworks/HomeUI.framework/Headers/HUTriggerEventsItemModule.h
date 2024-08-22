// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGEREVENTSITEMMODULE_H
#define HUTRIGGEREVENTSITEMMODULE_H

@class HFItemModule, NSSet, HFItem, NSString, HFStaticItemProvider, HFTriggerBuilder, HFEventBuilderItemProvider;
@protocol HFItemHiding;


#import "HUTriggerBuilderItem.h"

@interface HUTriggerEventsItemModule : HFItemModule <HFItemHiding>

 {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HFItem *addEventButtonItem; // ivar: _addEventButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideAddEventButton; // ivar: _hideAddEventButton
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder
@property (retain, nonatomic) HUTriggerBuilderItem *triggerBuilderItem; // ivar: _triggerBuilderItem
@property (retain, nonatomic) HFEventBuilderItemProvider *triggerEventsItemProvider; // ivar: _triggerEventsItemProvider


-(id)_buildItemProviders;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 itemUpdater:(id)arg1 ;
-(id)itemProviders;


@end


#endif