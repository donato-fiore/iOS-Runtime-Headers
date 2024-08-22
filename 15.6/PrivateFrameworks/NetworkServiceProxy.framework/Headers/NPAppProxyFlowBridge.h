// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPAPPPROXYFLOWBRIDGE_H
#define NPAPPPROXYFLOWBRIDGE_H

@class NSError, NEAppProxyFlow, NWEndpoint;
@protocol OS_nw_connection, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPAppProxyFlowBridge : NSObject

@property (retain) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (retain) NSError *connectionError; // ivar: _connectionError
@property int currentState; // ivar: _currentState
@property BOOL eofFlow; // ivar: _eofFlow
@property BOOL eofNW; // ivar: _eofNW
@property (retain) NEAppProxyFlow *flow; // ivar: _flow
@property (retain, nonatomic) NSObject<OS_os_transaction> *networkTransaction; // ivar: _networkTransaction
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NWEndpoint *remoteEndpoint; // ivar: _remoteEndpoint


-(id)initWithAppProxyFlow:(id)arg0 ;
-(void)closeAllWithError:(id)arg0 ;
-(void)closeFlowWithError:(id)arg0 ;
-(void)handleConnectionReady;
-(void)handleDataFromClient:(id)arg0 readError:(id)arg1 ;
-(void)handleDataWriteToFlowCompletion:(id)arg0 ;
-(void)readDataFromClient;
-(void)readDataFromConnection;
-(void)readMultipleFromClient;
-(void)readMultipleFromConnection;
-(void)startConnection;
-(void)startSendReceiveLoop;
-(void)writeDataToConnection:(id)arg0 ;
-(void)writeDataToFlow:(id)arg0 ;
-(void)writeMultipleToConnection:(*id)arg0 count:(unsigned int)arg1 ;


@end


#endif