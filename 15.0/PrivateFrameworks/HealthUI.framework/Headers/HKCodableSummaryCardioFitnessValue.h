// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLESUMMARYCARDIOFITNESSVALUE_H
#define HKCODABLESUMMARYCARDIOFITNESSVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableLevelViewDataConfiguration.h"
#import "HKCodableQuantity.h"

@interface HKCodableSummaryCardioFitnessValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger classificationRawValue; // ivar: _classificationRawValue
@property (nonatomic) CGFloat dateData; // ivar: _dateData
@property (nonatomic) BOOL hasClassificationRawValue;
@property (nonatomic) BOOL hasDateData;
@property (readonly, nonatomic) BOOL hasLevelViewDataConfiguration;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HKCodableLevelViewDataConfiguration *levelViewDataConfiguration; // ivar: _levelViewDataConfiguration
@property (retain, nonatomic) HKCodableQuantity *value; // ivar: _value


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