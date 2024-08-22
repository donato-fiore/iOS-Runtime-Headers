// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLECHARTINSULINDATASOURCEQUERYDATA_H
#define HKCODABLECHARTINSULINDATASOURCEQUERYDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableChartInsulinDataSourceQueryData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *basalInsulinValues; // ivar: _basalInsulinValues
@property (retain, nonatomic) NSMutableArray *totalInsulinValues; // ivar: _totalInsulinValues


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)basalInsulinValuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)totalInsulinValuesAtIndex:(NSUInteger)arg0 ;
-(void)addBasalInsulinValues:(id)arg0 ;
-(void)addTotalInsulinValues:(id)arg0 ;
-(void)clearBasalInsulinValues;
-(void)clearTotalInsulinValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif