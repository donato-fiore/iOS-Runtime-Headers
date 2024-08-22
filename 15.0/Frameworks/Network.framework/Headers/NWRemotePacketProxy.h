// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWREMOTEPACKETPROXY_H
#define NWREMOTEPACKETPROXY_H

@class NSMutableArray;
@protocol NWRemotePacketProxyDelegate;

#import <Foundation/Foundation.h>


@interface NWRemotePacketProxy : NSObject

@property *nw_protocol defaultOutputHandler; // ivar: _defaultOutputHandler
@property (weak) NSObject<NWRemotePacketProxyDelegate> *delegate; // ivar: _delegate
@property *nw_hash_table packetHashTable; // ivar: _packetHashTable
@property *nw_protocol packetProtocol; // ivar: _packetProtocol
@property (readonly, nonatomic) *nw_protocol protocol;
@property (nonatomic) unsigned int receiveWindowPacketCount; // ivar: _receiveWindowPacketCount
@property (retain) NSMutableArray *writeRequests; // ivar: _writeRequests


-(?)outputHandlerForPacketinbound;
-(?)setDefaultOutputProtocolHandler;
-(?)setOutputProtocolHandler:(?)arg0 local:(?)arg1 remoteipProtocol;
-(BOOL)receiveRemotePacket:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif