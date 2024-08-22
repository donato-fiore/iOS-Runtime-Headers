// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKBLUETOOTHCONNECTIVITYCOORDINATOR_H
#define NPKBLUETOOTHCONNECTIVITYCOORDINATOR_H

@protocol NPKBluetoothConnectivityCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface NPKBluetoothConnectivityCoordinator : NSObject

@property (nonatomic) NSUInteger bluetoothAvailableAndEnabled; // ivar: _bluetoothAvailableAndEnabled
@property (weak, nonatomic) NSObject<NPKBluetoothConnectivityCoordinatorDelegate> *delegate; // ivar: _delegate


-(BOOL)isBluetoothEnabled;
-(id)init;


@end


#endif