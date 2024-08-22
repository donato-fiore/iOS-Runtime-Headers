// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPRESENCEUSEROPTIONITEM_H
#define HUPRESENCEUSEROPTIONITEM_H

@class HFItem, HFUserItem;


#import "HULocationDeviceManager.h"
#import "HUPresenceCurrentUserLocationDevice.h"

@interface HUPresenceUserOptionItem : HFItem

@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // ivar: _locationDeviceManager
@property (retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice; // ivar: _selectedLocationDevice
@property (readonly, nonatomic) HFUserItem *userItem; // ivar: _userItem


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithUserItem:(id)arg0 selectedLocationDevice:(id)arg1 locationDeviceManager:(id)arg2 ;


@end


#endif