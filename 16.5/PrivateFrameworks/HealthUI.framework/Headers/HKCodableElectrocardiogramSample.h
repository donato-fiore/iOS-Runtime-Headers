// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLEELECTROCARDIOGRAMSAMPLE_H
#define HKCODABLEELECTROCARDIOGRAMSAMPLE_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "HKCodableQuantity.h"
#import "HKCodableDateInterval.h"

@interface HKCodableElectrocardiogramSample : PBCodable <NSCopying>

 {
    APPLE_129 _has;
}


@property (nonatomic) NSInteger algorithmVersionRawValue; // ivar: _algorithmVersionRawValue
@property (retain, nonatomic) HKCodableQuantity *averageHeartRate; // ivar: _averageHeartRate
@property (nonatomic) NSInteger classificationRawValue; // ivar: _classificationRawValue
@property (retain, nonatomic) HKCodableDateInterval *dateInterval; // ivar: _dateInterval
@property (nonatomic) BOOL hasAlgorithmVersionRawValue;
@property (readonly, nonatomic) BOOL hasAverageHeartRate;
@property (nonatomic) BOOL hasClassificationRawValue;
@property (readonly, nonatomic) BOOL hasDateInterval;
@property (nonatomic) BOOL hasPrivateSymptoms;
@property (readonly, nonatomic) BOOL hasReadingData;
@property (nonatomic) BOOL hasSymptomsStatusRawValue;
@property (nonatomic) NSInteger privateSymptoms; // ivar: _privateSymptoms
@property (retain, nonatomic) NSData *readingData; // ivar: _readingData
@property (nonatomic) NSInteger symptomsStatusRawValue; // ivar: _symptomsStatusRawValue


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