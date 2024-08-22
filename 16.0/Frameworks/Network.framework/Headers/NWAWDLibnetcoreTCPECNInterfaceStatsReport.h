// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDLIBNETCORETCPECNINTERFACESTATSREPORT_H
#define NWAWDLIBNETCORETCPECNINTERFACESTATSREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreTCPECNInterfaceStatsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasIpProtocol;
@property (nonatomic) BOOL hasTcpECNIntClientSetup;
@property (nonatomic) BOOL hasTcpECNIntClientSuccess;
@property (nonatomic) BOOL hasTcpECNIntConnNoPLCE;
@property (nonatomic) BOOL hasTcpECNIntConnPLCE;
@property (nonatomic) BOOL hasTcpECNIntConnPLNoCE;
@property (nonatomic) BOOL hasTcpECNIntConnRecvCE;
@property (nonatomic) BOOL hasTcpECNIntConnRecvECE;
@property (nonatomic) BOOL hasTcpECNIntFallbackCE;
@property (nonatomic) BOOL hasTcpECNIntFallbackDropRst;
@property (nonatomic) BOOL hasTcpECNIntFallbackDropRxmt;
@property (nonatomic) BOOL hasTcpECNIntFallbackReorder;
@property (nonatomic) BOOL hasTcpECNIntFallbackSYNRst;
@property (nonatomic) BOOL hasTcpECNIntFallbackSynLoss;
@property (nonatomic) BOOL hasTcpECNIntNotSupportedPeer;
@property (nonatomic) BOOL hasTcpECNIntOffAvgRTT;
@property (nonatomic) BOOL hasTcpECNIntOffDropRst;
@property (nonatomic) BOOL hasTcpECNIntOffDropRxmt;
@property (nonatomic) BOOL hasTcpECNIntOffOOBPer;
@property (nonatomic) BOOL hasTcpECNIntOffRTTVar;
@property (nonatomic) BOOL hasTcpECNIntOffReorderPer;
@property (nonatomic) BOOL hasTcpECNIntOffRxmtPer;
@property (nonatomic) BOOL hasTcpECNIntOffSACKE;
@property (nonatomic) BOOL hasTcpECNIntOffTotalOOPkts;
@property (nonatomic) BOOL hasTcpECNIntOffTotalRxPkts;
@property (nonatomic) BOOL hasTcpECNIntOffTotalRxmtPkts;
@property (nonatomic) BOOL hasTcpECNIntOffTotalTxPkts;
@property (nonatomic) BOOL hasTcpECNIntOnAvgRTT;
@property (nonatomic) BOOL hasTcpECNIntOnDropRst;
@property (nonatomic) BOOL hasTcpECNIntOnDropRxmt;
@property (nonatomic) BOOL hasTcpECNIntOnOOBPer;
@property (nonatomic) BOOL hasTcpECNIntOnRTTVar;
@property (nonatomic) BOOL hasTcpECNIntOnReorderPer;
@property (nonatomic) BOOL hasTcpECNIntOnSACKE;
@property (nonatomic) BOOL hasTcpECNIntOnTotalOOPkts;
@property (nonatomic) BOOL hasTcpECNIntOnTotalRxPkts;
@property (nonatomic) BOOL hasTcpECNIntOnTotalRxmtPkts;
@property (nonatomic) BOOL hasTcpECNIntOnTotalTxPkts;
@property (nonatomic) BOOL hasTcpECNIntRecvCE;
@property (nonatomic) BOOL hasTcpECNIntRecvECE;
@property (nonatomic) BOOL hasTcpECNIntRxmtPer;
@property (nonatomic) BOOL hasTcpECNIntSentECE;
@property (nonatomic) BOOL hasTcpECNIntServerSetup;
@property (nonatomic) BOOL hasTcpECNIntServerSuccess;
@property (nonatomic) BOOL hasTcpECNIntSynAckLost;
@property (nonatomic) BOOL hasTcpECNIntSynLost;
@property (nonatomic) BOOL hasTcpECNIntTotalConnections;
@property (nonatomic) BOOL hasTcpUnsentDataAtSleepCnt;
@property (nonatomic) NSUInteger interfaceType; // ivar: _interfaceType
@property (nonatomic) NSUInteger ipProtocol; // ivar: _ipProtocol
@property (nonatomic) NSUInteger tcpECNIntClientSetup; // ivar: _tcpECNIntClientSetup
@property (nonatomic) NSUInteger tcpECNIntClientSuccess; // ivar: _tcpECNIntClientSuccess
@property (nonatomic) NSUInteger tcpECNIntConnNoPLCE; // ivar: _tcpECNIntConnNoPLCE
@property (nonatomic) NSUInteger tcpECNIntConnPLCE; // ivar: _tcpECNIntConnPLCE
@property (nonatomic) NSUInteger tcpECNIntConnPLNoCE; // ivar: _tcpECNIntConnPLNoCE
@property (nonatomic) NSUInteger tcpECNIntConnRecvCE; // ivar: _tcpECNIntConnRecvCE
@property (nonatomic) NSUInteger tcpECNIntConnRecvECE; // ivar: _tcpECNIntConnRecvECE
@property (nonatomic) NSUInteger tcpECNIntFallbackCE; // ivar: _tcpECNIntFallbackCE
@property (nonatomic) NSUInteger tcpECNIntFallbackDropRst; // ivar: _tcpECNIntFallbackDropRst
@property (nonatomic) NSUInteger tcpECNIntFallbackDropRxmt; // ivar: _tcpECNIntFallbackDropRxmt
@property (nonatomic) NSUInteger tcpECNIntFallbackReorder; // ivar: _tcpECNIntFallbackReorder
@property (nonatomic) NSUInteger tcpECNIntFallbackSYNRst; // ivar: _tcpECNIntFallbackSYNRst
@property (nonatomic) NSUInteger tcpECNIntFallbackSynLoss; // ivar: _tcpECNIntFallbackSynLoss
@property (nonatomic) NSUInteger tcpECNIntNotSupportedPeer; // ivar: _tcpECNIntNotSupportedPeer
@property (nonatomic) NSUInteger tcpECNIntOffAvgRTT; // ivar: _tcpECNIntOffAvgRTT
@property (nonatomic) NSUInteger tcpECNIntOffDropRst; // ivar: _tcpECNIntOffDropRst
@property (nonatomic) NSUInteger tcpECNIntOffDropRxmt; // ivar: _tcpECNIntOffDropRxmt
@property (nonatomic) NSUInteger tcpECNIntOffOOBPer; // ivar: _tcpECNIntOffOOBPer
@property (nonatomic) NSUInteger tcpECNIntOffRTTVar; // ivar: _tcpECNIntOffRTTVar
@property (nonatomic) NSUInteger tcpECNIntOffReorderPer; // ivar: _tcpECNIntOffReorderPer
@property (nonatomic) NSUInteger tcpECNIntOffRxmtPer; // ivar: _tcpECNIntOffRxmtPer
@property (nonatomic) NSUInteger tcpECNIntOffSACKE; // ivar: _tcpECNIntOffSACKE
@property (nonatomic) NSUInteger tcpECNIntOffTotalOOPkts; // ivar: _tcpECNIntOffTotalOOPkts
@property (nonatomic) NSUInteger tcpECNIntOffTotalRxPkts; // ivar: _tcpECNIntOffTotalRxPkts
@property (nonatomic) NSUInteger tcpECNIntOffTotalRxmtPkts; // ivar: _tcpECNIntOffTotalRxmtPkts
@property (nonatomic) NSUInteger tcpECNIntOffTotalTxPkts; // ivar: _tcpECNIntOffTotalTxPkts
@property (nonatomic) NSUInteger tcpECNIntOnAvgRTT; // ivar: _tcpECNIntOnAvgRTT
@property (nonatomic) NSUInteger tcpECNIntOnDropRst; // ivar: _tcpECNIntOnDropRst
@property (nonatomic) NSUInteger tcpECNIntOnDropRxmt; // ivar: _tcpECNIntOnDropRxmt
@property (nonatomic) NSUInteger tcpECNIntOnOOBPer; // ivar: _tcpECNIntOnOOBPer
@property (nonatomic) NSUInteger tcpECNIntOnRTTVar; // ivar: _tcpECNIntOnRTTVar
@property (nonatomic) NSUInteger tcpECNIntOnReorderPer; // ivar: _tcpECNIntOnReorderPer
@property (nonatomic) NSUInteger tcpECNIntOnSACKE; // ivar: _tcpECNIntOnSACKE
@property (nonatomic) NSUInteger tcpECNIntOnTotalOOPkts; // ivar: _tcpECNIntOnTotalOOPkts
@property (nonatomic) NSUInteger tcpECNIntOnTotalRxPkts; // ivar: _tcpECNIntOnTotalRxPkts
@property (nonatomic) NSUInteger tcpECNIntOnTotalRxmtPkts; // ivar: _tcpECNIntOnTotalRxmtPkts
@property (nonatomic) NSUInteger tcpECNIntOnTotalTxPkts; // ivar: _tcpECNIntOnTotalTxPkts
@property (nonatomic) NSUInteger tcpECNIntRecvCE; // ivar: _tcpECNIntRecvCE
@property (nonatomic) NSUInteger tcpECNIntRecvECE; // ivar: _tcpECNIntRecvECE
@property (nonatomic) NSUInteger tcpECNIntRxmtPer; // ivar: _tcpECNIntRxmtPer
@property (nonatomic) NSUInteger tcpECNIntSentECE; // ivar: _tcpECNIntSentECE
@property (nonatomic) NSUInteger tcpECNIntServerSetup; // ivar: _tcpECNIntServerSetup
@property (nonatomic) NSUInteger tcpECNIntServerSuccess; // ivar: _tcpECNIntServerSuccess
@property (nonatomic) NSUInteger tcpECNIntSynAckLost; // ivar: _tcpECNIntSynAckLost
@property (nonatomic) NSUInteger tcpECNIntSynLost; // ivar: _tcpECNIntSynLost
@property (nonatomic) NSUInteger tcpECNIntTotalConnections; // ivar: _tcpECNIntTotalConnections
@property (nonatomic) NSUInteger tcpUnsentDataAtSleepCnt; // ivar: _tcpUnsentDataAtSleepCnt


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif