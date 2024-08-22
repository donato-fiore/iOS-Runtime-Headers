// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCCFAVORITEACTIONSETITEMPROVIDER_H
#define HUCCFAVORITEACTIONSETITEMPROVIDER_H

@class HFItemProvider, NSMutableSet, NSString, HMHome;
@protocol HUCCFavoriteItemProvider;



@interface HUCCFavoriteActionSetItemProvider : HFItemProvider <HUCCFavoriteItemProvider>



@property (readonly, nonatomic) NSUInteger actionSetItemStyle; // ivar: _actionSetItemStyle
@property (retain, nonatomic) NSMutableSet *actionSetItems; // ivar: _actionSetItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger maximumNumberOfItems; // ivar: _maximumNumberOfItems
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 actionSetItemStyle:(NSUInteger)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif