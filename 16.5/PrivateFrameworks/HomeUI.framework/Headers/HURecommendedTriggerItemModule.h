// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HURECOMMENDEDTRIGGERITEMMODULE_H
#define HURECOMMENDEDTRIGGERITEMMODULE_H

@class HFItemModule, NSString, HMHome, HFStaticItem, HRERecommendationItemProvider;
@protocol HFItemHiding;



@interface HURecommendedTriggerItemModule : HFItemModule <HFItemHiding>



@property (copy, nonatomic) id *configureBlock; // ivar: _configureBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger engineOptions; // ivar: _engineOptions
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSectionHeaderTitle; // ivar: _hideSectionHeaderTitle
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSInteger maximumNumberOfShownRecommendations; // ivar: _maximumNumberOfShownRecommendations
@property (retain, nonatomic) HFStaticItem *moreButtonItem; // ivar: _moreButtonItem
@property (retain, nonatomic) HRERecommendationItemProvider *recommendationItemProvider; // ivar: _recommendationItemProvider
@property (readonly) Class superclass;


+(BOOL)shouldShowRecommendation:(id)arg0 ;
+(id)rankComparator:(SEL)arg0 ;
-(NSUInteger)_effectiveRecommendationEngineOptionsWithOptions:(NSUInteger)arg0 ;
-(id)_buildStaticItems;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;


@end


#endif