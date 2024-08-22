// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFWIRELESSSETTINGSCONTROLLER_H
#define SFWIRELESSSETTINGSCONTROLLER_H

@protocol SFWirelessSettingsControllerDelegate;

#import <Foundation/Foundation.h>


@interface SFWirelessSettingsController : NSObject {
    BOOL _wifiEnabled;
    BOOL _airplaneModeEnabled;
    BOOL _bluetoothEnabled;
    BOOL _deviceSupportsWAPI;
    NSUInteger _uwbStatus;
    BOOL _firstCallbackCompleted;
    BOOL _wirelessCarPlayEnabled;
    BOOL _wirelessAccessPointEnabled;
    *__SFOperation _information;
}


@property (getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled;
@property (weak) NSObject<SFWirelessSettingsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly) BOOL deviceSupportsWAPI;
@property (readonly) NSUInteger ultraWideBandStatus; // ivar: _ultraWideBandStatus
@property (getter=isWifiEnabled) BOOL wifiEnabled;
@property (getter=isWirelessAccessPointEnabled) BOOL wirelessAccessPointEnabled;
@property (readonly, getter=isWirelessCarPlayEnabled) BOOL wirelessCarPlayEnabled;


-(id)init;
-(void)dealloc;
-(void)handleOperationCallback:(struct __SFOperation *)arg0 event:(NSInteger)arg1 withResults:(id)arg2 ;
-(void)invalidate;


@end


#endif