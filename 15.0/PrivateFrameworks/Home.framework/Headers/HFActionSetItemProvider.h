// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACTIONSETITEMPROVIDER_H
#define HFACTIONSETITEMPROVIDER_H

@class NSMutableSet, HMHome, HMRoom, HFItem<HFServiceLikeItem>;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"

@interface HFActionSetItemProvider : HFItemProvider

@property (readonly, nonatomic) NSUInteger actionSetItemStyle; // ivar: _actionSetItemStyle
@property (retain, nonatomic) NSMutableSet *actionSetItems; // ivar: _actionSetItems
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL onlyShowsFavorites; // ivar: _onlyShowsFavorites
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *overrideValueSource; // ivar: _overrideValueSource
@property (retain, nonatomic) HMRoom *room; // ivar: _room
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(id)_favoriteFilter:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 actionSetItemStyle:(NSUInteger)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif