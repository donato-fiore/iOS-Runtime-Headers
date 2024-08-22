// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRREMOTECONTROLCLIENT_H
#define SSRREMOTECONTROLCLIENT_H

@class OS_xpc_remote_connection, CSDispatchGroup, OS_remote_device;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSRRemoteControlClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    OS_xpc_remote_connection *_connection;
    CSDispatchGroup *_deviceWaitingGroup;
    OS_remote_device *_device;
}




-(BOOL)_isImplicitTrainingRequiredForVoiceProfileId:(id)arg0 locale:(id)arg1 error:(*id)arg2 ;
-(BOOL)isConnected;
-(BOOL)waitingForConnection:(CGFloat)arg0 error:(*id)arg1 ;
-(id)initWithRemoteDeviceUUID:(id)arg0 ;
-(void)_handleServerError:(id)arg0 ;
-(void)_handleServerEvent:(id)arg0 ;
-(void)addImplicitTrainingUtteranceToRemoteFilePath:(id)arg0 forVoiceProfileId:(id)arg1 withVoiceTriggerCtxt:(id)arg2 locale:(id)arg3 withOtherCtxt:(id)arg4 completion:(id)arg5 ;
-(void)dealloc;
-(void)didDeviceConnect:(id)arg0 ;
-(void)didDeviceDisconnect:(id)arg0 ;


@end


#endif