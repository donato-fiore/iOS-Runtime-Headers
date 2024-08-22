// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLECHARTSAMPLETYPECOUNTDATAQUERYDATA_H
#define HKCODABLECHARTSAMPLETYPECOUNTDATAQUERYDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableChartSampleTypeCountDataQueryData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *timePeriodToCounts; // ivar: _timePeriodToCounts


+(Class)timePeriodToCountType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)timePeriodToCountAtIndex:(NSUInteger)arg0 ;
-(void)addTimePeriodToCount:(id)arg0 ;
-(void)clearTimePeriodToCounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif