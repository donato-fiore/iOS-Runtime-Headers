// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRSESSION_H
#define TRSESSION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "TRConnection.h"
#import "TRAnisetteDataHandler.h"
#import "TRNearbyDevice.h"

@interface TRSession : NSObject {
    TRConnection *_connection;
}


@property (retain, nonatomic) TRAnisetteDataHandler *anisetteDataHandler; // ivar: _anisetteDataHandler
@property (readonly, getter=isConnected) BOOL connected;
@property (retain) TRConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQ; // ivar: _connectionQ
@property (copy, nonatomic) id *disconnectHandler; // ivar: _disconnectHandler
@property (retain) NSObject<OS_dispatch_source> *heartbeatRequestTimer; // ivar: _heartbeatRequestTimer
@property (retain, nonatomic) NSMutableDictionary *messageHandlerMap; // ivar: _messageHandlerMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageHandlerMapQ; // ivar: _messageHandlerMapQ
@property (retain, nonatomic) TRNearbyDevice *nearbyDevice; // ivar: _nearbyDevice


-(id)_handlerForEventClass:(SEL)arg0 ;
-(id)_handlerForRequestClass:(SEL)arg0 ;
-(id)_messageHandlerForMessageClass:(Class)arg0 ;
-(id)init;
-(id)initWithNearbyDevice:(id)arg0 ;
-(void)_handleEvent:(id)arg0 ;
-(void)_handleHeartbeatWithResponseHandler:(id)arg0 ;
-(void)_handleRequest:(id)arg0 ;
-(void)_respondToRequest:(id)arg0 withError:(id)arg1 ;
-(void)_sendHeartbeats;
-(void)_sendResponse:(id)arg0 forRequest:(id)arg1 ;
-(void)_setMessageHandler:(id)arg0 forMessageClass:(Class)arg1 ;
-(void)disconnect;
-(void)sendEvent:(id)arg0 ;
-(void)sendHeartbeatWithResponseHandler:(id)arg0 ;
-(void)sendRequest:(id)arg0 withResponseHandler:(id)arg1 ;
// -(void)setEventHandler:(id)arg0 forEventClass:(unk)arg1  ;
// -(void)setRequestHandler:(id)arg0 forRequestClass:(unk)arg1  ;
-(void)startHeartbeat;


@end


#endif