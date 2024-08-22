// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTSDEVICE_H
#define BTSDEVICE_H


#import <Foundation/Foundation.h>


@interface BTSDevice : NSObject

@property (nonatomic, getter=isCTKDDevice) BOOL ctkdDevice;
@property (nonatomic, getter=isHealthDevice) BOOL healthDevice;
@property (nonatomic, getter=isManagedByWallet) BOOL managedByWallet;
@property (readonly, nonatomic, getter=isMyDevice) BOOL myDevice;
@property (nonatomic, getter=doesSupportBackgroundNI) BOOL supportsBackgroundNI;


-(BOOL)ancsAuthorized;
-(BOOL)cloudPaired;
-(BOOL)connect;
-(BOOL)connected;
-(BOOL)isApplePencil:(*int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFirmwareUpdateRequiredDevice;
-(BOOL)isHIDDevice;
-(BOOL)isLimitedConnectivityDevice;
-(BOOL)isTemporaryPairedDevice;
-(BOOL)isiPad;
-(BOOL)paired;
-(BOOL)supportsANCS;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)classicDevice;
-(id)identifier;
-(id)name;
-(id)productName;
-(void)disconnect;
-(void)setANCSAuthorization:(BOOL)arg0 ;
-(void)unpair;


@end


#endif