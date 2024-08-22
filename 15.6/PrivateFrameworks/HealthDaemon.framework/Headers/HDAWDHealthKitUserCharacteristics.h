// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAWDHEALTHKITUSERCHARACTERISTICS_H
#define HDAWDHEALTHKITUSERCHARACTERISTICS_H

@class PBCodable;
@protocol NSCopying;



@interface HDAWDHealthKitUserCharacteristics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger ageYears; // ivar: _ageYears
@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (nonatomic) BOOL hasAgeYears;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) BOOL hasHeightCm;
@property (nonatomic) BOOL hasWeightKg;
@property (nonatomic) NSInteger heightCm; // ivar: _heightCm
@property (nonatomic) NSInteger weightKg; // ivar: _weightKg


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