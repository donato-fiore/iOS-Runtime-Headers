// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTSDEVICELE_H
#define BTSDEVICELE_H

@class CBPeripheral, CBCentralManager;


#import "BTSDevice.h"

@interface BTSDeviceLE : BTSDevice {
    CBPeripheral *_peripheral;
    CBCentralManager *_centralManager;
    BOOL healthDevice;
    BOOL ctkdDevice;
    BOOL managedByWallet;
    BOOL supportsBackgroundNI;
}




+(id)deviceWithPeripheral:(id)arg0 manager:(id)arg1 ;
-(BOOL)ancsAuthorized;
-(BOOL)cloudPaired;
-(BOOL)connect;
-(BOOL)connected;
-(BOOL)doesSupportBackgroundNI;
-(BOOL)isApplePencil:(*int)arg0 ;
-(BOOL)isCTKDDevice;
-(BOOL)isFirmwareUpdateRequiredDevice;
-(BOOL)isHIDDevice;
-(BOOL)isHealthDevice;
-(BOOL)isLimitedConnectivityDevice;
-(BOOL)isManagedByWallet;
-(BOOL)isMyDevice;
-(BOOL)paired;
-(BOOL)setUserName:(id)arg0 ;
-(BOOL)supportsANCS;
-(BOOL)supportsCTKD;
-(id)classicDevice;
-(id)description;
-(id)identifier;
-(id)initWithPeripheral:(id)arg0 manager:(id)arg1 ;
-(id)name;
-(id)productName;
-(void)disconnect;
-(void)setANCSAuthorization:(BOOL)arg0 ;
-(void)setCtkdDevice:(BOOL)arg0 ;
-(void)setHealthDevice:(BOOL)arg0 ;
-(void)setManagedByWallet:(BOOL)arg0 ;
-(void)setSupportsBackgroundNI:(BOOL)arg0 ;
-(void)unpair;


@end


#endif