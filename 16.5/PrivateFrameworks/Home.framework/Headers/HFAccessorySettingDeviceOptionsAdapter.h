// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYSETTINGDEVICEOPTIONSADAPTER_H
#define HFACCESSORYSETTINGDEVICEOPTIONSADAPTER_H

@class NSString, NAFuture;
@protocol HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating;


#import "HFAccessorySettingAdapter.h"
#import "HFAccessorySettingDeviceOptionsAdapterUtility.h"

@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating>



@property (retain, nonatomic) HFAccessorySettingDeviceOptionsAdapterUtility *adapterUtility; // ivar: _adapterUtility
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *inProgressSysdiagnoseCollectionFuture; // ivar: _inProgressSysdiagnoseCollectionFuture
@property (nonatomic) BOOL isAccessoryReachableOverRapport; // ivar: _isAccessoryReachableOverRapport
@property (readonly) Class superclass;


-(BOOL)shouldShowSettingsEntity:(id)arg0 ;
-(BOOL)supportButtonPressForEntity:(id)arg0 ;
-(id)_handleButtonPress;
-(id)_home;
-(id)airDropSysdiagnose:(id)arg0 ;
-(id)extractWiFiInfo;
-(id)handleButtonPressForEntity:(id)arg0 ;
-(id)identifyAccessory;
-(id)inProgressButtonPressFutureForEntity:(id)arg0 ;
-(id)inProgressButtonPressFutureForKeyPath:(id)arg0 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)restartAccessories;
-(id)restartAccessory;
-(void)accessoryReachableOverRapport:(BOOL)arg0 ;


@end


#endif