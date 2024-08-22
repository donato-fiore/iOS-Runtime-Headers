// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPACKETTUNNELFLOW_H
#define NEPACKETTUNNELFLOW_H

@class NSDictionary, NSFileHandle;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEPacketTunnelFlow : NSObject {
    BOOL _handlerSetup;
    NSObject<OS_dispatch_queue> *_queue;
    id *_packetObjectHandler;
    *char * _packetDataArray;
    *unsigned int _packetProtocols;
    *NSUInteger _packetLengths;
    NSUInteger _buffersSize;
    NSDictionary *_uuidMap;
    NSInteger _interfaceType;
    *NEVirtualInterface_s _interface;
    id *_packetHandler;
}


@property (retain) NSFileHandle *socket; // ivar: _socket


-(BOOL)writePacketObjects:(id)arg0 ;
-(BOOL)writePackets:(id)arg0 withProtocols:(id)arg1 ;
-(void)dealloc;
-(void)readPacketObjectsWithCompletionHandler:(id)arg0 ;
-(void)readPacketsWithCompletionHandler:(id)arg0 ;


@end


#endif