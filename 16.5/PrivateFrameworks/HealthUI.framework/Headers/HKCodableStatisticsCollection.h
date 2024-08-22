// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESTATISTICSCOLLECTION_H
#define HKCODABLESTATISTICSCOLLECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableDateComponents.h"

@interface HKCodableStatisticsCollection : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) NSMutableArray *statistics; // ivar: _statistics
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval; // ivar: _statisticsInterval


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statisticsAtIndex:(NSUInteger)arg0 ;
-(void)addStatistics:(id)arg0 ;
-(void)clearStatistics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif