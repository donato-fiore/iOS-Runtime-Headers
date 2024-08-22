// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERCONNECTEDSERVICESLISTITEM_H
#define HUMATTERCONNECTEDSERVICESLISTITEM_H

@class HFItem, HMAccessory, HMHome, HFItemProvider;



@interface HUMatterConnectedServicesListItem : HFItem

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFItemProvider *itemProvider; // ivar: _itemProvider


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 home:(id)arg1 itemProvider:(id)arg2 ;


@end


#endif