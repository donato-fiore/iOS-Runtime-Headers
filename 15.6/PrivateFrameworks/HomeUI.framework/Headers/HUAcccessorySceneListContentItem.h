// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCCESSORYSCENELISTCONTENTITEM_H
#define HUACCCESSORYSCENELISTCONTENTITEM_H

@class HFItem, HMHome, HFItem<HFServiceLikeItem>;



@interface HUAcccessorySceneListContentItem : HFItem

@property (readonly, nonatomic) NSUInteger contentSource; // ivar: _contentSource
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithContentSource:(NSUInteger)arg0 serviceLikeItem:(id)arg1 home:(id)arg2 ;


@end


#endif