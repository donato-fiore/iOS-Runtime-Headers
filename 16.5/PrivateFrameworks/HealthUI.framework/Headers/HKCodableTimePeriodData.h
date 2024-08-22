// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLETIMEPERIODDATA_H
#define HKCODABLETIMEPERIODDATA_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableDateInterval.h"

@interface HKCodableTimePeriodData : PBCodable <NSCopying>

 {
    APPLE_121 _has;
}


@property (retain, nonatomic) HKCodableDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) BOOL hasDateInterval;
@property (nonatomic) BOOL hasTotal;
@property (nonatomic) NSInteger total; // ivar: _total


+(id)timePeriodDataWithCodableData:(id)arg0 ;
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