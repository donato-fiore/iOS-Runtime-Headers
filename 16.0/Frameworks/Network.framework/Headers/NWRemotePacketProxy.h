// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWREMOTEPACKETPROXY_H
#define NWREMOTEPACKETPROXY_H

@class NSMutableArray;
@protocol NWRemotePacketProxyDelegate;

#import <Foundation/Foundation.h>


@interface NWRemotePacketProxy : NSObject {
    ? _packetProtocol;
    ? _defaultOutputHandler;
}


@property ? defaultOutputHandler;
@property (weak) NSObject<NWRemotePacketProxyDelegate> *delegate; // ivar: _delegate
@property *nw_hash_table packetHashTable; // ivar: _packetHashTable
@property ? packetProtocol;
@property ? protocol;
@property (nonatomic) unsigned int receiveWindowPacketCount; // ivar: _receiveWindowPacketCount
@property (retain) NSMutableArray *writeRequests; // ivar: _writeRequests


-(?)outputHandlerForPacketinbound;
-(BOOL)receiveRemotePacket:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;


@end


#endif