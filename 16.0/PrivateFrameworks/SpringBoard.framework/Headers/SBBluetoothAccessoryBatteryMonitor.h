// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBLUETOOTHACCESSORYBATTERYMONITOR_H
#define SBBLUETOOTHACCESSORYBATTERYMONITOR_H

@class NSMutableSet, BCBatteryDeviceController, NSString;
@protocol BCBatteryDeviceObserving;

#import <Foundation/Foundation.h>


@interface SBBluetoothAccessoryBatteryMonitor : NSObject <BCBatteryDeviceObserving>

 {
    NSMutableSet *_accessoryNamesInLowPower;
    BCBatteryDeviceController *_batteryDeviceController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_popLowPowerAlertForAccessoryIfNecessary:(id)arg0 ;
-(void)connectedDevicesDidChange:(id)arg0 ;


@end


#endif