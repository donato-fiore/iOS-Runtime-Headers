// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HREACTIONSETRECOMMENDATIONITEM_H
#define HREACTIONSETRECOMMENDATIONITEM_H

@class HFItem, HFItem<HFServiceLikeItem>;


#import "HREActionSetRecommendation.h"
#import "HRERecommendationItem.h"

@interface HREActionSetRecommendationItem : HFItem

@property (readonly, nonatomic) HREActionSetRecommendation *recommendation;
@property (readonly, nonatomic) HRERecommendationItem *recommendationItem; // ivar: _recommendationItem
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithRecommendationItem:(id)arg0 ;


@end


#endif