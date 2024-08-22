// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYSETTINGDEVICEOPTIONSADAPTERUTILITY_H
#define HFACCESSORYSETTINGDEVICEOPTIONSADAPTERUTILITY_H

@class RPCompanionLinkClient;
@protocol HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFMediaProfileContainer;

#import <Foundation/Foundation.h>


@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject

@property (weak, nonatomic) NSObject<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) RPCompanionLinkClient *discoveryLink; // ivar: _discoveryLink
@property (retain, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (nonatomic) NSUInteger rapportClientActivationFailCount; // ivar: _rapportClientActivationFailCount


-(id)_reachableDevices:(id)arg0 ;
-(id)_sendRapportMessageToAccessoriesWithRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 ;
-(id)_sendRapportMessageToAccessoryWithRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 ;
-(id)_sendRapportMessageToDevice:(id)arg0 requestID:(id)arg1 request:(id)arg2 options:(id)arg3 ;
-(id)extractWiFiInfo;
-(id)identifyAccessory;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 groupedAccessory:(BOOL)arg2 delegate:(id)arg3 ;
-(id)requestAirDrop:(id)arg0 ;
-(id)requestSysdiagnose:(id)arg0 options:(id)arg1 ;
-(id)restartAccessories;
-(id)restartAccessory;
-(void)_resetRapportClientWithInvalidation:(BOOL)arg0 ;
-(void)_setupRapportClient;
-(void)_updateRapportReachable;


@end


#endif