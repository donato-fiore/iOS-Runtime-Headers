// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWSUDPSNAPSHOT_H
#define NWSUDPSNAPSHOT_H

@class NSString, NSData;


#import "NWSProtocolSnapshot.h"

@interface NWSUDPSnapshot : NWSProtocolSnapshot {
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_fuuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    nstat_udp_descriptor _descriptor;
    unsigned int _provider;
    NSUInteger _eventFlags;
}




-(BOOL)countsIncludeHeaderOverhead;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceCellular;
-(BOOL)interfaceCellularViaFallback;
-(BOOL)interfaceCellularViaPreferredFallback;
-(BOOL)interfaceCompanionLink;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(CGFloat)flowDuration;
-(NSUInteger)eupid;
-(NSUInteger)eventFlags;
-(NSUInteger)flowStartContinuousTime;
-(NSUInteger)networkActivityMapPart1;
-(NSUInteger)networkActivityMapPart2;
-(NSUInteger)networkActivityMapStartTime;
-(NSUInteger)uniqueProcessID;
-(id)description;
-(id)euuid;
-(id)flowStartTimestamp;
-(id)fuuid;
-(id)initWithCounts:(struct nstat_counts *)arg0 UDPDescriptor:(struct nstat_udp_descriptor *)arg1 sourceIdent:(NSUInteger)arg2 events:(NSUInteger)arg3 seqno:(NSUInteger)arg4 provider:(unsigned int)arg5 ;
-(id)localAddress;
-(id)processName;
-(id)provider;
-(id)remoteAddress;
-(id)traditionalDictionary;
-(id)uuid;
-(id)vuuid;
-(int)epid;
-(int)processID;
-(unsigned int)interfaceIndex;
-(unsigned int)receiveBufferSize;
-(unsigned int)receiveBufferUsed;
-(unsigned int)trafficClass;


@end


#endif