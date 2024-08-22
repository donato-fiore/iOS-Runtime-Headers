// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCTRANSPORTSESSIONNW_H
#define VCTRANSPORTSESSIONNW_H

@class NSString;
@protocol OS_nw_connection;


#import "VCTransportSession.h"

@interface VCTransportSessionNW : VCTransportSession {
    NSObject<OS_nw_connection> *_rtpConnection;
    NSObject<OS_nw_connection> *_rtcpConnection;
    NSString *_rtpConnectionID;
    NSString *_rtcpConnectionID;
    BOOL _isSharedConnection;
    BOOL _didScheduleReceive;
    int _networkInterfaceType;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}




-(BOOL)initializeIsIPv6;
-(BOOL)initializeNetworkMTU;
-(BOOL)isIPv6;
-(BOOL)setStateChangeHandlerForConnection:(id)arg0 result:(*BOOL)arg1 semaphore:(id)arg2 ;
-(BOOL)setupNWConnection:(id)arg0 ;
-(id)initWithRTPNWConnectionID:(id)arg0 RTCPNWConnectionID:(id)arg1 handlerQueue:(id)arg2 context:(*void)arg3 notificationHandler:(*unk)arg4 eventHandler:(*unk)arg5 ;
-(int)createVFD:(*int)arg0 forStreamType:(unsigned int)arg1 ;
-(int)dupRTCPNWConnectionBackingSocket;
-(int)dupRTPNWConnectionBackingSocket;
-(int)dupRTPNWConnectionBackingSocketForNWConnection:(id)arg0 ;
-(int)networkInterfaceType;
-(struct tagVCNWConnectionMonitor *)createNWMonitor;
-(unsigned int)networkMTU;
-(void)createNWConnection:(*id)arg0 forConnectionID:(id)arg1 ;
-(void)dealloc;
-(void)handleStateChanges:(int)arg0 error:(id)arg1 semaphore:(id)arg2 operationResult:(*BOOL)arg3 ;
-(void)initializeInterfaceType;
-(void)start;
-(void)stop;


@end


#endif