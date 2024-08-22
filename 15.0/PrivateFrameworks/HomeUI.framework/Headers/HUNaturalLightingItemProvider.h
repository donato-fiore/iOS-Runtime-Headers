// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNATURALLIGHTINGITEMPROVIDER_H
#define HUNATURALLIGHTINGITEMPROVIDER_H

@class HFItemProvider, NSNumber, HMHome, NSMutableSet;



@interface HUNaturalLightingItemProvider : HFItemProvider

@property (retain, nonatomic) NSNumber *defaultSelectedValue; // ivar: _defaultSelectedValue
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (copy, nonatomic) id *homeKitObjectFilter; // ivar: _homeKitObjectFilter
@property (copy, nonatomic) id *lightProfileFilter; // ivar: _lightProfileFilter
@property (retain, nonatomic) NSMutableSet *naturalLightingItems; // ivar: _naturalLightingItems


-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;
-(id)sourceItemForHomeKitObject:(id)arg0 ;


@end


#endif