// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLECHARTCARDIOFITNESSQUERYDATA_H
#define HKCODABLECHARTCARDIOFITNESSQUERYDATA_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableChartQuantityDataSourceQueryData.h"

@interface HKCodableChartCardioFitnessQueryData : PBCodable <NSCopying>

 {
    APPLE_148 _has;
}


@property (nonatomic) NSInteger age; // ivar: _age
@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (nonatomic) NSInteger cardioFitnessLevelEnabled; // ivar: _cardioFitnessLevelEnabled
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) BOOL hasCardioFitnessLevelEnabled;
@property (readonly, nonatomic) BOOL hasQuantityData;
@property (retain, nonatomic) HKCodableChartQuantityDataSourceQueryData *quantityData; // ivar: _quantityData


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