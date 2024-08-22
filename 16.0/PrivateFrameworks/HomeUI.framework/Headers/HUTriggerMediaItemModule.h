// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERMEDIAITEMMODULE_H
#define HUTRIGGERMEDIAITEMMODULE_H

@class HFItemModule, NSSet, NSString, HFItem, HFTriggerBuilder;
@protocol HFItemHiding;



@interface HUTriggerMediaItemModule : HFItemModule <HFItemHiding>

 {
    NSSet *_itemProviders;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *mediaRowItem; // ivar: _mediaRowItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_staticItems;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 itemUpdater:(id)arg1 ;
-(id)itemProviders;


@end


#endif