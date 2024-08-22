// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBLUETOOTHCONTROLLER_H
#define SBBLUETOOTHCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBBluetoothController : NSObject {
    NSMutableArray *_devices;
    BOOL _tetheringConnected;
}




+(id)sharedInstance;
-(BOOL)canReportBatteryLevel;
-(BOOL)tetheringConnected;
-(id)deviceForAudioRoute:(id)arg0 ;
-(id)firstBTDeviceToReportBatteryLevel;
-(int)batteryLevel;
-(void)addDeviceNotification:(id)arg0 ;
-(void)batteryChanged:(id)arg0 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg0 ;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg0 ;
-(void)connectionChanged:(id)arg0 ;
-(void)dealloc;
-(void)iapDeviceChanged:(id)arg0 ;
-(void)noteDevicesChanged;
-(void)removeDeviceNotification:(id)arg0 ;
-(void)startWatchingForDevices;
-(void)stopWatchingForDevices;
-(void)updateBattery;
-(void)updateTetheringConnected;


@end


#endif