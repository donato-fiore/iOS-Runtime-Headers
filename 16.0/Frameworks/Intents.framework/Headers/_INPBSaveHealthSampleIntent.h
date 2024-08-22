// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSAVEHEALTHSAMPLEINTENT_H
#define _INPBSAVEHEALTHSAMPLEINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSaveHealthSampleIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBDateTimeRange.h"
#import "_INPBWellnessUnitType.h"

@interface _INPBSaveHealthSampleIntent : PBCodable <_INPBSaveHealthSampleIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasObjectType;
@property (readonly, nonatomic) BOOL hasRecordDate;
@property (readonly, nonatomic) BOOL hasUnit;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int objectType; // ivar: _objectType
@property (retain, nonatomic) _INPBDateTimeRange *recordDate; // ivar: _recordDate
@property (copy, nonatomic) NSArray *sampleMetadatas; // ivar: _sampleMetadatas
@property (readonly, nonatomic) NSUInteger sampleMetadatasCount;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBWellnessUnitType *unit; // ivar: _unit
@property (copy, nonatomic) NSArray *values; // ivar: _values
@property (readonly, nonatomic) NSUInteger valuesCount;


+(BOOL)supportsSecureCoding;
+(Class)sampleMetadataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)objectTypeAsString:(int)arg0 ;
-(id)sampleMetadataAtIndex:(NSUInteger)arg0 ;
-(id)valuesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsObjectType:(id)arg0 ;
-(void)addSampleMetadata:(id)arg0 ;
-(void)addValues:(id)arg0 ;
-(void)clearSampleMetadatas;
-(void)clearValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif