// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSIRIHISTORYITEMMANAGER_H
#define HUSIRIHISTORYITEMMANAGER_H

@class HFItemManager, HFStaticItem;
@protocol OS_dispatch_queue;



@interface HUSiriHistoryItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *deleteSiriHistoryItem; // ivar: _deleteSiriHistoryItem
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItemAtIndexPath:(id)arg0 ;
-(id)didUpdateItemAtIndexPath:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 accessorySettingItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 groupItem:(id)arg1 ;


@end


#endif