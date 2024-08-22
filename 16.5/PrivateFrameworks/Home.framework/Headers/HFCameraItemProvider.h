// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERAITEMPROVIDER_H
#define HFCAMERAITEMPROVIDER_H

@class NSMutableSet, HMHome, HMRoom;


#import "HFItemProvider.h"

@interface HFCameraItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *cameraItems; // ivar: _cameraItems
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL onlyShowsFavorites; // ivar: _onlyShowsFavorites
@property (retain, nonatomic) HMRoom *room; // ivar: _room


-(id)_favoriteFilter:(SEL)arg0 ;
-(id)_showInHomeDashboardFilter:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif