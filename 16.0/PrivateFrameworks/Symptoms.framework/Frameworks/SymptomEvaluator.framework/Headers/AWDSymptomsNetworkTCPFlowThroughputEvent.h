// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDSYMPTOMSNETWORKTCPFLOWTHROUGHPUTEVENT_H
#define AWDSYMPTOMSNETWORKTCPFLOWTHROUGHPUTEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsNetworkTCPFlowThroughputEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger connAttempts; // ivar: _connAttempts
@property (nonatomic) NSUInteger connSuccess; // ivar: _connSuccess
@property (nonatomic) NSUInteger delayedACKFactor; // ivar: _delayedACKFactor
@property (nonatomic) NSUInteger dlThroughputBytesPerSec; // ivar: _dlThroughputBytesPerSec
@property (nonatomic) NSUInteger estimatorConfidence; // ivar: _estimatorConfidence
@property (nonatomic) NSUInteger estimatorDelayMsecs; // ivar: _estimatorDelayMsecs
@property (nonatomic) NSUInteger flowDurationMsecs; // ivar: _flowDurationMsecs
@property (nonatomic) BOOL hasConnAttempts;
@property (nonatomic) BOOL hasConnSuccess;
@property (nonatomic) BOOL hasDelayedACKFactor;
@property (nonatomic) BOOL hasDlThroughputBytesPerSec;
@property (nonatomic) BOOL hasEstimatorConfidence;
@property (nonatomic) BOOL hasEstimatorDelayMsecs;
@property (nonatomic) BOOL hasFlowDurationMsecs;
@property (nonatomic) BOOL hasInvalidResponses;
@property (nonatomic) BOOL hasLQM;
@property (nonatomic) BOOL hasMaxCongestionWindow;
@property (nonatomic) BOOL hasPacketErrorRate;
@property (nonatomic) BOOL hasRetransmissionTimeoutMsecs;
@property (nonatomic) BOOL hasRttAverageMsecs;
@property (nonatomic) BOOL hasRttMinimumMsecs;
@property (nonatomic) BOOL hasRttVariation;
@property (nonatomic) BOOL hasRxBytes;
@property (nonatomic) BOOL hasRxDuplicateBytes;
@property (nonatomic) BOOL hasRxOutOfOrderBytes;
@property (nonatomic) BOOL hasSnapshotType;
@property (nonatomic) BOOL hasThroughputType;
@property (nonatomic) BOOL hasTimeToNetworkEventsMsecs;
@property (nonatomic) BOOL hasTxBytes;
@property (nonatomic) BOOL hasTxRetransmittedBytes;
@property (nonatomic) BOOL hasUlThroughputBytesPerSec;
@property (nonatomic) NSUInteger invalidResponses; // ivar: _invalidResponses
@property (nonatomic) NSInteger lQM; // ivar: _lQM
@property (nonatomic) NSUInteger maxCongestionWindow; // ivar: _maxCongestionWindow
@property (nonatomic) NSUInteger packetErrorRate; // ivar: _packetErrorRate
@property (nonatomic) NSUInteger retransmissionTimeoutMsecs; // ivar: _retransmissionTimeoutMsecs
@property (nonatomic) NSUInteger rttAverageMsecs; // ivar: _rttAverageMsecs
@property (nonatomic) NSUInteger rttMinimumMsecs; // ivar: _rttMinimumMsecs
@property (nonatomic) NSUInteger rttVariation; // ivar: _rttVariation
@property (nonatomic) NSUInteger rxBytes; // ivar: _rxBytes
@property (nonatomic) NSUInteger rxDuplicateBytes; // ivar: _rxDuplicateBytes
@property (nonatomic) NSUInteger rxOutOfOrderBytes; // ivar: _rxOutOfOrderBytes
@property (nonatomic) int snapshotType; // ivar: _snapshotType
@property (nonatomic) int throughputType; // ivar: _throughputType
@property (nonatomic) NSUInteger timeToNetworkEventsMsecs; // ivar: _timeToNetworkEventsMsecs
@property (nonatomic) NSUInteger txBytes; // ivar: _txBytes
@property (nonatomic) NSUInteger txRetransmittedBytes; // ivar: _txRetransmittedBytes
@property (nonatomic) NSUInteger ulThroughputBytesPerSec; // ivar: _ulThroughputBytesPerSec


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)snapshotTypeAsString:(int)arg0 ;
-(id)throughputTypeAsString:(int)arg0 ;
-(int)StringAsSnapshotType:(id)arg0 ;
-(int)StringAsThroughputType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif