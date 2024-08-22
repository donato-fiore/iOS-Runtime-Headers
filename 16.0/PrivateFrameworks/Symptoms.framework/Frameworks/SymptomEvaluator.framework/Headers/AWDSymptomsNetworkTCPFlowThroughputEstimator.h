// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDSYMPTOMSNETWORKTCPFLOWTHROUGHPUTESTIMATOR_H
#define AWDSYMPTOMSNETWORKTCPFLOWTHROUGHPUTESTIMATOR_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface AWDSymptomsNetworkTCPFlowThroughputEstimator : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSMutableArray *flowThroughputEvents; // ivar: _flowThroughputEvents
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (nonatomic) BOOL hasNetworkType;
@property (readonly, nonatomic) BOOL hasSourceAppIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int networkType; // ivar: _networkType
@property (retain, nonatomic) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)flowThroughputEventType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)flowThroughputEventAtIndex:(NSUInteger)arg0 ;
-(id)networkTypeAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(void)addFlowThroughputEvent:(id)arg0 ;
-(void)clearFlowThroughputEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif