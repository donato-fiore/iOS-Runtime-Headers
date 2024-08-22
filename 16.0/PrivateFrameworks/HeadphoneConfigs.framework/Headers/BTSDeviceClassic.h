// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTSDEVICECLASSIC_H
#define BTSDEVICECLASSIC_H

@class BluetoothDevice;


#import "BTSDevice.h"

@interface BTSDeviceClassic : BTSDevice {
    BOOL ctkdDevice;
    BOOL managedByWallet;
    BOOL supportsBackgroundNI;
}


@property (readonly, weak, nonatomic) BluetoothDevice *device; // ivar: _device


+(id)deviceWithDevice:(id)arg0 ;
-(BOOL)ancsAuthorized;
-(BOOL)cloudPaired;
-(BOOL)connect;
-(BOOL)connected;
-(BOOL)doesSupportBackgroundNI;
-(BOOL)isApplePencil:(*int)arg0 ;
-(BOOL)isCTKDDevice;
-(BOOL)isFirmwareUpdateRequiredDevice;
-(BOOL)isHealthDevice;
-(BOOL)isLimitedConnectivityDevice;
-(BOOL)isManagedByWallet;
-(BOOL)isMyDevice;
-(BOOL)isTemporaryPairedDevice;
-(BOOL)magicPaired;
-(BOOL)paired;
-(BOOL)setUserName:(id)arg0 ;
-(BOOL)supportsANCS;
-(id)classicDevice;
-(id)identifier;
-(id)initWithDevice:(id)arg0 ;
-(id)name;
-(id)productName;
-(void)disconnect;
-(void)setCtkdDevice:(BOOL)arg0 ;
-(void)setManagedByWallet:(BOOL)arg0 ;
-(void)setSupportsBackgroundNI:(BOOL)arg0 ;
-(void)unpair;


@end


#endif