// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2TRANSPORT_H
#define NEIKEV2TRANSPORT_H

@class NWAddressEndpoint, NWInterface, NSMutableArray, NSString;
@protocol NEIKEv2PacketReceiver, NEIKEv2PacketDelegate, OS_nw_connection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver>

 {
    BOOL _connected;
    BOOL _cancelled;
    NWAddressEndpoint *_local;
    NWAddressEndpoint *_remote;
    NSUInteger _transportType;
    id<NEIKEv2PacketDelegate> *_packetDelegate;
    NSObject<OS_nw_connection> *_connection;
    NWInterface *_interface;
    NSMutableArray *_connectedBlocks;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSMutableArray *_clients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)receivePacketData:(id)arg0 ;


@end


#endif