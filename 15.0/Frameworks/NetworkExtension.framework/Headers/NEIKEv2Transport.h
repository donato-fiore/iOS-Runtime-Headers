// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2TRANSPORT_H
#define NEIKEV2TRANSPORT_H

@class NSMutableArray, NSString, NWInterface, NWAddressEndpoint;
@protocol NEIKEv2PacketReceiver, OS_nw_connection, NEIKEv2PacketDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver>



@property BOOL cancelled; // ivar: _cancelled
@property (retain) NSMutableArray *clients; // ivar: _clients
@property BOOL connected; // ivar: _connected
@property (retain, nonatomic) NSMutableArray *connectedBlocks; // ivar: _connectedBlocks
@property (retain) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NWInterface *interface; // ivar: _interface
@property (retain) NWAddressEndpoint *local; // ivar: _local
@property (weak) NSObject<NEIKEv2PacketDelegate> *packetDelegate; // ivar: _packetDelegate
@property (readonly) unsigned short port;
@property (retain) NSObject<OS_dispatch_queue> *receiveQueue; // ivar: _receiveQueue
@property (retain) NWAddressEndpoint *remote; // ivar: _remote
@property (readonly) Class superclass;
@property NSUInteger transportType; // ivar: _transportType


+(BOOL)checkAddress:(id)arg0 interface:(id)arg1 ;
+(id)copyExistingTransport:(NSUInteger)arg0 remote:(id)arg1 local:(id)arg2 localPort:(unsigned short)arg3 boundInterface:(id)arg4 packetDelegate:(id)arg5 ;
// +(id)createTransport:(NSUInteger)arg0 remote:(id)arg1 local:(id)arg2 localPort:(unsigned short)arg3 boundInterface:(id)arg4 queue:(id)arg5 socketGetBlock:(id)arg6 packetDelegate:(unk)arg7  ;
+(id)createTransportWithConnection:(id)arg0 queue:(id)arg1 ;
+(id)stringForTransport:(NSUInteger)arg0 ;
-(BOOL)sendData:(id)arg0 sendCompletionHandler:(id)arg1 ;
-(BOOL)sendPacket:(id)arg0 ;
-(BOOL)setupUDPConnectionToRemote:(id)arg0 local:(id)arg1 localPort:(unsigned short)arg2 socketGetBlock:(id)arg3 ;
-(id)init;
-(void)addClient:(id)arg0 wildcard:(BOOL)arg1 delegate:(id)arg2 ;
-(void)callConnectedBlocks;
-(void)cancelClient:(id)arg0 shouldInvalidate:(BOOL)arg1 ;
-(void)dealloc;
-(void)disableWildcardForClient:(id)arg0 ;
-(void)readOnConnection;
-(void)receivePacketData:(id)arg0 ;
-(void)waitForTransport:(id)arg0 ;


@end


#endif