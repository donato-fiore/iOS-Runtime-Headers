// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSBLUETOOTHDEVICE_H
#define VOSBLUETOOTHDEVICE_H

@class NSString;
@protocol NSCopying, VOSBluetoothConnectableDevice;

#import <Foundation/Foundation.h>


@interface VOSBluetoothDevice : NSObject <NSCopying, VOSBluetoothConnectableDevice>

 {
    NSString *_name;
    NSString *_address;
    *BTDeviceImpl _device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)connected;
-(BOOL)connecting;
-(BOOL)hasAddress:(id)arg0 ;
-(BOOL)isAppleHIDDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)isNameCached;
-(BOOL)isServiceSupported:(unsigned int)arg0 ;
-(BOOL)paired;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)connectedServices;
-(NSUInteger)connectedServicesCount;
-(id)address;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)initWithDevice:(struct BTDeviceImpl *)arg0 address:(id)arg1 ;
-(id)name;
-(int)type;
-(struct BTDeviceImpl *)device;
-(unsigned int)authorizedServices;
-(unsigned int)deviceClass;
-(unsigned int)majorClass;
-(unsigned int)minorClass;
-(unsigned int)productId;
-(unsigned int)vendorId;
-(void)_clearName;
-(void)acceptSSP:(int)arg0 ;
-(void)connect;
-(void)connectWithServices:(unsigned int)arg0 ;
-(void)disconnect;
-(void)setDevice:(struct BTDeviceImpl *)arg0 ;
-(void)setPIN:(id)arg0 ;
-(void)unpair;


@end


#endif