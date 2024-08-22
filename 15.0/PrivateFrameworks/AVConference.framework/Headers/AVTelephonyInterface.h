// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTELEPHONYINTERFACE_H
#define AVTELEPHONYINTERFACE_H

@class CoreTelephonyClient;
@protocol OS_dispatch_queue, AVTelephonyInterfaceDelegate;

#import <Foundation/Foundation.h>


@interface AVTelephonyInterface : NSObject {
    id *_delegate;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    *__CTServerConnection _connection;
    CoreTelephonyClient *_coreTelephonyClient;
}


@property NSObject<AVTelephonyInterfaceDelegate> *delegate;


-(BOOL)registerForNotifications;
-(id)init;
-(id)translateVocoderTypeToCoreAudioType:(id)arg0 ;
-(void)dealloc;
-(void)handleTelephonyNotification:(id)arg0 withInfo:(id)arg1 ;
-(void)handleVocoderNotificationWithInfo:(id)arg0 ;
-(void)notifyCTCurrentAudioPayload:(int)arg0 mode:(int)arg1 bitrate:(unsigned int)arg2 ;
-(void)unregisterForNotifications;


@end


#endif