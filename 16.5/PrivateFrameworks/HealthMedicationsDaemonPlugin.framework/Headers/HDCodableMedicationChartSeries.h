// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEMEDICATIONCHARTSERIES_H
#define HDCODABLEMEDICATIONCHARTSERIES_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HDCodableMedicationChartSeries : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMonthData;
@property (readonly, nonatomic) BOOL hasSixMonthsData;
@property (retain, nonatomic) NSData *monthData; // ivar: _monthData
@property (retain, nonatomic) NSData *sixMonthsData; // ivar: _sixMonthsData


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