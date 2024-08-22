// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEQUANTITYDISTRIBUTIONDATA_H
#define HKCODABLEQUANTITYDISTRIBUTIONDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableQuantityDistributionData : PBCodable <NSCopying>

 {
    ? _histogramCounts;
    ? _has;
}


@property (retain, nonatomic) HKCodableQuantity *averageValue; // ivar: _averageValue
@property (retain, nonatomic) NSMutableArray *contextIdentifiers; // ivar: _contextIdentifiers
@property (retain, nonatomic) HKCodableQuantity *duration; // ivar: _duration
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasAverageValue;
@property (readonly, nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndDate;
@property (readonly, nonatomic) BOOL hasMaximumValue;
@property (readonly, nonatomic) BOOL hasMinimumBucketValue;
@property (readonly, nonatomic) BOOL hasMinimumValue;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) *CGFloat histogramCounts;
@property (readonly, nonatomic) NSUInteger histogramCountsCount;
@property (retain, nonatomic) HKCodableQuantity *maximumValue; // ivar: _maximumValue
@property (retain, nonatomic) HKCodableQuantity *minimumBucketValue; // ivar: _minimumBucketValue
@property (retain, nonatomic) HKCodableQuantity *minimumValue; // ivar: _minimumValue
@property (nonatomic) CGFloat startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)histogramCountsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)contextIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContextIdentifiers:(id)arg0 ;
-(void)addHistogramCounts:(CGFloat)arg0 ;
-(void)clearContextIdentifiers;
-(void)clearHistogramCounts;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif