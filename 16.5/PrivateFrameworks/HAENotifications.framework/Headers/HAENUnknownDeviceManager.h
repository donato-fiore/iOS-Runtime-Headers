// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENUNKNOWNDEVICEMANAGER_H
#define HAENUNKNOWNDEVICEMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HAENUnknownDeviceManager : NSObject {
    BOOL _alertSupported;
    *__CFUserNotification _notification;
    NSString *_deviceName;
    os_unfair_lock_s _lock;
    int _connectionCnt;
    BOOL _alertPending;
    NSUInteger _adamSessionID;
}




+(id)sharedInstance;
-(BOOL)_isAlertSupported;
-(BOOL)_isUnknownWiredHeadset:(id)arg0 ;
-(BOOL)_shouldSurfaceAlert:(id)arg0 ;
-(BOOL)isDeviceHeadphoneJack:(id)arg0 ;
-(BOOL)unknownWiredHeadsetConnectedThroughB204;
-(id)getDeviceName;
-(id)init;
-(void)_processPrompt:(id)arg0 ;
-(void)_processWiredDevice:(id)arg0 ;
-(void)_resetWiredStatus;
-(void)_updateMXVolumeLimitStatus:(id)arg0 ;
-(void)_wiredDeviceSessionCreated:(id)arg0 SessionID:(NSUInteger)arg1 ;
-(void)_wiredDeviceSessionDestroyed:(id)arg0 ;
-(void)_wiredDeviceSessionInit:(id)arg0 ;
-(void)deviceSessionCreated:(id)arg0 SessionID:(NSUInteger)arg1 ;
-(void)deviceSessionDestroyed:(id)arg0 isWired:(BOOL)arg1 ;
-(void)surfaceAlertBox;
-(void)unknownWiredConnectionDidChange:(BOOL)arg0 ;
-(void)updateWiredDeviceStatus;


@end


#endif