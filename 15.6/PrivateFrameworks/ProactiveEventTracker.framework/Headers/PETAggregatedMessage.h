// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETAGGREGATEDMESSAGE_H
#define PETAGGREGATEDMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "PETDistribution.h"
#import "PETAggregationKey.h"

@interface PETAggregatedMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int count; // ivar: _count
@property (retain, nonatomic) PETDistribution *distribution; // ivar: _distribution
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasDistribution;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) PETAggregationKey *key; // ivar: _key


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