// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCTRANSPORTSESSIONNW_H
#define VCTRANSPORTSESSIONNW_H

@class NSString;
@protocol OS_dispatch_queue, OS_nw_connection;


#import "VCTransportSession.h"

@interface VCTransportSessionNW : VCTransportSession {
    NSString *_connectionID;
    *tagVCNWConnectionMonitor _monitor;
    *unk _notificationHandler;
    *unk _packetEventHandler;
    *void _handlerContext;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    BOOL _didScheduleReceive;
    int _networkInterfaceType;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}


@property (readonly) NSObject<OS_nw_connection> *nwConnection; // ivar: _connection


-(BOOL)initializeIsIPv6;
-(BOOL)initializeNetworkMTU;
-(BOOL)isIPv6;
-(BOOL)setStateChangeHandlerWithResult:(*BOOL)arg0 semaphore:(id)arg1 ;
-(BOOL)setupNWConnection;
-(id)initWithNWConnectionID:(id)arg0 handlerQueue:(id)arg1 context:(*void)arg2 notificationHandler:(*unk)arg3 eventHandler:(*unk)arg4 ;
-(int)createVFD:(*int)arg0 forStreamType:(unsigned int)arg1 ;
-(int)dupNWConnectionBackingSocket;
-(int)networkInterfaceType;
-(unsigned int)networkMTU;
-(void)createNWMonitor;
-(void)dealloc;
-(void)destroyNWMonitor;
-(void)destroyNWMonitorInternal;
-(void)handleStateChanges:(int)arg0 error:(id)arg1 semaphore:(id)arg2 operationResult:(*BOOL)arg3 ;
-(void)initializeInterfaceType;
-(void)start;
-(void)stop;


@end


#endif