// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRERECOMMENDATIONITEMPROVIDER_H
#define HRERECOMMENDATIONITEMPROVIDER_H

@class HFItemProvider, HMHome, NSMutableSet, NSArray;


#import "HRERecommendationEngine.h"

@interface HRERecommendationItemProvider : HFItemProvider

@property (copy, nonatomic) id *configureBlock; // ivar: _configureBlock
@property (nonatomic) NSUInteger engineOptions; // ivar: _engineOptions
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (nonatomic) BOOL firstUpdateComplete; // ivar: _firstUpdateComplete
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HRERecommendationEngine *recommendationEngine; // ivar: _recommendationEngine
@property (retain, nonatomic) NSMutableSet *recommendationItems; // ivar: _recommendationItems
@property (readonly, nonatomic) NSArray *serviceLikeItems; // ivar: _serviceLikeItems
@property (nonatomic) BOOL updatesDisabled; // ivar: _updatesDisabled


+(id)_highestRankRecommendations:(id)arg0 forKeyGenerator:(id)arg1 ;
+(id)filterRecommendations:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 andServiceLikeItems:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;
// -(id)reloadItemsWithRecommendations:(id)arg0 filter:(id)arg1 itemMap:(unk)arg2  ;


@end


#endif