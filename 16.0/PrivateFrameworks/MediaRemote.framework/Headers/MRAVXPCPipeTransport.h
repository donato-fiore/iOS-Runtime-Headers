// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVXPCPIPETRANSPORT_H
#define MRAVXPCPIPETRANSPORT_H

@class NSError, NSInputStream, NSOutputStream, NSXPCConnection, NSRunLoop, CURunLoopThread, NSString, NSXPCListenerEndpoint;
@protocol NSStreamDelegate, MRVirtualDevicePipeProtocol, OS_dispatch_queue;


#import "MRExternalDeviceTransport.h"
#import "MRDeviceInfo.h"
#import "MRAVOutputDevice.h"

@interface MRAVXPCPipeTransport : MRExternalDeviceTransport <NSStreamDelegate, MRVirtualDevicePipeProtocol>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
    NSInputStream *_inputStream;
    NSInputStream *_inputStreamInternal;
    NSOutputStream *_outputStream;
    NSOutputStream *_outputStreamInternal;
    BOOL _useSystemAuthenticationPrompt;
    NSXPCConnection *_pipeConnection;
    NSRunLoop *_runLoop;
    CURunLoopThread *_runLoopThread;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice; // ivar: _outputDevice
@property (readonly, nonatomic) NSXPCListenerEndpoint *pipeEndpoint; // ivar: _pipeEndpoint
@property (readonly) Class superclass;


-(BOOL)getInputStream:(*id)arg0 outputStream:(*id)arg1 userInfo:(id)arg2 ;
-(BOOL)requiresCustomPairing;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(NSInteger)port;
-(id)createConnectionWithUserInfo:(id)arg0 ;
-(id)deviceInfo;
-(id)error;
-(id)hostname;
-(id)initWithOutputDevice:(id)arg0 pipeEndpoint:(id)arg1 ;
-(id)name;
-(id)uid;
-(void)_onQueue_resetStreams;
-(void)dealloc;
-(void)reset;
-(void)sendData:(id)arg0 ;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif