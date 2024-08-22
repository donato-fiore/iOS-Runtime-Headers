// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPSTREAMSESSION_H
#define RPSTREAMSESSION_H

@class CUTCPServer, CUWiFiManager, NSString, NSUUID, NSData;
@protocol NSSecureCoding, OS_nw_listener, OS_nw_path_evaluator, OS_dispatch_queue, RPMessageable;

#import <Foundation/Foundation.h>

#import "RPConnection.h"

@interface RPStreamSession : NSObject <NSSecureCoding>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_nw_listener> *_nwListener;
    NSObject<OS_nw_path_evaluator> *_nwPathEvaluator;
    unsigned char _ourCurveSK;
    ? _peerIP;
    int _peerPort;
    BOOL _prepareOnly;
    RPConnection *_rpCnx;
    CUTCPServer *_tcpServer;
    BOOL _trafficRegistrationCalled;
    CUWiFiManager *_wifiManager;
}


@property (copy, nonatomic) id *connectionReadyHandler; // ivar: _connectionReadyHandler
@property (nonatomic) NSUInteger delegatedProcessUPID; // ivar: _delegatedProcessUPID
@property (copy, nonatomic) NSString *destinationString; // ivar: _destinationString
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *flowControlWriteChangedHandler; // ivar: _flowControlWriteChangedHandler
@property (readonly, nonatomic) int flowControlWriteState;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger
@property (copy, nonatomic) NSUUID *nwClientID; // ivar: _nwClientID
@property (copy, nonatomic) NSData *pskData; // ivar: _pskData
@property (copy, nonatomic) id *receivedEventHandler; // ivar: _receivedEventHandler
@property (copy, nonatomic) id *receivedRequestHandler; // ivar: _receivedRequestHandler
@property (nonatomic) BOOL serverMode; // ivar: _serverMode
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) id *statusChangedHandler; // ivar: _statusChangedHandler
@property (readonly, nonatomic) NSUInteger statusFlags; // ivar: _statusFlags
@property (copy, nonatomic) id *streamAcceptHandler; // ivar: _streamAcceptHandler
@property (nonatomic) unsigned int streamFlags; // ivar: _streamFlags
@property (copy, nonatomic) NSString *streamID; // ivar: _streamID
@property (copy, nonatomic) NSData *streamKey; // ivar: _streamKey
@property (nonatomic) int streamQoS; // ivar: _streamQoS
@property (nonatomic) int streamSocket; // ivar: _streamSocket
@property (nonatomic) int streamType; // ivar: _streamType
@property (nonatomic) unsigned int trafficFlags; // ivar: _trafficFlags
@property (copy, nonatomic) NSString *trafficSessionID; // ivar: _trafficSessionID


+(BOOL)supportsSecureCoding;
-(BOOL)_startServerConnectionAndReturnError:(*id)arg0 ;
-(id)_lowLatencySelfAddressString:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)_getSockAddrInterfaceType:(*void)arg0 ;
-(void)_clientRPConnectionPrepareResponse:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_clientRPConnectionPrepareWithCompletion:(id)arg0 ;
-(void)_clientRPConnectionStartWithCompletion:(id)arg0 ;
-(void)_clientUDPNWPathNextWithEndpoint:(id)arg0 nwInterface:(id)arg1 selfMACData:(id)arg2 usb:(BOOL)arg3 completion:(id)arg4 ;
-(void)_clientUDPNWPathStartResponse:(id)arg0 options:(id)arg1 localEndpoint:(id)arg2 nwInterface:(id)arg3 selfIPString:(id)arg4 usb:(BOOL)arg5 completion:(id)arg6 ;
-(void)_clientUDPNWPathStartWithCompletion:(id)arg0 ;
-(void)_clientUDPSocketStartResponse:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_clientUDPSocketStartWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_serverRPConnectionHandleConnectionAccepted:(int)arg0 ;
-(void)_serverRPConnectionHandleConnectionStarted:(id)arg0 ;
-(void)_serverRPConnectionStartRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
// -(void)_serverUDPNWPathNextWithEndpoint:(id)arg0 nwInterface:(id)arg1 selfMACData:(id)arg2 peerIP:(unk)arg3 peerMACData:(struct sockaddr )arg4 usb:(struct sockaddr_in )arg5 responseHandler:(struct sockaddr_in6 )arg6  ;
-(void)_serverUDPNWPathStartRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_serverUDPSocketStartRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_updateTrafficRegistration;
-(void)_updateTrafficRegistrationForDestination:(id)arg0 ;
-(void)_updateTrafficRegistrationForIP:(*unk)arg0 ;
-(void)acceptedByServer;
-(void)activateForServerRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)prepareWithCompletion:(id)arg0 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)startServerConnectionWithCompletion:(id)arg0 ;


@end


#endif