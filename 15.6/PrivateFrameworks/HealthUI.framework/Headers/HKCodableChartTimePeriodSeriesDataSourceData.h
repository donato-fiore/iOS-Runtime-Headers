// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLECHARTTIMEPERIODSERIESDATASOURCEDATA_H
#define HKCODABLECHARTTIMEPERIODSERIESDATASOURCEDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableDateComponents.h"

@interface HKCodableChartTimePeriodSeriesDataSourceData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *dateIntervalsToTotals; // ivar: _dateIntervalsToTotals
@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) NSMutableArray *intervalCounts; // ivar: _intervalCounts
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval; // ivar: _statisticsInterval


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateIntervalsToTotalsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)intervalCountsAtIndex:(NSUInteger)arg0 ;
-(void)addDateIntervalsToTotals:(id)arg0 ;
-(void)addIntervalCounts:(id)arg0 ;
-(void)clearDateIntervalsToTotals;
-(void)clearIntervalCounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif