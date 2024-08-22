// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACTIONSETLISTITEM_H
#define HFACTIONSETLISTITEM_H

@class HMHome, HMRoom;


#import "HFItem.h"

@interface HFActionSetListItem : HFItem

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL onlyShowsFavorites; // ivar: _onlyShowsFavorites
@property (readonly, nonatomic) HMRoom *room; // ivar: _room


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 room:(id)arg1 ;


@end


#endif