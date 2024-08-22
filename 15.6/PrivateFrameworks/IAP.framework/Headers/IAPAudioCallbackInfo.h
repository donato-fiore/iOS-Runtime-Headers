// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAPAUDIOCALLBACKINFO_H
#define IAPAUDIOCALLBACKINFO_H

@class CPDistributedNotificationCenter, NSLock;

#import <Foundation/Foundation.h>


@interface IAPAudioCallbackInfo : NSObject {
    *unk _deviceStateChangedCallback;
    *void _deviceStateChangedContext;
    *unk _volumeChangedCallback;
    *void _volumeChangedContext;
    *unk _pauseOnHeadphoneDisconnectChangedCallback;
    *void _pauseOnHeadphoneDisconnectChangedContext;
    *unk _volumeControlSupportChangedCallback;
    *void _volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    *__CFRunLoop _dnCenterRunLoop;
    NSLock *_lock;
}




+(id)sharedInstance;
-(id)init;
-(void)_deviceStateChanged:(id)arg0 ;
-(void)_handleiAPDaemonDied:(id)arg0 ;
-(void)_pauseOnHeadphoneDisconnectChanged:(id)arg0 ;
-(void)_volumeChanged:(id)arg0 ;
-(void)_volumeControlSupportChanged:(id)arg0 ;
-(void)clearDeviceStateChangedCallback;
-(void)clearPauseOnHeadphoneDisconnectChangedCallback;
-(void)clearVolumeChangedCallback;
-(void)clearVolumeControlSupportChangedCallback;
-(void)dealloc;
-(void)setupDeviceStateChangedCallback:(*unk)arg0 withContext:(*void)arg1 andRunLoop:(struct __CFRunLoop *)arg2 ;
-(void)setupPauseOnHeadphoneDisconnectChangedCallback:(*unk)arg0 withContext:(*void)arg1 andRunLoop:(struct __CFRunLoop *)arg2 ;
-(void)setupVolumeChangedCallback:(*unk)arg0 withContext:(*void)arg1 andRunLoop:(struct __CFRunLoop *)arg2 ;
-(void)setupVolumeControlSupportChangedCallback:(*unk)arg0 withContext:(*void)arg1 andRunLoop:(struct __CFRunLoop *)arg2 ;
-(void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)arg0 ;


@end


#endif