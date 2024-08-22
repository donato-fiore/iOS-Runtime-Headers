// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSELECTEDROOMITEMPROVIDER_H
#define HFSELECTEDROOMITEMPROVIDER_H

@class HMHome, HFItemBuilder<HFServiceLikeBuilder>;


#import "HFItemProvider.h"
#import "HFRoomBuilderItem.h"

@interface HFSelectedRoomItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFRoomBuilderItem *roomBuilderItem; // ivar: _roomBuilderItem
@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // ivar: _serviceLikeBuilder


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 serviceLikeBuilder:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif