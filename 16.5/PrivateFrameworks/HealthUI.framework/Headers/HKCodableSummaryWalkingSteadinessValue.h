// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYWALKINGSTEADINESSVALUE_H
#define HKCODABLESUMMARYWALKINGSTEADINESSVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableLevelViewDataConfiguration.h"
#import "HKCodableSummaryQuantityValue.h"

@interface HKCodableSummaryWalkingSteadinessValue : PBCodable <NSCopying>

 {
    APPLE_154 _has;
}


@property (nonatomic) NSInteger classificationRawValue; // ivar: _classificationRawValue
@property (nonatomic) BOOL hasClassificationRawValue;
@property (readonly, nonatomic) BOOL hasLevelViewDataConfiguration;
@property (readonly, nonatomic) BOOL hasQuantity;
@property (retain, nonatomic) HKCodableLevelViewDataConfiguration *levelViewDataConfiguration; // ivar: _levelViewDataConfiguration
@property (retain, nonatomic) HKCodableSummaryQuantityValue *quantity; // ivar: _quantity


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