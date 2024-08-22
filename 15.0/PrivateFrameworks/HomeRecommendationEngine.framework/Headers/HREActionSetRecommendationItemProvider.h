// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HREACTIONSETRECOMMENDATIONITEMPROVIDER_H
#define HREACTIONSETRECOMMENDATIONITEMPROVIDER_H

@class HFItemProvider, HMHome, NSArray, HFTransformItemProvider;


#import "HRERecommendationItemProvider.h"

@interface HREActionSetRecommendationItemProvider : HFItemProvider

@property (nonatomic) NSUInteger engineOptions;
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HRERecommendationItemProvider *recommendationProvider; // ivar: _recommendationProvider
@property (readonly, nonatomic) NSArray *serviceLikeItems; // ivar: _serviceLikeItems
@property (retain, nonatomic) HFTransformItemProvider *transformItemProvider; // ivar: _transformItemProvider


-(id)initWithHome:(id)arg0 andServiceLikeItems:(id)arg1 ;
-(id)items;
-(id)reloadItems;
-(id)suggestionItemTransformingRecommendationItem:(id)arg0 ;


@end


#endif