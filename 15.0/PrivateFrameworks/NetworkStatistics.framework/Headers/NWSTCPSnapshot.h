// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWSTCPSNAPSHOT_H
#define NWSTCPSNAPSHOT_H

@class NSString, NSData;


#import "NWSProtocolSnapshot.h"

@interface NWSTCPSnapshot : NWSProtocolSnapshot {
    NSString *_congestionAlgorithm;
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_fuuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    nstat_tcp_descriptor _descriptor;
    unsigned int _provider;
    NSUInteger _eventFlags;
}


@property (readonly) NSString *TCPState;
@property (readonly) NSString *congestionAlgorithm;
@property (readonly) BOOL connProbeFailed;
@property (readonly) unsigned int connectAttempts;
@property (readonly) unsigned int connectSuccesses;
@property (readonly) BOOL flowIsLocal;
@property (readonly) BOOL flowIsNonLocal;
@property (readonly) BOOL probeActivated;
@property (readonly) BOOL readProbeFailed;
@property (readonly) CGFloat rttAverage;
@property (readonly) CGFloat rttMinimum;
@property (readonly) CGFloat rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int sendBufferSize;
@property (readonly) unsigned int sendBufferUsed;
@property (readonly) unsigned int trafficManagementFlags;
@property (readonly) unsigned int txCongestionWindow;
@property (readonly) unsigned int txRetransmittedBytes;
@property (readonly) unsigned int txUnacked;
@property (readonly) unsigned int txWindow;
@property (readonly) BOOL writeProbeFailed;


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
-(id)initWithCounts:(struct nstat_counts *)arg0 TCPDescriptor:(struct nstat_tcp_descriptor *)arg1 sourceIdent:(NSUInteger)arg2 events:(NSUInteger)arg3 seqno:(NSUInteger)arg4 provider:(unsigned int)arg5 ;
-(id)localAddress;
-(id)processName;
-(id)provider;
-(id)remoteAddress;
-(id)traditionalDictionary;
-(id)uuid;
-(id)vuuid;
-(int)epid;
-(int)processID;
-(unsigned int)connstatusConnProbeFailed;
-(unsigned int)connstatusProbeActivated;
-(unsigned int)connstatusReadProbeFailed;
-(unsigned int)connstatusWriteProbeFailed;
-(unsigned int)interfaceIndex;
-(unsigned int)receiveBufferSize;
-(unsigned int)receiveBufferUsed;
-(unsigned int)trafficClass;


@end


#endif