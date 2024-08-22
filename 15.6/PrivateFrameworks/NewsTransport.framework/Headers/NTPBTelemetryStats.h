// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTELEMETRYSTATS_H
#define NTPBTELEMETRYSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBTelemetryStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) BOOL hasPercentile95;
@property (nonatomic) NSInteger max; // ivar: _max
@property (nonatomic) NSInteger mean; // ivar: _mean
@property (nonatomic) NSInteger median; // ivar: _median
@property (nonatomic) NSInteger min; // ivar: _min
@property (nonatomic) NSInteger percentile95; // ivar: _percentile95


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif