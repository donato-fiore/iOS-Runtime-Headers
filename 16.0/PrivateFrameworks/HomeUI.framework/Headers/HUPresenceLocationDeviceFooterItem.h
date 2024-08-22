// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPRESENCELOCATIONDEVICEFOOTERITEM_H
#define HUPRESENCELOCATIONDEVICEFOOTERITEM_H

@class HFItem, HMHome;


#import "HULocationDeviceManager.h"
#import "HUPresenceCurrentUserLocationDevice.h"

@interface HUPresenceLocationDeviceFooterItem : HFItem

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // ivar: _locationDeviceManager
@property (retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice; // ivar: _selectedLocationDevice
@property (nonatomic) BOOL useSingleUserStyle; // ivar: _useSingleUserStyle


-(id)_itemUpdateOutcomeForLocationDeviceText:(id)arg0 ;
-(id)_locationDeviceTextForDeviceNameString:(id)arg0 ;
-(id)_someUsersNeedSoftwareUpdateWarningText;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 selectedLocationDevice:(id)arg1 locationDeviceManager:(id)arg2 useSingleUserStyle:(BOOL)arg3 ;


@end


#endif