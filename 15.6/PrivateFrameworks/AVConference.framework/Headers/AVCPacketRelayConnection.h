// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCPACKETRELAYCONNECTION_H
#define AVCPACKETRELAYCONNECTION_H


#import <Foundation/Foundation.h>


@interface AVCPacketRelayConnection : NSObject



+(id)connectionWithIDSDestination:(id)arg0 ;
+(id)connectionWithIDSSocketDescriptor:(unsigned short)arg0 ;
+(id)connectionWithSocket:(unsigned short)arg0 ;
+(id)connectionWithSocket:(unsigned short)arg0 remoteAddress:(id)arg1 ;
+(id)connectionWithSocket:(unsigned short)arg0 remoteAddress:(id)arg1 packetFilter:(id)arg2 ;


@end


#endif