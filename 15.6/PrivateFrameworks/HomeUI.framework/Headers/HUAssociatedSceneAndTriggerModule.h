// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUASSOCIATEDSCENEANDTRIGGERMODULE_H
#define HUASSOCIATEDSCENEANDTRIGGERMODULE_H

@class HFItemModule, HMHome, HFItem, HFItem<HFServiceLikeItem>, HFStaticItemProvider;



@interface HUAssociatedSceneAndTriggerModule : HFItemModule

@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFItem *scenesItem; // ivar: _scenesItem
@property (readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly, nonatomic) HFItem *triggersItem; // ivar: _triggersItem


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 serviceLikeItem:(id)arg2 context:(NSUInteger)arg3 ;
-(id)itemProviders;


@end


#endif