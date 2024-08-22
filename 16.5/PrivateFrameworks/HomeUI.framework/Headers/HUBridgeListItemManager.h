// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUBRIDGELISTITEMMANAGER_H
#define HUBRIDGELISTITEMMANAGER_H

@class HFItemManager, HFBridgeItemProvider, HMHome, HFResidentDeviceItemProvider;



@interface HUBridgeListItemManager : HFItemManager

@property (retain, nonatomic) HFBridgeItemProvider *bridgeItemProvider; // ivar: _bridgeItemProvider
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFResidentDeviceItemProvider *residentDeviceItemProvider; // ivar: _residentDeviceItemProvider


+(id)residentDeviceItemComparator:(SEL)arg0 ;
-(BOOL)isBridgeItem:(id)arg0 ;
-(BOOL)isResidentDeviceItem:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)bridgeItemForAccessory:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;


@end


#endif