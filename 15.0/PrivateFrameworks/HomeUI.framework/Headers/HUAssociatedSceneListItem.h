// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUASSOCIATEDSCENELISTITEM_H
#define HUASSOCIATEDSCENELISTITEM_H

@class HFItem, HMHome, HFItem<HFServiceLikeItem>;



@interface HUAssociatedSceneListItem : HFItem

@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithHome:(id)arg0 serviceLikeItem:(id)arg1 context:(NSUInteger)arg2 ;


@end


#endif