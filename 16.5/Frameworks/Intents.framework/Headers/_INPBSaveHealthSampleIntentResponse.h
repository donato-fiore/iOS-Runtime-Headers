// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSAVEHEALTHSAMPLEINTENTRESPONSE_H
#define _INPBSAVEHEALTHSAMPLEINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSaveHealthSampleIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBDateTimeRange.h"

@interface _INPBSaveHealthSampleIntentResponse : PBCodable <_INPBSaveHealthSampleIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *defaultUnit; // ivar: _defaultUnit
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDefaultUnit;
@property (readonly, nonatomic) BOOL hasPunchoutUrl;
@property (readonly, nonatomic) BOOL hasRecordDate;
@property (readonly, nonatomic) BOOL hasUserProvidedUnit;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBString *punchoutUrl; // ivar: _punchoutUrl
@property (retain, nonatomic) _INPBDateTimeRange *recordDate; // ivar: _recordDate
@property (copy, nonatomic) NSArray *sampleUuids; // ivar: _sampleUuids
@property (readonly, nonatomic) NSUInteger sampleUuidsCount;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBString *userProvidedUnit; // ivar: _userProvidedUnit
@property (copy, nonatomic) NSArray *valuesDefaultUnits; // ivar: _valuesDefaultUnits
@property (readonly, nonatomic) NSUInteger valuesDefaultUnitsCount;
@property (copy, nonatomic) NSArray *valuesUserProvidedUnits; // ivar: _valuesUserProvidedUnits
@property (readonly, nonatomic) NSUInteger valuesUserProvidedUnitsCount;


+(BOOL)supportsSecureCoding;
+(Class)valuesDefaultUnitType;
+(Class)valuesUserProvidedUnitType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)sampleUuidsAtIndex:(NSUInteger)arg0 ;
-(id)valuesDefaultUnitAtIndex:(NSUInteger)arg0 ;
-(id)valuesUserProvidedUnitAtIndex:(NSUInteger)arg0 ;
-(void)addSampleUuids:(id)arg0 ;
-(void)addValuesDefaultUnit:(id)arg0 ;
-(void)addValuesUserProvidedUnit:(id)arg0 ;
-(void)clearSampleUuids;
-(void)clearValuesDefaultUnits;
-(void)clearValuesUserProvidedUnits;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif