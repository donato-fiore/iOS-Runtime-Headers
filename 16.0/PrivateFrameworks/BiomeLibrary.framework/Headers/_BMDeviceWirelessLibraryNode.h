// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMDEVICEWIRELESSLIBRARYNODE_H
#define _BMDEVICEWIRELESSLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMDeviceWirelessLibraryNode : BMLibraryNode



+(id)AirplaneMode;
+(id)Bluetooth;
+(id)BluetoothGATTSession;
+(id)DefaultPairedNearby;
+(id)NFCTag;
+(id)WiFi;
+(id)configurationForAirplaneMode;
+(id)configurationForBluetooth;
+(id)configurationForBluetoothGATTSession;
+(id)configurationForDefaultPairedNearby;
+(id)configurationForNFCTag;
+(id)configurationForWiFi;
+(id)identifier;
+(id)storeConfigurationForAirplaneMode;
+(id)storeConfigurationForBluetooth;
+(id)storeConfigurationForBluetoothGATTSession;
+(id)storeConfigurationForDefaultPairedNearby;
+(id)storeConfigurationForNFCTag;
+(id)storeConfigurationForWiFi;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForAirplaneMode;
+(id)syncPolicyForBluetooth;
+(id)syncPolicyForBluetoothGATTSession;
+(id)syncPolicyForDefaultPairedNearby;
+(id)syncPolicyForNFCTag;
+(id)syncPolicyForWiFi;
+(id)validKeyPaths;


@end


#endif