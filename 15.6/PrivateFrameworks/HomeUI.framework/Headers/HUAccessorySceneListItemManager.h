// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYSCENELISTITEMMANAGER_H
#define HUACCESSORYSCENELISTITEMMANAGER_H

@class HFItemManager, HFItem, HFItem<HFServiceLikeItem>;



@interface HUAccessorySceneListItemManager : HFItemManager

@property (readonly, nonatomic) HFItem *existingScenesContentItem; // ivar: _existingScenesContentItem
@property (readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem
@property (readonly, nonatomic) HFItem *suggestedScenesContentItem; // ivar: _suggestedScenesContentItem


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 serviceLikeItem:(id)arg1 ;


@end


#endif