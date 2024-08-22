// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLECHARTQUANTITYDISTRIBUTIONDATASOURCEQUERYDATA_H
#define HKCODABLECHARTQUANTITYDISTRIBUTIONDATASOURCEQUERYDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableChartQuantityDistributionDataSourceQueryData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *quantityDistributionDatas; // ivar: _quantityDistributionDatas


+(Class)quantityDistributionDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)quantityDistributionDataAtIndex:(NSUInteger)arg0 ;
-(void)addQuantityDistributionData:(id)arg0 ;
-(void)clearQuantityDistributionDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif