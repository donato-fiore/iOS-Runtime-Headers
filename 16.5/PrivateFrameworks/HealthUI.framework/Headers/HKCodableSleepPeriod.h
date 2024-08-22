// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESLEEPPERIOD_H
#define HKCODABLESLEEPPERIOD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableDateInterval.h"

@interface HKCodableSleepPeriod : PBCodable <NSCopying>



@property (retain, nonatomic) HKCodableDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) NSMutableArray *segments; // ivar: _segments


+(Class)segmentType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)segmentAtIndex:(NSUInteger)arg0 ;
-(void)addSegment:(id)arg0 ;
-(void)clearSegments;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif