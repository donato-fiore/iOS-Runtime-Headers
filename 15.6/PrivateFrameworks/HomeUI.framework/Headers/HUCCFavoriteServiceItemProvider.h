// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCCFAVORITESERVICEITEMPROVIDER_H
#define HUCCFAVORITESERVICEITEMPROVIDER_H

@class HFItemProvider, NSString, HMHome, NSMutableSet;
@protocol HUCCFavoriteItemProvider;



@interface HUCCFavoriteServiceItemProvider : HFItemProvider <HUCCFavoriteItemProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger maximumNumberOfItems; // ivar: _maximumNumberOfItems
@property (retain, nonatomic) NSMutableSet *serviceLikeItems; // ivar: _serviceLikeItems
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif