// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPACKETTUNNELFLOW_H
#define NEPACKETTUNNELFLOW_H

@class NSFileHandle, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEPacketTunnelFlow : NSObject

@property NSUInteger buffersSize; // ivar: _buffersSize
@property BOOL handlerSetup; // ivar: _handlerSetup
@property (readonly) *NEVirtualInterface_s interface; // ivar: _interface
@property (readonly) NSInteger interfaceType; // ivar: _interfaceType
@property *char * packetDataArray; // ivar: _packetDataArray
@property (copy) id *packetHandler; // ivar: _packetHandler
@property *NSUInteger packetLengths; // ivar: _packetLengths
@property (copy) id *packetObjectHandler; // ivar: _packetObjectHandler
@property *unsigned int packetProtocols; // ivar: _packetProtocols
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSFileHandle *socket; // ivar: _socket
@property (retain) NSDictionary *uuidMap; // ivar: _uuidMap


-(BOOL)setVirtualInterfaceSocket:(id)arg0 ;
-(BOOL)writePacketObjects:(id)arg0 ;
-(BOOL)writePackets:(id)arg0 withProtocols:(id)arg1 ;
-(id)initWithVirtualInterfaceType:(NSInteger)arg0 ;
-(void)closeVirtualInterface;
-(void)dealloc;
-(void)readPacketObjectsWithCompletionHandler:(id)arg0 ;
-(void)readPacketsWithCompletionHandler:(id)arg0 ;
-(void)resetReadHandler;
-(void)setAppUUIDMap:(id)arg0 ;


@end


#endif