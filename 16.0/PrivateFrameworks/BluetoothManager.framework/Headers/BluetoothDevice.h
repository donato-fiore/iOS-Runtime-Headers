// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLUETOOTHDEVICE_H
#define BLUETOOTHDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BluetoothDevice : NSObject {
    NSString *_name;
    NSString *_productName;
    NSString *_address;
    *BTDeviceImpl _device;
    unsigned int _connectingServiceMask;
}




-(BOOL)_isNameCached;
-(BOOL)batteryStatus:(struct ? *)arg0 ;
-(BOOL)cloudPaired;
-(BOOL)connected;
-(BOOL)featureCapability:(int)arg0 ;
-(BOOL)getAACPCapabilityBit:(int)arg0 ;
-(BOOL)getDeviceSoundProfileAllowed;
-(BOOL)getDeviceSoundProfileSupport;
-(BOOL)headTrackingAvailable;
-(BOOL)inEarDetectEnabled;
-(BOOL)inEarStatusPrimary:(*int)arg0 secondary:(*int)arg1 ;
-(BOOL)isAccessory;
-(BOOL)isAppleAudioDevice;
-(BOOL)isGenuineAirPods;
-(BOOL)isProController;
-(BOOL)isServiceSupported:(unsigned int)arg0 ;
-(BOOL)isTemporaryPaired;
-(BOOL)magicPaired;
-(BOOL)paired;
-(BOOL)pairedDeviceNameUpdated;
-(BOOL)setAutoAnswerMode:(int)arg0 ;
-(BOOL)setCallConfig:(struct ? )arg0 ;
-(BOOL)setChimeVolume:(unsigned int)arg0 ;
-(BOOL)setClickHoldMode:(int)arg0 rightMode:(int)arg1 ;
-(BOOL)setClickHoldModes:(struct ? )arg0 ;
-(BOOL)setCrownRotationDirection:(int)arg0 ;
-(BOOL)setDoubleClickMode:(int)arg0 ;
-(BOOL)setDoubleTapAction:(unsigned int)arg0 ;
-(BOOL)setDoubleTapActionEx:(unsigned int)arg0 rightAction:(unsigned int)arg1 ;
-(BOOL)setInEarDetectEnabled:(BOOL)arg0 ;
-(BOOL)setIsHidden:(BOOL)arg0 ;
-(BOOL)setListeningMode:(unsigned int)arg0 ;
-(BOOL)setListeningModeConfigs:(unsigned int)arg0 ;
-(BOOL)setMicMode:(unsigned int)arg0 ;
-(BOOL)setSingleClickMode:(int)arg0 ;
-(BOOL)setSmartRouteMode:(unsigned char)arg0 ;
-(BOOL)setSpatialAudioAllowed:(BOOL)arg0 ;
-(BOOL)setSpatialAudioConfig:(id)arg0 spatialMode:(int)arg1 headTracking:(BOOL)arg2 ;
-(BOOL)setSpatialAudioMode:(unsigned char)arg0 ;
-(BOOL)setUserName:(id)arg0 ;
-(BOOL)setUserSelectedDeviceType:(int)arg0 ;
-(BOOL)smartRouteSupport;
-(BOOL)spatialAudioActive;
-(BOOL)spatialAudioAllowed;
-(BOOL)spatialAudioConfig:(id)arg0 spatialMode:(*int)arg1 headTracking:(*BOOL)arg2 ;
-(BOOL)supportsBatteryLevel;
-(BOOL)supportsHS;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)connectedServices;
-(NSUInteger)connectedServicesCount;
-(id)accessoryInfo;
-(id)aclUID;
-(id)address;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getAACPCapabilityBits;
-(id)getServiceSetting:(unsigned int)arg0 key:(id)arg1 ;
-(id)gyroInformation;
-(id)initWithDevice:(struct BTDeviceImpl *)arg0 address:(id)arg1 ;
-(id)name;
-(id)productName;
-(id)scoUID;
-(id)syncGroups;
-(int)accessorySettingFeatureBitMask;
-(int)autoAnswerMode;
-(int)batteryLevel;
-(int)crownRotationDirection;
-(int)doubleClickMode;
-(int)getBehaviorForHIDDevice;
-(int)getDeviceColor:(*unsigned int)arg0 ;
-(int)getHexDeviceAddress:(struct ? *)arg0 ;
-(int)getLowSecurityStatus;
-(int)getStereoHFPSupport;
-(int)getUserSelectedDeviceType;
-(int)singleClickMode;
-(int)type;
-(struct ? )getCallManagementConfig;
-(struct ? )syncSettings;
-(struct BTDeviceImpl *)device;
-(unsigned char)getSpatialAudioPlatformSupport;
-(unsigned char)smartRouteMode;
-(unsigned char)spatialAudioMode;
-(unsigned int)SendSetupCommand:(unsigned char)arg0 ;
-(unsigned int)chimeVolume;
-(unsigned int)clickHoldMode:(*int)arg0 rightAction:(*int)arg1 ;
-(unsigned int)clickHoldModes:(struct ? *)arg0 ;
-(unsigned int)doubleTapAction;
-(unsigned int)doubleTapActionEx:(*unsigned int)arg0 rightAction:(*unsigned int)arg1 ;
-(unsigned int)doubleTapCapability;
-(unsigned int)getAACPCapabilityInteger:(int)arg0 ;
-(unsigned int)getConnectingServiceMask;
-(unsigned int)listeningMode;
-(unsigned int)listeningModeConfigs;
-(unsigned int)majorClass;
-(unsigned int)micMode;
-(unsigned int)minorClass;
-(unsigned int)productId;
-(unsigned int)vendorId;
-(void)_clearName;
-(void)acceptSSP:(NSInteger)arg0 ;
-(void)connect;
-(void)connectWithServices:(unsigned int)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)endVoiceCommand;
-(void)setConnectingServicemask:(unsigned int)arg0 ;
-(void)setDevice:(struct BTDeviceImpl *)arg0 ;
-(void)setDeviceSoundProfileAllowed:(BOOL)arg0 ;
-(void)setPIN:(id)arg0 ;
-(void)setServiceSetting:(unsigned int)arg0 key:(id)arg1 value:(id)arg2 ;
-(void)setSyncGroup:(int)arg0 enabled:(BOOL)arg1 ;
-(void)setSyncSettings:(struct ? )arg0 ;
-(void)startVoiceCommand;
-(void)unpair;


@end


#endif