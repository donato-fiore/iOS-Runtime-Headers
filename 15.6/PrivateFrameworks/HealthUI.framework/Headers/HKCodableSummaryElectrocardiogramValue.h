// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLESUMMARYELECTROCARDIOGRAMVALUE_H
#define HKCODABLESUMMARYELECTROCARDIOGRAMVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableSummaryElectrocardiogramValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger algorithmVersionRawValue; // ivar: _algorithmVersionRawValue
@property (retain, nonatomic) HKCodableQuantity *averageHeartRate; // ivar: _averageHeartRate
@property (nonatomic) NSInteger classificationRawValue; // ivar: _classificationRawValue
@property (nonatomic) BOOL hasAlgorithmVersionRawValue;
@property (readonly, nonatomic) BOOL hasAverageHeartRate;
@property (nonatomic) BOOL hasClassificationRawValue;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) CGFloat timestampData; // ivar: _timestampData


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