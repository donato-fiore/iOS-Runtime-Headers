// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSCONNECTEDHEADPHONESCONTROLLER_H
#define HPSCONNECTEDHEADPHONESCONTROLLER_H

@class BluetoothManager;

#import <Foundation/Foundation.h>


@interface HPSConnectedHeadphonesController : NSObject {
    BluetoothManager *_bluetoothManager;
    id *_deviceChangeHandler;
}




-(BOOL)boolFromBluetoothPreferences:(id)arg0 ;
-(BOOL)nicknameEnabled;
-(id)getDeviceIcon:(unsigned int)arg0 ;
-(id)init;
-(id)topLevelSpecifiers;
-(void)dealloc;
-(void)deviceConnectionHandler:(id)arg0 ;
-(void)setDeviceChangeHandler:(id)arg0 ;


@end


#endif