// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDASHBOARDACCESSORYTRANSFORMITEMPROVIDER_H
#define HUDASHBOARDACCESSORYTRANSFORMITEMPROVIDER_H

@class HFItemProvider, NSMutableSet, HMHome, NSMapTable;



@interface HUDashboardAccessoryTransformItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems; // ivar: _allItems
@property (readonly, weak, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMapTable *roomTransformedItems; // ivar: _roomTransformedItems
@property (readonly, nonatomic) HFItemProvider *sourceItemProvider; // ivar: _sourceItemProvider
@property (nonatomic) BOOL splitAccessoryGroupsByRoom; // ivar: _splitAccessoryGroupsByRoom


-(BOOL)needsTransform;
-(BOOL)wantsRoomTransformForItem:(id)arg0 ;
-(id)_roomTransformedItemsForItem:(id)arg0 ;
-(id)allTransformedItemsForItem:(id)arg0 ;
-(id)initWithSourceProvider:(id)arg0 inHome:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;
-(id)roomTransformedItemsForItem:(id)arg0 ;
-(id)transformSourceResults:(id)arg0 ;
-(void)clearTransformedItemsForItem:(id)arg0 ;


@end


#endif