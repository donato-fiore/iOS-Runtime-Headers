// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCTRANSPORTCLIENT_H
#define ACCTRANSPORTCLIENT_H

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol ACCTransportXPCClientProtocol, ACCTransportClientDelegate;

#import <Foundation/Foundation.h>


@interface ACCTransportClient : NSObject <ACCTransportXPCClientProtocol>



@property (retain, nonatomic) NSMutableDictionary *connectionPropertyChangeHandlers; // ivar: _connectionPropertyChangeHandlers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACCTransportClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *endpointDataOutHandlers; // ivar: _endpointDataOutHandlers
@property (retain, nonatomic) NSMutableDictionary *endpointPropertyChangeHandlers; // ivar: _endpointPropertyChangeHandlers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


+(id)sharedClient;
-(BOOL)destroyConnectionWithUUID:(id)arg0 ;
-(BOOL)destroyEndpointWithUUID:(id)arg0 ;
-(BOOL)isConnectionAuthenticated:(id)arg0 ;
-(BOOL)processIncomingData:(id)arg0 forEndpointWithUUID:(id)arg1 ;
-(BOOL)publishConnectionWithUUID:(id)arg0 ;
-(BOOL)removeProperty:(id)arg0 forConnectionWithUUID:(id)arg1 ;
-(BOOL)removeProperty:(id)arg0 forEndpointWithUUID:(id)arg1 ;
-(BOOL)setAccessoryInfo:(id)arg0 forEndpointWithUUID:(id)arg1 ;
-(BOOL)setProperties:(id)arg0 forConnectionWithUUID:(id)arg1 ;
-(BOOL)setProperties:(id)arg0 forEndpointWithUUID:(id)arg1 ;
-(BOOL)setProperty:(id)arg0 value:(id)arg1 forConnectionWithUUID:(id)arg2 ;
-(BOOL)setProperty:(id)arg0 value:(id)arg1 forEndpointWithUUID:(id)arg2 ;
-(id)_init;
-(id)accessoryInfoForConnectionWithUUID:(id)arg0 ;
-(id)accessoryInfoForEndpointWithUUID:(id)arg0 ;
-(id)connectionUUIDForEndpointWithUUID:(id)arg0 ;
-(id)createConnectionWithType:(int)arg0 andIdentifier:(id)arg1 ;
// -(id)createEndpointWithTransportType:(int)arg0 andProtocol:(int)arg1 andIdentifier:(id)arg2 andDataOutHandler:(id)arg3 forConnectionWithUUID:(unk)arg4 publishConnection:(id)arg5  ;
-(id)endpointUUIDsForConnectionWithUUID:(id)arg0 ;
-(id)identifierForConnectionWithUUID:(id)arg0 ;
-(id)identifierForEndpointWithUUID:(id)arg0 ;
-(id)init;
-(id)propertiesForConnectionWithUUID:(id)arg0 ;
-(id)propertiesForEndpointWithUUID:(id)arg0 ;
-(int)authStatusForConnectionWithUUID:(id)arg0 authType:(int)arg1 ;
-(void)authStateDidChange:(int)arg0 forConnectionWithUUID:(id)arg1 previousAuthState:(int)arg2 authType:(int)arg3 connectionIsAuthenticated:(BOOL)arg4 connectionWasAuthenticated:(BOOL)arg5 ;
-(void)connectToServer;
-(void)dealloc;
-(void)launchServer;
-(void)propertiesDidChange:(id)arg0 forConnectionWithUUID:(id)arg1 previousProperties:(id)arg2 ;
-(void)propertiesDidChange:(id)arg0 forEndpointWithUUID:(id)arg1 previousProperties:(id)arg2 connectionUUID:(id)arg3 ;
-(void)sendOutgoingData:(id)arg0 forEndpointWithUUID:(id)arg1 connectionUUID:(id)arg2 withReply:(id)arg3 ;
-(void)setConnectionAuthenticated:(id)arg0 state:(BOOL)arg1 ;
// -(void)setHandler:(id)arg0 forConnectionProperty:(unk)arg1  ;
// -(void)setHandler:(id)arg0 forEndpointProperty:(unk)arg1  ;


@end


#endif