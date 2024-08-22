// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLESLEEPPERIODSEGMENT_H
#define HKCODABLESLEEPPERIODSEGMENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableDateInterval.h"

@interface HKCodableSleepPeriodSegment : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger category; // ivar: _category
@property (retain, nonatomic) HKCodableDateInterval *dateInterval; // ivar: _dateInterval
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) NSMutableArray *sampleIntervals; // ivar: _sampleIntervals


+(Class)sampleIntervalType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sampleIntervalAtIndex:(NSUInteger)arg0 ;
-(void)addSampleInterval:(id)arg0 ;
-(void)clearSampleIntervals;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif