// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATASTREAMTCPTRANSPORT_H
#define HMDDATASTREAMTCPTRANSPORT_H

@class NSString, HMFNetAddress;
@protocol HMFLogging, HMDDataStreamTransport, HMDDataStreamTransportDelegate, HMDNetworkConnection, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDDataStreamFrameReader.h"

@interface HMDDataStreamTCPTransport : NSObject <HMFLogging, HMDDataStreamTransport>

 {
    BOOL _connected;
    NSInteger _remotePort;
    int _schedulingMode;
}


@property (readonly, nonatomic) HMDDataStreamFrameReader *byteReader; // ivar: _byteReader
@property (copy, nonatomic) id *connectionFactory; // ivar: _connectionFactory
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDDataStreamTransportDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) HMFNetAddress *remoteAddress; // ivar: _remoteAddress
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HMDNetworkConnection> *tcpConnection; // ivar: _tcpConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_createTcpConnection;
-(id)initWithAddress:(id)arg0 port:(NSInteger)arg1 targetQueue:(id)arg2 logIdentifier:(id)arg3 ;
-(id)initWithAddress:(id)arg0 port:(NSInteger)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 ;
-(void)_closeWithError:(id)arg0 ;
-(void)_consumeReceivedData:(id)arg0 ;
-(void)_doReceive;
-(void)_handleReadClose;
-(void)_registerForConnectionEvents;
-(void)_start;
-(void)_stopWithError:(id)arg0 ;
-(void)close;
-(void)connect;
-(void)dealloc;
-(void)sendRawFrame:(id)arg0 completion:(id)arg1 ;
-(void)setTrafficClass:(NSUInteger)arg0 ;


@end


#endif