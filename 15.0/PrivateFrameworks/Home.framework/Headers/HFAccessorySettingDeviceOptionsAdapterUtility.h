// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYSETTINGDEVICEOPTIONSADAPTERUTILITY_H
#define HFACCESSORYSETTINGDEVICEOPTIONSADAPTERUTILITY_H

@class NAFuture, RPCompanionLinkClient, NSMutableArray;
@protocol HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFHomeKitSettingsVendor;

#import <Foundation/Foundation.h>


@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject

@property (readonly, nonatomic) NAFuture *accessoryCompanionDevicesIDFuture; // ivar: _accessoryCompanionDevicesIDFuture
@property (readonly, nonatomic) NAFuture *accessoryCompanionLinkDeviceFuture; // ivar: _accessoryCompanionLinkDeviceFuture
@property (readonly, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (weak, nonatomic) NSObject<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *deviceIDArray; // ivar: _deviceIDArray
@property (retain, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (retain, nonatomic) NAFuture *inProgressSysdiagnoseCollectionFuture; // ivar: _inProgressSysdiagnoseCollectionFuture
@property (nonatomic) BOOL isAccessoryGrouped; // ivar: _isAccessoryGrouped
@property (nonatomic) BOOL isAccessoryReachableOverRapport; // ivar: _isAccessoryReachableOverRapport
@property (readonly, nonatomic) NAFuture *linkIsActivatedFuture; // ivar: _linkIsActivatedFuture
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger rapportClientActivationFailCount; // ivar: _rapportClientActivationFailCount


-(id)_home;
-(id)_homeKitAccessoryUniqueIdentifier;
-(id)_mediaSessionAccessoryUniqueIdentifier;
-(id)_sendRapportMessageToGroupedAccessoryWithIdentifier:(id)arg0 request:(id)arg1 options:(id)arg2 ;
-(id)_sendRapportMessageWithIdentifier:(id)arg0 request:(id)arg1 options:(id)arg2 ;
-(id)identifyAccessory;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 groupedAccessory:(BOOL)arg2 delegate:(id)arg3 ;
-(id)mediaProfileContainer;
-(id)requestAirDrop:(id)arg0 ;
-(id)requestSysdiagnose:(id)arg0 options:(id)arg1 ;
-(id)restartAccessories;
-(id)restartAccessory;
-(void)_resetRapportClientWithInvalidation:(BOOL)arg0 ;
-(void)_setupRapportClient;
-(void)_updateDevice;
-(void)_updateDeviceForGroupedAccessory;


@end


#endif