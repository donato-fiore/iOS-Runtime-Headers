// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSNETWORKUSAGEATTRIBUTIONMETRIC_H
#define AWDSYMPTOMSNETWORKUSAGEATTRIBUTIONMETRIC_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsNetworkUsageAttributionMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger flowsImpactedCount; // ivar: _flowsImpactedCount
@property (nonatomic) BOOL hasFlowsImpactedCount;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUsageAttributedTo;
@property (nonatomic) BOOL hasUsageBytes;
@property (nonatomic) int networkType; // ivar: _networkType
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int usageAttributedTo; // ivar: _usageAttributedTo
@property (nonatomic) NSUInteger usageBytes; // ivar: _usageBytes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(id)usageAttributedToAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(int)StringAsUsageAttributedTo:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif