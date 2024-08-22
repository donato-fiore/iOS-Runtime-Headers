// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFPAIREDBLUETOOTHDEVICESOBSERVER_H
#define AFPAIREDBLUETOOTHDEVICESOBSERVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AFPairedBluetoothDevicesObserver : NSObject {
    NSArray *_pairedDevices;
    os_unfair_lock_s _pairedDevicesLock;
}




+(id)sharedObserver;
-(id)init;
-(id)pairedBluetoothDevices;
-(void)updatePairedDevices:(id)arg0 ;


@end


#endif