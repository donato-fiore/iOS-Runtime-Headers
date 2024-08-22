// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKBLUETOOTHSUPPORT_H
#define GKBLUETOOTHSUPPORT_H


#import <Foundation/Foundation.h>


@interface GKBluetoothSupport : NSObject



+(Class)_bluetoothManagerClass;
+(int)_determineBluetoothStatus;
+(int)_directBTStatus;
+(int)bluetoothStatus;
+(void)_btPowerStateChanged:(id)arg0 ;
+(void)cleanup;
+(void)turnBluetoothOn;


@end


#endif