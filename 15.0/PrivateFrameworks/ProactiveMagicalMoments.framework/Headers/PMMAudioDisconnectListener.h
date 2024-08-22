// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMMAUDIODISCONNECTLISTENER_H
#define PMMAUDIODISCONNECTLISTENER_H


#import <Foundation/Foundation.h>


@interface PMMAudioDisconnectListener : NSObject {
    id *_disconnectHandler;
}




+(BOOL)bluetoothDeviceTypeIsAudio:(id)arg0 ;
-(id)initWithHandler:(id)arg0 ;
-(void)_setupAudioDisconnectListener;
-(void)_setupBluetoothDisconnectListener;


@end


#endif