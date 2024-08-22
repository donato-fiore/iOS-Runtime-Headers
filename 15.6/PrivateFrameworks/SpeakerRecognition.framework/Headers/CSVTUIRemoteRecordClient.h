// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVTUIREMOTERECORDCLIENT_H
#define CSVTUIREMOTERECORDCLIENT_H

@class OS_xpc_remote_connection, OS_remote_device_browser, CSDispatchGroup, OS_remote_device, NSString;
@protocol OS_dispatch_queue, CSVTUIRemoteRecordClientDelegate;

#import <Foundation/Foundation.h>


@interface CSVTUIRemoteRecordClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    OS_xpc_remote_connection *_connection;
    OS_remote_device_browser *_deviceBrowser;
    CSDispatchGroup *_deviceWaitingGroup;
    BOOL _isRemoteRecording;
}


@property (readonly, nonatomic) NSUInteger audioStreamHandleId; // ivar: _audioStreamHandleId
@property (weak, nonatomic) NSObject<CSVTUIRemoteRecordClientDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) OS_remote_device *device; // ivar: _device
@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId


-(BOOL)didPlayEndpointBeep;
-(BOOL)hasPendingTwoShotBeep;
-(BOOL)isConnected;
-(BOOL)isRecording;
-(BOOL)startRecordingWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopRecording:(*id)arg0 ;
-(BOOL)waitingForConnection:(CGFloat)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDeviceId:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 ;
-(id)voiceTriggerEventInfo;
-(void)_handleDidStartRecordingMessage:(id)arg0 ;
-(void)_handleServerError:(id)arg0 ;
-(void)_handleServerEvent:(id)arg0 ;
-(void)_handleServerMessage:(id)arg0 ;
-(void)_handleTwoShotDetectedMessage:(id)arg0 ;
-(void)dealloc;
-(void)didDeviceConnect:(id)arg0 ;
-(void)didDeviceDisconnect:(id)arg0 ;


@end


#endif