// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLESLEEPSUMMARYENTRY_H
#define HKCODABLESLEEPSUMMARYENTRY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableDateInterval.h"

@interface HKCodableSleepSummaryEntry : PBCodable <NSCopying>



@property (retain, nonatomic) HKCodableDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) NSMutableArray *periods; // ivar: _periods


+(Class)periodType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)periodAtIndex:(NSUInteger)arg0 ;
-(void)addPeriod:(id)arg0 ;
-(void)clearPeriods;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif