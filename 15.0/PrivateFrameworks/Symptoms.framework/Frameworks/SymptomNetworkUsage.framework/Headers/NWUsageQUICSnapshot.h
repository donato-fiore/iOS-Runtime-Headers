// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWUSAGEQUICSNAPSHOT_H
#define NWUSAGEQUICSNAPSHOT_H

@class NSString, NSDate, NSUUID, NSData;


#import "NWUsageUDPSnapshot.h"

@interface NWUsageQUICSnapshot : NWUsageUDPSnapshot {
    NSString *_processName;
    NSDate *_startTimestamp;
    NSDate *_snapshotTimestamp;
    CGFloat _startTimeInterval;
    CGFloat _snapshotTimeInterval;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUUID *_vuuid;
    NSUUID *_flowuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    *nstat_tcp_descriptor _descriptor;
}


@property (readonly, nonatomic) CGFloat rttAverage;
@property (readonly, nonatomic) CGFloat rttMinimum;
@property (readonly, nonatomic) CGFloat rttVariation;
@property (readonly, nonatomic) unsigned int rxDuplicateBytes; // ivar: _rxDuplicateBytes
@property (readonly, nonatomic) unsigned int rxOutOfOrderBytes; // ivar: _rxOutOfOrderBytes
@property (readonly, nonatomic) unsigned int txRetransmittedBytes; // ivar: _txRetransmittedBytes


-(BOOL)failedFlowswitchValuesLookup;
-(BOOL)failedRouteValuesLookup;
-(BOOL)failedSkywalkAction;
-(BOOL)flowUsesChannels;
-(BOOL)hasLocalDestination;
-(BOOL)hasNonLocalDestination;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceCellular;
-(BOOL)interfaceCellularViaFallback;
-(BOOL)interfaceCellularViaFastFallback;
-(BOOL)interfaceCellularViaPreferredFallback;
-(BOOL)interfaceCellularViaSlowFallback;
-(BOOL)interfaceConstrained;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceLLW;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceWiFi;
-(BOOL)interfaceWired;
-(CGFloat)flowDuration;
-(CGFloat)flowSnapshotTimeIntervalSince1970;
-(CGFloat)flowSnapshotTimeIntervalSinceReferenceDate;
-(CGFloat)flowStartTimeIntervalSince1970;
-(CGFloat)flowStartTimeIntervalSinceReferenceDate;
-(NSUInteger)eupid;
-(NSUInteger)flowStartContinuousTime;
-(NSUInteger)networkActivityMapPart1;
-(NSUInteger)networkActivityMapPart2;
-(NSUInteger)networkActivityMapStartTime;
-(NSUInteger)uniqueProcessID;
-(id)descriptorDescription;
-(id)euuid;
-(id)flowSnapshotTimestamp;
-(id)flowStartTimestamp;
-(id)flowuuid;
-(id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 startTime:(CGFloat)arg1 flowFlags:(unsigned int)arg2 previously:(struct update_subset_for_deltas *)arg3 ;
-(id)localAddress;
-(id)processName;
-(id)provider;
-(id)remoteAddress;
-(id)uuid;
-(id)vuuid;
-(int)epid;
-(int)processID;
-(unsigned int)interfaceIndex;
-(unsigned int)receiveBufferSize;
-(unsigned int)receiveBufferUsed;
-(unsigned int)trafficClass;
-(unsigned short)localPort;
-(unsigned short)remotePort;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;


@end


#endif