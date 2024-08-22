// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKFIELDVALUE_H
#define GEORPFEEDBACKFIELDVALUE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEORPAmenityCorrections.h"
#import "GEORPFeedbackFieldAnnotations.h"
#import "GEORPFeedbackBooleanField.h"
#import "GEORPFeedbackTimestamp.h"
#import "GEORPFeedbackDoubleField.h"
#import "GEORPFeedbackFloatField.h"
#import "GEORPFeedbackIntField.h"
#import "GEORPFeedbackCoordinateField.h"
#import "GEORPFeedbackLongField.h"
#import "GEORPFeedbackMultiSelectField.h"
#import "GEORPFeedbackRouteStep.h"
#import "GEORPFeedbackSingleSelectField.h"
#import "GEORPFeedbackTextField.h"
#import "GEORPFeedbackTextListField.h"
#import "GEORPFeedbackTileFeatureInfo.h"
#import "GEORPFeedbackTransitLine.h"
#import "GEORPFeedbackUIntField.h"
#import "GEORPFeedbackULongField.h"
#import "GEORPFeedbackULongListField.h"

@interface GEORPFeedbackFieldValue : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORPAmenityCorrections *_amenitiesField;
    GEORPFeedbackFieldAnnotations *_annotations;
    GEORPFeedbackBooleanField *_booleanField;
    GEORPFeedbackTimestamp *_dateTimeField;
    GEORPFeedbackDoubleField *_doubleField;
    GEORPFeedbackFloatField *_floatField;
    NSMutableArray *_hoursFields;
    GEORPFeedbackIntField *_intField;
    GEORPFeedbackCoordinateField *_locationField;
    GEORPFeedbackLongField *_longField;
    GEORPFeedbackMultiSelectField *_multiSelectField;
    NSMutableArray *_photoMetadatas;
    GEORPFeedbackRouteStep *_routeStepField;
    GEORPFeedbackSingleSelectField *_singleSelectField;
    GEORPFeedbackTextField *_textField;
    GEORPFeedbackTextListField *_textListField;
    GEORPFeedbackTileFeatureInfo *_tileFeatureInfoField;
    GEORPFeedbackTransitLine *_transitLineField;
    GEORPFeedbackUIntField *_uintField;
    GEORPFeedbackULongField *_ulongField;
    GEORPFeedbackULongListField *_ulongListField;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _fieldValueType;
    ? _flags;
}


@property (retain, nonatomic) GEORPAmenityCorrections *amenitiesField;
@property (retain, nonatomic) GEORPFeedbackFieldAnnotations *annotations;
@property (retain, nonatomic) GEORPFeedbackBooleanField *booleanField;
@property (retain, nonatomic) GEORPFeedbackTimestamp *dateTimeField;
@property (retain, nonatomic) GEORPFeedbackDoubleField *doubleField;
@property (nonatomic) int fieldValueType;
@property (retain, nonatomic) GEORPFeedbackFloatField *floatField;
@property (readonly, nonatomic) BOOL hasAmenitiesField;
@property (readonly, nonatomic) BOOL hasAnnotations;
@property (readonly, nonatomic) BOOL hasBooleanField;
@property (readonly, nonatomic) BOOL hasDateTimeField;
@property (readonly, nonatomic) BOOL hasDoubleField;
@property (nonatomic) BOOL hasFieldValueType;
@property (readonly, nonatomic) BOOL hasFloatField;
@property (readonly, nonatomic) BOOL hasIntField;
@property (readonly, nonatomic) BOOL hasLocationField;
@property (readonly, nonatomic) BOOL hasLongField;
@property (readonly, nonatomic) BOOL hasMultiSelectField;
@property (readonly, nonatomic) BOOL hasRouteStepField;
@property (readonly, nonatomic) BOOL hasSingleSelectField;
@property (readonly, nonatomic) BOOL hasTextField;
@property (readonly, nonatomic) BOOL hasTextListField;
@property (readonly, nonatomic) BOOL hasTileFeatureInfoField;
@property (readonly, nonatomic) BOOL hasTransitLineField;
@property (readonly, nonatomic) BOOL hasUintField;
@property (readonly, nonatomic) BOOL hasUlongField;
@property (readonly, nonatomic) BOOL hasUlongListField;
@property (retain, nonatomic) NSMutableArray *hoursFields;
@property (retain, nonatomic) GEORPFeedbackIntField *intField;
@property (retain, nonatomic) GEORPFeedbackCoordinateField *locationField;
@property (retain, nonatomic) GEORPFeedbackLongField *longField;
@property (retain, nonatomic) GEORPFeedbackMultiSelectField *multiSelectField;
@property (retain, nonatomic) NSMutableArray *photoMetadatas;
@property (retain, nonatomic) GEORPFeedbackRouteStep *routeStepField;
@property (retain, nonatomic) GEORPFeedbackSingleSelectField *singleSelectField;
@property (retain, nonatomic) GEORPFeedbackTextField *textField;
@property (retain, nonatomic) GEORPFeedbackTextListField *textListField;
@property (retain, nonatomic) GEORPFeedbackTileFeatureInfo *tileFeatureInfoField;
@property (retain, nonatomic) GEORPFeedbackTransitLine *transitLineField;
@property (retain, nonatomic) GEORPFeedbackUIntField *uintField;
@property (retain, nonatomic) GEORPFeedbackULongField *ulongField;
@property (retain, nonatomic) GEORPFeedbackULongListField *ulongListField;


+(BOOL)isValid:(id)arg0 ;
+(Class)hoursFieldType;
+(Class)photoMetadataType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fieldValueTypeAsString:(int)arg0 ;
-(id)hoursFieldAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)photoMetadataAtIndex:(NSUInteger)arg0 ;
-(int)StringAsFieldValueType:(id)arg0 ;
-(void)addHoursField:(id)arg0 ;
-(void)addPhotoMetadata:(id)arg0 ;
-(void)clearHoursFields;
-(void)clearPhotoMetadatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif