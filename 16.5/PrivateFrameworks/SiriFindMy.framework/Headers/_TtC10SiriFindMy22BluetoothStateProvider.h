// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10SIRIFINDMY22BLUETOOTHSTATEPROVIDER_H
#define _TTC10SIRIFINDMY22BLUETOOTHSTATEPROVIDER_H

@protocol CBCentralManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC10SiriFindMy22BluetoothStateProvider : NSObject <CBCentralManagerDelegate>

 {
    ? subject;
    ? bluetoothManager;
    ? statePublisher;
    ? subscription;
}




-(id)init;
-(void)centralManagerDidUpdateState:(id)arg0 ;


@end


#endif