// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAVAILABLERELATEDTRIGGERITEMPROVIDER_H
#define HUAVAILABLERELATEDTRIGGERITEMPROVIDER_H

@class HFItemProvider, HMHome, NSSet, HRERecommendationItemProvider, NSArray, NSMutableSet;
@protocol HUAvailableRelatedTriggerItemModuleContextProviding;


#import "HUTriggerItemProvider.h"

@interface HUAvailableRelatedTriggerItemProvider : HFItemProvider

@property (readonly, nonatomic) NSObject<HUAvailableRelatedTriggerItemModuleContextProviding> *context; // ivar: _context
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HRERecommendationItemProvider *recommendationItemProvider; // ivar: _recommendationItemProvider
@property (copy, nonatomic) id *recommendationsFilter;
@property (retain, nonatomic) HUTriggerItemProvider *relatedActiveTriggerItemProvider; // ivar: _relatedActiveTriggerItemProvider
@property (readonly, nonatomic) NSArray *relatedItems; // ivar: _relatedItems
@property (copy, nonatomic) id *triggerFilter; // ivar: _triggerFilter
@property (retain, nonatomic) NSMutableSet *triggerItems; // ivar: _triggerItems
@property (retain, nonatomic) NSMutableSet *updatesDisabledReasons; // ivar: _updatesDisabledReasons


-(BOOL)relatedItemsAffectedByTrigger:(id)arg0 ;
-(id)initWithHome:(id)arg0 relatedItems:(id)arg1 context:(id)arg2 ;
-(id)invalidationReasons;
-(id)items;
-(id)itemsToHideInSet:(id)arg0 ;
-(id)reloadAvailableTriggerItemsWithObjects:(id)arg0 ;
-(id)reloadItems;
-(void)_buildProviders;
-(void)disableUpdatesWithReason:(id)arg0 ;
-(void)endDisableUpdatesWithReason:(id)arg0 ;


@end


#endif