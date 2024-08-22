// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOSBLUETOOTHLOWENERGYDEVICE_H
#define VOSBLUETOOTHLOWENERGYDEVICE_H

@class CBCentralManager, NSString, CBPeripheral;
@protocol VOSBluetoothConnectableDevice;

#import <Foundation/Foundation.h>


@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice>



@property (readonly, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (readonly) Class superclass;


-(BOOL)connected;
-(BOOL)connecting;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)paired;
-(NSInteger)compare:(id)arg0 ;
-(id)identifier;
-(id)initWithPeripheral:(id)arg0 manager:(id)arg1 ;
-(id)name;
-(void)connect;
-(void)disconnect;
-(void)unpair;


@end


#endif