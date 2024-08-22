// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNAMEITEMMODULE_H
#define HUNAMEITEMMODULE_H

@class HFItemModule, HFStaticItemProvider, NSSet, HFTransformItem, HFItem<HFNamingComponentCreating>, HFItemBuilder;



@interface HUNameItemModule : HFItemModule

@property (retain, nonatomic) HFStaticItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSSet *items; // ivar: _items
@property (retain, nonatomic) HFTransformItem *nameAndIconItem; // ivar: _nameAndIconItem
@property (retain, nonatomic) HFItem<HFNamingComponentCreating> *sourceItem; // ivar: _sourceItem
@property (retain, nonatomic) HFItemBuilder *sourceItemBuilder; // ivar: _sourceItemBuilder


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)init;
-(id)initWithItemUpdater:(id)arg0 sourceServiceLikeItem:(id)arg1 itemBuilder:(id)arg2 ;


@end


#endif