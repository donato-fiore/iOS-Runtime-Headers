// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLUETOOTHADDRESSMONITOR_H
#define BLUETOOTHADDRESSMONITOR_H

@class CBPeripheralManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BluetoothAddressMonitor : NSObject {
    *OpaqueFigCFWeakReferenceHolder _systemInfoWeak;
    NSObject<OS_dispatch_queue> *_queue;
    CBPeripheralManager *_cbManager;
}




-(id)initWithSystemInfo:(struct OpaqueAPReceiverSystemInfo *)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif