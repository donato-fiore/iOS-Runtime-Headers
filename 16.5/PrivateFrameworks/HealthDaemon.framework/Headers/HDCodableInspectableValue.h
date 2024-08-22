// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEINSPECTABLEVALUE_H
#define HDCODABLEINSPECTABLEVALUE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableCodedQuantity.h"
#import "HDCodableCodedValueCollection.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableDateComponents.h"
#import "HDCodableMedicalDateInterval.h"
#import "HDCodableMedicalDate.h"
#import "HDCodableRatioValue.h"

@interface HDCodableInspectableValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL booleanValue; // ivar: _booleanValue
@property (retain, nonatomic) HDCodableCodedQuantity *codedQuantityValue; // ivar: _codedQuantityValue
@property (retain, nonatomic) HDCodableCodedValueCollection *codedValueCollection; // ivar: _codedValueCollection
@property (retain, nonatomic) HDCodableMedicalCodingList *dataAbsentReasonCodingsValue; // ivar: _dataAbsentReasonCodingsValue
@property (retain, nonatomic) HDCodableDateComponents *dateComponentsValue; // ivar: _dateComponentsValue
@property (nonatomic) BOOL hasBooleanValue;
@property (readonly, nonatomic) BOOL hasCodedQuantityValue;
@property (readonly, nonatomic) BOOL hasCodedValueCollection;
@property (readonly, nonatomic) BOOL hasDataAbsentReasonCodingsValue;
@property (readonly, nonatomic) BOOL hasDateComponentsValue;
@property (nonatomic) BOOL hasInspectableIntegerValue;
@property (readonly, nonatomic) BOOL hasMedicalCodingValue;
@property (readonly, nonatomic) BOOL hasMedicalDateIntervalValue;
@property (readonly, nonatomic) BOOL hasMedicalDateValue;
@property (readonly, nonatomic) BOOL hasRatioValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) NSInteger inspectableIntegerValue; // ivar: _inspectableIntegerValue
@property (retain, nonatomic) HDCodableMedicalCodingList *medicalCodingValue; // ivar: _medicalCodingValue
@property (retain, nonatomic) HDCodableMedicalDateInterval *medicalDateIntervalValue; // ivar: _medicalDateIntervalValue
@property (retain, nonatomic) HDCodableMedicalDate *medicalDateValue; // ivar: _medicalDateValue
@property (retain, nonatomic) HDCodableRatioValue *ratioValue; // ivar: _ratioValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue


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