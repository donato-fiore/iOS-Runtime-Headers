// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLECHARTSHARABLEMODEL_H
#define HKCODABLECHARTSHARABLEMODEL_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableChartDataSourceQueryData.h"
#import "HKCodableDateInterval.h"

@interface HKCodableChartSharableModel : PBCodable <NSCopying>

 {
    APPLE_175 _has;
}


@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasMonthData;
@property (readonly, nonatomic) BOOL hasMonthDateInterval;
@property (readonly, nonatomic) BOOL hasSixMonthData;
@property (readonly, nonatomic) BOOL hasSixMonthDateInterval;
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *monthData; // ivar: _monthData
@property (retain, nonatomic) HKCodableDateInterval *monthDateInterval; // ivar: _monthDateInterval
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *sixMonthData; // ivar: _sixMonthData
@property (retain, nonatomic) HKCodableDateInterval *sixMonthDateInterval; // ivar: _sixMonthDateInterval


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