// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLESTATISTICS_H
#define HKCODABLESTATISTICS_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"
#import "HKCodableDateComponents.h"

@interface HKCodableStatistics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HKCodableQuantity *averageQuantity; // ivar: _averageQuantity
@property (nonatomic) NSInteger dataCount; // ivar: _dataCount
@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (retain, nonatomic) HKCodableQuantity *durationQuantity; // ivar: _durationQuantity
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasAverageQuantity;
@property (nonatomic) BOOL hasDataCount;
@property (nonatomic) BOOL hasDataType;
@property (readonly, nonatomic) BOOL hasDurationQuantity;
@property (nonatomic) BOOL hasEndDate;
@property (readonly, nonatomic) BOOL hasMaxQuantity;
@property (readonly, nonatomic) BOOL hasMinQuantity;
@property (readonly, nonatomic) BOOL hasMostRecentQuantity;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (readonly, nonatomic) BOOL hasSumQuantity;
@property (retain, nonatomic) HKCodableQuantity *maxQuantity; // ivar: _maxQuantity
@property (retain, nonatomic) HKCodableQuantity *minQuantity; // ivar: _minQuantity
@property (retain, nonatomic) HKCodableQuantity *mostRecentQuantity; // ivar: _mostRecentQuantity
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval; // ivar: _statisticsInterval
@property (retain, nonatomic) HKCodableQuantity *sumQuantity; // ivar: _sumQuantity


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